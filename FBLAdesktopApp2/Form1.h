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
	private: System::Windows::Forms::TextBox^  textBox1;
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
	private: System::Windows::Forms::ToolStripMenuItem^  studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
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
	private: System::Windows::Forms::GroupBox^  gbLogon;


	private: System::Windows::Forms::Button^  btnLogon;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtPass;

	private: System::Windows::Forms::TextBox^  txtUser;

	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  pnlHome;









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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblHR = (gcnew System::Windows::Forms::Label());
			this->gbGrade = (gcnew System::Windows::Forms::GroupBox());
			this->lblState = (gcnew System::Windows::Forms::Label());
			this->gbStudent = (gcnew System::Windows::Forms::GroupBox());
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->gbLogon = (gcnew System::Windows::Forms::GroupBox());
			this->btnLogon = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->pnlHome = (gcnew System::Windows::Forms::Panel());
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
			this->gbLogon->SuspendLayout();
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(477, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 20);
			this->textBox1->TabIndex = 20;
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
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->studentToolStripMenuItem, this->toolsToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(695, 24);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->logOutToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->logOutToolStripMenuItem->Text = L"Log Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::logOutToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->studentToolStripMenuItem->Text = L"Student";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
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
			this->pnlLogin->Controls->Add(this->gbLogon);
			this->pnlLogin->Location = System::Drawing::Point(6, 19);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(659, 413);
			this->pnlLogin->TabIndex = 24;
			// 
			// gbLogon
			// 
			this->gbLogon->Controls->Add(this->btnLogon);
			this->gbLogon->Controls->Add(this->label1);
			this->gbLogon->Controls->Add(this->txtPass);
			this->gbLogon->Controls->Add(this->txtUser);
			this->gbLogon->Location = System::Drawing::Point(168, 87);
			this->gbLogon->Name = L"gbLogon";
			this->gbLogon->Size = System::Drawing::Size(359, 218);
			this->gbLogon->TabIndex = 0;
			this->gbLogon->TabStop = false;
			this->gbLogon->Text = L"FBLA";
			// 
			// btnLogon
			// 
			this->btnLogon->Location = System::Drawing::Point(121, 157);
			this->btnLogon->Name = L"btnLogon";
			this->btnLogon->Size = System::Drawing::Size(115, 21);
			this->btnLogon->TabIndex = 3;
			this->btnLogon->Text = L"Logon";
			this->btnLogon->UseVisualStyleBackColor = true;
			this->btnLogon->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please Log In";
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(65, 119);
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(238, 20);
			this->txtPass->TabIndex = 1;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(65, 82);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(238, 20);
			this->txtUser->TabIndex = 0;
			// 
			// pnlHome
			// 
			this->pnlHome->Location = System::Drawing::Point(6, 19);
			this->pnlHome->Name = L"pnlHome";
			this->pnlHome->Size = System::Drawing::Size(659, 413);
			this->pnlHome->TabIndex = 1;
			// 
			// pnlStudent
			// 
			this->pnlStudent->AutoScroll = true;
			this->pnlStudent->BackColor = System::Drawing::SystemColors::Control;
			this->pnlStudent->Controls->Add(this->lblOptional);
			this->pnlStudent->Controls->Add(this->lblComment);
			this->pnlStudent->Controls->Add(this->txtJoined);
			this->pnlStudent->Controls->Add(this->txtComment);
			this->pnlStudent->Controls->Add(this->textBox1);
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
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(17) {
				this->btnNew, this->btnSave,
					this->toolStripSeparator1, this->btnCut, this->btnCopy, this->btnPaste, this->btnUndo, this->btnClear, this->toolStripSeparator2,
					this->btnPrintPreview, this->btnPrint, this->toolStripSeparator3, this->txtSearch, this->toolStripSeparator4, this->cmbSearchBy,
					this->btnSearch, this->toolStripSeparator5
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(695, 25);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btnNew
			// 
			this->btnNew->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
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
			this->btnClear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClear.Image")));
			this->btnClear->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(23, 22);
			this->btnClear->Text = L"Clear All";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// btnPrintPreview
			// 
			this->btnPrintPreview->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnPrintPreview->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrintPreview.Image")));
			this->btnPrintPreview->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnPrintPreview->Name = L"btnPrintPreview";
			this->btnPrintPreview->Size = System::Drawing::Size(23, 22);
			this->btnPrintPreview->Text = L"Print Preview";
			// 
			// btnPrint
			// 
			this->btnPrint->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
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
			this->Text = L"Form1";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->gbGrade->ResumeLayout(false);
			this->gbGrade->PerformLayout();
			this->gbStudent->ResumeLayout(false);
			this->pnlLogin->ResumeLayout(false);
			this->gbLogon->ResumeLayout(false);
			this->gbLogon->PerformLayout();
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
		// ********************************

		// *********** On Form Load **********
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		feeDbl = 0.00;
		ttOptional->SetToolTip(lblMI, "Optional");
		ttOptional->SetToolTip(lblComment, "Optional");
		pnlLogin->BringToFront();
	}
			 // ***********************************


			 // **************** Form Controls ******************************
	private: System::Void txtOwed_Leave(System::Object^  sender, System::EventArgs^  e) {
		Double::TryParse(txtOwed->Text, feeDbl);
		if (!txtOwed->Text->Contains("$")) {
			txtOwed->Text = "$" + txtOwed->Text;
		}
		feeStr = txtOwed->Text;
	}
	private: System::Void txtOwed_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (txtOwed->Text->Contains("$")) {
			txtOwed->Text = feeDbl.ToString();
		}

		if (!feeDbl.ToString()->Contains(".")) {
			txtOwed->Text += ".00";
		}
		else {
			txtOwed->Text = feeStr;
		}
	}
			 // **************************************************************

	private: System::Void btnCut_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^x");
	}
	private: System::Void btnCopy_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^c");
	}
	private: System::Void btnPaste_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^v");
	}
	private: System::Void btnUndo_Click(System::Object^  sender, System::EventArgs^  e) {
		SendKeys::Send("^z");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlHome->BringToFront();
	}
	private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlLogin->BringToFront();
	}
	private: System::Void btnNew_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlStudent->BringToFront();
	}
};
}
