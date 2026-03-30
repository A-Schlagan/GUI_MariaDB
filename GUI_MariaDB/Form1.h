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
	private: System::Windows::Forms::Button^ btn_auslesen;
	private: System::Windows::Forms::Button^ btn_aendern;
	private: System::Windows::Forms::Button^ btn_neu;
	private: System::Windows::Forms::Button^ btn_loeschen;
	private: System::Windows::Forms::Button^ btn_AufAb;



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
			this->btn_auslesen = (gcnew System::Windows::Forms::Button());
			this->btn_aendern = (gcnew System::Windows::Forms::Button());
			this->btn_neu = (gcnew System::Windows::Forms::Button());
			this->btn_loeschen = (gcnew System::Windows::Forms::Button());
			this->btn_AufAb = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(340, 182);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->ReadOnly = true;
			this->txt_ID->Size = System::Drawing::Size(153, 20);
			this->txt_ID->TabIndex = 1;
			// 
			// txt_Vorname
			// 
			this->txt_Vorname->Location = System::Drawing::Point(340, 227);
			this->txt_Vorname->Name = L"txt_Vorname";
			this->txt_Vorname->Size = System::Drawing::Size(153, 20);
			this->txt_Vorname->TabIndex = 2;
			// 
			// txt_Nachname
			// 
			this->txt_Nachname->Location = System::Drawing::Point(340, 277);
			this->txt_Nachname->Name = L"txt_Nachname";
			this->txt_Nachname->Size = System::Drawing::Size(153, 20);
			this->txt_Nachname->TabIndex = 3;
			// 
			// lbl_ID
			// 
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ID->Location = System::Drawing::Point(241, 182);
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
			this->lbl_Vorname->Location = System::Drawing::Point(241, 227);
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
			this->lbl_Nachname->Location = System::Drawing::Point(241, 275);
			this->lbl_Nachname->Name = L"lbl_Nachname";
			this->lbl_Nachname->Size = System::Drawing::Size(86, 20);
			this->lbl_Nachname->TabIndex = 7;
			this->lbl_Nachname->Text = L"Nachname";
			// 
			// btn_left
			// 
			this->btn_left->Location = System::Drawing::Point(239, 78);
			this->btn_left->Name = L"btn_left";
			this->btn_left->Size = System::Drawing::Size(50, 26);
			this->btn_left->TabIndex = 8;
			this->btn_left->Text = L"<";
			this->btn_left->UseVisualStyleBackColor = true;
			this->btn_left->Click += gcnew System::EventHandler(this, &Form1::btn_left_Click);
			// 
			// btn_right
			// 
			this->btn_right->Location = System::Drawing::Point(454, 78);
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
			this->txt_ID2->Location = System::Drawing::Point(295, 78);
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
			this->txt_maxID->Location = System::Drawing::Point(385, 78);
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
			this->lbl_von->Location = System::Drawing::Point(355, 84);
			this->lbl_von->Name = L"lbl_von";
			this->lbl_von->Size = System::Drawing::Size(34, 20);
			this->lbl_von->TabIndex = 12;
			this->lbl_von->Text = L"von";
			this->lbl_von->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_auslesen
			// 
			this->btn_auslesen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_auslesen->Location = System::Drawing::Point(12, 508);
			this->btn_auslesen->Name = L"btn_auslesen";
			this->btn_auslesen->Size = System::Drawing::Size(128, 52);
			this->btn_auslesen->TabIndex = 13;
			this->btn_auslesen->Text = L"Auslesen";
			this->btn_auslesen->UseVisualStyleBackColor = true;
			this->btn_auslesen->Click += gcnew System::EventHandler(this, &Form1::btn_auslesen_Click);
			// 
			// btn_aendern
			// 
			this->btn_aendern->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_aendern->Location = System::Drawing::Point(146, 508);
			this->btn_aendern->Name = L"btn_aendern";
			this->btn_aendern->Size = System::Drawing::Size(124, 52);
			this->btn_aendern->TabIndex = 14;
			this->btn_aendern->Text = L"Anpassen";
			this->btn_aendern->UseVisualStyleBackColor = true;
			this->btn_aendern->Click += gcnew System::EventHandler(this, &Form1::btn_aendern_Click);
			// 
			// btn_neu
			// 
			this->btn_neu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_neu->Location = System::Drawing::Point(276, 508);
			this->btn_neu->Name = L"btn_neu";
			this->btn_neu->Size = System::Drawing::Size(124, 52);
			this->btn_neu->TabIndex = 15;
			this->btn_neu->Text = L"Neu";
			this->btn_neu->UseVisualStyleBackColor = true;
			this->btn_neu->Click += gcnew System::EventHandler(this, &Form1::btn_neu_Click);
			// 
			// btn_loeschen
			// 
			this->btn_loeschen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_loeschen->Location = System::Drawing::Point(406, 508);
			this->btn_loeschen->Name = L"btn_loeschen";
			this->btn_loeschen->Size = System::Drawing::Size(124, 52);
			this->btn_loeschen->TabIndex = 16;
			this->btn_loeschen->Text = L"Entfernen";
			this->btn_loeschen->UseVisualStyleBackColor = true;
			this->btn_loeschen->Click += gcnew System::EventHandler(this, &Form1::btn_loeschen_Click);
			// 
			// btn_AufAb
			// 
			this->btn_AufAb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_AufAb->Location = System::Drawing::Point(508, 182);
			this->btn_AufAb->Name = L"btn_AufAb";
			this->btn_AufAb->Size = System::Drawing::Size(110, 20);
			this->btn_AufAb->TabIndex = 17;
			this->btn_AufAb->Text = L"Aufsteigend sortiert";
			this->btn_AufAb->UseVisualStyleBackColor = true;
			this->btn_AufAb->Click += gcnew System::EventHandler(this, &Form1::btn_AufAb_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 572);
			this->Controls->Add(this->btn_AufAb);
			this->Controls->Add(this->btn_loeschen);
			this->Controls->Add(this->btn_neu);
			this->Controls->Add(this->btn_aendern);
			this->Controls->Add(this->btn_auslesen);
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
	
	// Auslagerung des Datenbank-Commands 
	private: MySqlDataReader^ cmdDB(String^ sqltxt) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(sqltxt, conDataBase);
		MySqlDataReader^ myReader;

		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			return myReader;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			return nullptr;
		}
		
	}

	private: void datensatz_auslesen() {
		int datensatz;
		String^ sqltxt;
		String^ sqltxtmax;

		if (!int::TryParse(this->txt_ID2->Text, datensatz)) {
			return; 
		}

		String^ richtung = "ASC"; // Aufsteigend 
		if (this->btn_AufAb->Text == "Ab") {
			richtung = "DESC"; // Absteigend 
		}

		sqltxt = "SELECT * FROM sql_database_test.tbl_test ORDER BY ID " + richtung + " LIMIT " + (datensatz - 1) + ", 1;";
		sqltxtmax = "SELECT COUNT(ID) FROM sql_database_test.tbl_test;";

		MySqlDataReader^ myReader;

		try {
			// Maximum auslesen und in txt_maxID schreiben
			myReader = cmdDB(sqltxtmax);
			if (myReader != nullptr && myReader->Read()) {
				this->txt_maxID->Text = myReader->GetInt32(0).ToString();
			}
			// Reader schließen
			if (myReader != nullptr) myReader->Close();

			// Datensatz holen
			myReader = cmdDB(sqltxt);
			while (myReader != nullptr && myReader->Read()) {
				this->txt_ID->Text = myReader->GetInt32(0).ToString();
				this->txt_Vorname->Text = myReader->GetString(1);
				this->txt_Nachname->Text = myReader->GetString(2);
			}
			if (myReader != nullptr) myReader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void btn_left_Click(System::Object^ sender, System::EventArgs^ e) {
		int datensatz;
		datensatz = int::Parse(this->txt_ID2->Text);
		datensatz--; // Einen Datensatz zurück

		if (datensatz < 1) {
			MessageBox::Show("Sie sind beim ersten Datensatz!");
			datensatz = 1; // Bleibt bei 1
		}

		this->txt_ID2->Text = datensatz.ToString();
		datensatz_auslesen();
	}

	private: System::Void btn_right_Click(System::Object^ sender, System::EventArgs^ e) {
		int datensatz, datensatzmax;
		datensatz = int::Parse(this->txt_ID2->Text);
		datensatzmax = int::Parse(this->txt_maxID->Text);
		datensatz++; // Einen Datensatz vor

		if (datensatz > datensatzmax) {
			MessageBox::Show("Sie sind beim letzten Datensatz!");
			datensatz--; // Setzt den Zähler wieder zurück auf das Maximum
		}

		this->txt_ID2->Text = datensatz.ToString();
		datensatz_auslesen();
	}

	// Beim Laden der Form
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Startwerte setzen, damit .Parse() nicht abstürzt
		this->txt_ID2->Text = "1";
		this->txt_maxID->Text = "1";

		datensatz_auslesen();
	}

	private: System::Void btn_auslesen_Click(System::Object^ sender, System::EventArgs^ e) {
		datensatz_auslesen();
	}

	private: System::Void btn_aendern_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->txt_ID->Text;
		String^ neuerVorname = this->txt_Vorname->Text;
		String^ neuerNachname = this->txt_Nachname->Text;

		String^ sqltxt = "UPDATE sql_database_test.tbl_test SET Vorname = '" + neuerVorname + "', Nachname = '" + neuerNachname + "' WHERE ID = " + id + ";";

		MySqlDataReader^ myReader = cmdDB(sqltxt);//Methode aufrufen

		if (myReader != nullptr) {
			MessageBox::Show("Datensatz erfolgreich angepasst!");

			// Ansicht aktualisieren
			datensatz_auslesen();
		}
	}
	private: System::Void btn_neu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sqltxt = "SELECT MAX(ID) FROM sql_database_test.tbl_test;";
		MySqlDataReader^ myReader = cmdDB(sqltxt);

		int neueID = 1;

		if (myReader->Read()) {
			if (!myReader->IsDBNull(0)) {
				neueID = myReader->GetInt32(0) + 1;
			}
		}
		myReader->Close();

		sqltxt = "INSERT INTO sql_database_test.tbl_test (ID, Vorname, Nachname) VALUES (" + neueID + ", '', '');";
		myReader = cmdDB(sqltxt);
		if (myReader != nullptr) {
			myReader->Close(); 
		}

		sqltxt = "SELECT COUNT(ID) FROM sql_database_test.tbl_test;";
		myReader = cmdDB(sqltxt);
		int maxAnzahl = 1;
		if (myReader != nullptr) {
			if (myReader->Read()) {
				maxAnzahl = myReader->GetInt32(0);
			}
			myReader->Close(); 
		}

		// Anzeige auf den neu angelegten Datensatz setzen
		this->txt_ID2->Text = maxAnzahl.ToString();
		datensatz_auslesen();

	}
	private: System::Void btn_loeschen_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->txt_ID->Text;

		//Abfrage
		System::Windows::Forms::DialogResult antwort = MessageBox::Show(
			"Datensatz mit der ID " + id + " wirklich entfernen?",
			"Bestätigen",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (antwort != System::Windows::Forms::DialogResult::Yes) {
			return;
		}

		String^ sqltxt = "DELETE FROM sql_database_test.tbl_test WHERE ID = " + id + ";";

		MySqlDataReader^ myReader = cmdDB(sqltxt);//Methode aufrufen

		if (myReader != nullptr) {
			myReader->Close();
			MessageBox::Show("Datensatz erfolgreich entfernt!");

			this->txt_ID2->Text = "1";

			datensatz_auslesen();
		}
	}
	private: System::Void btn_AufAb_Click(System::Object^ sender, System::EventArgs^ e) {
		if(this->btn_AufAb->Text == "Aufsteigend sortiert"){
			this->btn_AufAb->Text = "Absteigend sortiert";
			this->btn_AufAb->BackColor = Color::LightBlue;
		}
		else {
			this->btn_AufAb->Text = "Aufsteigend sortiert";
			this->btn_AufAb->BackColor = Color::White;
		}
		this->txt_ID2->Text = "1";
		datensatz_auslesen();		
	}
};
}
