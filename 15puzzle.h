#pragma once

namespace AthenicQuest{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Puzzle15
	/// </summary>
	public ref class Puzzle15 : public System::Windows::Forms::Form
	{
	public:
		Puzzle15(Form^ EntryPage)
		{
			BacktoEntry = EntryPage;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Puzzle15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b4;
	protected:

	protected:

	private: System::Windows::Forms::Button^ b3;

	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b8;




	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b14;
	private: System::Windows::Forms::Button^ b15;
	private: System::Windows::Forms::Button^ b16;




	private: System::Windows::Forms::Button^ b13;

	private: System::Windows::Forms::Button^ b10;
	private: System::Windows::Forms::Button^ b11;
	private: System::Windows::Forms::Button^ b12;



	private: System::Windows::Forms::Button^ b9;


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;







	private: System::ComponentModel::IContainer^ components;

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
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b14 = (gcnew System::Windows::Forms::Button());
			this->b15 = (gcnew System::Windows::Forms::Button());
			this->b16 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b10 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b1
			// 
			this->b1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b1->BackColor = System::Drawing::Color::LavenderBlush;
			this->b1->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(108, 142);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(100, 100);
			this->b1->TabIndex = 0;
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &Puzzle15::btn1);
			// 
			// b4
			// 
			this->b4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b4->BackColor = System::Drawing::Color::LavenderBlush;
			this->b4->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(426, 142);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(100, 100);
			this->b4->TabIndex = 1;
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &Puzzle15::btn4);
			// 
			// b3
			// 
			this->b3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b3->BackColor = System::Drawing::Color::LavenderBlush;
			this->b3->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(320, 142);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(100, 100);
			this->b3->TabIndex = 2;
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &Puzzle15::btn3);
			// 
			// b2
			// 
			this->b2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b2->BackColor = System::Drawing::Color::LavenderBlush;
			this->b2->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(214, 142);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(100, 100);
			this->b2->TabIndex = 3;
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &Puzzle15::btn2);
			// 
			// b6
			// 
			this->b6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b6->BackColor = System::Drawing::Color::LavenderBlush;
			this->b6->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(214, 248);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(100, 100);
			this->b6->TabIndex = 15;
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &Puzzle15::btn6);
			// 
			// b7
			// 
			this->b7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b7->BackColor = System::Drawing::Color::LavenderBlush;
			this->b7->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(320, 248);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(100, 100);
			this->b7->TabIndex = 14;
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &Puzzle15::btn7);
			// 
			// b8
			// 
			this->b8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b8->BackColor = System::Drawing::Color::LavenderBlush;
			this->b8->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(426, 248);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(100, 100);
			this->b8->TabIndex = 13;
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &Puzzle15::btn8);
			// 
			// b5
			// 
			this->b5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b5->BackColor = System::Drawing::Color::LavenderBlush;
			this->b5->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(108, 248);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(100, 100);
			this->b5->TabIndex = 12;
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &Puzzle15::btn5);
			// 
			// b14
			// 
			this->b14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b14->BackColor = System::Drawing::Color::LavenderBlush;
			this->b14->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b14->Location = System::Drawing::Point(214, 460);
			this->b14->Name = L"b14";
			this->b14->Size = System::Drawing::Size(100, 100);
			this->b14->TabIndex = 23;
			this->b14->UseVisualStyleBackColor = false;
			this->b14->Click += gcnew System::EventHandler(this, &Puzzle15::btn14);
			// 
			// b15
			// 
			this->b15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b15->BackColor = System::Drawing::Color::LavenderBlush;
			this->b15->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b15->Location = System::Drawing::Point(320, 460);
			this->b15->Name = L"b15";
			this->b15->Size = System::Drawing::Size(100, 100);
			this->b15->TabIndex = 22;
			this->b15->UseVisualStyleBackColor = false;
			this->b15->Click += gcnew System::EventHandler(this, &Puzzle15::btn15);
			// 
			// b16
			// 
			this->b16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b16->BackColor = System::Drawing::Color::LavenderBlush;
			this->b16->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b16->Location = System::Drawing::Point(426, 460);
			this->b16->Name = L"b16";
			this->b16->Size = System::Drawing::Size(100, 100);
			this->b16->TabIndex = 21;
			this->b16->UseVisualStyleBackColor = false;
			this->b16->Click += gcnew System::EventHandler(this, &Puzzle15::btn16);
			// 
			// b13
			// 
			this->b13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b13->BackColor = System::Drawing::Color::LavenderBlush;
			this->b13->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b13->Location = System::Drawing::Point(108, 460);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(100, 100);
			this->b13->TabIndex = 20;
			this->b13->UseVisualStyleBackColor = false;
			this->b13->Click += gcnew System::EventHandler(this, &Puzzle15::btn13);
			// 
			// b10
			// 
			this->b10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b10->BackColor = System::Drawing::Color::LavenderBlush;
			this->b10->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b10->Location = System::Drawing::Point(214, 354);
			this->b10->Name = L"b10";
			this->b10->Size = System::Drawing::Size(100, 100);
			this->b10->TabIndex = 19;
			this->b10->UseVisualStyleBackColor = false;
			this->b10->Click += gcnew System::EventHandler(this, &Puzzle15::btn10);
			// 
			// b11
			// 
			this->b11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b11->BackColor = System::Drawing::Color::LavenderBlush;
			this->b11->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b11->Location = System::Drawing::Point(320, 354);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(100, 100);
			this->b11->TabIndex = 18;
			this->b11->UseVisualStyleBackColor = false;
			this->b11->Click += gcnew System::EventHandler(this, &Puzzle15::btn11);
			// 
			// b12
			// 
			this->b12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b12->BackColor = System::Drawing::Color::LavenderBlush;
			this->b12->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b12->Location = System::Drawing::Point(426, 354);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(100, 100);
			this->b12->TabIndex = 17;
			this->b12->UseVisualStyleBackColor = false;
			this->b12->Click += gcnew System::EventHandler(this, &Puzzle15::btn12);
			// 
			// b9
			// 
			this->b9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->b9->BackColor = System::Drawing::Color::LavenderBlush;
			this->b9->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->b9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(108, 354);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(100, 100);
			this->b9->TabIndex = 16;
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &Puzzle15::btn9);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(640, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 69);
			this->label1->TabIndex = 28;
			this->label1->Click += gcnew System::EventHandler(this, &Puzzle15::clik);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(98, 573);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 90);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Total Clicks";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::SteelBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(359, 568);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 95);
			this->label4->TabIndex = 2;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(754, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(280, 100);
			this->button2->TabIndex = 30;
			this->button2->Text = L"New Game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Puzzle15::nugem);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(754, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(280, 100);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Solution";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Puzzle15::sln);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(754, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(280, 100);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Puzzle15::exitt);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(754, 357);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(280, 100);
			this->button5->TabIndex = 33;
			this->button5->Text = L"Rules";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Puzzle15::help);
			// 
			// Puzzle15
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b14);
			this->Controls->Add(this->b15);
			this->Controls->Add(this->b16);
			this->Controls->Add(this->b13);
			this->Controls->Add(this->b10);
			this->Controls->Add(this->b11);
			this->Controls->Add(this->b12);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Puzzle15";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Puzzle Game";
			this->Load += gcnew System::EventHandler(this, &Puzzle15::Puzzle15_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int Counter, time = 0, min = 0, sec = 0;
		bool game_on = false;
		//MessageBox::Show("Press'Start' button to start the game", "Puzzle Game", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);

	public: System::Void emptyspot(Button^ but1, Button^ but2) {
		if (but2->Text == "")
		{
			but2->Text = but1->Text;
			but1->Text = "";
			if(game_on == true) Counter++;
		}
	}
	public: System::Void slnchk()
	{
		if (b1->Text == "1" && b2->Text == "2" && b3->Text == "3" && b4->Text == "4" && b5->Text == "5" && b6->Text == "6" && b7->Text == "7" && b8->Text == "8" && b9->Text == "9" && b10->Text == "10" && b11->Text == "11" && b12->Text == "12" && b13->Text == "13" && b14->Text == "14" && b15->Text == "15")
		{
			if(game_on == true)MessageBox::Show("Well Done! You are a winner", "Puzzle Game", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		//Counter++;
		label4->Text = Counter.ToString();
	}
		 

	private: System::Void btn1(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b1, b2);
		emptyspot(b1, b5);
		slnchk();
	}
	private: System::Void btn2(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b2, b1);
		emptyspot(b2, b3);
		emptyspot(b2, b6);
		slnchk();
	}
	private: System::Void btn3(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b3, b2);
		emptyspot(b3, b4);
		emptyspot(b3, b7);
		slnchk();
	}
	private: System::Void btn4(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b4, b3);
		emptyspot(b4, b8);
		slnchk();
	}
	private: System::Void btn5(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b5, b1);
		emptyspot(b5, b6);
		emptyspot(b5, b9);
		slnchk();
	}
	private: System::Void btn6(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b6, b2);
		emptyspot(b6, b5);
		emptyspot(b6, b7);
		emptyspot(b6, b10);
		slnchk();
	}
	private: System::Void btn7(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b7, b3);
		emptyspot(b7, b6);
		emptyspot(b7, b8);
		emptyspot(b7, b11);
		slnchk();
	}
	private: System::Void btn8(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b8, b4);
		emptyspot(b8, b7);
		emptyspot(b8, b12);
		slnchk();
	}
	private: System::Void btn9(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b9, b5);
		emptyspot(b9, b10);
		emptyspot(b9, b13);
		slnchk();
	}
	private: System::Void btn10(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b10, b6);
		emptyspot(b10, b9);
		emptyspot(b10, b11);
		emptyspot(b10, b14);
		slnchk();
	}
	private: System::Void btn11(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b11, b7);
		emptyspot(b11, b10);
		emptyspot(b11, b12);
		emptyspot(b11, b15);
		slnchk();
	}
	private: System::Void btn12(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b12, b8);
		emptyspot(b12, b11);
		emptyspot(b12, b16);
		slnchk();
	}
	private: System::Void btn13(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b13, b9);
		emptyspot(b13, b14);
		slnchk();
	}
	private: System::Void btn14(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b14, b10);
		emptyspot(b14, b13);
		emptyspot(b14, b15);
		slnchk();
	}
	private: System::Void btn15(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b15, b11);
		emptyspot(b15, b14);
		emptyspot(b15, b16);
		slnchk();
	}
	private: System::Void btn16(System::Object^ sender, System::EventArgs^ e) {
		emptyspot(b16, b12);
		emptyspot(b16, b15);
		slnchk();
	}
	private: System::Void clik(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
		//DialogResult dr;
		
	}
private: System::Void Start(System::Object^ sender, System::EventArgs^ e) {
	
	}

	   private: System::Void Puzzle15_Load(System::Object^ sender, System::EventArgs^ e) {
	   }

private: System::Void exitt(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit this game?", "Puzzle Game", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Hide();
		BacktoEntry->Show();
	}
}
private: System::Void help(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Move tiles in grid to order them from 1 to 15.\n\n", "Rules", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void resett(System::Object^ sender, System::EventArgs^ e) {
	Random^ r = gcnew Random();
	int t = r->Next(1, 8);
	if (t == 8)
	{
		b1->Text = "6";
		b2->Text = "13";
		b3->Text = "7";
		b4->Text = "10";
		b5->Text = "8";
		b6->Text = "9";
		b7->Text = "11";
		b8->Text = "";
		b9->Text = "15";
		b10->Text = "2";
		b11->Text = "12";
		b12->Text = "5";
		b13->Text = "14";
		b14->Text = "3";
		b15->Text = "1";
		b16->Text = "4";
	}
	if (t == 1)
	{
		b1->Text = "13";
		b2->Text = "2";
		b3->Text = "10";
		b4->Text = "3";
		b5->Text = "1";
		b6->Text = "12";
		b7->Text = "8";
		b8->Text = "4";
		b9->Text = "5";
		b10->Text = "";
		b11->Text = "9";
		b12->Text = "6";
		b13->Text = "15";
		b14->Text = "14";
		b15->Text = "11";
		b16->Text = "7";
	}
	if (t == 2)
	{
		b1->Text = "12";
		b2->Text = "";
		b3->Text = "10";
		b4->Text = "9";
		b5->Text = "5";
		b6->Text = "8";
		b7->Text = "14";
		b8->Text = "1";
		b9->Text = "13";
		b10->Text = "4";
		b11->Text = "6";
		b12->Text = "2";
		b13->Text = "3";
		b14->Text = "11";
		b15->Text = "7";
		b16->Text = "15";
	}
	if (t == 3)
	{
		b1->Text = "3";
		b2->Text = "";
		b3->Text = "14";
		b4->Text = "13";
		b5->Text = "11";
		b6->Text = "2";
		b7->Text = "5";
		b8->Text = "4";
		b9->Text = "8";
		b10->Text = "6";
		b11->Text = "1";
		b12->Text = "15";
		b13->Text = "7";
		b14->Text = "10";
		b15->Text = "9";
		b16->Text = "12";
	}
	if (t == 4)
	{
		b1->Text = "5";
		b2->Text = "8";
		b3->Text = "15";
		b4->Text = "";
		b5->Text = "4";
		b6->Text = "7";
		b7->Text = "12";
		b8->Text = "13";
		b9->Text = "10";
		b10->Text = "9";
		b11->Text = "14";
		b12->Text = "3";
		b13->Text = "2";
		b14->Text = "11";
		b15->Text = "6";
		b16->Text = "1";
	}
	if (t == 5)
	{
		b1->Text = "9";
		b2->Text = "4";
		b3->Text = "6";
		b4->Text = "2";
		b5->Text = "12";
		b6->Text = "8";
		b7->Text = "14";
		b8->Text = "5";
		b9->Text = "13";
		b10->Text = "15";
		b11->Text = "3";
		b12->Text = "10";
		b13->Text = "";
		b14->Text = "7";
		b15->Text = "1";
		b16->Text = "11";
	}
	if (t == 6)
	{
		b1->Text = "10";
		b2->Text = "9";
		b3->Text = "3";
		b4->Text = "7";
		b5->Text = "8";
		b6->Text = "5";
		b7->Text = "6";
		b8->Text = "11";
		b9->Text = "14";
		b10->Text = "";
		b11->Text = "15";
		b12->Text = "4";
		b13->Text = "13";
		b14->Text = "1";
		b15->Text = "2";
		b16->Text = "12";
	}
	if (t == 7)
	{
		b1->Text = "1";
		b2->Text = "14";
		b3->Text = "6";
		b4->Text = "7";
		b5->Text = "";
		b6->Text = "11";
		b7->Text = "9";
		b8->Text = "8";
		b9->Text = "3";
		b10->Text = "5";
		b11->Text = "4";
		b12->Text = "15";
		b13->Text = "12";
		b14->Text = "13";
		b15->Text = "2";
		b16->Text = "10";
	}
}
private: System::Void nugem(System::Object^ sender, System::EventArgs^ e) {
	Counter = 0;
	label4->Text = "";

	game_on = true;

	Random^ r = gcnew Random();
	int t = r->Next(1, 8);
	if (t == 8)
	{
		b1->Text = "6";
		b2->Text = "13";
		b3->Text = "7";
		b4->Text = "10";
		b5->Text = "8";
		b6->Text = "9";
		b7->Text = "11";
		b8->Text = "";
		b9->Text = "15";
		b10->Text = "2";
		b11->Text = "12";
		b12->Text = "5";
		b13->Text = "14";
		b14->Text = "3";
		b15->Text = "1";
		b16->Text = "4";
	}
	if (t == 1)
	{
		b1->Text = "13";
		b2->Text = "2";
		b3->Text = "10";
		b4->Text = "3";
		b5->Text = "1";
		b6->Text = "12";
		b7->Text = "8";
		b8->Text = "4";
		b9->Text = "5";
		b10->Text = "";
		b11->Text = "9";
		b12->Text = "6";
		b13->Text = "15";
		b14->Text = "14";
		b15->Text = "11";
		b16->Text = "7";
	}
	if (t == 2)
	{
		b1->Text = "12";
		b2->Text = "";
		b3->Text = "10";
		b4->Text = "9";
		b5->Text = "5";
		b6->Text = "8";
		b7->Text = "14";
		b8->Text = "1";
		b9->Text = "13";
		b10->Text = "4";
		b11->Text = "6";
		b12->Text = "2";
		b13->Text = "3";
		b14->Text = "11";
		b15->Text = "7";
		b16->Text = "15";
	}
	if (t == 3)
	{
		b1->Text = "3";
		b2->Text = "";
		b3->Text = "14";
		b4->Text = "13";
		b5->Text = "11";
		b6->Text = "2";
		b7->Text = "5";
		b8->Text = "4";
		b9->Text = "8";
		b10->Text = "6";
		b11->Text = "1";
		b12->Text = "15";
		b13->Text = "7";
		b14->Text = "10";
		b15->Text = "9";
		b16->Text = "12";
	}
	if (t == 4)
	{
		b1->Text = "5";
		b2->Text = "8";
		b3->Text = "15";
		b4->Text = "";
		b5->Text = "4";
		b6->Text = "7";
		b7->Text = "12";
		b8->Text = "13";
		b9->Text = "10";
		b10->Text = "9";
		b11->Text = "14";
		b12->Text = "3";
		b13->Text = "2";
		b14->Text = "11";
		b15->Text = "6";
		b16->Text = "1";
	}
	if (t == 5)
	{
		b1->Text = "9";
		b2->Text = "4";
		b3->Text = "6";
		b4->Text = "2";
		b5->Text = "12";
		b6->Text = "8";
		b7->Text = "14";
		b8->Text = "5";
		b9->Text = "13";
		b10->Text = "15";
		b11->Text = "3";
		b12->Text = "10";
		b13->Text = "";
		b14->Text = "7";
		b15->Text = "1";
		b16->Text = "11";
	}
	if (t == 6)
	{
		b1->Text = "10";
		b2->Text = "9";
		b3->Text = "3";
		b4->Text = "7";
		b5->Text = "8";
		b6->Text = "5";
		b7->Text = "6";
		b8->Text = "11";
		b9->Text = "14";
		b10->Text = "";
		b11->Text = "15";
		b12->Text = "4";
		b13->Text = "13";
		b14->Text = "1";
		b15->Text = "2";
		b16->Text = "12";
	}
	if (t == 7)
	{
		b1->Text = "1";
		b2->Text = "14";
		b3->Text = "6";
		b4->Text = "7";
		b5->Text = "";
		b6->Text = "11";
		b7->Text = "9";
		b8->Text = "8";
		b9->Text = "3";
		b10->Text = "5";
		b11->Text = "4";
		b12->Text = "15";
		b13->Text = "12";
		b14->Text = "13";
		b15->Text = "2";
		b16->Text = "10";
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sln(System::Object^ sender, System::EventArgs^ e) {
	game_on = false;
	Counter = 0;
	label4->Text = "";
	b1->Text = "1";
	b2->Text = "2";
	b3->Text = "3";
	b4->Text = "4";
	b5->Text = "5";
	b6->Text = "6";
	b7->Text = "7";
	b8->Text = "8";
	b9->Text = "9";
	b10->Text = "10";
	b11->Text = "11";
	b12->Text = "12";
	b13->Text = "13";
	b14->Text = "14";
	b15->Text = "15";
	b16->Text = "";
}

};

}
