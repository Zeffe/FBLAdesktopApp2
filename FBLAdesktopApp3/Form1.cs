using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Reflection;
using System.IO;
using System.Security.Cryptography;


namespace FBLAdesktopApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Assembly _assembly;
        StreamReader _textStreamReader;
        StreamReader _textStreamReader2;
        StreamReader _textStreamReader3;


        // ************* Variable and array initialization *************
        String feeStr;
        int search, count, loginCount, logCount, account, active, hasFees, g9, g10, g11, g12, g13, activeStudent, grade, permissions;
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
        string specificFolder, logFolder, date, activeFile, str, tempSex, tempActive, tempGrade, editStudent;
        Double feeDbl;
        String[] temp = new String[10];
        String[] temp2 = new String[20];
        String[] temp3 = new String[20];
        String[] lines = new String[100];
        String[] lines2 = new String[100];
        String[] lines3 = new String[100];
        String[,] student = new String[50, 13];
        String[,] logins = new String[50, 4];
        String[,] log = new String[50, 4];
        String[] backup = new String[10];
        DateTime now = DateTime.Now;
        bool newForm, gradeview, disabled, firstLoad, editMode;
        // *************************************************************

            // FORM1_LOAD
        private void Form1_Load(object sender, EventArgs e)
        {
            firstLoad = false;
            // If the %appdata% file does not exist, create it.
            specificFolder = Path.Combine(folder, "FBLAapplication");
            if (!File.Exists(specificFolder))
            {
                Directory.CreateDirectory(specificFolder);
            }
            // If students.fbla does not exist, create it.
            if (!File.Exists(specificFolder + "/students.fbla"))
            {
                date = now.Month.ToString() + "/" + now.Day.ToString();
                File.Create(specificFolder + "/students.fbla").Dispose();
                StreamWriter _initial2 = new StreamWriter(specificFolder + "/students.fbla");
                _initial2.WriteLine("0\\Source Created: \\\\\\" + date + "\\1\\1\\1\\\\\\\\\\");
                _initial2.Close();
            }
            // If backups folder doesn't exist, create it.
            if (!File.Exists(specificFolder + "/backups"))
            {
                Directory.CreateDirectory(specificFolder + "/backups");
            }
            // If backupSettings.fbla does not exist, create it.
            if (!File.Exists(specificFolder + "/backups/backupSettings.fbla"))
            {
                File.Create(specificFolder + "/backups/backupSettings.fbla").Dispose();
                StreamWriter _initial3 = new StreamWriter(specificFolder + "/backups/backupSettings.fbla");
                _initial3.WriteLine("students.fbla\\0");
                _initial3.Close();
            }
            // If log.fbla does not exist, create it.
            if (!File.Exists(specificFolder + "/log.fbla"))
            {
                File.Create(specificFolder + "/log.fbla").Dispose();
            }
            backupConfig();
            // Read students.fbla to students array.
            readToArray();
            // Update student and admin log.
            studentLog("");
            adminLog();
            logLog();
            feeDbl = 0.00;
            label3.Select();
            ttOptional.SetToolTip(lblMI, "Optional");
            ttOptional.SetToolTip(lblComment, "Optional");
            lblRead.Text = "Reading From: " + activeFile;
            tabLogs.SelectedTab = tabPage3;
            this.Text = "FBLA - Login Screen";
            cmbSearchBy.SelectedIndex = 0;
            cmbFilter.SelectedIndex = 0;
            txtJoined.Text = now.Year.ToString();
            pnlLogin.BringToFront();
            cmbThirdColumn.SelectedIndex = 0;
            columnHeader9.Text = cmbThirdColumn.Text;
            stats();
        }

        // CREDITS PAGE
        private void creditsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Seth Dixon - Programmer\r\n\r\nIcons by:\r\nFreepik @ Flaticon.com\r\nYannik @ Flaticon.com\r\nGoogle @ Flaticon.com", "Credits");
        }
        ////////////////

        // ****** DEALS WITH GHOST TEXT IN LOGIN BOXES ******
        private void txtUser_Enter(object sender, EventArgs e)
        {
            if (txtUser.Text == "Client ID")
            {
                txtUser.ForeColor = SystemColors.WindowText;
                txtUser.Text = "";
            }
        }

        private void txtUser_Leave(object sender, EventArgs e)
        {
            if (txtUser.Text == "Client ID" || txtUser.Text == "")
            {
                txtUser.ForeColor = SystemColors.WindowFrame;
                txtUser.Text = "Client ID";
            }
        }

        private void txtPass_Enter(object sender, EventArgs e)
        {
            if (txtPass.Text == "Password")
            {
                txtPass.ForeColor = SystemColors.WindowText;
                txtPass.UseSystemPasswordChar = true;
                txtPass.Text = "";
            }
        }

        private void txtPass_Leave(object sender, EventArgs e)
        {
            if (txtPass.Text == "Password" || txtPass.Text == "")
            {
                txtPass.ForeColor = SystemColors.WindowFrame;
                txtPass.Text = "Password";
                txtPass.UseSystemPasswordChar = false;
            }
        }

        // ******************************************************

        // *********** Changes the group box title on new forms to reflect data being entered ***********
        private void txtFirstName_TextChanged(object sender, EventArgs e)
        {
            newFormTitle();
        }

        private void txtLastName_TextChanged(object sender, EventArgs e)
        {
            newFormTitle();
        }

        private void txtMemberNum_TextChanged(object sender, EventArgs e)
        {
            if (txtMemberNum.Text != "" && !gbStudent.Text.Contains(txtMemberNum.Text))
            {
                gbStudent.Text = txtFirstName.Text + " " + txtLastName.Text + " - " + txtMemberNum.Text;
            }
        }
        // **********************************************************************************************
        
        // ********************** These buttons handle the movement of panels and renaming of group boxes **********************
        private void btnLogon_Click(object sender, EventArgs e)
        {
            /* Testing user and pass code
            if (Decrypt(txtPass.Text) == txtUser.Text + "1")
            {
                permissions = 1;
            } else if (Decrypt(txtPass.Text) == txtUser.Text + "2")
            {
                permissions = 2;
            }
            */
            for (int i = 0; i <= loginCount; i++)
            {
                if (logins[i, 0] == txtUser.Text && logins[i, 1] == txtPass.Text)
                {
                    gbStudent.Text = "Home";
                    this.Text = "FBLA - Home";
                    pnlHome.BringToFront();
                    toolStripButtons(true);
                    account = i;
                    permissions = 2;
                    break;
                } else if (i == loginCount)
                {
                    MessageBox.Show("Invalid username or password.", "Error");
                }
            }
        }
        private void mbtnHome_Click(object sender, EventArgs e)
        {
            viewHome();
        }

        private void mbtnLogout_Click(object sender, EventArgs e)
        {
            // Add later: if not saved, request save function
            txtUser.Text = "Client ID"; txtPass.Text = "Password";
            txtUser.ForeColor = SystemColors.WindowFrame; txtPass.ForeColor = SystemColors.WindowFrame;
            txtPass.UseSystemPasswordChar = false;
            gbStudent.Text = "Logon Screen";
            this.Text = "FBLA - Login Screen";
            pnlLogin.BringToFront();
            toolStripButtons(false);
        }

        private void mbtnNew_Click(object sender, EventArgs e)
        {
            editMode = false;
            newStudent();
        }

        private void btnNew_Click(object sender, EventArgs e)
        {
            newStudent();
        }

        private void btnHome_Click(object sender, EventArgs e)
        {
            viewHome();
        }

        

        //**********************************************************************************************************************     

        // ********************** These buttons control clear cut copy paste and undo keystrokes **********************
        private void btnCut_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^x");
        }

        private void mbtnCut_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^x");
        }

        private void btnCopy_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^c");
        }

        private void mbtnCopy_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^c");
        }

        private void btnPaste_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^v");
        }

        private void mbtnPaste_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^v");
        }

        private void btnUndo_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^z");
        }

        private void mbtnUndo_Click(object sender, EventArgs e)
        {
            SendKeys.Send("^z");
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            clearAll();
        }

        private void btnFilter_Click(object sender, EventArgs e)
        {
            studentLog(txtFilter.Text);
        }

        private void mbtnClearAll_Click(object sender, EventArgs e)
        {
            clearAll();
        }

        private void btnEdit_Click(object sender, EventArgs e)
        {
            btnSave.Enabled = true;
            editStudent = txtMemberNum.Text;
            editMode = true;
            newStudent();
        }

        //*************************************************************************************************************  

        // **************** txtOwed aesthetic stuff ****************************** 

        private void txtOwed_Leave(object sender, EventArgs e)
        {
            Double.TryParse(txtOwed.Text, out feeDbl);
            if (!txtOwed.Text.Contains("$"))
            {
                txtOwed.Text = "$" + txtOwed.Text;
            }
            if (!txtOwed.Text.Contains("."))
            {
                txtOwed.Text += ".00";
            }
            temp = txtOwed.Text.Split('.');
            if (temp[1].Length == 1)
            {
                temp[1] += "0";
                txtOwed.Text = temp[0] + "." + temp[1];
            }
        }

        private void txtOwed_Enter(object sender, EventArgs e)
        {
            if (txtOwed.Text.Contains("$"))
            {
                txtOwed.Text = feeDbl.ToString();
            }
        }

        // ***********************************************************************

        private void mbtnExit_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure you want to exit the application?", "Exit", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        // **************** PRINTING ****************
        private void btnPrintPreview_Click(object sender, EventArgs e)
        {
            printPreviewDialog1.Document = printDocument1;
            printPreviewDialog1.ShowDialog();
        }

        private void mbtnPrintPreview_Click(object sender, EventArgs e)
        {
            printPreviewDialog1.Document = printDocument1;
            printPreviewDialog1.ShowDialog();
        }

        private void mbtnAsTxt_Click(object sender, EventArgs e)
        {
            try {
                if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
                {
                    if (!File.Exists(folderBrowserDialog1.SelectedPath + "/Students.txt"))
                    {
                        string tempFile = folderBrowserDialog1.SelectedPath + "/Students.txt";
                        date = now.ToShortDateString() + " - " + now.ToShortTimeString();
                        File.AppendAllText(tempFile, "Full students export for: " + date + "\r\n");
                        for (int i = 1; i < count; i++)
                        {
                            getValues(i);
                            File.AppendAllText(tempFile, "----- " + student[i, 1] + " " + student[i, 4] + " : " + student[i, 0] + " -----" + "\r\n");
                            File.AppendAllText(tempFile, "State: " + student[i, 3] + "\r\n");
                            File.AppendAllText(tempFile, "Sex: " + tempSex + "\r\n");
                            File.AppendAllText(tempFile, "School: " + student[i, 8] + "\r\n");
                            File.AppendAllText(tempFile, "Grade: " + tempGrade + "\r\n");
                            File.AppendAllText(tempFile, "Email: " + student[i, 9] + "\r\n");
                            File.AppendAllText(tempFile, "Year Joined: " + student[i, 11] + "\r\n");
                            File.AppendAllText(tempFile, "Membership Status: " + tempActive + "\r\n");
                            File.AppendAllText(tempFile, "Fees Owed: " + student[i, 10] + "\r\n");
                            File.AppendAllText(tempFile, "Comments: " + student[i, 12] + "\r\n");
                        }

                    } else if (File.Exists(folderBrowserDialog1.SelectedPath + "/Students.txt"))
                    {
                        MessageBox.Show("Could not export because Students.txt already exists in chosen directory.", "Error");
                    }
                }
            } catch
            {
                return;
            }
        }

        private void mbtnSourceMng_Click(object sender, EventArgs e)
        {
            backupForm form3 = new backupForm();
            form3.Show();
        }

        private void quickAddToolStripMenuItem_Click(object sender, EventArgs e)
        {
            quickAddForm form2 = new quickAddForm();
            form2.Show();
        }

        private void btnRefresh_Click(object sender, EventArgs e)
        {
            backupConfig();
            readToArray();
            studentLog("");
            lblRead.Text = "Reading From: " + activeFile;
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure that you want to delete member number " + student[activeStudent, 0] + "?", "Delete " + student [activeStudent, 0], MessageBoxButtons.YesNo, MessageBoxIcon.Question) == System.Windows.Forms.DialogResult.Yes)
            {
                delete(activeStudent);
                btnDelete.Visible = false;
                gbStudent.Text = "Home";
                this.Text = "FBLA - Home";
                pnlHome.BringToFront();
                toolStripButtons(true);
                readToArray();
                studentLog("");
            }
        }

        private void cmbState_Enter(object sender, EventArgs e)
        {
            if (disabled)
            {
                cmbState.Enabled = false;
                cmbState.Enabled = true;
            }
        }

        private void btnPrintDialog_Click(object sender, EventArgs e)
        {
            PrintDialog printDialog1 = new PrintDialog();
            printDialog1.Document = printDocument1;
            DialogResult result = printDialog1.ShowDialog();
        }

        private void mbtnPrintSettings_Click(object sender, EventArgs e)
        {
            PrintDialog printDialog1 = new PrintDialog();
            printDialog1.Document = printDocument1;
            DialogResult result = printDialog1.ShowDialog();
        }

        // Document to be printed v
        private void printDocument1_PrintPage(object sender, System.Drawing.Printing.PrintPageEventArgs e)
        {

        }

        private void btnPrint_Click(object sender, EventArgs e)
        {
            //printStudent.Print(); ENABLE LATER
            MessageBox.Show("Works - Enable Printing Later");
        }

        private void cmbGrades_SelectedIndexChanged(object sender, EventArgs e)
        {
            stats();
        }

        private void lblGrades_Click(object sender, EventArgs e)
        {
            // When clicking lblGrades, cycle through the grade values.
            if (grade == 4)
            {
                grade = 0;
            }
            else
            {
                grade++;
            }
            stats();
        }

        private void mbtnPrint2_Click(object sender, EventArgs e)
        {
            //printStudent.Print(); ENABLE LATER
            MessageBox.Show("Works - Enable Printing Later");
        }

        
        // ******************************************

        private void btnSave_Click(object sender, EventArgs e)
        {
            save();
        }

        private void mbtnSave_Click(object sender, EventArgs e)
        {
            save();
        }

        private void listView1_ItemActivate(object sender, EventArgs e)
        {
            btnDelete.Visible = true;
            btnEdit.Visible = true;
            // Searches for a log item when double clicked.
            string stri = listView1.FocusedItem.ToString();
            // Removes extra characters to get value to be searched.
            stri = stri.Split('{', '}')[1];
            cmbSearchBy.SelectedIndex = 3;
            txtSearch.Text = stri;
            searchFunc();
        }

        private void cmbThirdColumn_SelectedIndexChanged(object sender, EventArgs e)
        {
            columnHeader9.Text = cmbThirdColumn.Text;
            studentLog("");
        }


        private void btnSearch_Click(object sender, EventArgs e)
        {
            searchFunc();

        }
        // ***************************************************************


    }
}
