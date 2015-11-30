using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FBLAdesktopApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        // ************* Variable and array initialization *************
        String feeStr;
		Double feeDbl;
        String[] temp = new String[10];
        DateTime now = DateTime.Now;
        bool newForm;
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
            feeDbl = 0.00;
            ttOptional.SetToolTip(lblMI, "Optional");
            ttOptional.SetToolTip(lblComment, "Optional");
            this.Text = "FBLA - Login Screen";
            cmbSearchBy.SelectedIndex = 0;
            txtLog.Text = "Date\t\tChanged\t\t\tClient ID\r\n";
            txtClientIDs.Text = "Client ID\t\tNick\t\t\tChanges";
            txtStudents.Text = "Member #\tFirst Name\t\tLast Name";
            txtJoined.Text = now.Year.ToString();
            pnlLogin.BringToFront();
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
            gbStudent.Text = "Home";
            this.Text = "FBLA - Home";
            pnlHome.BringToFront();
            toolStripButtons(true);
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

        // ***************************************************************


    }
}
