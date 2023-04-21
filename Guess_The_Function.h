#pragma once

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for function
	/// </summary>
	public ref class function : public System::Windows::Forms::Form
	{
	public:
		function(Form^ EntryPage)
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
		~function()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ x;
	private: System::Windows::Forms::Button^ y;
	private: System::Windows::Forms::Button^ x1;
	private: System::Windows::Forms::Button^ y1;
	private: System::Windows::Forms::Button^ y2;
	protected:





	private: System::Windows::Forms::Button^ x2;
	private: System::Windows::Forms::Button^ y4;


	private: System::Windows::Forms::Button^ x4;
	private: System::Windows::Forms::Button^ y3;


	private: System::Windows::Forms::Button^ x3;

	private: System::Windows::Forms::Button^ lvl;
	private: System::Windows::Forms::Button^ a1;
	private: System::Windows::Forms::Button^ a2;
	private: System::Windows::Forms::Button^ a4;



	private: System::Windows::Forms::Button^ a3;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Button());
			this->y = (gcnew System::Windows::Forms::Button());
			this->x1 = (gcnew System::Windows::Forms::Button());
			this->y1 = (gcnew System::Windows::Forms::Button());
			this->y2 = (gcnew System::Windows::Forms::Button());
			this->x2 = (gcnew System::Windows::Forms::Button());
			this->y4 = (gcnew System::Windows::Forms::Button());
			this->x4 = (gcnew System::Windows::Forms::Button());
			this->y3 = (gcnew System::Windows::Forms::Button());
			this->x3 = (gcnew System::Windows::Forms::Button());
			this->lvl = (gcnew System::Windows::Forms::Button());
			this->a1 = (gcnew System::Windows::Forms::Button());
			this->a2 = (gcnew System::Windows::Forms::Button());
			this->a4 = (gcnew System::Windows::Forms::Button());
			this->a3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(219, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(718, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Which equation gives the rule for this table\?";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// x
			// 
			this->x->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->x->Location = System::Drawing::Point(475, 133);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(108, 64);
			this->x->TabIndex = 1;
			this->x->Text = L"x";
			this->x->UseVisualStyleBackColor = true;
			// 
			// y
			// 
			this->y->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->y->Location = System::Drawing::Point(591, 133);
			this->y->Name = L"y";
			this->y->Size = System::Drawing::Size(108, 64);
			this->y->TabIndex = 2;
			this->y->Text = L"y";
			this->y->UseVisualStyleBackColor = true;
			// 
			// x1
			// 
			this->x1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->x1->Location = System::Drawing::Point(475, 203);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(110, 64);
			this->x1->TabIndex = 3;
			this->x1->Text = L"-9";
			this->x1->UseVisualStyleBackColor = true;
			// 
			// y1
			// 
			this->y1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->y1->Location = System::Drawing::Point(591, 203);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(110, 64);
			this->y1->TabIndex = 4;
			this->y1->Text = L"-18";
			this->y1->UseVisualStyleBackColor = true;
			// 
			// y2
			// 
			this->y2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->y2->Location = System::Drawing::Point(591, 273);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(110, 64);
			this->y2->TabIndex = 6;
			this->y2->Text = L"-14";
			this->y2->UseVisualStyleBackColor = true;
			// 
			// x2
			// 
			this->x2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->x2->Location = System::Drawing::Point(475, 273);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(110, 64);
			this->x2->TabIndex = 5;
			this->x2->Text = L"-5";
			this->x2->UseVisualStyleBackColor = true;
			// 
			// y4
			// 
			this->y4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->y4->Location = System::Drawing::Point(591, 413);
			this->y4->Name = L"y4";
			this->y4->Size = System::Drawing::Size(110, 64);
			this->y4->TabIndex = 10;
			this->y4->Text = L"-13";
			this->y4->UseVisualStyleBackColor = true;
			// 
			// x4
			// 
			this->x4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->x4->Location = System::Drawing::Point(475, 413);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(110, 64);
			this->x4->TabIndex = 9;
			this->x4->Text = L"-4";
			this->x4->UseVisualStyleBackColor = true;
			// 
			// y3
			// 
			this->y3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->y3->Location = System::Drawing::Point(591, 343);
			this->y3->Name = L"y3";
			this->y3->Size = System::Drawing::Size(110, 64);
			this->y3->TabIndex = 8;
			this->y3->Text = L"-9";
			this->y3->UseVisualStyleBackColor = true;
			// 
			// x3
			// 
			this->x3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->x3->Location = System::Drawing::Point(475, 343);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(110, 64);
			this->x3->TabIndex = 7;
			this->x3->Text = L"0";
			this->x3->UseVisualStyleBackColor = true;
			// 
			// lvl
			// 
			this->lvl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lvl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lvl->Location = System::Drawing::Point(882, 215);
			this->lvl->Name = L"lvl";
			this->lvl->Size = System::Drawing::Size(247, 80);
			this->lvl->TabIndex = 11;
			this->lvl->Text = L"Level: 1";
			this->lvl->UseVisualStyleBackColor = false;
			this->lvl->Click += gcnew System::EventHandler(this, &function::lvl_Click);
			// 
			// a1
			// 
			this->a1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->a1->Location = System::Drawing::Point(219, 519);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(355, 65);
			this->a1->TabIndex = 12;
			this->a1->Text = L"y = -x + 9";
			this->a1->UseVisualStyleBackColor = true;
			this->a1->Click += gcnew System::EventHandler(this, &function::a1_Click);
			// 
			// a2
			// 
			this->a2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->a2->Location = System::Drawing::Point(582, 519);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(355, 65);
			this->a2->TabIndex = 13;
			this->a2->Text = L"y = x - 9";
			this->a2->UseVisualStyleBackColor = true;
			this->a2->Click += gcnew System::EventHandler(this, &function::a2_Click);
			// 
			// a4
			// 
			this->a4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->a4->Location = System::Drawing::Point(582, 590);
			this->a4->Name = L"a4";
			this->a4->Size = System::Drawing::Size(355, 65);
			this->a4->TabIndex = 15;
			this->a4->Text = L"y = -x - 9";
			this->a4->UseVisualStyleBackColor = true;
			this->a4->Click += gcnew System::EventHandler(this, &function::a4_Click);
			// 
			// a3
			// 
			this->a3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->a3->Location = System::Drawing::Point(219, 590);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(355, 65);
			this->a3->TabIndex = 14;
			this->a3->Text = L"y = x + 9";
			this->a3->UseVisualStyleBackColor = true;
			this->a3->Click += gcnew System::EventHandler(this, &function::a3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(882, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(247, 80);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &function::nxt);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(69, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 58);
			this->button3->TabIndex = 18;
			this->button3->Text = L"New Game";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &function::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(69, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(235, 58);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &function::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkMagenta;
			this->button5->Location = System::Drawing::Point(69, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(235, 58);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Rules";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &function::button5_Click);
			// 
			// function
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->a4);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->a1);
			this->Controls->Add(this->lvl);
			this->Controls->Add(this->y4);
			this->Controls->Add(this->x4);
			this->Controls->Add(this->y3);
			this->Controls->Add(this->x3);
			this->Controls->Add(this->y2);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->y1);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->y);
			this->Controls->Add(this->x);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"function";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Guess The Function";
			this->Load += gcnew System::EventHandler(this, &function::function_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		int c = 1, ans = 0;
		bool parsi = false;
		void gameplay()
		{
			if (lvl->Text == "Level: 1" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Green; 
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
					
				}
				else if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a1->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a3->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 2" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 2";
				if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Green; 
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a1->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a3->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 3" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 3";
				if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Green;
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if(ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Red; 
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a2->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a3->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 4" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 4";
				if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Green;
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a2->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a3->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 5" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 5";
				if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Green;
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a2->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a3->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a1->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 6" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 6";
				if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Green;
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a2->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a1->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 7" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
				lvl->Text = "Level: 7";
				if (ans == 3)
				{
					a3->BackColor = System::Drawing::Color::Green;
					parsi = true;
					c++;
					MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else if (ans == 2)
				{
					a2->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a2->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 1)
				{
					a1->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a1->BackColor = System::Drawing::SystemColors::Control;
					}
				}
				else if (ans == 4)
				{
					a4->BackColor = System::Drawing::Color::Red;
					parsi = false;
					if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
					{
						a4->BackColor = System::Drawing::SystemColors::Control;
					}
				}
			}
			else if (lvl->Text == "Level: 8" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
			lvl->Text = "Level: 8";
			if (ans == 4)
			{
				a4->BackColor = System::Drawing::Color::Green;
				parsi = true;
				c++;
				MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (ans == 2)
			{
				a2->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a2->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			else if (ans == 3)
			{
				a3->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a3->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			else if (ans == 1)
			{
				a1->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a1->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			}
			else if (lvl->Text == "Level: 9" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
			lvl->Text = "Level: 9";
			if (ans == 1)
			{
				a1->BackColor = System::Drawing::Color::Green;
				parsi = true;
				c++;
				MessageBox::Show("Correct Answer! Click 'Next' to proceed to the next level.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (ans == 2)
			{
				a2->BackColor = System::Drawing::Color::Red;
				parsi = false;
				MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				a2->BackColor = System::Drawing::SystemColors::Control;
		
			}
			else if (ans == 3)
			{
				a3->BackColor = System::Drawing::Color::Red;
				parsi = false;
				MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				a3->BackColor = System::Drawing::SystemColors::Control;
			}
			else if (ans == 4)
			{
				a4->BackColor = System::Drawing::Color::Red;
				parsi = false;
				MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				a4->BackColor = System::Drawing::SystemColors::Control;
			}
			}
			else if (lvl->Text == "Level: 10" && a1->BackColor != System::Drawing::Color::Green && a2->BackColor != System::Drawing::Color::Green && a3->BackColor != System::Drawing::Color::Green && a4->BackColor != System::Drawing::Color::Green)
			{
			lvl->Text = "Level: 10";
			if (ans == 3)
			{
				a3->BackColor = System::Drawing::Color::Green;
				parsi = true;
				c++;
				MessageBox::Show("Congo! You've completed the whole level. Start from the beginning", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
				button2->Text = "Start Again";
				
			}
			else if (ans == 2)
			{
				a2->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a2->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			else if (ans == 1)
			{
				a1->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a1->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			else if (ans == 4)
			{
				a4->BackColor = System::Drawing::Color::Red;
				parsi = false;
				if (MessageBox::Show("Wrong Answer! Try Again", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				{
					a4->BackColor = System::Drawing::SystemColors::Control;
				}
			}
			}
			ans = 0;
			//lvl->Text = "Level: " + c.ToString();
		}
	private: System::Void lvl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void a1_Click(System::Object^ sender, System::EventArgs^ e) {
		ans = 1;
		gameplay();
	}
	private: System::Void a2_Click(System::Object^ sender, System::EventArgs^ e) {
		ans = 2; gameplay();
	}
	private: System::Void a3_Click(System::Object^ sender, System::EventArgs^ e) {
		ans = 3; gameplay();
	}
	private: System::Void a4_Click(System::Object^ sender, System::EventArgs^ e) {
		ans = 4; gameplay();
	}
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void nxt(System::Object^ sender, System::EventArgs^ e) {
		if (parsi == true)
		{
			
			a1->BackColor = System::Drawing::SystemColors::Control; 
			a2->BackColor = System::Drawing::SystemColors::Control;
			a3->BackColor = System::Drawing::SystemColors::Control;
			a4->BackColor = System::Drawing::SystemColors::Control;
			button2->Text = "Next";
			if (lvl->Text == "Level: 1")
			{
				x1->Text = "-2";
				x2->Text = "4";
				x3->Text = "1";
				x4->Text = "7";
				y1->Text = "-11";
				y2->Text = "7";
				y3->Text = "-2";
				y4->Text = "16";
				a1->Text = "y = -3x - 5";
				a2->Text = "y = 3x - 5";
				a3->Text = "y = -3x + 5";
				a4->Text = "y = 3x + 5";
				lvl->Text = "Level: 2";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 2")
			{
				x1->Text = "0";
				x2->Text = "-7";
				x3->Text = "3";
				x4->Text = "2";
				y1->Text = "0";
				y2->Text = "-413";
				y3->Text = "-33";
				y4->Text = "-8";
				a1->Text = "y = -7x^2 + 10x";
				a2->Text = "y = -7x^2 - 10x";
				a3->Text = "y = 7x^2 + 10x";
				a4->Text = "y = 7x^2 - 10x";
				lvl->Text = "Level: 3";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 3")
			{
				x1->Text = "-2";
				x2->Text = "-4";
				x3->Text = "1";
				x4->Text = "-6";
				y1->Text = "3";
				y2->Text = "13";
				y3->Text = "-12";
				y4->Text = "23";
				a1->Text = "y = -5x - 7";
				a2->Text = "y = 5x - 7";
				a3->Text = "y = -5x + 7";
				a4->Text = "y = 5x + 7";
				lvl->Text = "Level: 4";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 4")
			{
				x1->Text = "-1";
				x2->Text = "-5";
				x3->Text = "3";
				x4->Text = "2";
				y1->Text = "-5";
				y2->Text = "-13";
				y3->Text = "3";
				y4->Text = "1";
				a1->Text = "y = 2x + 3";
				a2->Text = "y = -2x + 3";
				a3->Text = "y = -2x - 3";
				a4->Text = "y = 2x - 3";
				lvl->Text = "Level: 5";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 5")
			{
				x1->Text = "3";
				x2->Text = "-5";
				x3->Text = "0";
				x4->Text = "-1";
				y1->Text = "18";
				y2->Text = "50";
				y3->Text = "15";
				y4->Text = "18";
				a1->Text = "y = x^2 - 2x - 15";
				a2->Text = "y = x^2 + 2x + 15";
				a3->Text = "y = x^2 - 2x + 15";
				a4->Text = "y = x^2 + 2x - 15";
				lvl->Text = "Level: 6";
				parsi = false;
			}
			else if (lvl->Text == "Level: 6")
			{
				x1->Text = "1";
				x2->Text = "10";
				x3->Text = "1.1";
				x4->Text = "150";
				y1->Text = "1";
				y2->Text = "3.3";
				y3->Text = "1.09";
				y4->Text = "6.01";
				a1->Text = "y = -ln x + 1";
				a2->Text = "y = -ln x - 1";
				a3->Text = "y = ln x + 1";
				a4->Text = "y = ln x - 1";
				lvl->Text = "Level: 7";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 7")
			{
				x1->Text = "0";
				x2->Text = "3 pi/4";
				x3->Text = "-pi/4";
				x4->Text = "pi/2";
				y1->Text = "1";
				y2->Text = "0";
				y3->Text = "0";
				y4->Text = "1";
				a1->Text = "y = -sinx + cosx";
				a2->Text = "y = sinx - cosx";
				a3->Text = "y = -sinx - cosx";
				a4->Text = "y = sinx + cosx";
				lvl->Text = "Level: 8";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 8")
			{
				x1->Text = "0";
				x2->Text = "3";
				x3->Text = "1";
				x4->Text = "2";
				y1->Text = "-3";
				y2->Text = "0";
				y3->Text = "-4";
				y4->Text = "-5";
				a1->Text = "y = x^3 - 3x^2 + x - 3";
				a2->Text = "y = x^3 + 3x^2 + x - 3";
				a3->Text = "y = x^3 - 3x^2 + x + 3";
				a4->Text = "y = x^3 - 3x^2 - x - 3";
				lvl->Text = "Level: 9";
				button2->Text = "Next";
				parsi = false;
			}
			else if (lvl->Text == "Level: 9")
			{
			x1->Text = "-1";
			x2->Text = "-2";
			x3->Text = "0";
			x4->Text = "-1";
			y1->Text = "0";
			y2->Text = "-1";
			y3->Text = "-1";
			y4->Text = "-2";
			a1->Text = "x^2 - y^2 + 2x + 2y + 1 = 0";
			a2->Text = "x^2 + y^2 + 2x + 2y - 1 = 0";
			a3->Text = "x^2 + y^2 + 2x + 2y + 1 = 0";
			a4->Text = "x^2 + y^2 - 2x + 2y + 1 = 0";
			lvl->Text = "Level: 10";
			button2->Text = "Next";
			parsi = false;
			}
			else if (lvl->Text == "Level: 10")
			{
			x1->Text = "-9";
			x2->Text = "-5";
			x3->Text = "0";
			x4->Text = "-4";
			y1->Text = "-18";
			y2->Text = "-14";
			y3->Text = "-9";
			y4->Text = "-13";
			a1->Text = "y = x + 9";
			a2->Text = "y = x - 9";
			a3->Text = "y = -x - 9";
			a4->Text = "y = -x + 9";
			lvl->Text = "Level: 1";
			button2->Text = "Next"; 
			parsi = false;
			}
		}
	}
	private: System::Void function_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Text = "Next";
	x1->Text = "-9";
	x2->Text = "-5";
	x3->Text = "0";
	x4->Text = "-4";
	y1->Text = "-18";
	y2->Text = "-14";
	y3->Text = "-9";
	y4->Text = "-13";
	a1->Text = "y = -x + 9";
	a2->Text = "y = x - 9";
	a3->Text = "y = x + 9";
	a4->Text = "y = -x - 9";
	lvl->Text = "Level: 1";
	parsi = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit this game?", "Guess The Function", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Hide();
		BacktoEntry->Show();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Tap the right answer out of four options here.", "Guess The Function", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
