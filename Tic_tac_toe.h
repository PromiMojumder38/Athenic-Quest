#pragma once

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tictactoe
	/// </summary>
	public ref class Tictactoe : public System::Windows::Forms::Form
	{
	public:
		Tictactoe(Form^ EntryPage)
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
		~Tictactoe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ b9;
	protected:

	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b7;

	private: System::Windows::Forms::Button^ b6;

	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b4;

	private: System::Windows::Forms::Button^ b3;

	private: System::Windows::Forms::Button^ b2;

	private: System::Windows::Forms::Button^ b1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ playx;

	private: System::Windows::Forms::Button^ playo;




	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;






	private: System::Windows::Forms::Button^ nugemee;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nugemee = (gcnew System::Windows::Forms::Button());
			this->playx = (gcnew System::Windows::Forms::Button());
			this->playo = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel1->Controls->Add(this->b9);
			this->panel1->Controls->Add(this->b8);
			this->panel1->Controls->Add(this->b7);
			this->panel1->Controls->Add(this->b6);
			this->panel1->Controls->Add(this->b5);
			this->panel1->Controls->Add(this->b4);
			this->panel1->Controls->Add(this->b3);
			this->panel1->Controls->Add(this->b2);
			this->panel1->Controls->Add(this->b1);
			this->panel1->Location = System::Drawing::Point(0, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1159, 713);
			this->panel1->TabIndex = 0;
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(373, 345);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(161, 139);
			this->b9->TabIndex = 15;
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &Tictactoe::btn9);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(218, 345);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(161, 139);
			this->b8->TabIndex = 14;
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &Tictactoe::btn8);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(60, 345);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(161, 139);
			this->b7->TabIndex = 13;
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &Tictactoe::btn7);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(373, 214);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(161, 139);
			this->b6->TabIndex = 12;
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &Tictactoe::btn6);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(218, 214);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(161, 139);
			this->b5->TabIndex = 11;
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &Tictactoe::btn5);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(60, 214);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(161, 139);
			this->b4->TabIndex = 10;
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &Tictactoe::btn4);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(373, 78);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(161, 139);
			this->b3->TabIndex = 9;
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &Tictactoe::btn3);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(218, 78);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(161, 139);
			this->b2->TabIndex = 8;
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &Tictactoe::btn2);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(60, 78);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(161, 139);
			this->b1->TabIndex = 7;
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &Tictactoe::btn1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->nugemee);
			this->panel2->Controls->Add(this->playx);
			this->panel2->Controls->Add(this->playo);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(581, 131);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(807, 605);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Tictactoe::panel2_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(319, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 72);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Tictactoe::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Indigo;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(38, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 72);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Tictactoe::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Purple;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(319, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(229, 72);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Rules";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Tictactoe::button1_Click);
			// 
			// nugemee
			// 
			this->nugemee->BackColor = System::Drawing::Color::Green;
			this->nugemee->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nugemee->ForeColor = System::Drawing::Color::White;
			this->nugemee->Location = System::Drawing::Point(38, 78);
			this->nugemee->Name = L"nugemee";
			this->nugemee->Size = System::Drawing::Size(229, 72);
			this->nugemee->TabIndex = 14;
			this->nugemee->Text = L"New Game";
			this->nugemee->UseVisualStyleBackColor = false;
			this->nugemee->Click += gcnew System::EventHandler(this, &Tictactoe::nugame);
			// 
			// playx
			// 
			this->playx->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playx->ForeColor = System::Drawing::Color::DarkViolet;
			this->playx->Location = System::Drawing::Point(276, 430);
			this->playx->Name = L"playx";
			this->playx->Size = System::Drawing::Size(272, 68);
			this->playx->TabIndex = 13;
			this->playx->Text = L"0";
			this->playx->UseVisualStyleBackColor = true;
			// 
			// playo
			// 
			this->playo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->playo->Location = System::Drawing::Point(276, 345);
			this->playo->Name = L"playo";
			this->playo->Size = System::Drawing::Size(272, 68);
			this->playo->TabIndex = 12;
			this->playo->Text = L"0";
			this->playo->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(23, 345);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 67);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkViolet;
			this->label1->Location = System::Drawing::Point(23, 430);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &Tictactoe::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(312, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(520, 111);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Tic Tac Toe";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1141, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Tictactoe
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1141, 666);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Tictactoe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &Tictactoe::Tictactoe_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int xx = 0, oo = 0;
		bool checker = false;

		Void enableFalse()
		{
			b1->Enabled = false;
			b2->Enabled = false;
			b3->Enabled = false;
			b4->Enabled = false;
			b5->Enabled = false;
			b6->Enabled = false;
			b7->Enabled = false;
			b8->Enabled = false;
			b9->Enabled = false;
		}

		Void score()
		{
			if (b1->Text == "X" && b2->Text == "X" && b3->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::DarkOliveGreen;
				b2->BackColor = System::Drawing::Color::DarkOliveGreen;
				b3->BackColor = System::Drawing::Color::DarkOliveGreen;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}
			else if (b4->Text == "X" && b5->Text == "X" && b6->Text == "X")
			{
				b4->BackColor = System::Drawing::Color::DarkMagenta;
				b5->BackColor = System::Drawing::Color::DarkMagenta;
				b6->BackColor = System::Drawing::Color::DarkMagenta;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}

			else if (b7->Text == "X" && b8->Text == "X" && b9->Text == "X")
			{
				b7->BackColor = System::Drawing::Color::DarkKhaki;
				b8->BackColor = System::Drawing::Color::DarkKhaki;
				b9->BackColor = System::Drawing::Color::DarkKhaki;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}
			else if (b1->Text == "X" && b4->Text == "X" && b7->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::DarkCyan;
				b4->BackColor = System::Drawing::Color::DarkCyan;
				b7->BackColor = System::Drawing::Color::DarkCyan;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}

			else if (b2->Text == "X" && b5->Text == "X" && b8->Text == "X")
			{
				b2->BackColor = System::Drawing::Color::RosyBrown;
				b5->BackColor = System::Drawing::Color::RosyBrown;
				b8->BackColor = System::Drawing::Color::RosyBrown;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				enableFalse();
			}
			else if (b3->Text == "X" && b6->Text == "X" && b9->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::Azure;
				b9->BackColor = System::Drawing::Color::Azure;
				b6->BackColor = System::Drawing::Color::Azure;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}

			else if (b1->Text == "X" && b5->Text == "X" && b9->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				//playx->BackColor = System::Drawing::Color::DarkGoldenrod;
				
				enableFalse();
			}
			else if (b3->Text == "X" && b5->Text == "X" && b7->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::Honeydew;
				b5->BackColor = System::Drawing::Color::Honeydew;
				b7->BackColor = System::Drawing::Color::Honeydew;
				playx->BackColor = System::Drawing::Color::LightPink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				xx = int::Parse(playx->Text);
				xx++;
				playx->Text = Convert::ToString(xx);
				
				enableFalse();
			}
			else if (b1->Text == "O" && b2->Text == "O" && b3->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::HotPink;
				b2->BackColor = System::Drawing::Color::HotPink;
				b3->BackColor = System::Drawing::Color::HotPink;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				//playo->BackColor = System::Drawing::Color::LightBlue;
				
				enableFalse();
			}
			else if (b4->Text == "O" && b5->Text == "O" && b6->Text == "O")
			{
				b4->BackColor = System::Drawing::Color::Pink;
				b5->BackColor = System::Drawing::Color::Pink;
				b6->BackColor = System::Drawing::Color::Pink;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				
				//playo->BackColor = System::Drawing::Color::LightBlue;
				enableFalse();
			}

			else if (b7->Text == "O" && b8->Text == "O" && b9->Text == "O")
			{
				b7->BackColor = System::Drawing::Color::DarkGoldenrod;
				b8->BackColor = System::Drawing::Color::DarkGoldenrod;
				playo->BackColor = System::Drawing::Color::LightBlue;
				b9->BackColor = System::Drawing::Color::DarkGoldenrod;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				//playo->BackColor = System::Drawing::Color::LightBlue;
				
				enableFalse();
			}
			else if (b1->Text == "O" && b4->Text == "O" && b7->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::DarkRed;
				b4->BackColor = System::Drawing::Color::DarkRed;
				b7->BackColor = System::Drawing::Color::DarkRed;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				//playo->BackColor = System::Drawing::Color::LightBlue;
				
				enableFalse();
			}

			else if (b2->Text == "O" && b5->Text == "O" && b8->Text == "O")
			{
				b2->BackColor = System::Drawing::Color::Cyan;
				b5->BackColor = System::Drawing::Color::Cyan;
				b8->BackColor = System::Drawing::Color::Cyan;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				//playo->BackColor = System::Drawing::Color::LightBlue;
				enableFalse();
			}
			else if (b3->Text == "O" && b6->Text == "O" && b9->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::LightBlue;
				b9->BackColor = System::Drawing::Color::LightBlue;
				b6->BackColor = System::Drawing::Color::LightBlue;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				//playo->BackColor = System::Drawing::Color::LightBlue;
				enableFalse();
			}

			else if (b1->Text == "O" && b5->Text == "O" && b9->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::Orange;
				b5->BackColor = System::Drawing::Color::Orange;
				b9->BackColor = System::Drawing::Color::Orange;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				
				enableFalse();
			}
			else if (b3->Text == "O" && b5->Text == "O" && b7->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b7->BackColor = System::Drawing::Color::PowderBlue;
				playo->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				oo = int::Parse(playo->Text);
				oo++;
				playo->Text = Convert::ToString(oo);
				
				enableFalse();
			}
			else if(b1->Text != "" && b2->Text != ""&& b3->Text != ""&& b4->Text != ""&& b5->Text != ""&& b6->Text != ""&& b7->Text != ""&& b8->Text != ""&& b9->Text != "") MessageBox::Show("Game drawn", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			

}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn1(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b1->Text = "X";
		checker = true;
	}
	else
	{
		b1->Text = "O";
		checker = false;
	}
	score();
	b1->Enabled = false;
}
private: System::Void btn2(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b2->Text = "X";
		checker = true;
	}
	else
	{
		b2->Text = "O";
		checker = false;
	}
	score();
	b2->Enabled = false;
}
private: System::Void btn3(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b3->Text = "X";
		checker = true;
	}
	else
	{
		b3->Text = "O";
		checker = false;
	}
	score();
	b3->Enabled = false;
}
private: System::Void btn4(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b4->Text = "X";
		checker = true;
	}
	else
	{
		b4->Text = "O";
		checker = false;
	}
	score();
	b4->Enabled = false;
}
private: System::Void btn5(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b5->Text = "X";
		checker = true;
	}
	else
	{
		b5->Text = "O";
		checker = false;
	}
	score();
	b5->Enabled = false;
}
private: System::Void btn6(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b6->Text = "X";
		checker = true;
	}
	else
	{
		b6->Text = "O";
		checker = false;
	}
	score();
	b6->Enabled = false;
}
private: System::Void btn7(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b7->Text = "X";
		checker = true;
	}
	else
	{
		b7->Text = "O";
		checker = false;
	}
	score();
	b7->Enabled = false;
}
private: System::Void btn8(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b8->Text = "X";
		checker = true;
	}
	else
	{
		b8->Text = "O";
		checker = false;
	}
	score();
	b8->Enabled = false;
}
private: System::Void btn9(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b9->Text = "X";
		checker = true;
	}
	else
	{
		b9->Text = "O";
		checker = false;
	}
	score();
	b9->Enabled = false;
}
private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void reset(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void nugem(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void rules(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("1) Play with a opponent.\n\n\n2) Press a square to place your mark.\n\n\n3) Make three in a row horizontally, vertically, or diagonally to win.\n\n\n4) Watch your opponent and block them if they get 2 in a row.", "Rules", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	private: System::Void ruls(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void nugeme(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void resett(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void exitt(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void nugame(System::Object^ sender, System::EventArgs^ e) {
	b1->Enabled = true;
	b2->Enabled = true;
	b3->Enabled = true;
	b4->Enabled = true;
	b5->Enabled = true;
	b6->Enabled = true;
	b7->Enabled = true;
	b8->Enabled = true;
	b9->Enabled = true;
	b1->Text = "";
	b2->Text = "";
	b3->Text = "";
	b4->Text = "";
	b5->Text = "";
	b6->Text = "";
	b7->Text = "";
	b8->Text = "";
	b9->Text = "";
	playx->Text = Convert::ToString(xx);
	playo->Text = Convert::ToString(oo);
	b1->BackColor = System::Drawing::Color::White;
	b2->BackColor = System::Drawing::Color::White;
	b3->BackColor = System::Drawing::Color::White;
	b4->BackColor = System::Drawing::Color::White;
	b5->BackColor = System::Drawing::Color::White;
	b6->BackColor = System::Drawing::Color::White;
	b7->BackColor = System::Drawing::Color::White;
	b8->BackColor = System::Drawing::Color::White;
	b9->BackColor = System::Drawing::Color::White;
}
private: System::Void Tictactoe_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	b1->Enabled = true;
	b2->Enabled = true;
	b3->Enabled = true;
	b4->Enabled = true;
	b5->Enabled = true;
	b6->Enabled = true;
	b7->Enabled = true;
	b8->Enabled = true;
	b9->Enabled = true;
	b1->Text = "";
	b2->Text = "";
	b3->Text = "";
	b4->Text = "";
	b5->Text = "";
	b6->Text = "";
	b7->Text = "";
	b8->Text = "";
	b9->Text = "";
	nugemee->Enabled = true;
	b1->BackColor = System::Drawing::Color::LightYellow;
	b2->BackColor = System::Drawing::Color::LightYellow;
	b3->BackColor = System::Drawing::Color::LightYellow;
	b4->BackColor = System::Drawing::Color::LightYellow;
	b5->BackColor = System::Drawing::Color::LightYellow;
	b6->BackColor = System::Drawing::Color::LightYellow;
	b7->BackColor = System::Drawing::Color::LightYellow;
	b8->BackColor = System::Drawing::Color::LightYellow;
	b9->BackColor = System::Drawing::Color::LightYellow;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit this game?", "Tic Tac Toe", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Hide();
		BacktoEntry->Show();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("1) Play with a opponent.\n\n\n2) Press a square to place your mark. ('X' or 'O')\n\n\n3) Make three in a row horizontally, vertically, or diagonally to win.\n\n\n4) Watch your opponent and block them if they get 2 in a row.", "Rules", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
};
}
