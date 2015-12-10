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

        string str, activeFile, selected, backupFolder, newTxt;
        String[] backup = new String[10];
        String[] fileName = new String[5];
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);

        void backupConfig()
        {
            StreamReader _backupReader;
            backupFolder = Path.Combine(folder, "FBLAapplication/backups");
            _backupReader = File.OpenText(backupFolder + "\\backupSettings.fbla");
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

        private void btnChange_Click(object sender, EventArgs e)
        {
            try {
                for (int i = 0; i < backup.Length - 1; i++)
                {
                    if (backup[i] == selected) activeFile = i.ToString();
                }
                newTxt = backup[0] + '\\';
                for (int i = 1; i < backup.Length - 1; i++)
                {
                    newTxt += backup[i] + '\\';
                }
                StreamWriter _backupWriter = new StreamWriter(backupFolder + "\\backupSettings.fbla", false);
                _backupWriter.WriteLine(newTxt + activeFile);
                _backupWriter.Close();
                label1.Text = "Current reading from: " + backup[Convert.ToInt32(activeFile)];
            } catch
            {
                MessageBox.Show("Please make sure you have a source seleceted", "Error");
            }
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
