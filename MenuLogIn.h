#pragma once

#include "ATM_Menu.h"
#include "MenuSignIn.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include <msclr\marshal_cppstd.h>
namespace ATM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuLogIn
	/// </summary>
	public ref class MenuLogIn : public System::Windows::Forms::Form
	{
		Users* u1 = new Users();
	public:
		dataBase* dt = new dataBase();
	public:
		MenuLogIn(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		MenuLogIn(dataBase *dtc)
		{
			InitializeComponent();
			dt = dtc;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuLogIn()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ usernameBox;

	private: System::Windows::Forms::TextBox^ passwordBox;
	private: System::Windows::Forms::Button^ logIn;
	private: System::Windows::Forms::Button^ signIn;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuLogIn::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->logIn = (gcnew System::Windows::Forms::Button());
			this->signIn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(46, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 50);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Log in";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(50, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(50, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password";
			// 
			// usernameBox
			// 
			this->usernameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->usernameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameBox->ForeColor = System::Drawing::Color::White;
			this->usernameBox->Location = System::Drawing::Point(54, 209);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(274, 26);
			this->usernameBox->TabIndex = 7;
			// 
			// passwordBox
			// 
			this->passwordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordBox->ForeColor = System::Drawing::Color::White;
			this->passwordBox->Location = System::Drawing::Point(55, 278);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(274, 26);
			this->passwordBox->TabIndex = 8;
			this->passwordBox->UseSystemPasswordChar = true;
			// 
			// logIn
			// 
			this->logIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->logIn->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->logIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIn->ForeColor = System::Drawing::Color::AliceBlue;
			this->logIn->Location = System::Drawing::Point(55, 331);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(78, 41);
			this->logIn->TabIndex = 9;
			this->logIn->Text = L"Log in";
			this->logIn->UseVisualStyleBackColor = false;
			this->logIn->Click += gcnew System::EventHandler(this, &MenuLogIn::logIn_Click);
			// 
			// signIn
			// 
			this->signIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(2)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->signIn->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->signIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signIn->ForeColor = System::Drawing::Color::AliceBlue;
			this->signIn->Location = System::Drawing::Point(149, 331);
			this->signIn->Name = L"signIn";
			this->signIn->Size = System::Drawing::Size(78, 41);
			this->signIn->TabIndex = 10;
			this->signIn->Text = L"Sign in";
			this->signIn->UseVisualStyleBackColor = false;
			this->signIn->Click += gcnew System::EventHandler(this, &MenuLogIn::signIn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(54, 241);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(265, 2);
			this->panel1->TabIndex = 11;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(54, 310);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(265, 2);
			this->panel2->TabIndex = 12;
			// 
			// MenuLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(725, 478);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->signIn);
			this->Controls->Add(this->logIn);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MenuLogIn";
			this->Text = L"MenuLogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void logIn_Click(System::Object^ sender, System::EventArgs^ e) {
		string username;
		string password;
		msclr::interop::marshal_context context;
		username = context.marshal_as<std::string>(usernameBox->Text);
		password = context.marshal_as<std::string>(passwordBox->Text);
		u1->setUsername(username);
		u1->setPassword(password);
		if (dt->verfiUserLog(u1)){
			ATM_Menu^ MenuApp = gcnew ATM_Menu(u1, dt);
			MenuApp->Show();
			this->Hide();
		}
		else
		{
			MessageBox::Show("User not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void signIn_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuSignIn^ MenuSign = gcnew MenuSignIn(dt);
		MenuSign->Show();
		this->Hide();
	}
};
}
