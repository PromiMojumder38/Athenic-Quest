#pragma once
#include "Level2.h"
namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level1
	/// </summary>
	public ref class Level1 : public System::Windows::Forms::Form
	{
	public:
		Level1(Form^ PathEntry)
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
		~Level1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:System::Windows::Forms::Form^ BacktoMenu;
	private: System::Windows::Forms::Button^ button1;
	protected:
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
	private: System::Windows::Forms::Button^ Restart;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ Next;
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
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(141, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 66);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(220, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 66);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Level1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(299, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 66);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(378, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 66);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Level1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(457, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 66);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Level1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(536, 91);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 66);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Level1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(615, 91);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 66);
			this->button7->TabIndex = 0;
			this->button7->Text = L"S";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Level1::GameStart);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(694, 91);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 66);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Level1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkCyan;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(141, 163);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 66);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(220, 163);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 66);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Level1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkCyan;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(299, 163);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 66);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkCyan;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(378, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 66);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkCyan;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(457, 163);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 66);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkCyan;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(536, 163);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 66);
			this->button14->TabIndex = 0;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkCyan;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(615, 163);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 66);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(694, 163);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 66);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Level1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkCyan;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(141, 235);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 66);
			this->button17->TabIndex = 0;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(220, 235);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 66);
			this->button18->TabIndex = 0;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Level1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(299, 235);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 66);
			this->button19->TabIndex = 0;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Level1::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(378, 235);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 66);
			this->button20->TabIndex = 0;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Level1::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkCyan;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(457, 235);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(73, 66);
			this->button21->TabIndex = 0;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(536, 235);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 66);
			this->button22->TabIndex = 0;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Level1::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(615, 235);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(73, 66);
			this->button23->TabIndex = 0;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Level1::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(694, 235);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(73, 66);
			this->button24->TabIndex = 0;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Level1::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::DarkCyan;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(141, 307);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(73, 66);
			this->button25->TabIndex = 0;
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::DarkCyan;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(220, 307);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(73, 66);
			this->button26->TabIndex = 0;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::DarkCyan;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(299, 307);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(73, 66);
			this->button27->TabIndex = 0;
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(378, 307);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(73, 66);
			this->button28->TabIndex = 0;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Level1::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::DarkCyan;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(457, 307);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(73, 66);
			this->button29->TabIndex = 0;
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(536, 307);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(73, 66);
			this->button30->TabIndex = 0;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Level1::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::DarkCyan;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(615, 307);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(73, 66);
			this->button31->TabIndex = 0;
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::DarkCyan;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(694, 307);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(73, 66);
			this->button32->TabIndex = 0;
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::DarkCyan;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(141, 379);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(73, 66);
			this->button33->TabIndex = 0;
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(220, 379);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(73, 66);
			this->button34->TabIndex = 0;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Level1::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(299, 379);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(73, 66);
			this->button35->TabIndex = 0;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Level1::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(378, 379);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(73, 66);
			this->button36->TabIndex = 0;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Level1::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::DarkCyan;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(457, 379);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(73, 66);
			this->button37->TabIndex = 0;
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(536, 379);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(73, 66);
			this->button38->TabIndex = 0;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Level1::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(615, 379);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(73, 66);
			this->button39->TabIndex = 0;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Level1::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(694, 379);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(73, 66);
			this->button40->TabIndex = 0;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Level1::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::DarkCyan;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(141, 451);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(73, 66);
			this->button41->TabIndex = 0;
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(220, 451);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(73, 66);
			this->button42->TabIndex = 0;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Level1::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::DarkCyan;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(299, 451);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(73, 66);
			this->button43->TabIndex = 0;
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::DarkCyan;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(378, 451);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(73, 66);
			this->button44->TabIndex = 0;
			this->button44->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::DarkCyan;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Location = System::Drawing::Point(457, 451);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(73, 66);
			this->button45->TabIndex = 0;
			this->button45->UseVisualStyleBackColor = false;
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::DarkCyan;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(536, 451);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(73, 66);
			this->button46->TabIndex = 0;
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::DarkCyan;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(615, 451);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(73, 66);
			this->button47->TabIndex = 0;
			this->button47->UseVisualStyleBackColor = false;
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Location = System::Drawing::Point(694, 451);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(73, 66);
			this->button48->TabIndex = 0;
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &Level1::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::DarkCyan;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Location = System::Drawing::Point(141, 523);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(73, 66);
			this->button49->TabIndex = 0;
			this->button49->UseVisualStyleBackColor = false;
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Location = System::Drawing::Point(220, 523);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(73, 66);
			this->button50->TabIndex = 0;
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &Level1::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::DarkCyan;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Location = System::Drawing::Point(299, 523);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(73, 66);
			this->button51->TabIndex = 0;
			this->button51->UseVisualStyleBackColor = false;
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::DarkCyan;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Location = System::Drawing::Point(378, 523);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(73, 66);
			this->button52->TabIndex = 0;
			this->button52->UseVisualStyleBackColor = false;
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::DarkCyan;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Location = System::Drawing::Point(457, 523);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(73, 66);
			this->button53->TabIndex = 0;
			this->button53->UseVisualStyleBackColor = false;
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Location = System::Drawing::Point(536, 523);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(73, 66);
			this->button54->TabIndex = 0;
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &Level1::button54_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Location = System::Drawing::Point(615, 523);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(73, 66);
			this->button55->TabIndex = 0;
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &Level1::button55_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Location = System::Drawing::Point(694, 523);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(73, 66);
			this->button56->TabIndex = 0;
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &Level1::button56_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::DarkCyan;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Location = System::Drawing::Point(141, 595);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(73, 66);
			this->button57->TabIndex = 0;
			this->button57->UseVisualStyleBackColor = false;
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->Location = System::Drawing::Point(220, 595);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(73, 66);
			this->button58->TabIndex = 0;
			this->button58->Text = L"E";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &Level1::button58_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Location = System::Drawing::Point(299, 595);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(73, 66);
			this->button59->TabIndex = 0;
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &Level1::button59_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Location = System::Drawing::Point(378, 595);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(73, 66);
			this->button60->TabIndex = 0;
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &Level1::button60_Click);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Location = System::Drawing::Point(457, 595);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(73, 66);
			this->button61->TabIndex = 0;
			this->button61->UseVisualStyleBackColor = false;
			this->button61->Click += gcnew System::EventHandler(this, &Level1::button61_Click);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Location = System::Drawing::Point(536, 595);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(73, 66);
			this->button62->TabIndex = 0;
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &Level1::button62_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::DarkCyan;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Location = System::Drawing::Point(615, 595);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(73, 66);
			this->button63->TabIndex = 0;
			this->button63->UseVisualStyleBackColor = false;
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::DarkCyan;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Location = System::Drawing::Point(694, 595);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(73, 66);
			this->button64->TabIndex = 0;
			this->button64->UseVisualStyleBackColor = false;
			// 
			// Restart
			// 
			this->Restart->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Restart->Location = System::Drawing::Point(896, 379);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(149, 66);
			this->Restart->TabIndex = 1;
			this->Restart->Text = L"RESTART";
			this->Restart->UseVisualStyleBackColor = true;
			this->Restart->Click += gcnew System::EventHandler(this, &Level1::Restart_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Red;
			this->ExitButton->Location = System::Drawing::Point(896, 472);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(149, 66);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"EXIT";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Level1::ExitButton_Click);
			// 
			// Next
			// 
			this->Next->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next->Location = System::Drawing::Point(896, 282);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(149, 66);
			this->Next->TabIndex = 1;
			this->Next->Text = L"NEXT";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &Level1::Next_Click);
			// 
			// button65
			// 
			this->button65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button65->ForeColor = System::Drawing::Color::Green;
			this->button65->Location = System::Drawing::Point(896, 183);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(149, 66);
			this->button65->TabIndex = 2;
			this->button65->Text = L"Level 1";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// Level1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Restart);
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
			this->MinimizeBox = false;
			this->Name = L"Level1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level1";
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
			button7->BackColor = System::Drawing::Color::White;
			sum++;
		}
	};
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button2, button3);
	MakePath(button2, button10);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button3, button2);
	MakePath(button3, button4);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button4, button3);
	MakePath(button4, button5);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button5, button4);
	MakePath(button5, button6);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button6, button5);
	MakePath(button6, button7);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button8, button7);
	MakePath(button8, button16);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button10, button2);
	MakePath(button10, button18);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button16, button8);
	MakePath(button16, button8);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button18, button10);
	MakePath(button18, button19);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button19, button18);
	MakePath(button19, button20);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button20, button19);
	MakePath(button20, button28);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button22, button23);
	MakePath(button22, button30);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button23, button22);
	MakePath(button23, button24);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button24, button16);
	MakePath(button24, button23);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button28, button20);
	MakePath(button28, button36);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button30, button22);
	MakePath(button30, button38);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button34, button35);
	MakePath(button34, button42);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button35, button34);
	MakePath(button35, button36);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button36, button28);
	MakePath(button36, button35);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button38, button30);
	MakePath(button38, button39);
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button39, button38);
	MakePath(button39, button40);
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button40, button39);
	MakePath(button40, button48);
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button42, button34);
	MakePath(button42, button50);
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button48, button40);
	MakePath(button48, button56);
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button50, button42);
	MakePath(button50, button58);
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button54, button55);
	MakePath(button54, button62);
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button55, button54);
	MakePath(button55, button56);
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button56, button55);
	MakePath(button56, button48);
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button58, button50);
	MakePath(button58, button59);
	if (sum == 17)
	{
		MessageBox::Show("You win!", "Well Done.", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sum = 0;
		win = true;
	}
	else
	{
		MessageBox::Show("You lost. That's not the shortest path.", "Game over", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sum = 0;
	}

}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button59, button58);
	MakePath(button59, button60);
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button60, button59);
	MakePath(button60, button61);
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button61, button60);
	MakePath(button61, button62);
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
	MakePath(button62, button61);
	MakePath(button62, button54);
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BacktoMenu->Show();
}
private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ restart = gcnew Level1(BacktoMenu);
	restart->Show();
	this->Hide();
}
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (win == true)
	{
		Form^ next = gcnew Level2(BacktoMenu);
		next->Show();
		this->Hide();
	}
}
};
}
