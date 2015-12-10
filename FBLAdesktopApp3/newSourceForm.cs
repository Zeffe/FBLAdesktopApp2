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
    public partial class newSourceForm : Form
    {
        public newSourceForm()
        {
            InitializeComponent();
        }

        string str, newTxt, backupFolder;
        int activeFile;
        String[] backup = new String[10];
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);


        void backupConfig()
        {
            StreamReader _backupReader;
            backupFolder = Path.Combine(folder, "FBLAapplication/backups");
            _backupReader = File.OpenText(backupFolder + "\\backupSettings.txt");
            if ((str = _backupReader.ReadLine()) != null) backup = str.Split('\\');
            _backupReader.Close();
            activeFile = Convert.ToInt32(backup[backup.Length - 1]);
        }

        void writeNew(string newText)
        {
            bool OK = true;
            for (int i = 0; i < backup.Length; i++)
            {
                if (backup[i] == txtNew.Text + ".txt")
                {
                    OK = false;
                    MessageBox.Show("Failed to create source, file name already in use.", "Error");
                }
            }
            if (OK)
            {
                StreamWriter _backupWriter = new StreamWriter(backupFolder + "\\backupSettings.txt", false);
                _backupWriter.WriteLine(newTxt + txtNew.Text + ".txt\\" + activeFile.ToString());
                _backupWriter.Close();
                if (!File.Exists(backupFolder + "\\" + txtNew.Text + ".txt"))
                {
                    File.Create(backupFolder + "\\" + txtNew.Text + ".txt");
                }
                MessageBox.Show("Successfully created " + txtNew.Text + "!", "Success!");
            }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            backupConfig();
            for (int i = 0; i < backup.Length - 1; i++)
            {
                newTxt += backup[i] + '\\';
            }
            writeNew(newTxt);
            this.Close();
        }
    }
}
