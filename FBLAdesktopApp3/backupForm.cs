using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace FBLAdesktopApp3
{
    public partial class backupForm : Form
    {
        public backupForm()
        {
            InitializeComponent();
        }

        string str, activeFile;
        String[] backup = new String[10];
        String[] fileName = new String[5];
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);

        void backupConfig()
        {
            StreamReader _backupReader;
            string backupFolder = Path.Combine(folder, "FBLAapplication/backups");
            _backupReader = File.OpenText(backupFolder + "\\backupSettings.txt");
            if ((str = _backupReader.ReadLine()) != null) backup = str.Split('\\');
            _backupReader.Close();
            activeFile = backup[Convert.ToInt32(backup[backup.Length - 1])];
            fileName = activeFile.Split('.');
        }

        private void backupForm_Load(object sender, EventArgs e)
        {
            backupConfig();
            label1.Text = "Current reading from: " + fileName[0];
        }

    }
}
