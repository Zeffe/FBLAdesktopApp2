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

        string str, activeFile, selected;
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
        }

        private void listFiles_ItemActivate(object sender, EventArgs e)
        {
            string stri = listFiles.FocusedItem.ToString();
            selected = stri.Split('{', '}')[1];
            label2.Text = "Selected: " + selected;
        }

        void listLoad()
        {
            listFiles.Items.Clear();
            for (int i = 0; i < backup.Length - 1; i++)
            {
                ListViewItem new_item = listFiles.Items.Add(backup[i]);
            }
        }

        private void backupForm_Activated(object sender, EventArgs e)
        {
            backupConfig();
            listLoad();
        }

        private void btnNew_Click(object sender, EventArgs e)
        {
            newSourceForm newSource = new newSourceForm();
            newSource.Show();
        }

        private void backupForm_Load(object sender, EventArgs e)
        {
            backupConfig();
            listLoad();
            label1.Text = "Current reading from: " + activeFile;
            label2.Text = "Selected: " + selected;
        }

    }
}
