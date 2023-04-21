#pragma once
#include "Level3.h"

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level2
	/// </summary>
	public ref class Level2 : public System::Windows::Forms::Form
	{
	public:
		Level2(Form^ PathEntry)
		{
			BacktoMenu = PathEntry;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private:System::Windows::Forms::Form^ BacktoMenu;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ RestartButton;
	private: System::Windows::Forms::Button^ NextButton;
	private: System::Windows::Forms::Button^ button37;
	protected:

	private:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->RestartButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(135, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Level2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(221, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Level2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(307, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(393, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 0;
			this->button4->Text = L"S";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Level2::GameStart);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(479, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Level2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkCyan;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(565, 102);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkCyan;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(135, 188);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(221, 188);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Level2::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkCyan;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(307, 188);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(393, 188);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Level2::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(479, 188);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Level2::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(565, 188);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Level2::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(135, 274);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Level2::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(221, 274);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 80);
			this->button14->TabIndex = 0;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Level2::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(307, 274);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Level2::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkCyan;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(393, 274);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(479, 274);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 0;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Level2::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(565, 274);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 0;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Level2::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(135, 360);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 80);
			this->button19->TabIndex = 0;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Level2::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkCyan;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(221, 360);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 80);
			this->button20->TabIndex = 0;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkCyan;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(307, 360);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 80);
			this->button21->TabIndex = 0;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold));
			this->button22->Location = System::Drawing::Point(393, 360);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 80);
			this->button22->TabIndex = 0;
			this->button22->Text = L"E";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Level2::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::DarkCyan;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(479, 360);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 80);
			this->button23->TabIndex = 0;
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(565, 360);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 80);
			this->button24->TabIndex = 0;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Level2::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(135, 446);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 80);
			this->button25->TabIndex = 0;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Level2::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::DarkCyan;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(221, 446);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 80);
			this->button26->TabIndex = 0;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(307, 446);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 80);
			this->button27->TabIndex = 0;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Level2::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(393, 446);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 80);
			this->button28->TabIndex = 0;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Level2::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::DarkCyan;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(479, 446);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 80);
			this->button29->TabIndex = 0;
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(565, 446);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(80, 80);
			this->button30->TabIndex = 0;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Level2::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(135, 532);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 80);
			this->button31->TabIndex = 0;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Level2::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(221, 532);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 80);
			this->button32->TabIndex = 0;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Level2::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(307, 532);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(80, 80);
			this->button33->TabIndex = 0;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Level2::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(393, 532);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(80, 80);
			this->button34->TabIndex = 0;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Level2::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(479, 532);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(80, 80);
			this->button35->TabIndex = 0;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Level2::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(565, 532);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(80, 80);
			this->button36->TabIndex = 0;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Level2::button36_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Red;
			this->ExitButton->Location = System::Drawing::Point(808, 446);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(182, 80);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Level2::ExitButton_Click);
			// 
			// RestartButton
			// 
			this->RestartButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RestartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RestartButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RestartButton->Location = System::Drawing::Point(808, 360);
			this->RestartButton->Name = L"RestartButton";
			this->RestartButton->Size = System::Drawing::Size(182, 80);
			this->RestartButton->TabIndex = 0;
			this->RestartButton->Text = L"Restart";
			this->RestartButton->UseVisualStyleBackColor = false;
			this->RestartButton->Click += gcnew System::EventHandler(this, &Level2::RestartButton_Click);
			// 
			// NextButton
			// 
			this->NextButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->NextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NextButton->Location = System::Drawing::Point(808, 274);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(182, 80);
			this->NextButton->TabIndex = 0;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = false;
			this->NextButton->Click += gcnew System::EventHandler(this, &Level2::NextButton_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(808, 188);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(182, 80);
			this->button37->TabIndex = 1;
			this->button37->Text = L"Level 2";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// Level2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->RestartButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Level2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level2";
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean start = false;
		Boolean win = false;
		int sum = 0;
		
		public: System::Void MakePath(Button^ but1, Button^ but2) {
			if (but2->BackColor == System::Drawing::Color::White && start)
			{
				but2->BackColor = System::Drawing::Color::PeachPuff;
				but1->BackColor = System::Drawing::Color::White;
				sum++;
			}
		}
	private: System::Void GameStart(System::Object^ sender, System::EventArgs^ e) {
		if (!start)
		{
			start = true;
			button4->BackColor = System::Drawing::Color::White;
			sum++;
		}
	};
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BacktoMenu->Show();
	}
private: System::Void RestartButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ restart = gcnew Level2(BacktoMenu);
	restart->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button1, button2);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button2, button1);
	MakePath(button2, button3);
	MakePath(button2, button8);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button3, button2);
	MakePath(button3, button4);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button4, button3);
	MakePath(button4, button5);
	MakePath(button4, button10);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button8, button2);
	MakePath(button8, button14);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button10, button4);
	MakePath(button10, button11);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button11, button10);
	MakePath(button11, button12);
	MakePath(button11, button5);
	MakePath(button11, button17);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button12, button11);
	MakePath(button12, button18);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button13, button14);
	MakePath(button13, button19);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button14, button13);
	MakePath(button14, button15);
	MakePath(button14, button8);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button15, button14);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button17, button11);
	MakePath(button17, button18);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button18, button12);
	MakePath(button18, button24);
	MakePath(button18, button17);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button19, button13);
	MakePath(button19, button25);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button22, button28);
	if (sum == 12)
	{
		MessageBox::Show("You win!", "Well Done.", MessageBoxButtons::OK, MessageBoxIcon::Information);
		win = true;
		sum = 0;
	}
	else
	{
		MessageBox::Show("You lost. That's not the shortest path.", "Game over", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sum = 0;
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button24, button18);
	MakePath(button24, button30);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button25, button19);
	MakePath(button25, button31);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button27, button33);
	MakePath(button27, button28);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button28, button22);
	MakePath(button28, button27);
	MakePath(button28, button34);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button30, button24);
	MakePath(button30, button36);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button31, button25);
	MakePath(button31, button32);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button32, button31);
	MakePath(button32, button33);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button33, button32);
	MakePath(button33, button34);
	MakePath(button33, button27);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button34, button28);
	MakePath(button34, button33);
	MakePath(button34, button35);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button35, button34);
	MakePath(button35, button36);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button36, button35);
	MakePath(button36, button30);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button5, button4);
	MakePath(button5, button11);
}
private: System::Void NextButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (win == true)
	{
		Form^ next = gcnew Level3(BacktoMenu);
		next->Show();
		this->Hide();
	}
}
};
}
