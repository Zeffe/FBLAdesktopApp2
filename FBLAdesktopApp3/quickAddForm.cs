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
    public partial class quickAddForm : Form
    {
        public quickAddForm()
        {
            InitializeComponent();
        }

        String[] temp = new String[10];
        String[,] student = new String[50, 13];
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
        string specificFolder;
        bool OK;

        private void button1_Click(object sender, EventArgs e)
        {
            OK = false;
            try
            {
                temp = txtQuickAdd.Text.Split('\\');
                for (int i = 0; i < 13; i++)
                {
                    student[0, i] = temp[i];
                }
                OK = true;
            }
            catch
            {
                MessageBox.Show("Invalid QuickAdd entry. Ensure the entry is in correct format and there are no spaces. To avoid errors, only use copy and pasted data.", "Error");
            }
            if (OK)
            {
                specificFolder = Path.Combine(folder, "FBLAapplication/students.txt");
                File.AppendAllText(specificFolder, "\r\n" + txtQuickAdd.Text);
                MessageBox.Show("Student added, refresh to view on log", "Success!");
            }
        }
    }
}
