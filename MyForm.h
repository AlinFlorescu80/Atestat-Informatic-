#pragma once
#include <sstream>
#include <iostream>
#include <cstring>
#include <string>
#include "About.h"


int lungime = 0;
int V[100];

namespace Vectoritry1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Vector_input;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Output;
	private: System::Windows::Forms::Button^ permstg;
	private: System::Windows::Forms::Button^ permdr;
	private: System::Windows::Forms::Button^ inserare;
	private: System::Windows::Forms::TextBox^ poz_in;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ plusminus;
	private: System::Windows::Forms::TextBox^ pozitia_de_inserare;

	private: System::Windows::Forms::Button^ plus_pozitie;
	private: System::Windows::Forms::Button^ minus_pozitie;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ minus_pozitie_stergere;
	private: System::Windows::Forms::Button^ plus_pozitie_stergere;
	private: System::Windows::Forms::TextBox^ pozitia_de_stergere;
	private: System::Windows::Forms::Button^ sortare_bule_crescator;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ cautare_liniara;
	private: System::Windows::Forms::TextBox^ rezultat_cautare;





	protected:

	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Vector_input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->permstg = (gcnew System::Windows::Forms::Button());
			this->permdr = (gcnew System::Windows::Forms::Button());
			this->inserare = (gcnew System::Windows::Forms::Button());
			this->poz_in = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->pozitia_de_inserare = (gcnew System::Windows::Forms::TextBox());
			this->plus_pozitie = (gcnew System::Windows::Forms::Button());
			this->minus_pozitie = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->minus_pozitie_stergere = (gcnew System::Windows::Forms::Button());
			this->plus_pozitie_stergere = (gcnew System::Windows::Forms::Button());
			this->pozitia_de_stergere = (gcnew System::Windows::Forms::TextBox());
			this->sortare_bule_crescator = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->cautare_liniara = (gcnew System::Windows::Forms::Button());
			this->rezultat_cautare = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(69, 9);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(457, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tablouri unidimensionale";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Vector_input
			// 
			this->Vector_input->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Vector_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vector_input->Location = System::Drawing::Point(35, 76);
			this->Vector_input->Multiline = true;
			this->Vector_input->Name = L"Vector_input";
			this->Vector_input->ReadOnly = true;
			this->Vector_input->Size = System::Drawing::Size(243, 53);
			this->Vector_input->TabIndex = 1;
			this->Vector_input->Text = L"0";
			this->Vector_input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Vector_input->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector_input_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(35, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 47);
			this->button1->TabIndex = 2;
			this->button1->Text = L"input";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Output
			// 
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output->Location = System::Drawing::Point(35, 557);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(491, 53);
			this->Output->TabIndex = 3;
			this->Output->TextChanged += gcnew System::EventHandler(this, &MyForm::Output_TextChanged);
			// 
			// permstg
			// 
			this->permstg->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->permstg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->permstg->Location = System::Drawing::Point(314, 76);
			this->permstg->Name = L"permstg";
			this->permstg->Size = System::Drawing::Size(88, 53);
			this->permstg->TabIndex = 4;
			this->permstg->Text = L"Permutare Circulară La Stânga";
			this->permstg->UseVisualStyleBackColor = false;
			this->permstg->Click += gcnew System::EventHandler(this, &MyForm::permstg_Click);
			// 
			// permdr
			// 
			this->permdr->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->permdr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->permdr->Location = System::Drawing::Point(438, 76);
			this->permdr->Name = L"permdr";
			this->permdr->Size = System::Drawing::Size(88, 53);
			this->permdr->TabIndex = 5;
			this->permdr->Text = L"Permutare Circulară La Dreapta";
			this->permdr->UseVisualStyleBackColor = false;
			this->permdr->Click += gcnew System::EventHandler(this, &MyForm::permdr_Click);
			// 
			// inserare
			// 
			this->inserare->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->inserare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inserare->Location = System::Drawing::Point(314, 233);
			this->inserare->Name = L"inserare";
			this->inserare->Size = System::Drawing::Size(88, 53);
			this->inserare->TabIndex = 6;
			this->inserare->Text = L"Inserare";
			this->inserare->UseVisualStyleBackColor = false;
			this->inserare->Click += gcnew System::EventHandler(this, &MyForm::inserare_Click);
			// 
			// poz_in
			// 
			this->poz_in->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->poz_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->poz_in->Location = System::Drawing::Point(408, 252);
			this->poz_in->Name = L"poz_in";
			this->poz_in->ReadOnly = true;
			this->poz_in->Size = System::Drawing::Size(69, 20);
			this->poz_in->TabIndex = 7;
			this->poz_in->Text = L"pe poziția:";
			this->poz_in->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(35, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 53);
			this->button2->TabIndex = 9;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(120, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 53);
			this->button3->TabIndex = 10;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Window;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(203, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 53);
			this->button4->TabIndex = 11;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Window;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(35, 233);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 52);
			this->button5->TabIndex = 12;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Window;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(120, 233);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 52);
			this->button6->TabIndex = 13;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Window;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(203, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 52);
			this->button7->TabIndex = 14;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Window;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(35, 322);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 53);
			this->button8->TabIndex = 15;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Window;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(120, 322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 53);
			this->button9->TabIndex = 16;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Window;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(203, 322);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 53);
			this->button10->TabIndex = 17;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Window;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(120, 412);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 53);
			this->button11->TabIndex = 18;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::SystemColors::Window;
			this->plusminus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusminus->Location = System::Drawing::Point(35, 412);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(75, 53);
			this->plusminus->TabIndex = 19;
			this->plusminus->Text = L"+ -";
			this->plusminus->UseVisualStyleBackColor = false;
			this->plusminus->Click += gcnew System::EventHandler(this, &MyForm::plusminus_Click);
			// 
			// pozitia_de_inserare
			// 
			this->pozitia_de_inserare->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pozitia_de_inserare->Location = System::Drawing::Point(486, 252);
			this->pozitia_de_inserare->Name = L"pozitia_de_inserare";
			this->pozitia_de_inserare->ReadOnly = true;
			this->pozitia_de_inserare->Size = System::Drawing::Size(40, 20);
			this->pozitia_de_inserare->TabIndex = 20;
			this->pozitia_de_inserare->Text = L"0";
			this->pozitia_de_inserare->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// plus_pozitie
			// 
			this->plus_pozitie->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plus_pozitie->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plus_pozitie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus_pozitie->Location = System::Drawing::Point(486, 223);
			this->plus_pozitie->Name = L"plus_pozitie";
			this->plus_pozitie->Size = System::Drawing::Size(40, 23);
			this->plus_pozitie->TabIndex = 21;
			this->plus_pozitie->Text = L"+";
			this->plus_pozitie->UseVisualStyleBackColor = false;
			this->plus_pozitie->Click += gcnew System::EventHandler(this, &MyForm::plus_pozitie_Click);
			// 
			// minus_pozitie
			// 
			this->minus_pozitie->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->minus_pozitie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus_pozitie->Location = System::Drawing::Point(486, 276);
			this->minus_pozitie->Name = L"minus_pozitie";
			this->minus_pozitie->Size = System::Drawing::Size(40, 23);
			this->minus_pozitie->TabIndex = 22;
			this->minus_pozitie->Text = L"-";
			this->minus_pozitie->UseVisualStyleBackColor = false;
			this->minus_pozitie->Click += gcnew System::EventHandler(this, &MyForm::minus_pozitie_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Location = System::Drawing::Point(314, 322);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(88, 53);
			this->Delete->TabIndex = 23;
			this->Delete->Text = L"Ștergere";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(408, 340);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 24;
			this->textBox1->Text = L"de pe poziția:";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// minus_pozitie_stergere
			// 
			this->minus_pozitie_stergere->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->minus_pozitie_stergere->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus_pozitie_stergere->Location = System::Drawing::Point(486, 366);
			this->minus_pozitie_stergere->Name = L"minus_pozitie_stergere";
			this->minus_pozitie_stergere->Size = System::Drawing::Size(40, 23);
			this->minus_pozitie_stergere->TabIndex = 27;
			this->minus_pozitie_stergere->Text = L"-";
			this->minus_pozitie_stergere->UseVisualStyleBackColor = false;
			this->minus_pozitie_stergere->Click += gcnew System::EventHandler(this, &MyForm::minus_pozitie_stergere_Click);
			// 
			// plus_pozitie_stergere
			// 
			this->plus_pozitie_stergere->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plus_pozitie_stergere->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus_pozitie_stergere->Location = System::Drawing::Point(486, 310);
			this->plus_pozitie_stergere->Name = L"plus_pozitie_stergere";
			this->plus_pozitie_stergere->Size = System::Drawing::Size(40, 24);
			this->plus_pozitie_stergere->TabIndex = 26;
			this->plus_pozitie_stergere->Text = L"+";
			this->plus_pozitie_stergere->UseVisualStyleBackColor = false;
			this->plus_pozitie_stergere->Click += gcnew System::EventHandler(this, &MyForm::plus_pozitie_stergere_Click);
			// 
			// pozitia_de_stergere
			// 
			this->pozitia_de_stergere->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pozitia_de_stergere->Location = System::Drawing::Point(486, 340);
			this->pozitia_de_stergere->Multiline = true;
			this->pozitia_de_stergere->Name = L"pozitia_de_stergere";
			this->pozitia_de_stergere->ReadOnly = true;
			this->pozitia_de_stergere->Size = System::Drawing::Size(40, 20);
			this->pozitia_de_stergere->TabIndex = 25;
			this->pozitia_de_stergere->Text = L"0";
			this->pozitia_de_stergere->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pozitia_de_stergere->TextChanged += gcnew System::EventHandler(this, &MyForm::pozitia_de_stergere_TextChanged);
			// 
			// sortare_bule_crescator
			// 
			this->sortare_bule_crescator->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sortare_bule_crescator->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sortare_bule_crescator->Location = System::Drawing::Point(314, 147);
			this->sortare_bule_crescator->Name = L"sortare_bule_crescator";
			this->sortare_bule_crescator->Size = System::Drawing::Size(88, 53);
			this->sortare_bule_crescator->TabIndex = 28;
			this->sortare_bule_crescator->Text = L"Sortare bule crescător";
			this->sortare_bule_crescator->UseVisualStyleBackColor = false;
			this->sortare_bule_crescator->Click += gcnew System::EventHandler(this, &MyForm::sortare_bule_crescator_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(438, 147);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 53);
			this->button12->TabIndex = 29;
			this->button12->Text = L"Sortare bule descrescător";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::SystemColors::Window;
			this->backspace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->backspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->backspace->Location = System::Drawing::Point(203, 412);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(75, 53);
			this->backspace->TabIndex = 30;
			this->backspace->Text = L"";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// cautare_liniara
			// 
			this->cautare_liniara->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cautare_liniara->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cautare_liniara->Location = System::Drawing::Point(314, 412);
			this->cautare_liniara->Name = L"cautare_liniara";
			this->cautare_liniara->Size = System::Drawing::Size(88, 53);
			this->cautare_liniara->TabIndex = 31;
			this->cautare_liniara->Text = L"Căutare liniară";
			this->cautare_liniara->UseVisualStyleBackColor = false;
			this->cautare_liniara->Click += gcnew System::EventHandler(this, &MyForm::cautare_liniara_Click);
			// 
			// rezultat_cautare
			// 
			this->rezultat_cautare->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rezultat_cautare->Location = System::Drawing::Point(408, 412);
			this->rezultat_cautare->Multiline = true;
			this->rezultat_cautare->Name = L"rezultat_cautare";
			this->rezultat_cautare->ReadOnly = true;
			this->rezultat_cautare->Size = System::Drawing::Size(118, 53);
			this->rezultat_cautare->TabIndex = 32;
			this->rezultat_cautare->TextChanged += gcnew System::EventHandler(this, &MyForm::rezultat_cautare_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(559, 639);
			this->Controls->Add(this->rezultat_cautare);
			this->Controls->Add(this->cautare_liniara);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->sortare_bule_crescator);
			this->Controls->Add(this->minus_pozitie_stergere);
			this->Controls->Add(this->plus_pozitie_stergere);
			this->Controls->Add(this->pozitia_de_stergere);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->minus_pozitie);
			this->Controls->Add(this->plus_pozitie);
			this->Controls->Add(this->pozitia_de_inserare);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->poz_in);
			this->Controls->Add(this->inserare);
			this->Controls->Add(this->permdr);
			this->Controls->Add(this->permstg);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Vector_input);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ in = Vector_input->Text;
		 
		 if (Vector_input->Text->Length > 9)
		 {
			 About^ aboutForm = gcnew About;
			 aboutForm->Show();
			 Vector_input->Text = "0";
		 }
		 else
		 {
			 int numar = System::Convert::ToInt64(in);
			 V[lungime] = numar;
			 lungime++;
			 Output->Text = Output->Text + " " + numar;
			 Vector_input->Text = "0";
		 }
		 
	}
private: System::Void Output_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void permstg_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ out;
	int aux1 = V[0];
	for (int i = 1; i < lungime; i++)
		V[i - 1] = V[i];
	V[lungime - 1] = aux1;
	for(int i=0; i<lungime; i++)
		out = out + " " + System::Convert::ToString(V[i]);
	Output->Text = out;
}

private: System::Void permdr_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ out;
	int aux2 = V[lungime - 1];
	for (int i = lungime - 2; i >= 0; i--)
		V[i + 1] = V[i];
	V[0] = aux2;
	for (int i = 0; i < lungime; i++)
		out = out + " " + System::Convert::ToString(V[i]);
	Output->Text = out;
}

private: System::Void inserare_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int k1;
	String^ out;
	String^ pozitiadeinserare = pozitia_de_inserare->Text;
	int pozitiadeinserareconvertita = System::Convert::ToInt64(pozitiadeinserare);

	String^ numaruldeinserat =Vector_input->Text;
	int numar_de_inserat_convertit = System::Convert::ToInt64(numaruldeinserat);
	
	for (int i = lungime - 1; i >= pozitiadeinserareconvertita; i--)
		V[i + 1] = V[i];
	V[pozitiadeinserareconvertita] = numar_de_inserat_convertit;
	lungime++;
	for (int i = 0; i < lungime; i++)
		out = out + " " + System::Convert::ToString(V[i]);
	Output->Text = out;
	Vector_input->Text = "0";

}

private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast <Button^>(sender);
	if (Vector_input->Text == "0")
		Vector_input->Text = Numbers->Text;
	else
		Vector_input->Text = Vector_input->Text + Numbers->Text;
}

private: System::Void plusminus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Vector_input->Text->Contains("-"))
		Vector_input->Text = Vector_input->Text->Remove(0, 1);
	else
		Vector_input->Text = "-" + Vector_input->Text;

}

private: System::Void plus_pozitie_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pozitiadeinserare = pozitia_de_inserare->Text;
	int pozitiadeinserareconvertita = System::Convert::ToInt64(pozitiadeinserare);
	if (pozitiadeinserareconvertita < lungime)
		pozitiadeinserareconvertita++;
	String^ out;
	out = System::Convert::ToString(pozitiadeinserareconvertita);
		pozitia_de_inserare->Text = out;
}

private: System::Void minus_pozitie_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pozitiadeinserare = pozitia_de_inserare->Text;
	int pozitiadeinserareconvertita = System::Convert::ToInt64(pozitiadeinserare);
	if (pozitiadeinserareconvertita >0)
		pozitiadeinserareconvertita--;
	String^ out;
	out = System::Convert::ToString(pozitiadeinserareconvertita);
	pozitia_de_inserare->Text = out;
}

private: System::Void plus_pozitie_stergere_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pozitiadestergere = pozitia_de_stergere->Text;
	int pozitiadestergereconvertita = System::Convert::ToInt64(pozitiadestergere);
	if (pozitiadestergereconvertita < lungime-1)
		pozitiadestergereconvertita++;
	String^ out;
	out = System::Convert::ToString(pozitiadestergereconvertita);
	pozitia_de_stergere->Text = out;
}

private: System::Void minus_pozitie_stergere_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pozitiadestergere = pozitia_de_stergere->Text;
	int pozitiadestergereconvertita = System::Convert::ToInt64(pozitiadestergere);
	if (pozitiadestergereconvertita > 0)
		pozitiadestergereconvertita--;
	String^ out;
	out = System::Convert::ToString(pozitiadestergereconvertita);
	pozitia_de_stergere->Text = out;
}

private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ out;
	String^ pozitiadestergere = pozitia_de_stergere->Text;

	String^ pozitiadeinserare = pozitia_de_inserare->Text;
	int pozitiadeinserareconvertita = System::Convert::ToInt64(pozitiadeinserare);

	int pozitiadestergereconvertita = System::Convert::ToInt64(pozitiadestergere);
	if (lungime != 0)
	{

		for (int i = pozitiadestergereconvertita + 1; i < lungime; i++)
			V[i - 1] = V[i];
		lungime--;
		if (pozitiadestergereconvertita == lungime && pozitiadestergereconvertita > 0)
			pozitiadestergereconvertita--;
		pozitia_de_stergere->Text = System::Convert::ToString(pozitiadestergereconvertita);
		if (pozitiadeinserareconvertita > lungime)
		{
			pozitiadeinserareconvertita--;
			pozitia_de_inserare->Text = System::Convert::ToString(pozitiadeinserareconvertita);
		}
		
		for (int i = 0; i < lungime; i++)
			out = out + " " + System::Convert::ToString(V[i]);
		Output->Text = out;
	}
		Vector_input->Text = "0";
	
}

private: System::Void sortare_bule_crescator_Click(System::Object^ sender, System::EventArgs^ e) {
	int aux, sortat, i;
	String^ out;
	do
	{
		sortat = 1;
		for (i=0; i<lungime-1; i++)
			if (V[i] > V[i + 1])
			{
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
				sortat = 0;
			}
	} while (!sortat);
	for (int i = 0; i < lungime; i++)
		out = out + " " + System::Convert::ToString(V[i]);
	Output->Text = out;
	Vector_input->Text = "0";
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int aux, sortat, i;
	String^ out;
	do
	{
		sortat = 1;
		for (i = 0; i < lungime - 1; i++)
			if (V[i] < V[i + 1])
			{
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
				sortat = 0;
			}
	} while (!sortat);
	for (int i = 0; i < lungime; i++)
		out = out + " " + System::Convert::ToString(V[i]);
	Output->Text = out;
	Vector_input->Text = "0";
}

private: System::Void cautare_liniara_Click(System::Object^ sender, System::EventArgs^ e) {
	int i, poz, x;
	x = System::Convert::ToInt64(Vector_input->Text);
	poz = 0;
	while ((x != V[poz]) && (poz < lungime))
		poz++;
	if (poz < lungime)
		rezultat_cautare->Text = "Se afla pe pozitia " + poz + ", " + "prima pozitie a vectorului fiind 0.";
	else
		rezultat_cautare->Text = "Nu exista";
	Vector_input->Text = "0";
}

private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ in = Vector_input->Text;
	int numar = System::Convert::ToInt64(in);
	if (numar < 10)
		Vector_input->Text = "0";
	else  if (Vector_input->Text->Length > 0 && numar !=0)
		Vector_input->Text = Vector_input->Text->Remove(Vector_input->Text->Length - 1, 1);
}

private: System::Void Vector_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pozitia_de_stergere_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rezultat_cautare_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
