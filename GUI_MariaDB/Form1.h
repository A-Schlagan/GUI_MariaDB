#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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

	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::TextBox^ txt_Vorname;
	private: System::Windows::Forms::TextBox^ txt_Nachname;

	private: System::Windows::Forms::Label^ lbl_ID;
	private: System::Windows::Forms::Label^ lbl_Vorname;
	private: System::Windows::Forms::Label^ lbl_Nachname;
	private: System::Windows::Forms::Button^ btn_left;
	private: System::Windows::Forms::Button^ btn_right;
	private: System::Windows::Forms::TextBox^ txt_ID2; 

	protected:

	protected:

	private:
		int aktuelleID = 1;
		int maxID = 1;

	private: System::Windows::Forms::TextBox^ txt_maxID;

	private: System::Windows::Forms::Label^ lbl_von;


		   /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->txt_Vorname = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nachname = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->lbl_Vorname = (gcnew System::Windows::Forms::Label());
			this->lbl_Nachname = (gcnew System::Windows::Forms::Label());
			this->btn_left = (gcnew System::Windows::Forms::Button());
			this->btn_right = (gcnew System::Windows::Forms::Button());
			this->txt_ID2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_maxID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_von = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(343, 67);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(153, 20);
			this->txt_ID->TabIndex = 1;
			// 
			// txt_Vorname
			// 
			this->txt_Vorname->Location = System::Drawing::Point(343, 112);
			this->txt_Vorname->Name = L"txt_Vorname";
			this->txt_Vorname->Size = System::Drawing::Size(153, 20);
			this->txt_Vorname->TabIndex = 2;
			// 
			// txt_Nachname
			// 
			this->txt_Nachname->Location = System::Drawing::Point(343, 162);
			this->txt_Nachname->Name = L"txt_Nachname";
			this->txt_Nachname->Size = System::Drawing::Size(153, 20);
			this->txt_Nachname->TabIndex = 3;
			// 
			// lbl_ID
			// 
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ID->Location = System::Drawing::Point(244, 67);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(26, 20);
			this->lbl_ID->TabIndex = 5;
			this->lbl_ID->Text = L"ID";
			// 
			// lbl_Vorname
			// 
			this->lbl_Vorname->AutoSize = true;
			this->lbl_Vorname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Vorname->Location = System::Drawing::Point(244, 112);
			this->lbl_Vorname->Name = L"lbl_Vorname";
			this->lbl_Vorname->Size = System::Drawing::Size(74, 20);
			this->lbl_Vorname->TabIndex = 6;
			this->lbl_Vorname->Text = L"Vorname";
			// 
			// lbl_Nachname
			// 
			this->lbl_Nachname->AutoSize = true;
			this->lbl_Nachname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Nachname->Location = System::Drawing::Point(244, 160);
			this->lbl_Nachname->Name = L"lbl_Nachname";
			this->lbl_Nachname->Size = System::Drawing::Size(86, 20);
			this->lbl_Nachname->TabIndex = 7;
			this->lbl_Nachname->Text = L"Nachname";
			// 
			// btn_left
			// 
			this->btn_left->Location = System::Drawing::Point(248, 413);
			this->btn_left->Name = L"btn_left";
			this->btn_left->Size = System::Drawing::Size(50, 26);
			this->btn_left->TabIndex = 8;
			this->btn_left->Text = L"<";
			this->btn_left->UseVisualStyleBackColor = true;
			this->btn_left->Click += gcnew System::EventHandler(this, &Form1::btn_left_Click);
			// 
			// btn_right
			// 
			this->btn_right->Location = System::Drawing::Point(463, 413);
			this->btn_right->Name = L"btn_right";
			this->btn_right->Size = System::Drawing::Size(50, 26);
			this->btn_right->TabIndex = 9;
			this->btn_right->Text = L">";
			this->btn_right->UseVisualStyleBackColor = true;
			this->btn_right->Click += gcnew System::EventHandler(this, &Form1::btn_right_Click);
			// 
			// txt_ID2
			// 
			this->txt_ID2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ID2->Location = System::Drawing::Point(304, 413);
			this->txt_ID2->Name = L"txt_ID2";
			this->txt_ID2->ReadOnly = true;
			this->txt_ID2->Size = System::Drawing::Size(61, 26);
			this->txt_ID2->TabIndex = 10;
			this->txt_ID2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_maxID
			// 
			this->txt_maxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_maxID->Location = System::Drawing::Point(394, 413);
			this->txt_maxID->Name = L"txt_maxID";
			this->txt_maxID->ReadOnly = true;
			this->txt_maxID->Size = System::Drawing::Size(63, 26);
			this->txt_maxID->TabIndex = 11;
			this->txt_maxID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl_von
			// 
			this->lbl_von->AutoSize = true;
			this->lbl_von->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_von->Location = System::Drawing::Point(364, 419);
			this->lbl_von->Name = L"lbl_von";
			this->lbl_von->Size = System::Drawing::Size(34, 20);
			this->lbl_von->TabIndex = 12;
			this->lbl_von->Text = L"von";
			this->lbl_von->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 572);
			this->Controls->Add(this->lbl_von);
			this->Controls->Add(this->txt_maxID);
			this->Controls->Add(this->txt_ID2);
			this->Controls->Add(this->btn_right);
			this->Controls->Add(this->btn_left);
			this->Controls->Add(this->lbl_Nachname);
			this->Controls->Add(this->lbl_Vorname);
			this->Controls->Add(this->lbl_ID);
			this->Controls->Add(this->txt_Nachname);
			this->Controls->Add(this->txt_Vorname);
			this->Controls->Add(this->txt_ID);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: void datensatz_auslesen(int gesuchteID) {
		String^ sqltxt;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA";
		// connect zur DB
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		// sql über connect
		sqltxt = "SELECT*, (SELECT COUNT(ID) FROM sql_database_test.tbl_test) AS max_id "
			"FROM sql_database_test.tbl_test WHERE ID =@ID;";

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(sqltxt, conDataBase);
		//reader
		cmdDataBase->Parameters->AddWithValue("@ID", gesuchteID);
		MySqlDataReader^ myReader;


		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			if (myReader->Read()) {
				this->txt_ID->Text = myReader->GetInt32(0).ToString();
				this->txt_ID2->Text = myReader->GetInt32(0).ToString();
				this->txt_Vorname->Text = myReader->GetString(1);
				this->txt_Nachname->Text = myReader->GetString(2);
				this->txt_maxID->Text = myReader["max_id"]->ToString();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void btn_left_Click(System::Object^ sender, System::EventArgs^ e) {
		if (aktuelleID >1){
			aktuelleID--;
			datensatz_auslesen(aktuelleID);
		}
		else
		{
			MessageBox::Show("Bist du dumm? Ist schon 1!!!","Information", 
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void btn_right_Click(System::Object^ sender, System::EventArgs^ e) {
		aktuelleID++;
		datensatz_auslesen(aktuelleID);
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		aktuelleID = 1;
		datensatz_auslesen(aktuelleID);
	}

};
}
