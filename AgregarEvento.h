#pragma once

namespace Proyecto2Avanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarEvento
	/// </summary>
	public ref class AgregarEvento : public System::Windows::Forms::Form
	{
	public:
		AgregarEvento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AgregarEvento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rtbMaterialsWatermark;
	protected:
	private: System::Windows::Forms::RichTextBox^ rtbMaterials;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtInvolvedPeopleWatermark;
	private: System::Windows::Forms::TextBox^ txtInvolvedPeople;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtmeetingPlaceWatermark;
	private: System::Windows::Forms::TextBox^ txtmeetingPlace;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtendHourWatermark;
	private: System::Windows::Forms::TextBox^ txtendHour;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cbPriority;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtIdentifierWatermark;
	private: System::Windows::Forms::TextBox^ txtIdentifier;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ rtbDescriptionWatermark;
	private: System::Windows::Forms::RichTextBox^ rtbDescription;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtstartHourWatermark;
	private: System::Windows::Forms::TextBox^ txtstartHour;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbEvents;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rtbMaterialsWatermark = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbMaterials = (gcnew System::Windows::Forms::RichTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtInvolvedPeopleWatermark = (gcnew System::Windows::Forms::TextBox());
			this->txtInvolvedPeople = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtmeetingPlaceWatermark = (gcnew System::Windows::Forms::TextBox());
			this->txtmeetingPlace = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtendHourWatermark = (gcnew System::Windows::Forms::TextBox());
			this->txtendHour = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbPriority = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtIdentifierWatermark = (gcnew System::Windows::Forms::TextBox());
			this->txtIdentifier = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rtbDescriptionWatermark = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtstartHourWatermark = (gcnew System::Windows::Forms::TextBox());
			this->txtstartHour = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbEvents = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// rtbMaterialsWatermark
			// 
			this->rtbMaterialsWatermark->Enabled = false;
			this->rtbMaterialsWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbMaterialsWatermark->Location = System::Drawing::Point(259, 238);
			this->rtbMaterialsWatermark->Name = L"rtbMaterialsWatermark";
			this->rtbMaterialsWatermark->Size = System::Drawing::Size(177, 84);
			this->rtbMaterialsWatermark->TabIndex = 49;
			this->rtbMaterialsWatermark->Text = L"Ingrese los materiales aqu�";
			this->rtbMaterialsWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::rtbMaterialsWatermark_MouseClick);
			this->rtbMaterialsWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbMaterialsWatermark_TextChanged);
			// 
			// rtbMaterials
			// 
			this->rtbMaterials->Enabled = false;
			this->rtbMaterials->Location = System::Drawing::Point(259, 237);
			this->rtbMaterials->Name = L"rtbMaterials";
			this->rtbMaterials->Size = System::Drawing::Size(177, 84);
			this->rtbMaterials->TabIndex = 48;
			this->rtbMaterials->Text = L"";
			this->rtbMaterials->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbMaterials_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(256, 222);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(136, 13);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Materiales a necesitar:";
			// 
			// txtInvolvedPeopleWatermark
			// 
			this->txtInvolvedPeopleWatermark->Enabled = false;
			this->txtInvolvedPeopleWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtInvolvedPeopleWatermark->Location = System::Drawing::Point(259, 186);
			this->txtInvolvedPeopleWatermark->Name = L"txtInvolvedPeopleWatermark";
			this->txtInvolvedPeopleWatermark->Size = System::Drawing::Size(177, 20);
			this->txtInvolvedPeopleWatermark->TabIndex = 46;
			this->txtInvolvedPeopleWatermark->Text = L"<persona1>,<persona2>...";
			this->txtInvolvedPeopleWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtInvolvedPeopleWatermark_MouseClick);
			this->txtInvolvedPeopleWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtInvolvedPeopleWatermark_TextChanged);
			// 
			// txtInvolvedPeople
			// 
			this->txtInvolvedPeople->Enabled = false;
			this->txtInvolvedPeople->Location = System::Drawing::Point(259, 186);
			this->txtInvolvedPeople->Name = L"txtInvolvedPeople";
			this->txtInvolvedPeople->Size = System::Drawing::Size(177, 20);
			this->txtInvolvedPeople->TabIndex = 45;
			this->txtInvolvedPeople->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtInvolvedPeople_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(256, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Personas involucradas:";
			// 
			// txtmeetingPlaceWatermark
			// 
			this->txtmeetingPlaceWatermark->Enabled = false;
			this->txtmeetingPlaceWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtmeetingPlaceWatermark->Location = System::Drawing::Point(259, 136);
			this->txtmeetingPlaceWatermark->Name = L"txtmeetingPlaceWatermark";
			this->txtmeetingPlaceWatermark->Size = System::Drawing::Size(177, 20);
			this->txtmeetingPlaceWatermark->TabIndex = 43;
			this->txtmeetingPlaceWatermark->Text = L"Ingrese el lugar aqu�";
			this->txtmeetingPlaceWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtmeetingPlaceWatermark_MouseClick);
			this->txtmeetingPlaceWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtmeetingPlaceWatermark_TextChanged);
			// 
			// txtmeetingPlace
			// 
			this->txtmeetingPlace->Enabled = false;
			this->txtmeetingPlace->Location = System::Drawing::Point(259, 136);
			this->txtmeetingPlace->Name = L"txtmeetingPlace";
			this->txtmeetingPlace->Size = System::Drawing::Size(177, 20);
			this->txtmeetingPlace->TabIndex = 42;
			this->txtmeetingPlace->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtmeetingPlace_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(256, 117);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 13);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Lugar de la reuni�n:";
			// 
			// txtendHourWatermark
			// 
			this->txtendHourWatermark->Enabled = false;
			this->txtendHourWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtendHourWatermark->Location = System::Drawing::Point(259, 86);
			this->txtendHourWatermark->Name = L"txtendHourWatermark";
			this->txtendHourWatermark->Size = System::Drawing::Size(177, 20);
			this->txtendHourWatermark->TabIndex = 40;
			this->txtendHourWatermark->Text = L"Hora:Minutos";
			this->txtendHourWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtendHourWatermark_MouseClick);
			this->txtendHourWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtendHourWatermark_TextChanged);
			// 
			// txtendHour
			// 
			this->txtendHour->Enabled = false;
			this->txtendHour->Location = System::Drawing::Point(259, 86);
			this->txtendHour->Name = L"txtendHour";
			this->txtendHour->Size = System::Drawing::Size(177, 20);
			this->txtendHour->TabIndex = 39;
			this->txtendHour->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtendHour_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(256, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Hora Fin:";
			// 
			// cbPriority
			// 
			this->cbPriority->Cursor = System::Windows::Forms::Cursors::Default;
			this->cbPriority->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPriority->FormattingEnabled = true;
			this->cbPriority->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Muy alta", L"Alta", L"Media", L"Baja" });
			this->cbPriority->Location = System::Drawing::Point(14, 300);
			this->cbPriority->Name = L"cbPriority";
			this->cbPriority->Size = System::Drawing::Size(177, 21);
			this->cbPriority->TabIndex = 37;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Prioridad:";
			// 
			// txtIdentifierWatermark
			// 
			this->txtIdentifierWatermark->BackColor = System::Drawing::SystemColors::Window;
			this->txtIdentifierWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtIdentifierWatermark->Location = System::Drawing::Point(15, 248);
			this->txtIdentifierWatermark->Name = L"txtIdentifierWatermark";
			this->txtIdentifierWatermark->Size = System::Drawing::Size(177, 20);
			this->txtIdentifierWatermark->TabIndex = 35;
			this->txtIdentifierWatermark->Text = L"Ingrese el identificador aqu�";
			this->txtIdentifierWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtIdentifierWatermark_MouseClick);
			this->txtIdentifierWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtIdentifierWatermark_TextChanged);
			// 
			// txtIdentifier
			// 
			this->txtIdentifier->Location = System::Drawing::Point(14, 248);
			this->txtIdentifier->Name = L"txtIdentifier";
			this->txtIdentifier->Size = System::Drawing::Size(177, 20);
			this->txtIdentifier->TabIndex = 34;
			this->txtIdentifier->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtIdentifier_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"ID:";
			// 
			// rtbDescriptionWatermark
			// 
			this->rtbDescriptionWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbDescriptionWatermark->Location = System::Drawing::Point(14, 133);
			this->rtbDescriptionWatermark->Name = L"rtbDescriptionWatermark";
			this->rtbDescriptionWatermark->Size = System::Drawing::Size(177, 84);
			this->rtbDescriptionWatermark->TabIndex = 32;
			this->rtbDescriptionWatermark->Text = L"Ingrese la descripci�n aqu�";
			this->rtbDescriptionWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::rtbDescriptionWatermark_MouseClick);
			this->rtbDescriptionWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbDescriptionWatermark_TextChanged);
			// 
			// rtbDescription
			// 
			this->rtbDescription->Location = System::Drawing::Point(14, 133);
			this->rtbDescription->Name = L"rtbDescription";
			this->rtbDescription->Size = System::Drawing::Size(177, 84);
			this->rtbDescription->TabIndex = 31;
			this->rtbDescription->Text = L"";
			this->rtbDescription->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbDescription_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Descripci�n del evento:";
			// 
			// txtstartHourWatermark
			// 
			this->txtstartHourWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtstartHourWatermark->Location = System::Drawing::Point(14, 86);
			this->txtstartHourWatermark->Name = L"txtstartHourWatermark";
			this->txtstartHourWatermark->Size = System::Drawing::Size(177, 20);
			this->txtstartHourWatermark->TabIndex = 29;
			this->txtstartHourWatermark->Text = L"Hora:Minutos";
			this->txtstartHourWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtstartHourWatermark_MouseClick);
			this->txtstartHourWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtstartHourWatermark_TextChanged);
			// 
			// txtstartHour
			// 
			this->txtstartHour->Location = System::Drawing::Point(14, 86);
			this->txtstartHour->Name = L"txtstartHour";
			this->txtstartHour->Size = System::Drawing::Size(177, 20);
			this->txtstartHour->TabIndex = 28;
			this->txtstartHour->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtstartHour_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Hora Inicio:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Selecciona el tipo de evento que quieres registrar:";
			// 
			// cbEvents
			// 
			this->cbEvents->Cursor = System::Windows::Forms::Cursors::Default;
			this->cbEvents->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbEvents->FormattingEnabled = true;
			this->cbEvents->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Actividad", L"Recordatorio", L"Alarma" });
			this->cbEvents->Location = System::Drawing::Point(312, 20);
			this->cbEvents->Name = L"cbEvents";
			this->cbEvents->Size = System::Drawing::Size(143, 21);
			this->cbEvents->TabIndex = 25;
			this->cbEvents->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarEvento::cbEvents_SelectedIndexChanged);
			// 
			// AgregarEvento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 456);
			this->Controls->Add(this->rtbMaterialsWatermark);
			this->Controls->Add(this->rtbMaterials);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtInvolvedPeopleWatermark);
			this->Controls->Add(this->txtInvolvedPeople);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtmeetingPlaceWatermark);
			this->Controls->Add(this->txtmeetingPlace);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtendHourWatermark);
			this->Controls->Add(this->txtendHour);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cbPriority);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtIdentifierWatermark);
			this->Controls->Add(this->txtIdentifier);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->rtbDescriptionWatermark);
			this->Controls->Add(this->rtbDescription);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtstartHourWatermark);
			this->Controls->Add(this->txtstartHour);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbEvents);
			this->Name = L"AgregarEvento";
			this->Text = L"AgregarEvento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Procedimientos que hacen cambiar textbox normales por textbox con watermark (funcionamiento visual)
private: System::Void txtstartHourWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtstartHour->Text = txtstartHourWatermark->Text->Substring(0, 1);
	txtstartHourWatermark->Visible = false;
	txtstartHour->Focus();
	txtstartHour->Select(1, 0);
}
private: System::Void txtstartHour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Hora:Minutos";
	if (txtstartHour->Text == "")
	{
		txtstartHourWatermark->Text = watermark;
		txtstartHourWatermark->Visible = true;
		txtstartHourWatermark->Focus();
		txtstartHourWatermark->Select(0, 0);
	}
}
private: System::Void txtstartHourWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtstartHourWatermark->Select(0, 0);
}
private: System::Void rtbDescriptionWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	rtbDescription->Text = rtbDescriptionWatermark->Text->Substring(0, 1);
	rtbDescriptionWatermark->Visible = false;
	rtbDescription->Focus();
	rtbDescription->Select(1, 0);
}
private: System::Void rtbDescription_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese la descripci�n aqu�";
	if (rtbDescription->Text == "")
	{
		rtbDescriptionWatermark->Text = watermark;
		rtbDescriptionWatermark->Visible = true;
		rtbDescriptionWatermark->Focus();
		rtbDescriptionWatermark->Select(0, 0);
	}
}
private: System::Void rtbDescriptionWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	rtbDescriptionWatermark->Select(0, 0);
}
private: System::Void txtIdentifier_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese el identificador aqu�";
	if (txtIdentifier->Text == "")
	{
		txtIdentifierWatermark->Text = watermark;
		txtIdentifierWatermark->Visible = true;
		txtIdentifierWatermark->Focus();
		txtIdentifierWatermark->Select(0, 0);
	}
}
private: System::Void txtIdentifierWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtIdentifier->Text = txtIdentifierWatermark->Text->Substring(0, 1);
	txtIdentifierWatermark->Visible = false;
	txtIdentifier->Focus();
	txtIdentifier->Select(1, 0);
}
private: System::Void txtIdentifierWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtIdentifierWatermark->Select(0, 0);
}
private: System::Void txtendHourWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtendHour->Text = txtendHourWatermark->Text->Substring(0, 1);
	txtendHourWatermark->Visible = false;
	txtendHour->Focus();
	txtendHour->Select(1, 0);
}
private: System::Void txtendHourWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtendHourWatermark->Select(0, 0);
}
private: System::Void txtendHour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Hora:Minutos";
	if (txtendHour->Text == "")
	{
		txtendHourWatermark->Text = watermark;
		txtendHourWatermark->Visible = true;
		txtendHourWatermark->Focus();
		txtendHourWatermark->Select(0, 0);
	}
}
private: System::Void txtmeetingPlaceWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtmeetingPlace->Text = txtmeetingPlaceWatermark->Text->Substring(0, 1);
	txtmeetingPlaceWatermark->Visible = false;
	txtmeetingPlace->Focus();
	txtmeetingPlace->Select(1, 0);
}
private: System::Void txtmeetingPlaceWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtmeetingPlaceWatermark->Select(0, 0);
}
private: System::Void txtmeetingPlace_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese el lugar aqu�";
	if (txtmeetingPlace->Text == "")
	{
		txtmeetingPlaceWatermark->Text = watermark;
		txtmeetingPlaceWatermark->Visible = true;
		txtmeetingPlaceWatermark->Focus();
		txtmeetingPlaceWatermark->Select(0, 0);
	}
}
private: System::Void txtInvolvedPeople_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "<persona1>,<persona2>...";
	if (txtInvolvedPeople->Text == "")
	{
		txtInvolvedPeopleWatermark->Text = watermark;
		txtInvolvedPeopleWatermark->Visible = true;
		txtInvolvedPeopleWatermark->Focus();
		txtInvolvedPeopleWatermark->Select(0, 0);
	}
}
private: System::Void txtInvolvedPeopleWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtInvolvedPeople->Text = txtInvolvedPeopleWatermark->Text->Substring(0, 1);
	txtInvolvedPeopleWatermark->Visible = false;
	txtInvolvedPeople->Focus();
	txtInvolvedPeople->Select(1, 0);
}
private: System::Void txtInvolvedPeopleWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtInvolvedPeopleWatermark->Select(0, 0);
}
private: System::Void rtbMaterialsWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	rtbMaterials->Text = rtbMaterialsWatermark->Text->Substring(0, 1);
	rtbMaterialsWatermark->Visible = false;
	rtbMaterials->Focus();
	rtbMaterials->Select(1, 0);
}
private: System::Void rtbMaterialsWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	rtbMaterialsWatermark->Select(0, 0);
}
private: System::Void rtbMaterials_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese los materiales aqu�";
	if (rtbMaterials->Text == "")
	{
		rtbMaterialsWatermark->Text = watermark;
		rtbMaterialsWatermark->Visible = true;
		rtbMaterialsWatermark->Focus();
		rtbMaterialsWatermark->Select(0, 0);
	}
}
private: System::Void cbEvents_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbEvents->SelectedIndex == 0)
	{
		txtendHour->Enabled = true;
		txtmeetingPlace->Enabled = true;
		txtInvolvedPeople->Enabled = true;
		rtbMaterials->Enabled = true;
		txtendHourWatermark->Enabled = true;
		txtmeetingPlaceWatermark->Enabled = true;
		txtInvolvedPeopleWatermark->Enabled = true;
		rtbMaterialsWatermark->Enabled = true;
	}
	else
	{
		txtendHour->Enabled = false;
		txtmeetingPlace->Enabled = false;
		txtInvolvedPeople->Enabled = false;
		rtbMaterials->Enabled = false;
		txtendHourWatermark->Enabled = false;
		txtmeetingPlaceWatermark->Enabled = false;
		txtInvolvedPeopleWatermark->Enabled = false;
		rtbMaterialsWatermark->Enabled = false;
	}
}
};
}