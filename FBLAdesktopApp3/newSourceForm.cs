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
        DateTime now = DateTime.Now;


        void backupConfig()
        {
            StreamReader _backupReader;
            backupFolder = Path.Combine(folder, "FBLAapplication/backups");
            _backupReader = File.OpenText(backupFolder + "\\backupSettings.fbla");
            if ((str = _backupReader.ReadLine()) != null) backup = str.Split('\\');
            _backupReader.Close();
            activeFile = Convert.ToInt32(backup[backup.Length - 1]);
        }

        void writeNew(string newText)
        {
            bool OK = true;
            for (int i = 0; i < backup.Length; i++)
            {
                if (backup[i] == txtNew.Text + ".fbla")
                {
                    OK = false;
                    MessageBox.Show("Failed to create source, file name already in use.", "Error");
                }
            }
            if (OK)
            {
                StreamWriter _backupWriter = new StreamWriter(backupFolder + "\\backupSettings.fbla", false);
                StreamWriter _initial = new StreamWriter(backupFolder + "\\" + txtNew.Text + ".fbla");
                _backupWriter.WriteLine(newTxt + txtNew.Text + ".fbla\\" + activeFile.ToString());
                _backupWriter.Close();
                string date = now.Month.ToString() + "/" + now.Day.ToString();
                if (!File.Exists(backupFolder + "\\" + txtNew.Text + ".fbla"))
                {
                    File.Create(backupFolder + "\\" + txtNew.Text + ".fbla");
                }
                _initial.WriteLine("0\\Source Created: \\\\\\" + date + "\\1\\1\\1\\\\\\\\\\");
                _initial.Close();
                MessageBox.Show("Successfully created " + txtNew.Text + "!", "Success!");
            }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            backupConfig();
            newTxt = backup[0] + '\\';
            for (int i = 1; i < backup.Length - 1; i++)
            {
                newTxt += backup[i] + '\\';
            }
            writeNew(newTxt);
            this.Close();
        }
    }
}
