#pragma once

namespace FormProjectFix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  rbCollege;
	protected:
	private: System::Windows::Forms::Label^  lblOptional;
	private: System::Windows::Forms::RadioButton^  rbGrade12;
	private: System::Windows::Forms::RadioButton^  rbGrade11;
	private: System::Windows::Forms::RadioButton^  rbGrade10;
	private: System::Windows::Forms::Label^  lblComment;
	private: System::Windows::Forms::RadioButton^  rbNonActive;
	private: System::Windows::Forms::RadioButton^  rbActive;
	private: System::Windows::Forms::RadioButton^  rbFemale;
	private: System::Windows::Forms::RadioButton^  rbMale;
	private: System::Windows::Forms::TextBox^  txtJoined;
	private: System::Windows::Forms::TextBox^  txtComment;
	private: System::Windows::Forms::TextBox^  txtMemberNum;

	private: System::Windows::Forms::Label^  lblMemNum;
	private: System::Windows::Forms::Label^  lblJoined;
	private: System::Windows::Forms::Label^  lblOwed;
	private: System::Windows::Forms::TextBox^  txtOwed;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::Label^  lblSchool;
	private: System::Windows::Forms::RadioButton^  rbGrade9;
	private: System::Windows::Forms::ToolTip^  ttOptional;
	private: System::Windows::Forms::TextBox^  txtSchool;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;



	private: System::Windows::Forms::Label^  lblHR;
	private: System::Windows::Forms::GroupBox^  gbGrade;
	private: System::Windows::Forms::Label^  lblState;
	private: System::Windows::Forms::GroupBox^  gbStudent;
	private: System::Windows::Forms::Panel^  pnlStudent;

	private: System::Windows::Forms::GroupBox^  gbActive;
	private: System::Windows::Forms::ComboBox^  cmbState;
	private: System::Windows::Forms::GroupBox^  gbSex;
	private: System::Windows::Forms::Label^  lblLastName;
	private: System::Windows::Forms::TextBox^  txtLastName;
	private: System::Windows::Forms::Label^  lblMI;
	private: System::Windows::Forms::TextBox^  txtMI;
	private: System::Windows::Forms::Label^  lblFirstName;
	private: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;


	private: System::Windows::Forms::ToolStripButton^  btnNew;
	private: System::Windows::Forms::ToolStripButton^  btnSave;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  btnCut;
	private: System::Windows::Forms::ToolStripButton^  btnCopy;
	private: System::Windows::Forms::ToolStripButton^  btnPaste;
	private: System::Windows::Forms::ToolStripButton^  btnUndo;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  btnPrintPreview;
	private: System::Windows::Forms::ToolStripButton^  btnPrint;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^  btnClear;
	private: System::Windows::Forms::ToolStripTextBox^  txtSearch;
	private: System::Windows::Forms::ToolStripComboBox^  cmbSearchBy;
	private: System::Windows::Forms::ToolStripButton^  btnSearch;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::Panel^  pnlLogin;
	private: System::Windows::Forms::ToolStripMenuItem^  mbtnLogout;











	private: System::Windows::Forms::Panel^  pnlHome;
private: System::Windows::Forms::ToolStripButton^  btnHome;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;

private: System::Windows::Forms::Label^  label2;


private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Button^  btnLogon;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  txtPass;
private: System::Windows::Forms::TextBox^  txtUser;
private: System::Windows::Forms::TabControl^  tabLogs;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TextBox^  txtLog;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::TextBox^  txtClientIDs;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TextBox^  txtStudents;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnNew;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnSave;



private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnPrintPreview;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnPrint;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnExport;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnAsTxt;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnAsXls;






private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnUndo;

private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnCut;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnCopy;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnPaste;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnClearAll;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnHome;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnAccountDetails;
private: System::Windows::Forms::ToolStripMenuItem^  mbtnProgramSettings;







private: System::Windows::Forms::ToolStripMenuItem^  mbtnExit;
private: System::Windows::Forms::ToolStripMenuItem^  creditsToolStripMenuItem;











	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->rbCollege = (gcnew System::Windows::Forms::RadioButton());
			this->lblOptional = (gcnew System::Windows::Forms::Label());
			this->rbGrade12 = (gcnew System::Windows::Forms::RadioButton());
			this->rbGrade11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbGrade10 = (gcnew System::Windows::Forms::RadioButton());
			this->lblComment = (gcnew System::Windows::Forms::Label());
			this->rbNonActive = (gcnew System::Windows::Forms::RadioButton());
			this->rbActive = (gcnew System::Windows::Forms::RadioButton());
			this->rbFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbMale = (gcnew System::Windows::Forms::RadioButton());
			this->txtJoined = (gcnew System::Windows::Forms::TextBox());
			this->txtComment = (gcnew System::Windows::Forms::TextBox());
			this->txtMemberNum = (gcnew System::Windows::Forms::TextBox());
			this->lblMemNum = (gcnew System::Windows::Forms::Label());
			this->lblJoined = (gcnew System::Windows::Forms::Label());
			this->lblOwed = (gcnew System::Windows::Forms::Label());
			this->txtOwed = (gcnew System::Windows::Forms::TextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblSchool = (gcnew System::Windows::Forms::Label());
			this->rbGrade9 = (gcnew System::Windows::Forms::RadioButton());
			this->ttOptional = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->txtSchool = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnNew = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mbtnPrintPreview = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnPrint = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnExport = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnAsTxt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnAsXls = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mbtnLogout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnUndo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mbtnCut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnCopy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnPaste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnClearAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnHome = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnAccountDetails = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mbtnProgramSettings = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblHR = (gcnew System::Windows::Forms::Label());
			this->gbGrade = (gcnew System::Windows::Forms::GroupBox());
			this->lblState = (gcnew System::Windows::Forms::Label());
			this->gbStudent = (gcnew System::Windows::Forms::GroupBox());
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->btnLogon = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlHome = (gcnew System::Windows::Forms::Panel());
			this->tabLogs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtLog = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtClientIDs = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->txtStudents = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlStudent = (gcnew System::Windows::Forms::Panel());
			this->gbActive = (gcnew System::Windows::Forms::GroupBox());
			this->cmbState = (gcnew System::Windows::Forms::ComboBox());
			this->gbSex = (gcnew System::Windows::Forms::GroupBox());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->lblMI = (gcnew System::Windows::Forms::Label());
			this->txtMI = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnHome = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->btnNew = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->btnCut = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnCopy = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnPaste = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnUndo = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnClear = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->btnPrintPreview = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnPrint = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->txtSearch = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cmbSearchBy = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->menuStrip2->SuspendLayout();
			this->gbGrade->SuspendLayout();
			this->gbStudent->SuspendLayout();
			this->pnlLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlHome->SuspendLayout();
			this->tabLogs->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->pnlStudent->SuspendLayout();
			this->gbActive->SuspendLayout();
			this->gbSex->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rbCollege
			// 
			this->rbCollege->AutoSize = true;
			this->rbCollege->Location = System::Drawing::Point(12, 111);
			this->rbCollege->Name = L"rbCollege";
			this->rbCollege->Size = System::Drawing::Size(43, 17);
			this->rbCollege->TabIndex = 4;
			this->rbCollege->Text = L"13+";
			this->rbCollege->UseVisualStyleBackColor = true;
			// 
			// lblOptional
			// 
			this->lblOptional->AutoSize = true;
			this->lblOptional->Location = System::Drawing::Point(588, 392);
			this->lblOptional->Name = L"lblOptional";
			this->lblOptional->Size = System::Drawing::Size(56, 13);
			this->lblOptional->TabIndex = 23;
			this->lblOptional->Text = L"*  Optional";
			// 
			// rbGrade12
			// 
			this->rbGrade12->AutoSize = true;
			this->rbGrade12->Location = System::Drawing::Point(12, 88);
			this->rbGrade12->Name = L"rbGrade12";
			this->rbGrade12->Size = System::Drawing::Size(37, 17);
			this->rbGrade12->TabIndex = 3;
			this->rbGrade12->Text = L"12";
			this->rbGrade12->UseVisualStyleBackColor = true;
			// 
			// rbGrade11
			// 
			this->rbGrade11->AutoSize = true;
			this->rbGrade11->Location = System::Drawing::Point(12, 65);
			this->rbGrade11->Name = L"rbGrade11";
			this->rbGrade11->Size = System::Drawing::Size(37, 17);
			this->rbGrade11->TabIndex = 2;
			this->rbGrade11->Text = L"11";
			this->rbGrade11->UseVisualStyleBackColor = true;
			// 
			// rbGrade10
			// 
			this->rbGrade10->AutoSize = true;
			this->rbGrade10->Location = System::Drawing::Point(12, 42);
			this->rbGrade10->Name = L"rbGrade10";
			this->rbGrade10->Size = System::Drawing::Size(37, 17);
			this->rbGrade10->TabIndex = 1;
			this->rbGrade10->Text = L"10";
			this->rbGrade10->UseVisualStyleBackColor = true;
			// 
			// lblComment
			// 
			this->lblComment->AutoSize = true;
			this->lblComment->Location = System::Drawing::Point(9, 217);
			this->lblComment->Name = L"lblComment";
			this->lblComment->Size = System::Drawing::Size(60, 13);
			this->lblComment->TabIndex = 22;
			this->lblComment->Text = L"Comments*";
			// 
			// rbNonActive
			// 
			this->rbNonActive->AutoSize = true;
			this->rbNonActive->Location = System::Drawing::Point(12, 75);
			this->rbNonActive->Name = L"rbNonActive";
			this->rbNonActive->Size = System::Drawing::Size(75, 17);
			this->rbNonActive->TabIndex = 1;
			this->rbNonActive->Text = L"Not Active";
			this->rbNonActive->UseVisualStyleBackColor = true;
			// 
			// rbActive
			// 
			this->rbActive->AutoSize = true;
			this->rbActive->Checked = true;
			this->rbActive->Location = System::Drawing::Point(12, 29);
			this->rbActive->Name = L"rbActive";
			this->rbActive->Size = System::Drawing::Size(55, 17);
			this->rbActive->TabIndex = 0;
			this->rbActive->TabStop = true;
			this->rbActive->Text = L"Active";
			this->rbActive->UseVisualStyleBackColor = true;
			// 
			// rbFemale
			// 
			this->rbFemale->AutoSize = true;
			this->rbFemale->Location = System::Drawing::Point(12, 75);
			this->rbFemale->Name = L"rbFemale";
			this->rbFemale->Size = System::Drawing::Size(59, 17);
			this->rbFemale->TabIndex = 1;
			this->rbFemale->Text = L"Female";
			this->rbFemale->UseVisualStyleBackColor = true;
			// 
			// rbMale
			// 
			this->rbMale->AutoSize = true;
			this->rbMale->Checked = true;
			this->rbMale->Location = System::Drawing::Point(11, 29);
			this->rbMale->Name = L"rbMale";
			this->rbMale->Size = System::Drawing::Size(48, 17);
			this->rbMale->TabIndex = 0;
			this->rbMale->TabStop = true;
			this->rbMale->Text = L"Male";
			this->rbMale->UseVisualStyleBackColor = true;
			// 
			// txtJoined
			// 
			this->txtJoined->Location = System::Drawing::Point(328, 143);
			this->txtJoined->Name = L"txtJoined";
			this->txtJoined->Size = System::Drawing::Size(34, 20);
			this->txtJoined->TabIndex = 17;
			this->txtJoined->Text = L"2014";
			// 
			// txtComment
			// 
			this->txtComment->Location = System::Drawing::Point(3, 233);
			this->txtComment->Multiline = true;
			this->txtComment->Name = L"txtComment";
			this->txtComment->Size = System::Drawing::Size(641, 156);
			this->txtComment->TabIndex = 21;
			// 
			// txtMemberNum
			// 
			this->txtMemberNum->Location = System::Drawing::Point(477, 159);
			this->txtMemberNum->Name = L"txtMemberNum";
			this->txtMemberNum->Size = System::Drawing::Size(105, 20);
			this->txtMemberNum->TabIndex = 20;
			this->txtMemberNum->TextChanged += gcnew System::EventHandler(this, &Form1::txtMemberNum_TextChanged);
			// 
			// lblMemNum
			// 
			this->lblMemNum->AutoSize = true;
			this->lblMemNum->Location = System::Drawing::Point(589, 162);
			this->lblMemNum->Name = L"lblMemNum";
			this->lblMemNum->Size = System::Drawing::Size(55, 13);
			this->lblMemNum->TabIndex = 19;
			this->lblMemNum->Text = L"Member #";
			// 
			// lblJoined
			// 
			this->lblJoined->AutoSize = true;
			this->lblJoined->Location = System::Drawing::Point(368, 146);
			this->lblJoined->Name = L"lblJoined";
			this->lblJoined->Size = System::Drawing::Size(63, 13);
			this->lblJoined->TabIndex = 18;
			this->lblJoined->Text = L"Year Joined";
			// 
			// lblOwed
			// 
			this->lblOwed->AutoSize = true;
			this->lblOwed->Location = System::Drawing::Point(391, 172);
			this->lblOwed->Name = L"lblOwed";
			this->lblOwed->Size = System::Drawing::Size(56, 13);
			this->lblOwed->TabIndex = 16;
			this->lblOwed->Text = L" Fees Due";
			// 
			// txtOwed
			// 
			this->txtOwed->Location = System::Drawing::Point(328, 169);
			this->txtOwed->Name = L"txtOwed";
			this->txtOwed->Size = System::Drawing::Size(57, 20);
			this->txtOwed->TabIndex = 15;
			this->txtOwed->Text = L"$0.00";
			this->txtOwed->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtOwed->Enter += gcnew System::EventHandler(this, &Form1::txtOwed_Enter);
			this->txtOwed->Leave += gcnew System::EventHandler(this, &Form1::txtOwed_Leave);
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(274, 172);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(32, 13);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(3, 169);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(265, 20);
			this->txtEmail->TabIndex = 13;
			// 
			// lblSchool
			// 
			this->lblSchool->AutoSize = true;
			this->lblSchool->Location = System::Drawing::Point(274, 146);
			this->lblSchool->Name = L"lblSchool";
			this->lblSchool->Size = System::Drawing::Size(40, 13);
			this->lblSchool->TabIndex = 12;
			this->lblSchool->Text = L"School";
			// 
			// rbGrade9
			// 
			this->rbGrade9->AutoSize = true;
			this->rbGrade9->Checked = true;
			this->rbGrade9->Location = System::Drawing::Point(12, 19);
			this->rbGrade9->Name = L"rbGrade9";
			this->rbGrade9->Size = System::Drawing::Size(31, 17);
			this->rbGrade9->TabIndex = 0;
			this->rbGrade9->TabStop = true;
			this->rbGrade9->Text = L"9";
			this->rbGrade9->UseVisualStyleBackColor = true;
			// 
			// txtSchool
			// 
			this->txtSchool->Location = System::Drawing::Point(3, 143);
			this->txtSchool->Name = L"txtSchool";
			this->txtSchool->Size = System::Drawing::Size(265, 20);
			this->txtSchool->TabIndex = 11;
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(695, 24);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mbtnNew,
					this->mbtnSave, this->toolStripSeparator8, this->mbtnPrintPreview, this->mbtnPrint, this->mbtnExport, this->toolStripSeparator9,
					this->mbtnLogout, this->mbtnExit
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// mbtnNew
			// 
			this->mbtnNew->Enabled = false;
			this->mbtnNew->Name = L"mbtnNew";
			this->mbtnNew->Size = System::Drawing::Size(143, 22);
			this->mbtnNew->Text = L"New";
			this->mbtnNew->Click += gcnew System::EventHandler(this, &Form1::mbtnNew_Click);
			// 
			// mbtnSave
			// 
			this->mbtnSave->Enabled = false;
			this->mbtnSave->Name = L"mbtnSave";
			this->mbtnSave->Size = System::Drawing::Size(143, 22);
			this->mbtnSave->Text = L"Save";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(140, 6);
			// 
			// mbtnPrintPreview
			// 
			this->mbtnPrintPreview->Enabled = false;
			this->mbtnPrintPreview->Name = L"mbtnPrintPreview";
			this->mbtnPrintPreview->Size = System::Drawing::Size(143, 22);
			this->mbtnPrintPreview->Text = L"Print Preview";
			// 
			// mbtnPrint
			// 
			this->mbtnPrint->Enabled = false;
			this->mbtnPrint->Name = L"mbtnPrint";
			this->mbtnPrint->Size = System::Drawing::Size(143, 22);
			this->mbtnPrint->Text = L"Print";
			// 
			// mbtnExport
			// 
			this->mbtnExport->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mbtnAsTxt,
					this->mbtnAsXls
			});
			this->mbtnExport->Enabled = false;
			this->mbtnExport->Name = L"mbtnExport";
			this->mbtnExport->Size = System::Drawing::Size(143, 22);
			this->mbtnExport->Text = L"Export";
			// 
			// mbtnAsTxt
			// 
			this->mbtnAsTxt->Name = L"mbtnAsTxt";
			this->mbtnAsTxt->Size = System::Drawing::Size(104, 22);
			this->mbtnAsTxt->Text = L"as .txt";
			// 
			// mbtnAsXls
			// 
			this->mbtnAsXls->Name = L"mbtnAsXls";
			this->mbtnAsXls->Size = System::Drawing::Size(104, 22);
			this->mbtnAsXls->Text = L"as .xls";
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(140, 6);
			// 
			// mbtnLogout
			// 
			this->mbtnLogout->Enabled = false;
			this->mbtnLogout->Name = L"mbtnLogout";
			this->mbtnLogout->Size = System::Drawing::Size(143, 22);
			this->mbtnLogout->Text = L"Log Out";
			this->mbtnLogout->Click += gcnew System::EventHandler(this, &Form1::logOutToolStripMenuItem_Click);
			// 
			// mbtnExit
			// 
			this->mbtnExit->Name = L"mbtnExit";
			this->mbtnExit->Size = System::Drawing::Size(143, 22);
			this->mbtnExit->Text = L"Exit";
			this->mbtnExit->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mbtnUndo,
					this->toolStripSeparator7, this->mbtnCut, this->mbtnCopy, this->mbtnPaste, this->mbtnClearAll
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// mbtnUndo
			// 
			this->mbtnUndo->Enabled = false;
			this->mbtnUndo->Name = L"mbtnUndo";
			this->mbtnUndo->Size = System::Drawing::Size(118, 22);
			this->mbtnUndo->Text = L"Undo";
			this->mbtnUndo->Click += gcnew System::EventHandler(this, &Form1::mbtnUndo_Click);
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(115, 6);
			// 
			// mbtnCut
			// 
			this->mbtnCut->Enabled = false;
			this->mbtnCut->Name = L"mbtnCut";
			this->mbtnCut->Size = System::Drawing::Size(118, 22);
			this->mbtnCut->Text = L"Cut";
			this->mbtnCut->Click += gcnew System::EventHandler(this, &Form1::mbtnCut_Click);
			// 
			// mbtnCopy
			// 
			this->mbtnCopy->Enabled = false;
			this->mbtnCopy->Name = L"mbtnCopy";
			this->mbtnCopy->Size = System::Drawing::Size(118, 22);
			this->mbtnCopy->Text = L"Copy";
			this->mbtnCopy->Click += gcnew System::EventHandler(this, &Form1::mbtnCopy_Click);
			// 
			// mbtnPaste
			// 
			this->mbtnPaste->Enabled = false;
			this->mbtnPaste->Name = L"mbtnPaste";
			this->mbtnPaste->Size = System::Drawing::Size(118, 22);
			this->mbtnPaste->Text = L"Paste";
			this->mbtnPaste->Click += gcnew System::EventHandler(this, &Form1::mbtnPaste_Click);
			// 
			// mbtnClearAll
			// 
			this->mbtnClearAll->Enabled = false;
			this->mbtnClearAll->Name = L"mbtnClearAll";
			this->mbtnClearAll->Size = System::Drawing::Size(118, 22);
			this->mbtnClearAll->Text = L"Clear All";
			this->mbtnClearAll->Click += gcnew System::EventHandler(this, &Form1::mbtnClearAll_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mbtnHome,
					this->mbtnAccountDetails, this->mbtnProgramSettings, this->creditsToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// mbtnHome
			// 
			this->mbtnHome->Enabled = false;
			this->mbtnHome->Name = L"mbtnHome";
			this->mbtnHome->Size = System::Drawing::Size(165, 22);
			this->mbtnHome->Text = L"Home";
			this->mbtnHome->Click += gcnew System::EventHandler(this, &Form1::mbtnHome_Click);
			// 
			// mbtnAccountDetails
			// 
			this->mbtnAccountDetails->Enabled = false;
			this->mbtnAccountDetails->Name = L"mbtnAccountDetails";
			this->mbtnAccountDetails->Size = System::Drawing::Size(165, 22);
			this->mbtnAccountDetails->Text = L"Account Details";
			// 
			// mbtnProgramSettings
			// 
			this->mbtnProgramSettings->Enabled = false;
			this->mbtnProgramSettings->Name = L"mbtnProgramSettings";
			this->mbtnProgramSettings->Size = System::Drawing::Size(165, 22);
			this->mbtnProgramSettings->Text = L"Program Settings";
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->creditsToolStripMenuItem->Text = L"Credits";
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creditsToolStripMenuItem_Click);
			// 
			// lblHR
			// 
			this->lblHR->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblHR->Location = System::Drawing::Point(0, 201);
			this->lblHR->Name = L"lblHR";
			this->lblHR->Size = System::Drawing::Size(655, 2);
			this->lblHR->TabIndex = 10;
			// 
			// gbGrade
			// 
			this->gbGrade->Controls->Add(this->rbCollege);
			this->gbGrade->Controls->Add(this->rbGrade12);
			this->gbGrade->Controls->Add(this->rbGrade11);
			this->gbGrade->Controls->Add(this->rbGrade10);
			this->gbGrade->Controls->Add(this->rbGrade9);
			this->gbGrade->Location = System::Drawing::Point(441, 16);
			this->gbGrade->Name = L"gbGrade";
			this->gbGrade->Size = System::Drawing::Size(87, 134);
			this->gbGrade->TabIndex = 8;
			this->gbGrade->TabStop = false;
			this->gbGrade->Text = L"Grade";
			// 
			// lblState
			// 
			this->lblState->AutoSize = true;
			this->lblState->Location = System::Drawing::Point(211, 59);
			this->lblState->Name = L"lblState";
			this->lblState->Size = System::Drawing::Size(32, 13);
			this->lblState->TabIndex = 9;
			this->lblState->Text = L"State";
			// 
			// gbStudent
			// 
			this->gbStudent->Controls->Add(this->pnlLogin);
			this->gbStudent->Controls->Add(this->pnlHome);
			this->gbStudent->Controls->Add(this->pnlStudent);
			this->gbStudent->Location = System::Drawing::Point(12, 58);
			this->gbStudent->Name = L"gbStudent";
			this->gbStudent->Size = System::Drawing::Size(671, 438);
			this->gbStudent->TabIndex = 5;
			this->gbStudent->TabStop = false;
			this->gbStudent->Text = L"Logon Screen";
			// 
			// pnlLogin
			// 
			this->pnlLogin->Controls->Add(this->btnLogon);
			this->pnlLogin->Controls->Add(this->label3);
			this->pnlLogin->Controls->Add(this->txtPass);
			this->pnlLogin->Controls->Add(this->txtUser);
			this->pnlLogin->Controls->Add(this->pictureBox1);
			this->pnlLogin->Location = System::Drawing::Point(6, 19);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(659, 413);
			this->pnlLogin->TabIndex = 24;
			// 
			// btnLogon
			// 
			this->btnLogon->Location = System::Drawing::Point(281, 289);
			this->btnLogon->Name = L"btnLogon";
			this->btnLogon->Size = System::Drawing::Size(115, 21);
			this->btnLogon->TabIndex = 7;
			this->btnLogon->Text = L"Log In";
			this->btnLogon->UseVisualStyleBackColor = true;
			this->btnLogon->Click += gcnew System::EventHandler(this, &Form1::btnLogon_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Please Log In";
			// 
			// txtPass
			// 
			this->txtPass->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtPass->Location = System::Drawing::Point(225, 251);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(238, 20);
			this->txtPass->TabIndex = 5;
			this->txtPass->Text = L"Password";
			this->txtPass->Enter += gcnew System::EventHandler(this, &Form1::txtPass_Enter);
			this->txtPass->Leave += gcnew System::EventHandler(this, &Form1::txtPass_Leave);
			// 
			// txtUser
			// 
			this->txtUser->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtUser->Location = System::Drawing::Point(225, 214);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(238, 20);
			this->txtUser->TabIndex = 4;
			this->txtUser->Text = L"Client ID";
			this->txtUser->Enter += gcnew System::EventHandler(this, &Form1::txtUser_Enter);
			this->txtUser->Leave += gcnew System::EventHandler(this, &Form1::txtUser_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(239, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pnlHome
			// 
			this->pnlHome->Controls->Add(this->tabLogs);
			this->pnlHome->Controls->Add(this->label2);
			this->pnlHome->Location = System::Drawing::Point(6, 19);
			this->pnlHome->Name = L"pnlHome";
			this->pnlHome->Size = System::Drawing::Size(659, 413);
			this->pnlHome->TabIndex = 1;
			// 
			// tabLogs
			// 
			this->tabLogs->Controls->Add(this->tabPage1);
			this->tabLogs->Controls->Add(this->tabPage2);
			this->tabLogs->Controls->Add(this->tabPage3);
			this->tabLogs->Location = System::Drawing::Point(308, 7);
			this->tabLogs->Name = L"tabLogs";
			this->tabLogs->SelectedIndex = 0;
			this->tabLogs->Size = System::Drawing::Size(346, 398);
			this->tabLogs->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtLog);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(338, 372);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Log";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtLog
			// 
			this->txtLog->Location = System::Drawing::Point(1, 1);
			this->txtLog->Multiline = true;
			this->txtLog->Name = L"txtLog";
			this->txtLog->Size = System::Drawing::Size(336, 370);
			this->txtLog->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtClientIDs);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(338, 372);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Client IDs";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txtClientIDs
			// 
			this->txtClientIDs->Location = System::Drawing::Point(0, 1);
			this->txtClientIDs->Multiline = true;
			this->txtClientIDs->Name = L"txtClientIDs";
			this->txtClientIDs->Size = System::Drawing::Size(337, 370);
			this->txtClientIDs->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->txtStudents);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(338, 372);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Students";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// txtStudents
			// 
			this->txtStudents->Location = System::Drawing::Point(1, 1);
			this->txtStudents->Multiline = true;
			this->txtStudents->Name = L"txtStudents";
			this->txtStudents->Size = System::Drawing::Size(336, 370);
			this->txtStudents->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 265, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(300, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(2, 402);
			this->label2->TabIndex = 0;
			// 
			// pnlStudent
			// 
			this->pnlStudent->AutoScroll = true;
			this->pnlStudent->BackColor = System::Drawing::SystemColors::Control;
			this->pnlStudent->Controls->Add(this->lblOptional);
			this->pnlStudent->Controls->Add(this->lblComment);
			this->pnlStudent->Controls->Add(this->txtJoined);
			this->pnlStudent->Controls->Add(this->txtComment);
			this->pnlStudent->Controls->Add(this->txtMemberNum);
			this->pnlStudent->Controls->Add(this->lblMemNum);
			this->pnlStudent->Controls->Add(this->lblJoined);
			this->pnlStudent->Controls->Add(this->lblOwed);
			this->pnlStudent->Controls->Add(this->txtOwed);
			this->pnlStudent->Controls->Add(this->lblEmail);
			this->pnlStudent->Controls->Add(this->txtEmail);
			this->pnlStudent->Controls->Add(this->lblSchool);
			this->pnlStudent->Controls->Add(this->txtSchool);
			this->pnlStudent->Controls->Add(this->lblHR);
			this->pnlStudent->Controls->Add(this->gbGrade);
			this->pnlStudent->Controls->Add(this->gbActive);
			this->pnlStudent->Controls->Add(this->lblState);
			this->pnlStudent->Controls->Add(this->cmbState);
			this->pnlStudent->Controls->Add(this->gbSex);
			this->pnlStudent->Controls->Add(this->lblLastName);
			this->pnlStudent->Controls->Add(this->txtLastName);
			this->pnlStudent->Controls->Add(this->lblMI);
			this->pnlStudent->Controls->Add(this->txtMI);
			this->pnlStudent->Controls->Add(this->lblFirstName);
			this->pnlStudent->Controls->Add(this->txtFirstName);
			this->pnlStudent->Location = System::Drawing::Point(6, 19);
			this->pnlStudent->Name = L"pnlStudent";
			this->pnlStudent->Size = System::Drawing::Size(657, 413);
			this->pnlStudent->TabIndex = 0;
			// 
			// gbActive
			// 
			this->gbActive->Controls->Add(this->rbNonActive);
			this->gbActive->Controls->Add(this->rbActive);
			this->gbActive->Location = System::Drawing::Point(558, 16);
			this->gbActive->Name = L"gbActive";
			this->gbActive->Size = System::Drawing::Size(96, 118);
			this->gbActive->TabIndex = 8;
			this->gbActive->TabStop = false;
			this->gbActive->Text = L"Active";
			// 
			// cmbState
			// 
			this->cmbState->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbState->FormattingEnabled = true;
			this->cmbState->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"AL", L"AK", L"AZ", L"AR", L"CA", L"CO", L"CT",
					L"DE", L"FL", L"GA", L"HI", L"ID", L"IL", L"IN", L"IA", L"KS", L"KY", L"LA", L"ME", L"MD", L"MA", L"MI", L"MN", L"MS", L"MO",
					L"MT", L"NE", L"NV", L"NH", L"NJ", L"NM", L"NY", L"NC", L"ND", L"OH", L"OK", L"OR", L"PA", L"RI", L"SC", L"SD", L"TN", L"TX",
					L"UT", L"VT", L"VA", L"WA", L"WV", L"WI", L"WY", L"Other"
			});
			this->cmbState->Location = System::Drawing::Point(131, 56);
			this->cmbState->Name = L"cmbState";
			this->cmbState->Size = System::Drawing::Size(74, 21);
			this->cmbState->TabIndex = 8;
			this->cmbState->Text = L"MO";
			// 
			// gbSex
			// 
			this->gbSex->Controls->Add(this->rbFemale);
			this->gbSex->Controls->Add(this->rbMale);
			this->gbSex->Location = System::Drawing::Point(317, 16);
			this->gbSex->Name = L"gbSex";
			this->gbSex->Size = System::Drawing::Size(87, 118);
			this->gbSex->TabIndex = 7;
			this->gbSex->TabStop = false;
			this->gbSex->Text = L"Sex";
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Location = System::Drawing::Point(211, 104);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(58, 13);
			this->lblLastName->TabIndex = 6;
			this->lblLastName->Text = L"Last Name";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(3, 101);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(202, 20);
			this->txtLastName->TabIndex = 5;
			this->txtLastName->TextChanged += gcnew System::EventHandler(this, &Form1::txtLastName_TextChanged);
			// 
			// lblMI
			// 
			this->lblMI->AutoSize = true;
			this->lblMI->Location = System::Drawing::Point(43, 59);
			this->lblMI->Name = L"lblMI";
			this->lblMI->Size = System::Drawing::Size(29, 13);
			this->lblMI->TabIndex = 4;
			this->lblMI->Text = L"M.I.*";
			// 
			// txtMI
			// 
			this->txtMI->Location = System::Drawing::Point(3, 56);
			this->txtMI->Name = L"txtMI";
			this->txtMI->Size = System::Drawing::Size(34, 20);
			this->txtMI->TabIndex = 3;
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Location = System::Drawing::Point(211, 16);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(57, 13);
			this->lblFirstName->TabIndex = 2;
			this->lblFirstName->Text = L"First Name";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(3, 13);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(202, 20);
			this->txtFirstName->TabIndex = 1;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &Form1::txtFirstName_TextChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(19) {
				this->btnHome, this->toolStripSeparator6,
					this->btnNew, this->btnSave, this->toolStripSeparator1, this->btnCut, this->btnCopy, this->btnPaste, this->btnUndo, this->btnClear,
					this->toolStripSeparator2, this->btnPrintPreview, this->btnPrint, this->toolStripSeparator3, this->txtSearch, this->toolStripSeparator4,
					this->cmbSearchBy, this->btnSearch, this->toolStripSeparator5
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(695, 25);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btnHome
			// 
			this->btnHome->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnHome->Enabled = false;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(23, 22);
			this->btnHome->Text = L"Home";
			this->btnHome->Click += gcnew System::EventHandler(this, &Form1::btnHome_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// btnNew
			// 
			this->btnNew->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnNew->Enabled = false;
			this->btnNew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNew.Image")));
			this->btnNew->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(23, 22);
			this->btnNew->Text = L"New";
			this->btnNew->Click += gcnew System::EventHandler(this, &Form1::btnNew_Click);
			// 
			// btnSave
			// 
			this->btnSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnSave->Enabled = false;
			this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
			this->btnSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(23, 22);
			this->btnSave->Text = L"Save";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// btnCut
			// 
			this->btnCut->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnCut->Enabled = false;
			this->btnCut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCut.Image")));
			this->btnCut->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnCut->Name = L"btnCut";
			this->btnCut->Size = System::Drawing::Size(23, 22);
			this->btnCut->Text = L"Cut";
			this->btnCut->Click += gcnew System::EventHandler(this, &Form1::btnCut_Click);
			// 
			// btnCopy
			// 
			this->btnCopy->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnCopy->Enabled = false;
			this->btnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCopy.Image")));
			this->btnCopy->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnCopy->Name = L"btnCopy";
			this->btnCopy->Size = System::Drawing::Size(23, 22);
			this->btnCopy->Text = L"Copy";
			this->btnCopy->Click += gcnew System::EventHandler(this, &Form1::btnCopy_Click);
			// 
			// btnPaste
			// 
			this->btnPaste->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnPaste->Enabled = false;
			this->btnPaste->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPaste.Image")));
			this->btnPaste->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnPaste->Name = L"btnPaste";
			this->btnPaste->Size = System::Drawing::Size(23, 22);
			this->btnPaste->Text = L"Paste";
			this->btnPaste->Click += gcnew System::EventHandler(this, &Form1::btnPaste_Click);
			// 
			// btnUndo
			// 
			this->btnUndo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnUndo->Enabled = false;
			this->btnUndo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUndo.Image")));
			this->btnUndo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnUndo->Name = L"btnUndo";
			this->btnUndo->Size = System::Drawing::Size(23, 22);
			this->btnUndo->Text = L"Undo";
			this->btnUndo->Click += gcnew System::EventHandler(this, &Form1::btnUndo_Click);
			// 
			// btnClear
			// 
			this->btnClear->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnClear->Enabled = false;
			this->btnClear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClear.Image")));
			this->btnClear->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(23, 22);
			this->btnClear->Text = L"Clear All";
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// btnPrintPreview
			// 
			this->btnPrintPreview->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnPrintPreview->Enabled = false;
			this->btnPrintPreview->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrintPreview.Image")));
			this->btnPrintPreview->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnPrintPreview->Name = L"btnPrintPreview";
			this->btnPrintPreview->Size = System::Drawing::Size(23, 22);
			this->btnPrintPreview->Text = L"Print Preview";
			// 
			// btnPrint
			// 
			this->btnPrint->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnPrint->Enabled = false;
			this->btnPrint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrint.Image")));
			this->btnPrint->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(23, 22);
			this->btnPrint->Text = L"Print";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// txtSearch
			// 
			this->txtSearch->Enabled = false;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(125, 25);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// cmbSearchBy
			// 
			this->cmbSearchBy->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSearchBy->Enabled = false;
			this->cmbSearchBy->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Last Name", L"First Name", L"Has Fees", L"Year Joined",
					L"Member #", L"Email", L"School"
			});
			this->cmbSearchBy->Name = L"cmbSearchBy";
			this->cmbSearchBy->Size = System::Drawing::Size(100, 25);
			// 
			// btnSearch
			// 
			this->btnSearch->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnSearch->Enabled = false;
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(23, 22);
			this->btnSearch->Text = L"Search";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 502);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->gbStudent);
			this->MaximumSize = System::Drawing::Size(711, 540);
			this->MinimumSize = System::Drawing::Size(711, 540);
			this->Name = L"Form1";
			this->Text = L"FBLA";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->gbGrade->ResumeLayout(false);
			this->gbGrade->PerformLayout();
			this->gbStudent->ResumeLayout(false);
			this->pnlLogin->ResumeLayout(false);
			this->pnlLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlHome->ResumeLayout(false);
			this->pnlHome->PerformLayout();
			this->tabLogs->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->pnlStudent->ResumeLayout(false);
			this->pnlStudent->PerformLayout();
			this->gbActive->ResumeLayout(false);
			this->gbActive->PerformLayout();
			this->gbSex->ResumeLayout(false);
			this->gbSex->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Variable or array initialization
		String^ feeStr;
		Double feeDbl;
		array <String^>^ temp = gcnew array <String^>(6);
		DateTime now = DateTime::Now;
		bool newForm;
		// ********************************

		// ********************** User Declared Functions **********************
		void toolStripButtons(bool x) { //Faster way to enable and disable toolstrip buttons
			btnHome->Enabled = x;
			btnNew->Enabled = x;
			btnCut->Enabled = x;
			btnCopy->Enabled = x;
			btnPaste->Enabled = x;
			btnUndo->Enabled = x;
			btnSearch->Enabled = x;
			txtSearch->Enabled = x;
			cmbSearchBy->Enabled = x;
			mbtnNew->Enabled = x;
			mbtnExport->Enabled = x;
			mbtnLogout->Enabled = x;
			mbtnUndo->Enabled = x;
			mbtnCut->Enabled = x;
			mbtnCopy->Enabled = x;
			mbtnPaste->Enabled = x;
			mbtnHome->Enabled = x;
			mbtnAccountDetails->Enabled = x;
			mbtnProgramSettings->Enabled = x;
		}

		void newFormTitle() { //Changes the name of the group box to the students name when working with new student forms
			if (!gbStudent->Text->Contains(txtFirstName->Text + " " + txtLastName->Text)) {
				gbStudent->Text = txtFirstName->Text + " " + txtLastName->Text;
				btnSave->Enabled = 1;
				mbtnSave->Enabled = 1;
				if (txtMemberNum->Text != "") {
					gbStudent->Text += " - " + txtMemberNum->Text;
				}
				this->Text = "FBLA - " + gbStudent->Text;
			}
		}

		// *********************************************************************

		// *********** On Form Load **********
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		feeDbl = 0.00;
		ttOptional->SetToolTip(lblMI, "Optional");
		ttOptional->SetToolTip(lblComment, "Optional");
		this->Text = "Form - Login Screen";
		cmbSearchBy->SelectedIndex = 0;
	}
			 // ***********************************


			 // **************** Form Controls ******************************
	private: System::Void txtOwed_Leave(System::Object^  sender, System::EventArgs^  e) {
		Double::TryParse(txtOwed->Text, feeDbl);
		if (!txtOwed->Text->Contains("$")) {
			txtOwed->Text = "$" + txtOwed->Text;
		}
		if (!txtOwed->Text->Contains(".")) {
			txtOwed->Text += ".00";
		}
		temp = txtOwed->Text->Split('.');
		if (temp[1]->Length == 1) {
			temp[1] += "0";
			txtOwed->Text = temp[0]+"."+temp[1];
		}
	}
	private: System::Void txtOwed_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (txtOwed->Text->Contains("$")) {
			txtOwed->Text = feeDbl.ToString();
		}
	}
			 // **************************************************************

			 // ********************** These buttons control clear cut copy paste and undo keystrokes **********************
	private: System::Void btnCut_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^x");
	}
	private: System::Void mbtnCut_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^x");
	}
	private: System::Void btnCopy_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^c");
	}
	private: System::Void mbtnCopy_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^c");
	}
	private: System::Void btnPaste_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^v");
	}
	private: System::Void mbtnPaste_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^v");
	}
	private: System::Void btnUndo_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^z");
	}
	private: System::Void mbtnUndo_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^z");
	}
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Are you sure that you want to clear ALL information?", "Clear All", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			txtFirstName->Text = ""; txtLastName->Text = ""; txtMI->Text = ""; cmbState->Text = "MO"; txtSchool->Text = ""; txtEmail->Text = ""; gbStudent->Text = "";
			txtComment->Text = ""; txtOwed->Text = "$0.00"; txtJoined->Text = now.Year.ToString(); txtMemberNum->Text = ""; rbGrade9->Checked = true; rbMale->Checked = true; rbActive->Checked = true;
		}
	}
	private: System::Void mbtnClearAll_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Are you sure that you want to clear ALL information?", "Clear All", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			txtFirstName->Text = ""; txtLastName->Text = ""; txtMI->Text = ""; cmbState->Text = "MO"; txtSchool->Text = ""; txtEmail->Text = ""; gbStudent->Text = "";
			txtComment->Text = ""; txtOwed->Text = "$0.00"; txtJoined->Text = now.Year.ToString(); txtMemberNum->Text = ""; rbGrade9->Checked = true; rbMale->Checked = true; rbActive->Checked = true;
		}
	}
			 //*************************************************************************************************************

			 // ********************** These buttons handle the movement of panels and renaming of group boxes **********************

	private: System::Void btnLogon_Click(System::Object^  sender, System::EventArgs^  e) {
		gbStudent->Text = "Home";
		this->Text = "FBLA - Home";
		pnlHome->BringToFront();
		txtLog->Text = "Date\t\tChanged\t\t\tClient ID\r\n";
		txtClientIDs->Text = "Client ID\t\tNick\t\t\tChanges";
		txtStudents->Text = "Member #\tFirst Name\t\tLast Name";
		txtJoined->Text = now.Year.ToString();
		toolStripButtons(1);
	}
	private: System::Void mbtnHome_Click(System::Object^  sender, System::EventArgs^  e) {
		gbStudent->Text = "Home";
		this->Text = "FBLA - Home";
		pnlHome->BringToFront();
		txtLog->Text = "Date\t\tChanged\t\t\tClient ID\r\n";
		txtClientIDs->Text = "Client ID\t\tNick\t\t\tChanges";
		txtStudents->Text = "Member #\tFirst Name\t\tLast Name";
		toolStripButtons(1);
	}

	private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// Add later: if not saved, request save function
		gbStudent->Text = "Logon Screen";
		this->Text = "FBLA - Login Screen";
		pnlLogin->BringToFront();
		toolStripButtons(0);
	}

	private: System::Void mbtnNew_Click(System::Object^  sender, System::EventArgs^  e) {
		// Add later: if not saved, request save function
		mbtnPrint->Enabled = 1;
		this->Text = "FBLA";
		mbtnClearAll->Enabled = 1;
		mbtnPrintPreview->Enabled = 1;
		mbtnSave->Enabled = 0;
		btnSave->Enabled = 0;
		btnClear->Enabled = 1;
		btnPrint->Enabled = 1;
		btnPrintPreview->Enabled = 1;
		newForm = 1;
		gbStudent->Text = txtFirstName->Text + " " + txtLastName->Text;
		pnlStudent->BringToFront();
	}

	private: System::Void btnNew_Click(System::Object^  sender, System::EventArgs^  e) {
		// Add later: if not saved, request save function
		mbtnPrint->Enabled = 1;
		mbtnClearAll->Enabled = 1;
		mbtnPrintPreview->Enabled = 1;
		mbtnSave->Enabled = 0;
		this->Text = "FBLA";
		btnSave->Enabled = 0;
		btnClear->Enabled = 1;
		btnPrint->Enabled = 1;
		btnPrintPreview->Enabled = 1;
		newForm = 1;
		gbStudent->Text = txtFirstName->Text + " " + txtLastName->Text;
		pnlStudent->BringToFront();
	}

	private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
		// Add later: if not saved, request save function
		pnlHome->BringToFront();
		gbStudent->Text = "Home";
		this->Text = "FBLA - Home";
	}
			 //**********************************************************************************************************************

			 // *********** Changes the group box title on new forms to reflect data being entered ***********
	private: System::Void txtFirstName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		newFormTitle();
	}
	private: System::Void txtLastName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		newFormTitle();
	}
	private: System::Void txtMemberNum_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (txtMemberNum->Text != "" && !gbStudent->Text->Contains(txtMemberNum->Text)) {
			gbStudent->Text = txtFirstName->Text + " " + txtLastName->Text + " - " + txtMemberNum->Text;
		}
	}
			 // **********************************************************************************************

			 // ***** Deals with the ghost text in login boxes *****
	private: System::Void txtUser_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (txtUser->Text == "Client ID") {
			txtUser->ForeColor = SystemColors::WindowText;
			txtUser->Text = "";
		}
	}

	private: System::Void txtUser_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (txtUser->Text == "Client ID" || txtUser->Text == "") {
			txtUser->ForeColor = SystemColors::WindowFrame;
			txtUser->Text = "Client ID";
		}
	}

	private: System::Void txtPass_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (txtPass->Text == "Password") {
			txtPass->ForeColor = SystemColors::WindowText;
			txtPass->PasswordChar = '*';
			txtPass->Text = "";
		}
	}

	private: System::Void txtPass_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (txtPass->Text == "Password" || txtPass->Text == "") {
			txtPass->ForeColor = SystemColors::WindowFrame;
			txtPass->Text = "Password";
			txtPass->PasswordChar = false;
		}
	}

			 // ****************************************************


	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Are you sure you want to exit the application?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
			 // **************** CREDITS PAGE ****************
	private: System::Void creditsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Seth Dixon - Programmer\r\nMichael Blades - Programmer\r\n\r\nIcons by:\r\nFreepik @ Flaticon.com\r\nYannik @ Flaticon.com\r\nGoogle @ Flaticon.com", "Credits");
	}
			 // **********************************************
};
}
