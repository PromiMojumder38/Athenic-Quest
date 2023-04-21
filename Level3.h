#pragma once
#include "Level4.h"
namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level3
	/// </summary>
	public ref class Level3 : public System::Windows::Forms::Form
	{
	public:
		Level3(Form^ PathEntry)
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
		~Level3()
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
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ ExitButton;

	private: System::Windows::Forms::Button^ RestartButton;

	private: System::Windows::Forms::Button^ NextButton;
	private: System::Windows::Forms::Button^ button65;

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
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->RestartButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(133, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::DarkCyan;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(199, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(265, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 0;
			this->button3->Text = L"S";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level3::GameStart);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::DarkCyan;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(331, 87);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::DarkCyan;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(397, 87);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::Color::DarkCyan;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(463, 87);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::Color::DarkCyan;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(529, 87);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::Color::DarkCyan;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(595, 87);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(133, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Level3::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(199, 153);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Level3::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(265, 153);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Level3::button11_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->BackColor = System::Drawing::Color::DarkCyan;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(331, 153);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(397, 153);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Level3::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(463, 153);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 0;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Level3::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(529, 153);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Level3::button15_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->BackColor = System::Drawing::Color::DarkCyan;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(595, 153);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(133, 219);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 60);
			this->button17->TabIndex = 0;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Level3::button17_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->BackColor = System::Drawing::Color::DarkCyan;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(199, 219);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 60);
			this->button18->TabIndex = 0;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(265, 219);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 0;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Level3::button19_Click);
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(331, 219);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 60);
			this->button20->TabIndex = 0;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Level3::button20_Click);
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(397, 219);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(60, 60);
			this->button21->TabIndex = 0;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Level3::button21_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(463, 219);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(60, 60);
			this->button22->TabIndex = 0;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Level3::button22_Click);
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button23->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(529, 219);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(60, 60);
			this->button23->TabIndex = 0;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Level3::button23_Click);
			// 
			// button24
			// 
			this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(595, 219);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(60, 60);
			this->button24->TabIndex = 0;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Level3::button24_Click);
			// 
			// button25
			// 
			this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button25->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(133, 285);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(60, 60);
			this->button25->TabIndex = 0;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Level3::button25_Click);
			// 
			// button26
			// 
			this->button26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button26->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(199, 285);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(60, 60);
			this->button26->TabIndex = 0;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Level3::button26_Click);
			// 
			// button27
			// 
			this->button27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(265, 285);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(60, 60);
			this->button27->TabIndex = 0;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Level3::button27_Click);
			// 
			// button28
			// 
			this->button28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button28->BackColor = System::Drawing::Color::DarkCyan;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(331, 285);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 60);
			this->button28->TabIndex = 0;
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button29->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(397, 285);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(60, 60);
			this->button29->TabIndex = 0;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Level3::button29_Click);
			// 
			// button30
			// 
			this->button30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button30->BackColor = System::Drawing::Color::DarkCyan;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(463, 285);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(60, 60);
			this->button30->TabIndex = 0;
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button31->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(529, 285);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 60);
			this->button31->TabIndex = 0;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Level3::button31_Click);
			// 
			// button32
			// 
			this->button32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button32->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(595, 285);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 60);
			this->button32->TabIndex = 0;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Level3::button32_Click);
			// 
			// button33
			// 
			this->button33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button33->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(133, 351);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 60);
			this->button33->TabIndex = 0;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Level3::button33_Click);
			// 
			// button34
			// 
			this->button34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button34->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(199, 351);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 60);
			this->button34->TabIndex = 0;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Level3::button34_Click);
			// 
			// button35
			// 
			this->button35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button35->BackColor = System::Drawing::Color::DarkCyan;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(265, 351);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(60, 60);
			this->button35->TabIndex = 0;
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button36->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(331, 351);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(60, 60);
			this->button36->TabIndex = 0;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Level3::button36_Click);
			// 
			// button37
			// 
			this->button37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button37->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(397, 351);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(60, 60);
			this->button37->TabIndex = 0;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Level3::button37_Click);
			// 
			// button38
			// 
			this->button38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button38->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(463, 351);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(60, 60);
			this->button38->TabIndex = 0;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Level3::button38_Click);
			// 
			// button39
			// 
			this->button39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button39->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(529, 351);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(60, 60);
			this->button39->TabIndex = 0;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Level3::button39_Click);
			// 
			// button40
			// 
			this->button40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button40->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(595, 351);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(60, 60);
			this->button40->TabIndex = 0;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Level3::button40_Click);
			// 
			// button41
			// 
			this->button41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button41->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(133, 417);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(60, 60);
			this->button41->TabIndex = 0;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Level3::button41_Click);
			// 
			// button42
			// 
			this->button42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button42->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(199, 417);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(60, 60);
			this->button42->TabIndex = 0;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Level3::button42_Click);
			// 
			// button43
			// 
			this->button43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button43->BackColor = System::Drawing::Color::DarkCyan;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(265, 417);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(60, 60);
			this->button43->TabIndex = 0;
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button44->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(331, 417);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(60, 60);
			this->button44->TabIndex = 0;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &Level3::button44_Click);
			// 
			// button45
			// 
			this->button45->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button45->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Location = System::Drawing::Point(397, 417);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(60, 60);
			this->button45->TabIndex = 0;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &Level3::button45_Click);
			// 
			// button46
			// 
			this->button46->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button46->BackColor = System::Drawing::Color::DarkCyan;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(463, 417);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(60, 60);
			this->button46->TabIndex = 0;
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button47->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(529, 417);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(60, 60);
			this->button47->TabIndex = 0;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &Level3::button47_Click);
			// 
			// button48
			// 
			this->button48->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button48->BackColor = System::Drawing::Color::DarkCyan;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Location = System::Drawing::Point(595, 417);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(60, 60);
			this->button48->TabIndex = 0;
			this->button48->UseVisualStyleBackColor = false;
			// 
			// button49
			// 
			this->button49->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button49->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Location = System::Drawing::Point(133, 483);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(60, 60);
			this->button49->TabIndex = 0;
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &Level3::button49_Click);
			// 
			// button50
			// 
			this->button50->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button50->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Location = System::Drawing::Point(199, 483);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(60, 60);
			this->button50->TabIndex = 0;
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &Level3::button50_Click);
			// 
			// button51
			// 
			this->button51->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button51->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Location = System::Drawing::Point(265, 483);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(60, 60);
			this->button51->TabIndex = 0;
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &Level3::button51_Click);
			// 
			// button52
			// 
			this->button52->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button52->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Location = System::Drawing::Point(331, 483);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(60, 60);
			this->button52->TabIndex = 0;
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &Level3::button52_Click);
			// 
			// button53
			// 
			this->button53->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button53->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Location = System::Drawing::Point(397, 483);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(60, 60);
			this->button53->TabIndex = 0;
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &Level3::button53_Click);
			// 
			// button54
			// 
			this->button54->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button54->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Location = System::Drawing::Point(463, 483);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(60, 60);
			this->button54->TabIndex = 0;
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &Level3::button54_Click);
			// 
			// button55
			// 
			this->button55->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button55->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Location = System::Drawing::Point(529, 483);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(60, 60);
			this->button55->TabIndex = 0;
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &Level3::button55_Click);
			// 
			// button56
			// 
			this->button56->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button56->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Location = System::Drawing::Point(595, 483);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(60, 60);
			this->button56->TabIndex = 0;
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &Level3::button56_Click);
			// 
			// button57
			// 
			this->button57->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button57->BackColor = System::Drawing::Color::DarkCyan;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Location = System::Drawing::Point(133, 549);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(60, 60);
			this->button57->TabIndex = 0;
			this->button57->UseVisualStyleBackColor = false;
			// 
			// button58
			// 
			this->button58->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button58->BackColor = System::Drawing::Color::DarkCyan;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Location = System::Drawing::Point(199, 549);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(60, 60);
			this->button58->TabIndex = 0;
			this->button58->UseVisualStyleBackColor = false;
			// 
			// button59
			// 
			this->button59->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button59->BackColor = System::Drawing::Color::DarkCyan;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Location = System::Drawing::Point(265, 549);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(60, 60);
			this->button59->TabIndex = 0;
			this->button59->UseVisualStyleBackColor = false;
			// 
			// button60
			// 
			this->button60->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button60->BackColor = System::Drawing::Color::DarkCyan;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Location = System::Drawing::Point(331, 549);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(60, 60);
			this->button60->TabIndex = 0;
			this->button60->UseVisualStyleBackColor = false;
			// 
			// button61
			// 
			this->button61->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button61->BackColor = System::Drawing::Color::DarkCyan;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Location = System::Drawing::Point(397, 549);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(60, 60);
			this->button61->TabIndex = 0;
			this->button61->UseVisualStyleBackColor = false;
			// 
			// button62
			// 
			this->button62->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button62->BackColor = System::Drawing::Color::DarkCyan;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Location = System::Drawing::Point(463, 549);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(60, 60);
			this->button62->TabIndex = 0;
			this->button62->UseVisualStyleBackColor = false;
			// 
			// button63
			// 
			this->button63->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button63->BackColor = System::Drawing::Color::DarkCyan;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Location = System::Drawing::Point(529, 549);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(60, 60);
			this->button63->TabIndex = 0;
			this->button63->UseVisualStyleBackColor = false;
			// 
			// button64
			// 
			this->button64->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button64->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold));
			this->button64->Location = System::Drawing::Point(595, 549);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(60, 60);
			this->button64->TabIndex = 0;
			this->button64->Text = L"E";
			this->button64->UseVisualStyleBackColor = false;
			this->button64->Click += gcnew System::EventHandler(this, &Level3::button64_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ExitButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold));
			this->ExitButton->ForeColor = System::Drawing::Color::Red;
			this->ExitButton->Location = System::Drawing::Point(835, 476);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(178, 60);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Level3::Exit_Click);
			// 
			// RestartButton
			// 
			this->RestartButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RestartButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RestartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RestartButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold));
			this->RestartButton->Location = System::Drawing::Point(835, 392);
			this->RestartButton->Name = L"RestartButton";
			this->RestartButton->Size = System::Drawing::Size(178, 60);
			this->RestartButton->TabIndex = 0;
			this->RestartButton->Text = L"Restart";
			this->RestartButton->UseVisualStyleBackColor = false;
			this->RestartButton->Click += gcnew System::EventHandler(this, &Level3::Restart_Click);
			// 
			// NextButton
			// 
			this->NextButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->NextButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->NextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NextButton->Location = System::Drawing::Point(835, 302);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(178, 60);
			this->NextButton->TabIndex = 0;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = false;
			this->NextButton->Click += gcnew System::EventHandler(this, &Level3::Next_Click);
			// 
			// button65
			// 
			this->button65->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button65->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button65->Location = System::Drawing::Point(835, 219);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(178, 60);
			this->button65->TabIndex = 1;
			this->button65->Text = L"Level 3";
			this->button65->UseVisualStyleBackColor = false;
			// 
			// Level3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->RestartButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Level3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level3";
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
			button3->BackColor = System::Drawing::Color::White;
			sum++;
		}
	};

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button9, button10);
	MakePath(button9, button17);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button10, button9);
	MakePath(button10, button11);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button11, button10);
	MakePath(button11, button3);
	MakePath(button11, button19);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button13, button14);
	MakePath(button13, button21);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button14, button13);
	MakePath(button14, button15);
	MakePath(button14, button22);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button15, button14);
	MakePath(button15, button23);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button17, button9);
	MakePath(button17, button25);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button19, button11); 
	MakePath(button19, button20);
	MakePath(button19, button27);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button20, button19);
	MakePath(button20, button21);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button21, button13);
	MakePath(button21, button29);
	MakePath(button21, button20);
	MakePath(button21, button22);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button22, button21);
	MakePath(button22, button23);
	MakePath(button22, button14);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button23, button22);
	MakePath(button23, button24);
	MakePath(button23, button15);
	MakePath(button23, button31);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button24, button23);
	MakePath(button24, button32);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button25, button26);
	MakePath(button25, button17);
	MakePath(button25, button33);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button26, button25);
	MakePath(button26, button27);
	MakePath(button26, button34);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button27, button26);
	MakePath(button27, button19);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button29, button21);
	MakePath(button29, button37);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button31, button23);
	MakePath(button31, button39);
	MakePath(button31, button32);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button32, button24);
	MakePath(button32, button40);
	MakePath(button32, button31);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button33, button25);
	MakePath(button33, button41);
	MakePath(button33, button34);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button34, button33);
	MakePath(button34, button26);
	MakePath(button34, button42);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button36, button44);
	MakePath(button36, button37);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button37, button36);
	MakePath(button37, button38);
	MakePath(button37, button29);
	MakePath(button37, button45);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button38, button37);
	MakePath(button38, button39);
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button39, button31);
	MakePath(button39, button47);
	MakePath(button39, button38);
	MakePath(button39, button40);
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button40, button32);
	MakePath(button40, button39);
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button41, button33);
	MakePath(button41, button49);
	MakePath(button41, button42);
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button42, button34);
	MakePath(button42, button50);
	MakePath(button42, button41);
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button44, button36);
	MakePath(button44, button52);
	MakePath(button44, button45);
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button45, button37);
	MakePath(button45, button53);
	MakePath(button45, button44);
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button47, button39);
	MakePath(button47, button55);
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button49, button41);
	MakePath(button49, button50);
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button50, button42);
	MakePath(button50, button49);
	MakePath(button50, button51);
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button51, button50);
	MakePath(button51, button52);
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button52, button44);
	MakePath(button52, button51);
	MakePath(button52, button53);
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button53, button45);
	MakePath(button53, button52);
	MakePath(button53, button54);
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button54, button53);
	MakePath(button54, button55);
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button55, button47);
	MakePath(button55, button54);
	MakePath(button55, button56);
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button56, button55);
	MakePath(button56, button64);
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button64, button56);
	if (sum == 13)
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
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (win == true)
	{
		Form^ next = gcnew Level4(BacktoMenu);
		next->Show();
		this->Hide();
	}
}
private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ restart = gcnew Level3(BacktoMenu);
	restart->Show();
	this->Hide();
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BacktoMenu->Show();
}
};
}
