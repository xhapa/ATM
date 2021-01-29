#ifndef __ATM_MENU_H__
#define __ATM_MENU_H__

#include "Users.h"
#include <stdlib.h>
#include <string>
#include "dataBase.h"
#include <msclr\marshal_cppstd.h>


namespace ATM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Resumen de ATM_Menu
	/// </summary>
	public ref class ATM_Menu : public System::Windows::Forms::Form
	{
		Users* userEntity = new Users();
	private: System::Windows::Forms::Button^ button18;
	public:
		dataBase* usersData;
	public:
		int index;
	public:
		ATM_Menu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		ATM_Menu(Users* u, dataBase* dtm)
		{
			InitializeComponent();
			userEntity = u;
			usersData = dtm;
			index = usersData->getIndex(userEntity);
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ATM_Menu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ Deposit;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ATM_Menu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Deposit = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(83, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"kk";
			this->label1->Click += gcnew System::EventHandler(this, &ATM_Menu::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(36, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"User:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(329, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Account Balance:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(477, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ooooo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(12, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 37);
			this->label5->TabIndex = 5;
			this->label5->Text = L"ATM BANK";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(457, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"$";
			// 
			// Deposit
			// 
			this->Deposit->BackColor = System::Drawing::Color::White;
			this->Deposit->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Deposit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Deposit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deposit->ForeColor = System::Drawing::Color::DimGray;
			this->Deposit->Location = System::Drawing::Point(3, 173);
			this->Deposit->Name = L"Deposit";
			this->Deposit->Size = System::Drawing::Size(172, 85);
			this->Deposit->TabIndex = 13;
			this->Deposit->Text = L"Deposit";
			this->Deposit->UseVisualStyleBackColor = false;
			this->Deposit->Click += gcnew System::EventHandler(this, &ATM_Menu::Deposit_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DimGray;
			this->button2->Location = System::Drawing::Point(3, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 83);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Withdrawal";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ATM_Menu::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(-5, 528);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(894, 42);
			this->panel2->TabIndex = 17;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(767, 7);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 8;
			this->button18->Text = L"Salir";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &ATM_Menu::button18_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->Deposit);
			this->panel3->Location = System::Drawing::Point(-5, -3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(175, 531);
			this->panel3->TabIndex = 18;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DimGray;
			this->button4->Location = System::Drawing::Point(3, 441);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(172, 85);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Change Acount";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ATM_Menu::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DimGray;
			this->button3->Location = System::Drawing::Point(3, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 85);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Transfer";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DimGray;
			this->button1->Location = System::Drawing::Point(3, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 85);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Acount Balance";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(171, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(718, 528);
			this->panel1->TabIndex = 19;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ATM_Menu::panel1_Paint);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(591, 317);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 47);
			this->button15->TabIndex = 23;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(536, 317);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 47);
			this->button16->TabIndex = 22;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(481, 317);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 47);
			this->button17->TabIndex = 21;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(591, 264);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 47);
			this->button12->TabIndex = 20;
			this->button12->Text = L"9";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(536, 264);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 47);
			this->button13->TabIndex = 19;
			this->button13->Text = L"8";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(481, 264);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 47);
			this->button14->TabIndex = 18;
			this->button14->Text = L"7";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(591, 211);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 47);
			this->button9->TabIndex = 17;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(536, 211);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 47);
			this->button10->TabIndex = 16;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(481, 211);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 47);
			this->button11->TabIndex = 15;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(591, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 47);
			this->button8->TabIndex = 14;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(536, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 47);
			this->button7->TabIndex = 13;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(481, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 47);
			this->button6->TabIndex = 12;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ATM_Menu::numClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(98, 410);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(114, 36);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Enter";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ATM_Menu::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(75, 330);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 21);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(157, 330);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(85, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"$";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(134, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Amount";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(311, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 30);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Withdrawal";
			// 
			// ATM_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(885, 568);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"ATM_Menu";
			this->Text = L"ATM_Menu";
			this->Load += gcnew System::EventHandler(this, &ATM_Menu::ATM_Menu_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double amountToSet;
	private: System::Void ATM_Menu_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < usersData->getData().size(); i++) {
			cout << usersData->getData()[i]->getUsername();
		}	
		cout << usersData->getData().size();
		msclr::interop::marshal_context context;
		label1->Text = marshal_as<String^>(usersData->getData()[index]->getUsername());
		label4->Text = usersData->getData()[index]->getAmount().ToString();
		panel1->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = "Withdrawal";
		panel1->Show();
	}
	private: System::Void numClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ Number = safe_cast<Button^>(sender);
		if (textBox1->Text == "Amount")
		{
			textBox1->Text = Number->Text;
		}
		else
		{
			textBox1->Text += Number->Text;
		}
		amountToSet = Convert::ToDouble(textBox1->Text);
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		if (textBox2->Text == marshal_as<String^>(usersData->getData()[index]->getPassword()) && label7->Text == "Withdrawal")
		{
			usersData->getData()[index]->removeAmount(amountToSet);
			label4->Text = usersData->getData()[index]->getAmount().ToString();
			textBox1->Text = "Amount";
			textBox2->Text = "";
		}
		else if (textBox2->Text == marshal_as<String^>(usersData->getData()[index]->getPassword()) && label7->Text == "Deposit")
		{
			usersData->getData()[index]->addAmount(amountToSet);
			label4->Text = usersData->getData()[index]->getAmount().ToString();
			textBox1->Text = "Amount";
			textBox2->Text = "";
		}
		else
		{
			MessageBox::Show("Incorrect password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void Deposit_Click(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = "Deposit";
		panel1->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		usersData->saveData();
		Application::Exit();
	}
};
}
#endif // __ATM_MENU_H__