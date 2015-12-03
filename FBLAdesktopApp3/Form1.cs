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


        // ************* Variable and array initialization *************
        String feeStr;
        int search, count, loginCount, account;
        string folder = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
        string specificFolder;
        Double feeDbl;
        String[] temp = new String[10];
        String[] temp2 = new String[20];
        String[] lines = new String[100];
        String[] lines2 = new String[100];
        String[,] student = new String[50, 13];
        String[,] logins = new String[50, 4];
        DateTime now = DateTime.Now;
        bool newForm, gradeview;
        // *************************************************************

        // ********************** User Declared Functions **********************

        void toolStripButtons(bool x) //Faster way to enable and disable toolstrip buttons
        {
            btnHome.Enabled = x;
            btnNew.Enabled = x;
            btnCut.Enabled = x;
            btnCopy.Enabled = x;
            btnPaste.Enabled = x;
            btnUndo.Enabled = x;
            btnSearch.Enabled = x;
            txtSearch.Enabled = x;
            cmbSearchBy.Enabled = x;
            mbtnNew.Enabled = x;
            mbtnExport.Enabled = x;
            mbtnLogout.Enabled = x;
            mbtnUndo.Enabled = x;
            mbtnCut.Enabled = x;
            mbtnCopy.Enabled = x;
            mbtnPaste.Enabled = x;
            mbtnHome.Enabled = x;
            mbtnAccountDetails.Enabled = x;
            mbtnProgramSettings.Enabled = x;
        }

        void checkMemNum()
        {
            int num;
            Int32.TryParse(txtMemberNum.Text, out num);
            for (int i = 0; i < count; i++)
            {

                if (student[i, 0] == txtMemberNum.Text || num == 0)
                {
                    MessageBox.Show("Invalid Member Number: Already in use or invalid integer", "Member# Error");
                    break;
                }
            }
        }

        void viewForm(int studentNum)
        {
            pnlStudent.BringToFront();
            txtMemberNum.Text = student[studentNum, 0]; txtFirstName.Text = student[studentNum, 1]; txtMI.Text = student[studentNum, 2];
            cmbState.Text = student[studentNum, 3]; txtLastName.Text = student[studentNum, 4]; txtSchool.Text = student[studentNum, 8];
            txtEmail.Text = student[studentNum, 9]; txtOwed.Text = student[studentNum, 10]; txtJoined.Text = student[studentNum, 11];
            txtComment.Text = student[studentNum, 12];
            switch(student[studentNum, 5])
            {
                case "1": rbMale.Checked = true; break;
                case "2": rbFemale.Checked = true; break;
            }
            switch(student[studentNum, 6])
            {
                case "1": rbGrade9.Checked = true; break;
                case "2": rbGrade10.Checked = true; break;
                case "3": rbGrade11.Checked = true; break;
                case "4": rbGrade12.Checked = true; break;
                case "5": rbCollege.Checked = true; break;
            }
            switch (student[studentNum, 7])
            {
                case "1": rbActive.Checked = true; break;
                case "2": rbNonActive.Checked = true; break;
            }
        }

        void fullReport()
        {
            if (checkEmail.Checked || checkExport.Checked || checkPrint.Checked)
            {
                btnFullReport.Enabled = true;
            }
            else
            {
                btnFullReport.Enabled = false;
            }
        }

        void adminLog()
        {
            listClientIDs.Items.Clear();
            for (int i = 0; i < count; i++)
            {
                ListViewItem new_item = listClientIDs.Items.Add(logins[i, 0]);
                new_item.SubItems.Add(logins[i, 2]);
                new_item.SubItems.Add(logins[i, 3]);
            }
        }

        void readToArray()
        {
            try
            {
                _assembly = Assembly.GetExecutingAssembly();
                specificFolder = Path.Combine(folder, "FBLAapplication/students.txt");
                _textStreamReader = File.OpenText(specificFolder);
                _textStreamReader2 = new StreamReader(_assembly.GetManifestResourceStream("FBLAdesktopApp3.Resources.logins.txt"));
                string str;
                count = 0;
                loginCount = 0;
                while ((str = _textStreamReader2.ReadLine()) != null)
                {
                    lines2[loginCount] = str;
                    temp2 = lines2[loginCount].Split('\\');
                    for (int i = 0; i < 4; i++)
                    {
                        logins[loginCount, i] = temp2[i];
                    }
                    loginCount++;
                }
                while ((str = _textStreamReader.ReadLine()) != null)
                {
                    lines[count] = str;
                    temp2 = lines[count].Split('\\');
                    for (int i = 0; i < 13; i++)
                    {
                        student[count, i] = temp2[i];
                        // student[#, 0 = member #, 1 = firstName, 2 = MI, 3 = State, 4 = lastName, 5 = Sex, 6 = grade
                        //          7 = Active, 8 = School, 9 = Email, 10 = fees, 11 = year joined, 12 = Comments]
                    }
                    count++;
                }
                _textStreamReader.Close();
            }
            catch
            {
                MessageBox.Show("Error accessing resources!");
            }
        }

        void studentLog()
        {
            listView1.Items.Clear();
            for (int i = 0; i < count; i++)
            {
                ListViewItem new_item = listView1.Items.Add(student[i, 0]);
                new_item.SubItems.Add(student[i, 1] + " " + student[i, 4]);
                switch (cmbThirdColumn.SelectedIndex)
                {
                    case 0: 
                        switch(student[i, 6])
                        {
                            case "1": new_item.SubItems.Add("9"); break;
                            case "2": new_item.SubItems.Add("10"); break;
                            case "3": new_item.SubItems.Add("11"); break;
                            case "4": new_item.SubItems.Add("12"); break;
                            case "5": new_item.SubItems.Add("13+"); break;
                        }
                        break;
                    case 1: new_item.SubItems.Add(student[i, 3]); break;
                    case 2:
                        if (student[i, 7] == "1") new_item.SubItems.Add("Yes");
                        if (student[i, 7] == "2") new_item.SubItems.Add("No");
                        break;
                    case 3:
                        if (student[i, 10] != "$0.00") new_item.SubItems.Add("Yes");
                        if (student[i, 10] == "$0.00") new_item.SubItems.Add("No");
                        break;
                    case 4: new_item.SubItems.Add(student[i, 11]); break;
                    case 5: new_item.SubItems.Add(student[i, 9]); break;
                    case 6: new_item.SubItems.Add(student[i, 8]); break;
                }
            }
        }

        void newFormTitle()
        { //Changes the name of the group box to the students name when working with new student forms
            if (!gbStudent.Text.Contains(txtFirstName.Text + " " + txtLastName.Text))
            {
                gbStudent.Text = txtFirstName.Text + " " + txtLastName.Text;
                btnSave.Enabled = true;
                mbtnSave.Enabled = true;
                if (txtMemberNum.Text != "")
                {
                    gbStudent.Text += " - " + txtMemberNum.Text;
                }
                this.Text = "FBLA - " + gbStudent.Text;
            }
        }

        // *********************************************************************


        private void Form1_Load(object sender, EventArgs e)
        {
            specificFolder = Path.Combine(folder, "FBLAapplication");
            if (!File.Exists(specificFolder))
            {
                Directory.CreateDirectory(specificFolder);
            }
            readToArray();
            studentLog();
            adminLog();
            feeDbl = 0.00;
            ttOptional.SetToolTip(lblMI, "Optional");
            ttOptional.SetToolTip(lblComment, "Optional");
            ttPrintPreview.SetToolTip(btnReportPreview, "Preview report");
            this.Text = "FBLA - Login Screen";
            cmbSearchBy.SelectedIndex = 0;
            txtJoined.Text = now.Year.ToString();
            pnlLogin.BringToFront();
            cmbThirdColumn.SelectedIndex = 0;
            columnHeader9.Text = cmbThirdColumn.Text;
        }

        // CREDITS PAGE
        private void creditsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Seth Dixon - Programmer\r\nMichael Blades - Programmer\r\n\r\nIcons by:\r\nFreepik @ Flaticon.com\r\nYannik @ Flaticon.com\r\nGoogle @ Flaticon.com", "Credits");
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

        private void txtEmailHome_Enter(object sender, EventArgs e)
        {
            if (txtEmailHome.Text == "Email")
            {
                txtEmailHome.ForeColor = SystemColors.WindowText;
                txtEmailHome.Text = "";
            }
        }

        private void txtEmailHome_Leave(object sender, EventArgs e)
        {
            if (txtEmailHome.Text == "Email" || txtEmailHome.Text == "")
            {
                txtEmailHome.ForeColor = SystemColors.WindowFrame;
                txtEmailHome.Text = "Email";
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
            for (int i = 0; i <= loginCount; i++)
            {
                if (logins[i, 0] == txtUser.Text && logins[i, 1] == txtPass.Text)
                {
                    gbStudent.Text = "Home";
                    this.Text = "FBLA - Home";
                    pnlHome.BringToFront();
                    toolStripButtons(true);
                    account = i;
                    break;
                } else if (i == loginCount)
                {
                    MessageBox.Show("Invalid username or password.", "Error");
                }
            }
        }
        private void mbtnHome_Click(object sender, EventArgs e)
        {
            gbStudent.Text = "Home";
            this.Text = "FBLA - Home";
            pnlHome.BringToFront();
            toolStripButtons(true);
        }

        private void mbtnLogout_Click(object sender, EventArgs e)
        {
            // Add later: if not saved, request save function
            gbStudent.Text = "Logon Screen";
            this.Text = "FBLA - Login Screen";
            pnlLogin.BringToFront();
            toolStripButtons(false);
        }

        private void mbtnNew_Click(object sender, EventArgs e)
        {
            // Add later: if not saved, request save function
            mbtnPrint.Enabled = true;
            this.Text = "FBLA";
            mbtnClearAll.Enabled = true;
            mbtnPrintPreview.Enabled = true;
            mbtnSave.Enabled = false;
            btnSave.Enabled = false;
            btnClear.Enabled = true;
            btnPrint.Enabled = true;
            btnPrintDialog.Enabled = true;
            btnPrintPreview.Enabled = true;
            newForm = true;
            gbStudent.Text = txtFirstName.Text + " " + txtLastName.Text;
            pnlStudent.BringToFront();
        }

        private void btnNew_Click(object sender, EventArgs e)
        {
            // Add later: if not saved, request save function
            mbtnPrint.Enabled = true;
            this.Text = "FBLA";
            mbtnClearAll.Enabled = true;
            mbtnPrintPreview.Enabled = true;
            mbtnSave.Enabled = false;
            btnSave.Enabled = false;
            btnClear.Enabled = true;
            btnPrint.Enabled = true;
            btnPrintDialog.Enabled = true;
            btnPrintPreview.Enabled = true;
            newForm = true;
            gbStudent.Text = txtFirstName.Text + " " + txtLastName.Text;
            pnlStudent.BringToFront();
        }

        private void btnHome_Click(object sender, EventArgs e)
        {
            gbStudent.Text = "Home";
            this.Text = "FBLA - Home";
            pnlHome.BringToFront();
            toolStripButtons(true);
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
            if (MessageBox.Show("Are you sure that you want to clear ALL information?", "Clear All", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == System.Windows.Forms.DialogResult.Yes)
            {
                txtFirstName.Text = ""; txtLastName.Text = ""; txtMI.Text = ""; cmbState.Text = "MO"; txtSchool.Text = ""; txtEmail.Text = ""; gbStudent.Text = "";
                txtComment.Text = ""; txtOwed.Text = "$0.00"; txtJoined.Text = now.Year.ToString(); txtMemberNum.Text = ""; rbGrade9.Checked = true; rbMale.Checked = true; rbActive.Checked = true;
                this.Text = "FBLA";
            }
        }

        private void mbtnClearAll_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure that you want to clear ALL information?", "Clear All", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == System.Windows.Forms.DialogResult.Yes)
            {
                txtFirstName.Text = ""; txtLastName.Text = ""; txtMI.Text = ""; cmbState.Text = "MO"; txtSchool.Text = ""; txtEmail.Text = ""; gbStudent.Text = "";
                txtComment.Text = ""; txtOwed.Text = "$0.00"; txtJoined.Text = now.Year.ToString(); txtMemberNum.Text = ""; rbGrade9.Checked = true; rbMale.Checked = true; rbActive.Checked = true;
                this.Text = "FBLA";
            }
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

        private void mbtnPrint2_Click(object sender, EventArgs e)
        {
            //printStudent.Print(); ENABLE LATER
            MessageBox.Show("Works - Enable Printing Later");
        }

        
        // ******************************************

        // ************** Deals With Full Report Checkboxes **************

        private void checkEmail_CheckedChanged(object sender, EventArgs e)
        {
            txtEmailHome.Enabled = checkEmail.Checked;
            fullReport();
        }

        private void checkPrint_CheckedChanged(object sender, EventArgs e)
        {
            btnPrinterSettingsHome.Enabled = checkPrint.Checked;
            fullReport();
        }

        private void checkExport_CheckedChanged(object sender, EventArgs e)
        {
            fullReport();
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            if (txtFirstName.Text != "" && cmbState.Text != "" && txtLastName.Text != "" && txtSchool.Text != "" && txtEmail.Text != "" && txtJoined.Text != "" && txtMemberNum.Text != "")
            {
                checkMemNum();
                String sex, grade, active;
                if (rbMale.Checked) sex = "1"; else sex = "2";
                if (rbGrade9.Checked) grade = "1"; else if (rbGrade10.Checked) grade = "2"; else if (rbGrade11.Checked) grade = "3"; else if (rbGrade12.Checked) grade = "4"; else grade = "5";
                if (rbActive.Checked) active = "1"; else active = "2";
                specificFolder = Path.Combine(folder, "FBLAapplication/students.txt");
                File.AppendAllText(specificFolder , "\r\n" + txtMemberNum.Text + "\\" + txtFirstName.Text + "\\" + txtMI.Text + "\\" + cmbState.Text + "\\" + txtLastName.Text + "\\" + sex + "\\" + grade + "\\" + active + "\\" + txtSchool.Text + "\\" + txtEmail.Text + "\\" + txtOwed.Text + "\\" + txtJoined.Text + "\\" + txtComment.Text);
                readToArray();
                studentLog();
            } else
            {
                MessageBox.Show("Please ensure all non-optional entries are filled", "Error: Empty Entry");
            }
        }

        private void cmbThirdColumn_SelectedIndexChanged(object sender, EventArgs e)
        {
            columnHeader9.Text = cmbThirdColumn.Text;
            studentLog();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                _assembly = Assembly.GetExecutingAssembly();
                _textStreamReader = new StreamReader(_assembly.GetManifestResourceStream("FBLAdesktopApp3.Resources.temp.txt"));
                string str;
                int count = 0;
                while ((str = _textStreamReader.ReadLine()) != null)
                {
                    lines[count] = str;
                    count++;
                }
            }
            catch
            {
                MessageBox.Show("Error accessing resources!");
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            viewForm(0);
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            switch (cmbSearchBy.SelectedIndex)
            {
                case 0: search = 4; break;
                case 1: search = 1; break;
                case 2: search = 11; break;
                case 3: search = 0; break;
                case 4: search = 9; break;
                case 5: search = 8; break;
            }

            // Search the given searchby argument in all students
            for (int i = 0; i < count; i++)
            {
                if (student[i, search].Contains(txtSearch.Text))
                {
                    viewForm(i);
                    break;
                } else if (i == count-1)
                {
                    MessageBox.Show("Could not find any data matching your requested search", "Error");
                }
            }

        }
        // ***************************************************************


    }
}
