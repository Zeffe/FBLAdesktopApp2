﻿using System;
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
    public partial class Form1
    {
        // Function called to clear all data on the student form page.
        public void clearAll()
        {
            if (newForm && btnSave.Enabled && MessageBox.Show("Are you sure that you want to discard any unsaved data?", "New Form", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == System.Windows.Forms.DialogResult.Yes)
            {
                txtFirstName.Text = ""; txtLastName.Text = ""; txtMI.Text = ""; cmbState.Text = "MO"; txtSchool.Text = ""; txtEmail.Text = ""; gbStudent.Text = "";
                txtComment.Text = ""; txtOwed.Text = "$0.00"; txtJoined.Text = now.Year.ToString(); txtMemberNum.Text = ""; rbGrade9.Checked = true; rbMale.Checked = true; rbActive.Checked = true;
                this.Text = "FBLA";
            }
            else if (!newForm && MessageBox.Show("Are you sure that you want to clear ALL information?", "Clear All", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == System.Windows.Forms.DialogResult.Yes)
            {
                txtFirstName.Text = ""; txtLastName.Text = ""; txtMI.Text = ""; cmbState.Text = "MO"; txtSchool.Text = ""; txtEmail.Text = ""; gbStudent.Text = "";
                txtComment.Text = ""; txtOwed.Text = "$0.00"; txtJoined.Text = now.Year.ToString(); txtMemberNum.Text = ""; rbGrade9.Checked = true; rbMale.Checked = true; rbActive.Checked = true;
                this.Text = "FBLA";
            }
            else
            {
                txtFirstName.Text = ""; txtLastName.Text = ""; txtMI.Text = ""; cmbState.Text = "MO"; txtSchool.Text = ""; txtEmail.Text = ""; gbStudent.Text = "";
                txtComment.Text = ""; txtOwed.Text = "$0.00"; txtJoined.Text = now.Year.ToString(); txtMemberNum.Text = ""; rbGrade9.Checked = true; rbMale.Checked = true; rbActive.Checked = true;
                this.Text = "FBLA";
            }
        }

        // Function called to parse the saved values as their respective strings.
        void getValues(int x)
        {
            switch (student[x, 5])
            {
                case "1": tempSex = "Male"; break;
                case "2": tempSex = "Female"; break;
            }
            switch (student[x, 6])
            {
                case "1": tempGrade = "9"; break;
                case "2": tempGrade = "10"; break;
                case "3": tempGrade = "11"; break;
                case "4": tempGrade = "12"; break;
                case "5": tempGrade = "13+"; break;
            }
            switch (student[x, 7])
            {
                case "1": tempActive = "Active"; break;
                case "2": tempActive = "NonActive"; break;
            }
        }

        // Function called when writing data from student forms to the data forms.
        void save()
        {
            specificFolder = Path.Combine(folder, "FBLAapplication/" + activeFile);
            string notStudents = Path.Combine(folder, "FBLAapplication/backups/" + activeFile);
            logFolder = Path.Combine(folder, "FBLAapplication/log.fbla");
            String sex, grade, active;
            if (rbMale.Checked) sex = "1"; else sex = "2";
            if (rbGrade9.Checked) grade = "1"; else if (rbGrade10.Checked) grade = "2"; else if (rbGrade11.Checked) grade = "3"; else if (rbGrade12.Checked) grade = "4"; else grade = "5";
            if (rbActive.Checked) active = "1"; else active = "2";
            date = now.Month + "/" + now.Day;
            string firstLine = student[0, 0];
            for (int i = 1; i < 13; i++)
            {
                firstLine += "\\" + student[0, i];
            }
            if (editMode)
            {
                if (activeFile != "students.fbla")
                {
                    File.WriteAllText(notStudents, firstLine + "\r\n");
                    for (int i = 1; i < count; i++)
                    {
                        if (student[i, 0] != editStudent)
                        {
                            firstLine = student[i, 0];
                            for (int j = 1; j < 13; j++)
                            {
                                firstLine += "\\" + student[i, j];
                            }
                            File.AppendAllText(notStudents, firstLine + "\r\n");
                        }
                        else
                        {
                            File.AppendAllText(notStudents, txtMemberNum.Text + "\\" + txtFirstName.Text + "\\" + txtMI.Text + "\\" + cmbState.Text + "\\" + txtLastName.Text + "\\" + sex + "\\" + grade + "\\" + active + "\\" + txtSchool.Text + "\\" + txtEmail.Text + "\\" + txtOwed.Text + "\\" + txtJoined.Text + "\\" + txtComment.Text + "\r\n");
                        }
                    }
                }
                else
                {
                    File.WriteAllText(specificFolder, firstLine + "\r\n");
                    for (int i = 1; i < count; i++)
                    {
                        if (student[i, 0] != editStudent)
                        {
                            firstLine = student[i, 0];
                            for (int j = 1; j < 13; j++)
                            {
                                firstLine += "\\" + student[i, j];
                            }
                            File.AppendAllText(specificFolder, firstLine + "\r\n");
                        }
                        else
                        {
                            File.AppendAllText(specificFolder, txtMemberNum.Text + "\\" + txtFirstName.Text + "\\" + txtMI.Text + "\\" + cmbState.Text + "\\" + txtLastName.Text + "\\" + sex + "\\" + grade + "\\" + active + "\\" + txtSchool.Text + "\\" + txtEmail.Text + "\\" + txtOwed.Text + "\\" + txtJoined.Text + "\\" + txtComment.Text + "\r\n");
                        }
                    }
                }
            }
            else if (txtFirstName.Text != "" && cmbState.Text != "" && txtLastName.Text != "" && txtSchool.Text != "" && txtEmail.Text != "" && txtJoined.Text != "" && txtMemberNum.Text != "")
            {
                checkMemNum();
                File.AppendAllText(logFolder, date + "\\" + "[A] " + txtFirstName.Text + " " + txtLastName.Text + "\\" + logins[account, 0] + "\\" + txtMemberNum.Text + "\r\n");
                if (activeFile != "students.fbla")
                {
                    File.AppendAllText(notStudents, txtMemberNum.Text + "\\" + txtFirstName.Text + "\\" + txtMI.Text + "\\" + cmbState.Text + "\\" + txtLastName.Text + "\\" + sex + "\\" + grade + "\\" + active + "\\" + txtSchool.Text + "\\" + txtEmail.Text + "\\" + txtOwed.Text + "\\" + txtJoined.Text + "\\" + txtComment.Text + "\r\n");
                }
                else
                {
                    File.AppendAllText(specificFolder, txtMemberNum.Text + "\\" + txtFirstName.Text + "\\" + txtMI.Text + "\\" + cmbState.Text + "\\" + txtLastName.Text + "\\" + sex + "\\" + grade + "\\" + active + "\\" + txtSchool.Text + "\\" + txtEmail.Text + "\\" + txtOwed.Text + "\\" + txtJoined.Text + "\\" + txtComment.Text + "\r\n");
                }
                readToArray();
                studentLog("");
                logLog();
                MessageBox.Show("Save Successful!", "Saved");
            }
            else
            {
                MessageBox.Show("Please ensure all non-optional entries are filled", "Error: Empty Entry");
            }
        }

        // Function called to view pnlHome.
        void viewHome()
        {
            if (btnDelete.Visible) btnDelete.Visible = false;
            if (btnEdit.Visible) btnEdit.Visible = false;
            gbStudent.Text = "Home";
            this.Text = "FBLA - Home";
            pnlHome.BringToFront();
            toolStripButtons(true);
        }

        // Function called when creating a new student form.
        void newStudent()
        {
            // Add later: if not saved, request save function
            readMode(true);
            mbtnPrint.Enabled = true;
            this.Text = "FBLA";
            mbtnClearAll.Enabled = true;
            mbtnPrintPreview.Enabled = true;
            btnClear.Enabled = true;
            btnPrint.Enabled = true;
            btnPrintDialog.Enabled = true;
            btnPrintPreview.Enabled = true;
            if (!editMode)
            {
                clearAll();
                newForm = true;
            }
            btnSave.Enabled = false;
            mbtnSave.Enabled = false;
            gbStudent.Text = txtFirstName.Text + " " + txtLastName.Text;
            pnlStudent.BringToFront();
        }

        // Function called when searching the array students for words from the txtSearch textbox.
        void searchFunc()
        {
            bool OK = true;
            switch (cmbSearchBy.SelectedIndex)
            {
                case 0: search = 4; break;
                case 1: search = 1; break;
                case 2: search = 11; break;
                case 3: search = 0; break;
                case 4: search = 9; break;
                case 5: search = 8; break;
            }

            int count2 = 0;

            for (int i = 1; i < count; i++)
            {
                if (student[i, search].Contains(txtSearch.Text)) count2++;
                if (count2 >= 2)
                {
                    pnlHome.BringToFront();
                    gbStudent.Text = "Home";
                    this.Text = "FBLA - Home";
                    toolStripButtons(true);
                    tabLogs.SelectedTab = tabPage3;
                    cmbFilter.SelectedIndex = cmbSearchBy.SelectedIndex;
                    studentLog(txtSearch.Text);
                    OK = false;
                    break;
                }
            }

            if (OK)
            {
                // Search the given searchby argument in all students.
                for (int i = 0; i < count; i++)
                {
                    if (student[i, search].Contains(txtSearch.Text))
                    {
                        viewForm(i);
                        activeStudent = i;
                        btnSave.Enabled = false;
                        mbtnSave.Enabled = false;
                        readMode(false);
                        break;
                    }
                    else if (i == count - 1)
                    {
                        MessageBox.Show("Could not find any data matching your requested search", "Error");
                    }
                }
            }
        }

        // Testing Encryption
        static readonly string PasswordHash = "P@@Sw0rd";
        static readonly string SaltKey = "S@LT&KEY";
        static readonly string VIKey = "@1B2c3D4e5F6g7H8";


        public static string Encrypt(string plainText)
        {
            byte[] plainTextBytes = Encoding.UTF8.GetBytes(plainText);

            byte[] keyBytes = new Rfc2898DeriveBytes(PasswordHash, Encoding.ASCII.GetBytes(SaltKey)).GetBytes(256 / 8);
            var symmetricKey = new RijndaelManaged() { Mode = CipherMode.CBC, Padding = PaddingMode.Zeros };
            var encryptor = symmetricKey.CreateEncryptor(keyBytes, Encoding.ASCII.GetBytes(VIKey));

            byte[] cipherTextBytes;

            using (var memoryStream = new MemoryStream())
            {
                using (var cryptoStream = new CryptoStream(memoryStream, encryptor, CryptoStreamMode.Write))
                {
                    cryptoStream.Write(plainTextBytes, 0, plainTextBytes.Length);
                    cryptoStream.FlushFinalBlock();
                    cipherTextBytes = memoryStream.ToArray();
                    cryptoStream.Close();
                }
                memoryStream.Close();
            }
            return Convert.ToBase64String(cipherTextBytes);
        }

        public static string Decrypt(string encryptedText)
        {
            byte[] cipherTextBytes = Convert.FromBase64String(encryptedText);
            byte[] keyBytes = new Rfc2898DeriveBytes(PasswordHash, Encoding.ASCII.GetBytes(SaltKey)).GetBytes(256 / 8);
            var symmetricKey = new RijndaelManaged() { Mode = CipherMode.CBC, Padding = PaddingMode.None };

            var decryptor = symmetricKey.CreateDecryptor(keyBytes, Encoding.ASCII.GetBytes(VIKey));
            var memoryStream = new MemoryStream(cipherTextBytes);
            var cryptoStream = new CryptoStream(memoryStream, decryptor, CryptoStreamMode.Read);
            byte[] plainTextBytes = new byte[cipherTextBytes.Length];

            int decryptedByteCount = cryptoStream.Read(plainTextBytes, 0, plainTextBytes.Length);
            memoryStream.Close();
            cryptoStream.Close();
            return Encoding.UTF8.GetString(plainTextBytes, 0, decryptedByteCount).TrimEnd("\0".ToCharArray());
        }

        // Function called to update statistics, variables come from studentLog function
        void stats()
        {
            lblStudent.Text = "Total Students: " + (count - 1).ToString();
            lblAdmins.Text = "Administrator Accounts: " + loginCount.ToString();
            lblActive.Text = "Active Students: " + (active).ToString();
            lblFees.Text = "Students With Fees: " + hasFees.ToString();
            switch (grade)
            {
                case 0: lblGrades.Text = "Freshmen: " + (g9).ToString(); break;
                case 1: lblGrades.Text = "Sophomores: " + (g10).ToString(); break;
                case 2: lblGrades.Text = "Juniors: " + (g11).ToString(); break;
                case 3: lblGrades.Text = "Seniors: " + (g12).ToString(); break;
                case 4: lblGrades.Text = "College Level: " + (g13).ToString(); break;
            }
        }

        //Faster way to enable and disable toolstrip buttons
        void toolStripButtons(bool x)
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
            mbtnQuickAdd.Enabled = x;
            mbtnSourceMng.Enabled = x;
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

        // Function called when saving new form to ensure no member # duplicates or errors
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

        // Function called to set the student form to read only mode.
        void readMode(bool x)
        {
            TextBox[] txt = { txtMemberNum, txtFirstName, txtMI, txtLastName, txtSchool, txtEmail, txtOwed, txtJoined, txtComment };
            for (int i = 0; i < 9; i++)
            {
                txt[i].ReadOnly = !x;
                if (!x)
                {
                    txt[i].BackColor = SystemColors.Info;
                    txt[i].ForeColor = SystemColors.WindowText;
                }
                else
                {
                    txt[i].BackColor = SystemColors.Window;
                }
            }

            disabled = !x;
            rbMale.Enabled = x; rbFemale.Enabled = x; rbGrade9.Enabled = x; rbGrade10.Enabled = x;
            rbGrade10.Enabled = x; rbGrade11.Enabled = x; rbGrade12.Enabled = x; rbCollege.Enabled = x; rbActive.Enabled = x;
            rbNonActive.Enabled = x;
            if (!x)
            {
                cmbState.BackColor = SystemColors.Info; cmbState.ForeColor = SystemColors.WindowText;
                rbMale.BackColor = SystemColors.Info; rbMale.ForeColor = SystemColors.WindowText;
                rbFemale.BackColor = SystemColors.Info; rbFemale.ForeColor = SystemColors.WindowText;
                rbGrade9.BackColor = SystemColors.Info; rbGrade9.ForeColor = SystemColors.WindowText;
                rbGrade10.BackColor = SystemColors.Info; rbGrade10.ForeColor = SystemColors.WindowText;
                rbGrade11.BackColor = SystemColors.Info; rbGrade11.ForeColor = SystemColors.WindowText;
                rbGrade12.BackColor = SystemColors.Info; rbGrade12.ForeColor = SystemColors.WindowText;
                rbCollege.BackColor = SystemColors.Info; rbCollege.ForeColor = SystemColors.WindowText;
                rbActive.BackColor = SystemColors.Info; rbActive.ForeColor = SystemColors.WindowText;
                rbNonActive.BackColor = SystemColors.Info; rbNonActive.ForeColor = SystemColors.WindowText;
            }
            else
            {
                cmbState.BackColor = SystemColors.Window;
                rbMale.BackColor = SystemColors.Control;
                rbFemale.BackColor = SystemColors.Control;
                rbGrade9.BackColor = SystemColors.Control;
                rbGrade10.BackColor = SystemColors.Control;
                rbGrade11.BackColor = SystemColors.Control;
                rbGrade12.BackColor = SystemColors.Control;
                rbCollege.BackColor = SystemColors.Control;
                rbActive.BackColor = SystemColors.Control;
                rbNonActive.BackColor = SystemColors.Control;
            }
        }

        // Function called to load data from studentNum onto pnlStudent, and bring pnlStudent to front.
        void viewForm(int studentNum)
        {
            pnlStudent.BringToFront();
            gbStudent.Text = student[studentNum, 1] + " " + student[studentNum, 4] + " - " + student[studentNum, 0];
            txtMemberNum.Text = student[studentNum, 0]; txtFirstName.Text = student[studentNum, 1]; txtMI.Text = student[studentNum, 2];
            cmbState.Text = student[studentNum, 3]; txtLastName.Text = student[studentNum, 4]; txtSchool.Text = student[studentNum, 8];
            txtEmail.Text = student[studentNum, 9]; txtOwed.Text = student[studentNum, 10]; txtJoined.Text = student[studentNum, 11];
            txtComment.Text = student[studentNum, 12];
            switch (student[studentNum, 5])
            {
                case "1": rbMale.Checked = true; break;
                case "2": rbFemale.Checked = true; break;
            }
            switch (student[studentNum, 6])
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

        void delete(int studentNum)
        {
            // TODO: Add updating to log.

            // Create temporary file.
            var tempFile = Path.GetTempFileName();
            // Create an array of lines to keep if it doesn't contain the selected student.
            var linesToKeep = File.ReadLines(specificFolder).Where(l => !(l.Contains(student[studentNum, 0] + "\\" + student[studentNum, 1])));

            // Write the kept lines to the temporary file.
            File.WriteAllLines(tempFile, linesToKeep);

            // Delete current file.
            File.Delete(specificFolder);

            //Replace old file with temporary file.
            File.Move(tempFile, specificFolder);

            // Get current date in M/D format.
            date = now.Month + "/" + now.Day;

            // Write the delete to log and display it.
            File.AppendAllText(logFolder, date + "\\" + "[D] " + txtFirstName.Text + " " + txtLastName.Text + "\\" + logins[account, 0] + "\\" + txtMemberNum.Text + "\r\n");
            readToArray();
            logLog();
        }

        // Writes the logins array into the Administrators tab on home page.
        void adminLog()
        {
            listClientIDs.Items.Clear();
            for (int i = 0; i < loginCount; i++)
            {
                ListViewItem new_item = listClientIDs.Items.Add(logins[i, 0]);
                new_item.SubItems.Add(logins[i, 2]);
                new_item.SubItems.Add(logins[i, 3]);
            }
        }

        // Reads information from loginstxt and students.fbla into their respective arrays.
        void readToArray()
        {
            try
            {
                _assembly = Assembly.GetExecutingAssembly();
                if (activeFile == "students.fbla")
                {
                    specificFolder = Path.Combine(folder, "FBLAapplication\\" + activeFile);
                }
                else
                {
                    specificFolder = Path.Combine(folder, "FBLAapplication\\backups\\" + activeFile);
                }
                logFolder = Path.Combine(folder, "FBLAapplication/log.fbla");
                _textStreamReader = File.OpenText(specificFolder);
                _textStreamReader2 = new StreamReader(_assembly.GetManifestResourceStream("FBLAdesktopApp3.Resources.logins.txt"));
                _textStreamReader3 = File.OpenText(logFolder);
                string str;
                count = 0;
                loginCount = 0;
                logCount = 0;
                while ((str = _textStreamReader3.ReadLine()) != null)
                {
                    lines3[logCount] = str;
                    temp3 = lines3[logCount].Split('\\');
                    for (int i = 0; i < 4; i++)
                    {
                        log[logCount, i] = temp3[i];
                    }
                    logCount++;
                }
                // Reading to login array.
                while ((str = _textStreamReader2.ReadLine()) != null)
                {
                    lines2[loginCount] = str;
                    temp2 = lines2[loginCount].Split('\\');
                    for (int i = 0; i < 4; i++)
                    {
                        logins[loginCount, i] = temp2[i];
                        // logins[#, 0 = username, 1 = password, 2 = full name, 3 = changes made]
                    }
                    // loginCount represents the amount of lines in logins.txt, used to get an amount of administrators
                    loginCount++;
                }
                // Reading to student array.
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
                    // Count represents the amount of users gone through, can be used as amount of students in logs
                    count++;
                }
                _textStreamReader.Close();
                _textStreamReader3.Close();
            }
            catch
            {
                MessageBox.Show("Error reading resources", "Error");
            }
        }

        // Updates the log listview.
        void logLog()
        {
            listLog.Items.Clear();
            for (int i = 0; i < logCount; i++)
            {
                ListViewItem new_item = listLog.Items.Add(log[i, 0]);
                new_item.SubItems.Add(log[i, 1]);
                new_item.SubItems.Add(log[i, 2]);
            }
        }

        // Determines what the search parameter should be dependent on the filter combobox.
        void filterVal()
        {
            switch (cmbFilter.SelectedIndex)
            {
                case 0: search = 4; break;
                case 1: search = 1; break;
                case 2: search = 11; break;
                case 3: search = 0; break;
                case 4: search = 9; break;
                case 5: search = 8; break;
            }
        }

        // Writes the student array to the log on home page
        void studentLog(string filter)
        {
            listView1.Items.Clear();
            // Setting the variables for statistics to 0 so they can be rewritten.
            active = 0;
            hasFees = 0;
            g9 = 0; g10 = 0; g11 = 0; g12 = 0; g13 = 0;
            filterVal();
            for (int i = 1; i < count; i++)
            {
                if (student[i, search].Contains(filter) || filter == "")
                {
                    ListViewItem new_item = listView1.Items.Add(student[i, 0]);
                    new_item.SubItems.Add(student[i, 1] + " " + student[i, 4]);
                    // Getting the values for statistics.
                    if (student[i, 7] == "1") active++;
                    if (student[i, 10] != "$0.00") hasFees++;
                    switch (student[i, 6])
                    {
                        case "1": g9++; break;
                        case "2": g10++; break;
                        case "3": g11++; break;
                        case "4": g12++; break;
                        case "5": g13++; break;
                    }
                    // Determining based on cmbThirdColumn what data member to display in third column.
                    // Occurs when cmbThirdColumn is changed.
                    switch (cmbThirdColumn.SelectedIndex)
                    {
                        case 0:
                            switch (student[i, 6])
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
            // Update the statistic labels.
            stats();
        }

        // Function called to configurate which backupfile to read from.
        void backupConfig()
        {
            StreamReader _backupReader;
            string backupFolder = Path.Combine(folder, "FBLAapplication/backups");
            _backupReader = File.OpenText(backupFolder + "\\backupSettings.fbla");
            if ((str = _backupReader.ReadLine()) != null) backup = str.Split('\\');
            _backupReader.Close();
            activeFile = backup[Convert.ToInt32(backup[backup.Length - 1])];
        }

        //Changes the name of the group box to the students name when working with new student forms.
        void newFormTitle()
        {
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
    }
}
