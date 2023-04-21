#pragma once

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for allout
	/// </summary>
	public ref class allout : public System::Windows::Forms::Form
	{
	public:
		allout(Form^ EntryPage)
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
		~allout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Button^ b11;
	protected:
	private: System::Windows::Forms::Button^ b12;
	private: System::Windows::Forms::Button^ b13;
	private: System::Windows::Forms::Button^ b14;
	private: System::Windows::Forms::Button^ b15;
	private: System::Windows::Forms::Button^ b25;
	private: System::Windows::Forms::Button^ b24;
	private: System::Windows::Forms::Button^ b23;
	private: System::Windows::Forms::Button^ b22;
	private: System::Windows::Forms::Button^ b21;
	private: System::Windows::Forms::Button^ b35;
	private: System::Windows::Forms::Button^ b34;
	private: System::Windows::Forms::Button^ b33;
	private: System::Windows::Forms::Button^ b32;
	private: System::Windows::Forms::Button^ b31;
	private: System::Windows::Forms::Button^ b55;
	private: System::Windows::Forms::Button^ b54;
	private: System::Windows::Forms::Button^ b53;
	private: System::Windows::Forms::Button^ b52;
	private: System::Windows::Forms::Button^ b51;
	private: System::Windows::Forms::Button^ b45;
	private: System::Windows::Forms::Button^ b44;
	private: System::Windows::Forms::Button^ b43;
	private: System::Windows::Forms::Button^ b42;
	private: System::Windows::Forms::Button^ b41;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



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
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b14 = (gcnew System::Windows::Forms::Button());
			this->b15 = (gcnew System::Windows::Forms::Button());
			this->b25 = (gcnew System::Windows::Forms::Button());
			this->b24 = (gcnew System::Windows::Forms::Button());
			this->b23 = (gcnew System::Windows::Forms::Button());
			this->b22 = (gcnew System::Windows::Forms::Button());
			this->b21 = (gcnew System::Windows::Forms::Button());
			this->b35 = (gcnew System::Windows::Forms::Button());
			this->b34 = (gcnew System::Windows::Forms::Button());
			this->b33 = (gcnew System::Windows::Forms::Button());
			this->b32 = (gcnew System::Windows::Forms::Button());
			this->b31 = (gcnew System::Windows::Forms::Button());
			this->b55 = (gcnew System::Windows::Forms::Button());
			this->b54 = (gcnew System::Windows::Forms::Button());
			this->b53 = (gcnew System::Windows::Forms::Button());
			this->b52 = (gcnew System::Windows::Forms::Button());
			this->b51 = (gcnew System::Windows::Forms::Button());
			this->b45 = (gcnew System::Windows::Forms::Button());
			this->b44 = (gcnew System::Windows::Forms::Button());
			this->b43 = (gcnew System::Windows::Forms::Button());
			this->b42 = (gcnew System::Windows::Forms::Button());
			this->b41 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b11
			// 
			this->b11->Location = System::Drawing::Point(515, 204);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(85, 77);
			this->b11->TabIndex = 0;
			this->b11->UseVisualStyleBackColor = true;
			this->b11->Click += gcnew System::EventHandler(this, &allout::b11_Click);
			// 
			// b12
			// 
			this->b12->Location = System::Drawing::Point(606, 204);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(85, 77);
			this->b12->TabIndex = 1;
			this->b12->UseVisualStyleBackColor = true;
			this->b12->Click += gcnew System::EventHandler(this, &allout::b12_Click);
			// 
			// b13
			// 
			this->b13->Location = System::Drawing::Point(697, 204);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(85, 77);
			this->b13->TabIndex = 2;
			this->b13->UseVisualStyleBackColor = true;
			this->b13->Click += gcnew System::EventHandler(this, &allout::b13_Click);
			// 
			// b14
			// 
			this->b14->Location = System::Drawing::Point(788, 204);
			this->b14->Name = L"b14";
			this->b14->Size = System::Drawing::Size(85, 77);
			this->b14->TabIndex = 3;
			this->b14->UseVisualStyleBackColor = true;
			this->b14->Click += gcnew System::EventHandler(this, &allout::b14_Click);
			// 
			// b15
			// 
			this->b15->Location = System::Drawing::Point(879, 204);
			this->b15->Name = L"b15";
			this->b15->Size = System::Drawing::Size(85, 77);
			this->b15->TabIndex = 4;
			this->b15->UseVisualStyleBackColor = true;
			this->b15->Click += gcnew System::EventHandler(this, &allout::b15_Click);
			// 
			// b25
			// 
			this->b25->Location = System::Drawing::Point(879, 287);
			this->b25->Name = L"b25";
			this->b25->Size = System::Drawing::Size(85, 77);
			this->b25->TabIndex = 9;
			this->b25->UseVisualStyleBackColor = true;
			this->b25->Click += gcnew System::EventHandler(this, &allout::b25_Click);
			// 
			// b24
			// 
			this->b24->Location = System::Drawing::Point(788, 287);
			this->b24->Name = L"b24";
			this->b24->Size = System::Drawing::Size(85, 77);
			this->b24->TabIndex = 8;
			this->b24->UseVisualStyleBackColor = true;
			this->b24->Click += gcnew System::EventHandler(this, &allout::b24_Click);
			// 
			// b23
			// 
			this->b23->Location = System::Drawing::Point(697, 287);
			this->b23->Name = L"b23";
			this->b23->Size = System::Drawing::Size(85, 77);
			this->b23->TabIndex = 7;
			this->b23->UseVisualStyleBackColor = true;
			this->b23->Click += gcnew System::EventHandler(this, &allout::b23_Click);
			// 
			// b22
			// 
			this->b22->Location = System::Drawing::Point(606, 287);
			this->b22->Name = L"b22";
			this->b22->Size = System::Drawing::Size(85, 77);
			this->b22->TabIndex = 6;
			this->b22->UseVisualStyleBackColor = true;
			this->b22->Click += gcnew System::EventHandler(this, &allout::b22_Click);
			// 
			// b21
			// 
			this->b21->Location = System::Drawing::Point(515, 287);
			this->b21->Name = L"b21";
			this->b21->Size = System::Drawing::Size(85, 77);
			this->b21->TabIndex = 5;
			this->b21->UseVisualStyleBackColor = true;
			this->b21->Click += gcnew System::EventHandler(this, &allout::b21_Click);
			// 
			// b35
			// 
			this->b35->Location = System::Drawing::Point(879, 370);
			this->b35->Name = L"b35";
			this->b35->Size = System::Drawing::Size(85, 77);
			this->b35->TabIndex = 14;
			this->b35->UseVisualStyleBackColor = true;
			this->b35->Click += gcnew System::EventHandler(this, &allout::b35_Click);
			// 
			// b34
			// 
			this->b34->Location = System::Drawing::Point(788, 370);
			this->b34->Name = L"b34";
			this->b34->Size = System::Drawing::Size(85, 77);
			this->b34->TabIndex = 13;
			this->b34->UseVisualStyleBackColor = true;
			this->b34->Click += gcnew System::EventHandler(this, &allout::b34_Click);
			// 
			// b33
			// 
			this->b33->Location = System::Drawing::Point(697, 370);
			this->b33->Name = L"b33";
			this->b33->Size = System::Drawing::Size(85, 77);
			this->b33->TabIndex = 12;
			this->b33->UseVisualStyleBackColor = true;
			this->b33->Click += gcnew System::EventHandler(this, &allout::b33_Click);
			// 
			// b32
			// 
			this->b32->Location = System::Drawing::Point(606, 370);
			this->b32->Name = L"b32";
			this->b32->Size = System::Drawing::Size(85, 77);
			this->b32->TabIndex = 11;
			this->b32->UseVisualStyleBackColor = true;
			this->b32->Click += gcnew System::EventHandler(this, &allout::b32_Click);
			// 
			// b31
			// 
			this->b31->Location = System::Drawing::Point(515, 370);
			this->b31->Name = L"b31";
			this->b31->Size = System::Drawing::Size(85, 77);
			this->b31->TabIndex = 10;
			this->b31->UseVisualStyleBackColor = true;
			this->b31->Click += gcnew System::EventHandler(this, &allout::b31_Click);
			// 
			// b55
			// 
			this->b55->Location = System::Drawing::Point(879, 536);
			this->b55->Name = L"b55";
			this->b55->Size = System::Drawing::Size(85, 77);
			this->b55->TabIndex = 24;
			this->b55->UseVisualStyleBackColor = true;
			this->b55->Click += gcnew System::EventHandler(this, &allout::b55_Click);
			// 
			// b54
			// 
			this->b54->Location = System::Drawing::Point(788, 536);
			this->b54->Name = L"b54";
			this->b54->Size = System::Drawing::Size(85, 77);
			this->b54->TabIndex = 23;
			this->b54->UseVisualStyleBackColor = true;
			this->b54->Click += gcnew System::EventHandler(this, &allout::b54_Click);
			// 
			// b53
			// 
			this->b53->Location = System::Drawing::Point(697, 536);
			this->b53->Name = L"b53";
			this->b53->Size = System::Drawing::Size(85, 77);
			this->b53->TabIndex = 22;
			this->b53->UseVisualStyleBackColor = true;
			this->b53->Click += gcnew System::EventHandler(this, &allout::b53_Click);
			// 
			// b52
			// 
			this->b52->Location = System::Drawing::Point(606, 536);
			this->b52->Name = L"b52";
			this->b52->Size = System::Drawing::Size(85, 77);
			this->b52->TabIndex = 21;
			this->b52->UseVisualStyleBackColor = true;
			this->b52->Click += gcnew System::EventHandler(this, &allout::b52_Click);
			// 
			// b51
			// 
			this->b51->Location = System::Drawing::Point(515, 536);
			this->b51->Name = L"b51";
			this->b51->Size = System::Drawing::Size(85, 77);
			this->b51->TabIndex = 20;
			this->b51->UseVisualStyleBackColor = true;
			this->b51->Click += gcnew System::EventHandler(this, &allout::b51_Click);
			// 
			// b45
			// 
			this->b45->Location = System::Drawing::Point(879, 453);
			this->b45->Name = L"b45";
			this->b45->Size = System::Drawing::Size(85, 77);
			this->b45->TabIndex = 19;
			this->b45->UseVisualStyleBackColor = true;
			this->b45->Click += gcnew System::EventHandler(this, &allout::b45_Click);
			// 
			// b44
			// 
			this->b44->Location = System::Drawing::Point(788, 453);
			this->b44->Name = L"b44";
			this->b44->Size = System::Drawing::Size(85, 77);
			this->b44->TabIndex = 18;
			this->b44->UseVisualStyleBackColor = true;
			this->b44->Click += gcnew System::EventHandler(this, &allout::b44_Click);
			// 
			// b43
			// 
			this->b43->Location = System::Drawing::Point(697, 453);
			this->b43->Name = L"b43";
			this->b43->Size = System::Drawing::Size(85, 77);
			this->b43->TabIndex = 17;
			this->b43->UseVisualStyleBackColor = true;
			this->b43->Click += gcnew System::EventHandler(this, &allout::b43_Click);
			// 
			// b42
			// 
			this->b42->Location = System::Drawing::Point(606, 453);
			this->b42->Name = L"b42";
			this->b42->Size = System::Drawing::Size(85, 77);
			this->b42->TabIndex = 16;
			this->b42->UseVisualStyleBackColor = true;
			this->b42->Click += gcnew System::EventHandler(this, &allout::b42_Click);
			// 
			// b41
			// 
			this->b41->Location = System::Drawing::Point(515, 453);
			this->b41->Name = L"b41";
			this->b41->Size = System::Drawing::Size(85, 77);
			this->b41->TabIndex = 15;
			this->b41->UseVisualStyleBackColor = true;
			this->b41->Click += gcnew System::EventHandler(this, &allout::b41_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(450, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(598, 64);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Tap \"New Game\" to start the game.";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LavenderBlush;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(101, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 62);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Rules";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &allout::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LavenderBlush;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::MediumBlue;
			this->button3->Location = System::Drawing::Point(101, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 62);
			this->button3->TabIndex = 28;
			this->button3->Text = L"New Game";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &allout::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::GhostWhite;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(101, 521);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(209, 62);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &allout::button4_Click);
			// 
			// allout
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->b55);
			this->Controls->Add(this->b54);
			this->Controls->Add(this->b53);
			this->Controls->Add(this->b52);
			this->Controls->Add(this->b51);
			this->Controls->Add(this->b45);
			this->Controls->Add(this->b44);
			this->Controls->Add(this->b43);
			this->Controls->Add(this->b42);
			this->Controls->Add(this->b41);
			this->Controls->Add(this->b35);
			this->Controls->Add(this->b34);
			this->Controls->Add(this->b33);
			this->Controls->Add(this->b32);
			this->Controls->Add(this->b31);
			this->Controls->Add(this->b25);
			this->Controls->Add(this->b24);
			this->Controls->Add(this->b23);
			this->Controls->Add(this->b22);
			this->Controls->Add(this->b21);
			this->Controls->Add(this->b15);
			this->Controls->Add(this->b14);
			this->Controls->Add(this->b13);
			this->Controls->Add(this->b12);
			this->Controls->Add(this->b11);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"allout";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lights Out";
			this->ResumeLayout(false);

		}
#pragma endregion
		int c = 0, cnt = 0;
		void game()
		{
			if (b11->BackColor == System::Drawing::Color::Green &&b12->BackColor == System::Drawing::Color::Green &&
				b13->BackColor == System::Drawing::Color::Green &&b14->BackColor == System::Drawing::Color::Green && 
				b15->BackColor == System::Drawing::Color::Green &&b21->BackColor == System::Drawing::Color::Green &&
				b22->BackColor == System::Drawing::Color::Green && b23->BackColor == System::Drawing::Color::Green &&
				b24->BackColor == System::Drawing::Color::Green && b25->BackColor == System::Drawing::Color::Green && 
				b31->BackColor == System::Drawing::Color::Green && b32->BackColor == System::Drawing::Color::Green && 
				b33->BackColor == System::Drawing::Color::Green &&
				b34->BackColor == System::Drawing::Color::Green && b35->BackColor == System::Drawing::Color::Green &&
				b41->BackColor == System::Drawing::Color::Green && b42->BackColor == System::Drawing::Color::Green &&
				b43->BackColor == System::Drawing::Color::Green && b44->BackColor == System::Drawing::Color::Green &&
				b45->BackColor == System::Drawing::Color::Green && b51->BackColor == System::Drawing::Color::Green &&
				b52->BackColor == System::Drawing::Color::Green && b53->BackColor == System::Drawing::Color::Green &&
				b54->BackColor == System::Drawing::Color::Green && b55->BackColor == System::Drawing::Color::Green)
			{
				c++;
				MessageBox::Show("Success in " + cnt.ToString() + " moves", "All Out", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				cnt = 0;
				if (c % 10 == 3)
				{
					b11->BackColor = System::Drawing::Color::Lime;
					b12->BackColor = System::Drawing::Color::Green;
					b13->BackColor = System::Drawing::Color::Lime;
					b14->BackColor = System::Drawing::Color::Green;
					b15->BackColor = System::Drawing::Color::Lime;
					b21->BackColor = System::Drawing::Color::Lime;
					b22->BackColor = System::Drawing::Color::Green;
					b23->BackColor = System::Drawing::Color::Lime;
					b24->BackColor = System::Drawing::Color::Green;
					b25->BackColor = System::Drawing::Color::Lime;
					b31->BackColor = System::Drawing::Color::Green;
					b32->BackColor = System::Drawing::Color::Green;
					b33->BackColor = System::Drawing::Color::Green;
					b34->BackColor = System::Drawing::Color::Green;
					b35->BackColor = System::Drawing::Color::Green;
					b41->BackColor = System::Drawing::Color::Lime;
					b42->BackColor = System::Drawing::Color::Green;
					b43->BackColor = System::Drawing::Color::Lime;
					b44->BackColor = System::Drawing::Color::Green;
					b45->BackColor = System::Drawing::Color::Lime;
					b51->BackColor = System::Drawing::Color::Lime;
					b52->BackColor = System::Drawing::Color::Green;
					b53->BackColor = System::Drawing::Color::Lime;
					b54->BackColor = System::Drawing::Color::Green;
					b55->BackColor = System::Drawing::Color::Lime;
				}
				else if (c % 10 == 4)
				{
					b11->BackColor = System::Drawing::Color::Green;
					b12->BackColor = System::Drawing::Color::Lime;
					b13->BackColor = System::Drawing::Color::Green;
					b14->BackColor = System::Drawing::Color::Lime;
					b15->BackColor = System::Drawing::Color::Green;
					b21->BackColor = System::Drawing::Color::Lime;
					b22->BackColor = System::Drawing::Color::Lime;
					b23->BackColor = System::Drawing::Color::Green;
					b24->BackColor = System::Drawing::Color::Lime;
					b25->BackColor = System::Drawing::Color::Lime;
					b31->BackColor = System::Drawing::Color::Lime;
					b32->BackColor = System::Drawing::Color::Lime;
					b33->BackColor = System::Drawing::Color::Green;
					b34->BackColor = System::Drawing::Color::Lime;
					b35->BackColor = System::Drawing::Color::Lime;
					b41->BackColor = System::Drawing::Color::Lime;
					b42->BackColor = System::Drawing::Color::Lime;
					b43->BackColor = System::Drawing::Color::Green;
					b44->BackColor = System::Drawing::Color::Lime;
					b45->BackColor = System::Drawing::Color::Lime;
					b51->BackColor = System::Drawing::Color::Green;
					b52->BackColor = System::Drawing::Color::Lime;
					b53->BackColor = System::Drawing::Color::Green;
					b54->BackColor = System::Drawing::Color::Lime;
					b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 0)
				{
					b11->BackColor = System::Drawing::Color::Green;
					b12->BackColor = System::Drawing::Color::Lime;
					b13->BackColor = System::Drawing::Color::Green;
					b14->BackColor = System::Drawing::Color::Green;
					b15->BackColor = System::Drawing::Color::Green;
					b21->BackColor = System::Drawing::Color::Lime;
					b22->BackColor = System::Drawing::Color::Lime;
					b23->BackColor = System::Drawing::Color::Lime;
					b24->BackColor = System::Drawing::Color::Green;
					b25->BackColor = System::Drawing::Color::Green;
					b31->BackColor = System::Drawing::Color::Green;
					b32->BackColor = System::Drawing::Color::Lime;
					b33->BackColor = System::Drawing::Color::Green;
					b34->BackColor = System::Drawing::Color::Lime;
					b35->BackColor = System::Drawing::Color::Green;
					b41->BackColor = System::Drawing::Color::Green;
					b42->BackColor = System::Drawing::Color::Green;
					b43->BackColor = System::Drawing::Color::Lime;
					b44->BackColor = System::Drawing::Color::Lime;
					b45->BackColor = System::Drawing::Color::Lime;
					b51->BackColor = System::Drawing::Color::Green;
					b52->BackColor = System::Drawing::Color::Green;
					b53->BackColor = System::Drawing::Color::Green;
					b54->BackColor = System::Drawing::Color::Lime;
					b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 1)
				{
					b11->BackColor = System::Drawing::Color::Green;
					b12->BackColor = System::Drawing::Color::Green;
					b13->BackColor = System::Drawing::Color::Green;
					b14->BackColor = System::Drawing::Color::Green;
					b15->BackColor = System::Drawing::Color::Green;
					b21->BackColor = System::Drawing::Color::Green;
					b22->BackColor = System::Drawing::Color::Green;
					b23->BackColor = System::Drawing::Color::Green;
					b24->BackColor = System::Drawing::Color::Green;
					b25->BackColor = System::Drawing::Color::Green;
					b31->BackColor = System::Drawing::Color::Green;
					b32->BackColor = System::Drawing::Color::Green;
					b33->BackColor = System::Drawing::Color::Green;
					b34->BackColor = System::Drawing::Color::Green;
					b35->BackColor = System::Drawing::Color::Green;
					b41->BackColor = System::Drawing::Color::Green;
					b42->BackColor = System::Drawing::Color::Green;
					b43->BackColor = System::Drawing::Color::Lime;
					b44->BackColor = System::Drawing::Color::Lime;
					b45->BackColor = System::Drawing::Color::Lime;
					b51->BackColor = System::Drawing::Color::Green;
					b52->BackColor = System::Drawing::Color::Lime;
					b53->BackColor = System::Drawing::Color::Green;
					b54->BackColor = System::Drawing::Color::Lime;
					b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 2)
				{
					b11->BackColor = System::Drawing::Color::Green;
					b12->BackColor = System::Drawing::Color::Green;
					b13->BackColor = System::Drawing::Color::Green;
					b14->BackColor = System::Drawing::Color::Green;
					b15->BackColor = System::Drawing::Color::Green;
					b21->BackColor = System::Drawing::Color::Green;
					b22->BackColor = System::Drawing::Color::Green;
					b23->BackColor = System::Drawing::Color::Green;
					b24->BackColor = System::Drawing::Color::Green;
					b25->BackColor = System::Drawing::Color::Green;
					b31->BackColor = System::Drawing::Color::Lime;
					b32->BackColor = System::Drawing::Color::Green;
					b33->BackColor = System::Drawing::Color::Lime;
					b34->BackColor = System::Drawing::Color::Green;
					b35->BackColor = System::Drawing::Color::Lime;
					b41->BackColor = System::Drawing::Color::Green;
					b42->BackColor = System::Drawing::Color::Green;
					b43->BackColor = System::Drawing::Color::Green;
					b44->BackColor = System::Drawing::Color::Green;
					b45->BackColor = System::Drawing::Color::Green;
					b51->BackColor = System::Drawing::Color::Green;
					b52->BackColor = System::Drawing::Color::Green;
					b53->BackColor = System::Drawing::Color::Green;
					b54->BackColor = System::Drawing::Color::Green;
					b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 5)
				{
				b11->BackColor = System::Drawing::Color::Green;
				b12->BackColor = System::Drawing::Color::Green;
				b13->BackColor = System::Drawing::Color::Green;
				b14->BackColor = System::Drawing::Color::Green;
				b15->BackColor = System::Drawing::Color::Green;
				b21->BackColor = System::Drawing::Color::Lime;
				b22->BackColor = System::Drawing::Color::Lime;
				b23->BackColor = System::Drawing::Color::Green;
				b24->BackColor = System::Drawing::Color::Lime;
				b25->BackColor = System::Drawing::Color::Lime;
				b31->BackColor = System::Drawing::Color::Green;
				b32->BackColor = System::Drawing::Color::Green;
				b33->BackColor = System::Drawing::Color::Green;
				b34->BackColor = System::Drawing::Color::Green;
				b35->BackColor = System::Drawing::Color::Green;
				b41->BackColor = System::Drawing::Color::Lime;
				b42->BackColor = System::Drawing::Color::Green;
				b43->BackColor = System::Drawing::Color::Green;
				b44->BackColor = System::Drawing::Color::Green;
				b45->BackColor = System::Drawing::Color::Lime;
				b51->BackColor = System::Drawing::Color::Lime;
				b52->BackColor = System::Drawing::Color::Lime;
				b53->BackColor = System::Drawing::Color::Green;
				b54->BackColor = System::Drawing::Color::Lime;
				b55->BackColor = System::Drawing::Color::Lime;
				}
				else if (c % 10 == 6)
				{
					b11->BackColor = System::Drawing::Color::Lime;
					b12->BackColor = System::Drawing::Color::Lime;
					b13->BackColor = System::Drawing::Color::Lime;
					b14->BackColor = System::Drawing::Color::Lime;
					b15->BackColor = System::Drawing::Color::Green;
					b21->BackColor = System::Drawing::Color::Lime;
					b22->BackColor = System::Drawing::Color::Lime;
					b23->BackColor = System::Drawing::Color::Lime;
					b24->BackColor = System::Drawing::Color::Green;
					b25->BackColor = System::Drawing::Color::Lime;
					b31->BackColor = System::Drawing::Color::Lime;
					b32->BackColor = System::Drawing::Color::Lime;
					b33->BackColor = System::Drawing::Color::Lime;
					b34->BackColor = System::Drawing::Color::Green;
					b35->BackColor = System::Drawing::Color::Lime;
					b41->BackColor = System::Drawing::Color::Green;
					b42->BackColor = System::Drawing::Color::Green;
					b43->BackColor = System::Drawing::Color::Green;
					b44->BackColor = System::Drawing::Color::Lime;
					b45->BackColor = System::Drawing::Color::Lime;
					b51->BackColor = System::Drawing::Color::Lime;
					b52->BackColor = System::Drawing::Color::Lime;
					b53->BackColor = System::Drawing::Color::Green;
					b54->BackColor = System::Drawing::Color::Lime;
					b55->BackColor = System::Drawing::Color::Lime;
				}
				else if (c % 10 == 7)
				{
				b11->BackColor = System::Drawing::Color::Green;
				b12->BackColor = System::Drawing::Color::Green;
				b13->BackColor = System::Drawing::Color::Green;
				b14->BackColor = System::Drawing::Color::Green;
				b15->BackColor = System::Drawing::Color::Green;
				b21->BackColor = System::Drawing::Color::Green;
				b22->BackColor = System::Drawing::Color::Green;
				b23->BackColor = System::Drawing::Color::Lime;
				b24->BackColor = System::Drawing::Color::Green;
				b25->BackColor = System::Drawing::Color::Green;
				b31->BackColor = System::Drawing::Color::Green;
				b32->BackColor = System::Drawing::Color::Lime;
				b33->BackColor = System::Drawing::Color::Green;
				b34->BackColor = System::Drawing::Color::Lime;
				b35->BackColor = System::Drawing::Color::Green;
				b41->BackColor = System::Drawing::Color::Lime;
				b42->BackColor = System::Drawing::Color::Green;
				b43->BackColor = System::Drawing::Color::Lime;
				b44->BackColor = System::Drawing::Color::Green;
				b45->BackColor = System::Drawing::Color::Lime;
				b51->BackColor = System::Drawing::Color::Green;
				b52->BackColor = System::Drawing::Color::Lime;
				b53->BackColor = System::Drawing::Color::Green;
				b54->BackColor = System::Drawing::Color::Lime;
				b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 8)
				{
				b11->BackColor = System::Drawing::Color::Green;
				b12->BackColor = System::Drawing::Color::Green;
				b13->BackColor = System::Drawing::Color::Green;
				b14->BackColor = System::Drawing::Color::Lime;
				b15->BackColor = System::Drawing::Color::Green;
				b21->BackColor = System::Drawing::Color::Green;
				b22->BackColor = System::Drawing::Color::Green;
				b23->BackColor = System::Drawing::Color::Lime;
				b24->BackColor = System::Drawing::Color::Green;
				b25->BackColor = System::Drawing::Color::Lime;
				b31->BackColor = System::Drawing::Color::Green;
				b32->BackColor = System::Drawing::Color::Lime;
				b33->BackColor = System::Drawing::Color::Green;
				b34->BackColor = System::Drawing::Color::Lime;
				b35->BackColor = System::Drawing::Color::Green;
				b41->BackColor = System::Drawing::Color::Lime;
				b42->BackColor = System::Drawing::Color::Green;
				b43->BackColor = System::Drawing::Color::Lime;
				b44->BackColor = System::Drawing::Color::Green;
				b45->BackColor = System::Drawing::Color::Green;
				b51->BackColor = System::Drawing::Color::Green;
				b52->BackColor = System::Drawing::Color::Lime;
				b53->BackColor = System::Drawing::Color::Green;
				b54->BackColor = System::Drawing::Color::Green;
				b55->BackColor = System::Drawing::Color::Green;
				}
				else if (c % 10 == 9)
				{
				b11->BackColor = System::Drawing::Color::Green;
				b12->BackColor = System::Drawing::Color::Lime;
				b13->BackColor = System::Drawing::Color::Green;
				b14->BackColor = System::Drawing::Color::Lime;
				b15->BackColor = System::Drawing::Color::Green;
				b21->BackColor = System::Drawing::Color::Lime;
				b22->BackColor = System::Drawing::Color::Lime;
				b23->BackColor = System::Drawing::Color::Lime;
				b24->BackColor = System::Drawing::Color::Lime;
				b25->BackColor = System::Drawing::Color::Lime;
				b31->BackColor = System::Drawing::Color::Green;
				b32->BackColor = System::Drawing::Color::Lime;
				b33->BackColor = System::Drawing::Color::Lime;
				b34->BackColor = System::Drawing::Color::Lime;
				b35->BackColor = System::Drawing::Color::Green;
				b41->BackColor = System::Drawing::Color::Green;
				b42->BackColor = System::Drawing::Color::Lime;
				b43->BackColor = System::Drawing::Color::Green;
				b44->BackColor = System::Drawing::Color::Lime;
				b45->BackColor = System::Drawing::Color::Lime;
				b51->BackColor = System::Drawing::Color::Lime;
				b52->BackColor = System::Drawing::Color::Lime;
				b53->BackColor = System::Drawing::Color::Lime;
				b54->BackColor = System::Drawing::Color::Green;
				b55->BackColor = System::Drawing::Color::Green;
				}
			}

		}
		
	private: System::Void restartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++;
	if (b11->BackColor == System::Drawing::Color::Lime)
	{
		b11->BackColor = System::Drawing::Color::Green;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
	}
	else if (b11->BackColor == System::Drawing::Color::Green)
	{
		b11->BackColor = System::Drawing::Color::Lime;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b12_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b12->BackColor == System::Drawing::Color::Lime)
	{
		b12->BackColor = System::Drawing::Color::Green;
		if (b11->BackColor == System::Drawing::Color::Lime) b11->BackColor = System::Drawing::Color::Green;
		else b11->BackColor = System::Drawing::Color::Lime;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
	}
	else if (b12->BackColor == System::Drawing::Color::Green)
	{
		b12->BackColor = System::Drawing::Color::Lime;
		if (b11->BackColor == System::Drawing::Color::Lime) b11->BackColor = System::Drawing::Color::Green;
		else b11->BackColor = System::Drawing::Color::Lime;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b13_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b13->BackColor == System::Drawing::Color::Lime)
	{
		b13->BackColor = System::Drawing::Color::Green;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
	}
	else if (b13->BackColor == System::Drawing::Color::Green)
	{
		b13->BackColor = System::Drawing::Color::Lime;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b14_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b14->BackColor == System::Drawing::Color::Lime)
	{
		b14->BackColor = System::Drawing::Color::Green;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b15->BackColor == System::Drawing::Color::Lime) b15->BackColor = System::Drawing::Color::Green;
		else b15->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	else if (b14->BackColor == System::Drawing::Color::Green)
	{
		b14->BackColor = System::Drawing::Color::Lime;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b15->BackColor == System::Drawing::Color::Lime) b15->BackColor = System::Drawing::Color::Green;
		else b15->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b15_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b15->BackColor == System::Drawing::Color::Lime)
	{
		b15->BackColor = System::Drawing::Color::Green;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
	}
	else  if (b15->BackColor == System::Drawing::Color::Green)
	{
		b15->BackColor = System::Drawing::Color::Lime;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b21_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b21->BackColor == System::Drawing::Color::Lime)
	{
		b21->BackColor = System::Drawing::Color::Green;
		if (b11->BackColor == System::Drawing::Color::Lime) b11->BackColor = System::Drawing::Color::Green;
		else b11->BackColor = System::Drawing::Color::Lime;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
	}
	else  if (b21->BackColor == System::Drawing::Color::Green)
	{
		b21->BackColor = System::Drawing::Color::Lime;
		if (b11->BackColor == System::Drawing::Color::Lime) b11->BackColor = System::Drawing::Color::Green;
		else b11->BackColor = System::Drawing::Color::Lime;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b22_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b22->BackColor == System::Drawing::Color::Lime)
	{
		b22->BackColor = System::Drawing::Color::Green;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
	}
	else if (b22->BackColor == System::Drawing::Color::Green)
	{
		b22->BackColor = System::Drawing::Color::Lime;
		if (b12->BackColor == System::Drawing::Color::Lime) b12->BackColor = System::Drawing::Color::Green;
		else b12->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b23_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b23->BackColor == System::Drawing::Color::Lime)
	{
		b23->BackColor = System::Drawing::Color::Green;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	else if (b23->BackColor == System::Drawing::Color::Green)
	{
		b23->BackColor = System::Drawing::Color::Lime;
		if (b13->BackColor == System::Drawing::Color::Lime) b13->BackColor = System::Drawing::Color::Green;
		else b13->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b24_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b24->BackColor == System::Drawing::Color::Lime)
	{
		b24->BackColor = System::Drawing::Color::Green;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
	}
	else if (b24->BackColor == System::Drawing::Color::Green)
	{
		b24->BackColor = System::Drawing::Color::Lime;
		if (b14->BackColor == System::Drawing::Color::Lime) b14->BackColor = System::Drawing::Color::Green;
		else b14->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b25_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b25->BackColor == System::Drawing::Color::Lime)
	{
		b25->BackColor = System::Drawing::Color::Green;
		if (b15->BackColor == System::Drawing::Color::Lime) b15->BackColor = System::Drawing::Color::Green;
		else b15->BackColor = System::Drawing::Color::Lime;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	else if (b25->BackColor == System::Drawing::Color::Green)
	{
		b25->BackColor = System::Drawing::Color::Lime;
		if (b15->BackColor == System::Drawing::Color::Lime) b15->BackColor = System::Drawing::Color::Green;
		else b15->BackColor = System::Drawing::Color::Lime;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b31_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b31->BackColor == System::Drawing::Color::Lime)
	{
		b31->BackColor = System::Drawing::Color::Green;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
	}
	else if (b31->BackColor == System::Drawing::Color::Green)
	{
		b31->BackColor = System::Drawing::Color::Lime;
		if (b21->BackColor == System::Drawing::Color::Lime) b21->BackColor = System::Drawing::Color::Green;
		else b21->BackColor = System::Drawing::Color::Lime;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b32_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b32->BackColor == System::Drawing::Color::Lime)
	{
		b32->BackColor = System::Drawing::Color::Green;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
	}
	else if (b32->BackColor == System::Drawing::Color::Green)
	{
		b32->BackColor = System::Drawing::Color::Lime;
		if (b22->BackColor == System::Drawing::Color::Lime) b22->BackColor = System::Drawing::Color::Green;
		else b22->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b33_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b33->BackColor == System::Drawing::Color::Lime)
	{
		b33->BackColor = System::Drawing::Color::Green;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
	}
	else if (b33->BackColor == System::Drawing::Color::Green)
	{
		b33->BackColor = System::Drawing::Color::Lime;
		if (b23->BackColor == System::Drawing::Color::Lime) b23->BackColor = System::Drawing::Color::Green;
		else b23->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b34_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b34->BackColor == System::Drawing::Color::Lime)
	{
		b34->BackColor = System::Drawing::Color::Green;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
	}
	else if (b34->BackColor == System::Drawing::Color::Green)
	{
		b34->BackColor = System::Drawing::Color::Lime;
		if (b24->BackColor == System::Drawing::Color::Lime) b24->BackColor = System::Drawing::Color::Green;
		else b24->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b35_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b35->BackColor == System::Drawing::Color::Lime)
	{
		b35->BackColor = System::Drawing::Color::Green;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
	}
	else if (b35->BackColor == System::Drawing::Color::Green)
	{
		b35->BackColor = System::Drawing::Color::Lime;
		if (b25->BackColor == System::Drawing::Color::Lime) b25->BackColor = System::Drawing::Color::Green;
		else b25->BackColor = System::Drawing::Color::Lime;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b41_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b41->BackColor == System::Drawing::Color::Lime)
	{
		b41->BackColor = System::Drawing::Color::Green;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b51->BackColor == System::Drawing::Color::Lime) b51->BackColor = System::Drawing::Color::Green;
		else b51->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
	}
	else  if (b41->BackColor == System::Drawing::Color::Green)
	{
		b41->BackColor = System::Drawing::Color::Lime;
		if (b31->BackColor == System::Drawing::Color::Lime) b31->BackColor = System::Drawing::Color::Green;
		else b31->BackColor = System::Drawing::Color::Lime;
		if (b51->BackColor == System::Drawing::Color::Lime) b51->BackColor = System::Drawing::Color::Green;
		else b51->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
	}
	game();
}
private: System::Void b42_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b42->BackColor == System::Drawing::Color::Lime)
	{
		b42->BackColor = System::Drawing::Color::Green;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
	}
	else if (b42->BackColor == System::Drawing::Color::Green)
	{
		b42->BackColor = System::Drawing::Color::Lime;
		if (b32->BackColor == System::Drawing::Color::Lime) b32->BackColor = System::Drawing::Color::Green;
		else b32->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b43_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b43->BackColor == System::Drawing::Color::Lime)
	{
		b43->BackColor = System::Drawing::Color::Green;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
	}
	else if (b43->BackColor == System::Drawing::Color::Green)
	{
		b43->BackColor = System::Drawing::Color::Lime;
		if (b33->BackColor == System::Drawing::Color::Lime) b33->BackColor = System::Drawing::Color::Green;
		else b33->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b44_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b44->BackColor == System::Drawing::Color::Lime)
	{
		b44->BackColor = System::Drawing::Color::Green;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
	}
	else if (b44->BackColor == System::Drawing::Color::Green)
	{
		b44->BackColor = System::Drawing::Color::Lime;
		if (b34->BackColor == System::Drawing::Color::Lime) b34->BackColor = System::Drawing::Color::Green;
		else b34->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b45_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b45->BackColor == System::Drawing::Color::Lime)
	{
		b45->BackColor = System::Drawing::Color::Green;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
		if (b55->BackColor == System::Drawing::Color::Lime) b55->BackColor = System::Drawing::Color::Green;
		else b55->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
	}
	else if (b45->BackColor == System::Drawing::Color::Green)
	{
		b45->BackColor = System::Drawing::Color::Lime;
		if (b35->BackColor == System::Drawing::Color::Lime) b35->BackColor = System::Drawing::Color::Green;
		else b35->BackColor = System::Drawing::Color::Lime;
		if (b55->BackColor == System::Drawing::Color::Lime) b55->BackColor = System::Drawing::Color::Green;
		else b55->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b51_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b51->BackColor == System::Drawing::Color::Lime)
	{
		b51->BackColor = System::Drawing::Color::Green;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
	}
	else if (b51->BackColor == System::Drawing::Color::Green)
	{
		b51->BackColor = System::Drawing::Color::Lime;
		if (b41->BackColor == System::Drawing::Color::Lime) b41->BackColor = System::Drawing::Color::Green;
		else b41->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b52_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b52->BackColor == System::Drawing::Color::Lime)
	{
		b52->BackColor = System::Drawing::Color::Green;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b51->BackColor == System::Drawing::Color::Lime) b51->BackColor = System::Drawing::Color::Green;
		else b51->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
	}
	else if (b52->BackColor == System::Drawing::Color::Green)
	{
		b52->BackColor = System::Drawing::Color::Lime;
		if (b42->BackColor == System::Drawing::Color::Lime) b42->BackColor = System::Drawing::Color::Green;
		else b42->BackColor = System::Drawing::Color::Lime;
		if (b51->BackColor == System::Drawing::Color::Lime) b51->BackColor = System::Drawing::Color::Green;
		else b51->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b53_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b53->BackColor == System::Drawing::Color::Lime)
	{
		b53->BackColor = System::Drawing::Color::Green;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
	}
	else if (b53->BackColor == System::Drawing::Color::Green)
	{
		b53->BackColor = System::Drawing::Color::Lime;
		if (b43->BackColor == System::Drawing::Color::Lime) b43->BackColor = System::Drawing::Color::Green;
		else b43->BackColor = System::Drawing::Color::Lime;
		if (b52->BackColor == System::Drawing::Color::Lime) b52->BackColor = System::Drawing::Color::Green;
		else b52->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b54_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b54->BackColor == System::Drawing::Color::Lime)
	{
		b54->BackColor = System::Drawing::Color::Green;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
		if (b55->BackColor == System::Drawing::Color::Lime) b55->BackColor = System::Drawing::Color::Green;
		else b55->BackColor = System::Drawing::Color::Lime;
	}
	else if (b54->BackColor == System::Drawing::Color::Green)
	{
		b54->BackColor = System::Drawing::Color::Lime;
		if (b44->BackColor == System::Drawing::Color::Lime) b44->BackColor = System::Drawing::Color::Green;
		else b44->BackColor = System::Drawing::Color::Lime;
		if (b53->BackColor == System::Drawing::Color::Lime) b53->BackColor = System::Drawing::Color::Green;
		else b53->BackColor = System::Drawing::Color::Lime;
		if (b55->BackColor == System::Drawing::Color::Lime) b55->BackColor = System::Drawing::Color::Green;
		else b55->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void b55_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt++; if (b55->BackColor == System::Drawing::Color::Lime)
	{
		b55->BackColor = System::Drawing::Color::Green;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
	}
	else if (b55->BackColor == System::Drawing::Color::Green)
	{
		b55->BackColor = System::Drawing::Color::Lime;
		if (b45->BackColor == System::Drawing::Color::Lime) b45->BackColor = System::Drawing::Color::Green;
		else b45->BackColor = System::Drawing::Color::Lime;
		if (b54->BackColor == System::Drawing::Color::Lime) b54->BackColor = System::Drawing::Color::Green;
		else b54->BackColor = System::Drawing::Color::Lime;
	}game();
}
private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt = 0;
	if (c % 10 == 3)
	{
		b11->BackColor = System::Drawing::Color::Lime;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Lime;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Lime;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Green;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Green;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Green;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Lime;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Lime;
		b44->BackColor = System::Drawing::Color::Green;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Lime;
		b52->BackColor = System::Drawing::Color::Green;
		b53->BackColor = System::Drawing::Color::Lime;
		b54->BackColor = System::Drawing::Color::Green;
		b55->BackColor = System::Drawing::Color::Lime;
	}
	else if (c % 10 == 4)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Lime;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Lime;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Lime;
		b23->BackColor = System::Drawing::Color::Green;
		b24->BackColor = System::Drawing::Color::Lime;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Lime;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Lime;
		b35->BackColor = System::Drawing::Color::Lime;
		b41->BackColor = System::Drawing::Color::Lime;
		b42->BackColor = System::Drawing::Color::Lime;
		b43->BackColor = System::Drawing::Color::Green;
		b44->BackColor = System::Drawing::Color::Lime;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 0)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Lime;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Lime;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Green;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Lime;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Green;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Lime;
		b44->BackColor = System::Drawing::Color::Lime;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Green;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 1)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Green;
		b22->BackColor = System::Drawing::Color::Green;
		b23->BackColor = System::Drawing::Color::Green;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Green;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Green;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Green;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Green;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Lime;
		b44->BackColor = System::Drawing::Color::Lime;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 2)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Green;
		b22->BackColor = System::Drawing::Color::Green;
		b23->BackColor = System::Drawing::Color::Green;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Green;
		b31->BackColor = System::Drawing::Color::Lime;
		b32->BackColor = System::Drawing::Color::Green;
		b33->BackColor = System::Drawing::Color::Lime;
		b34->BackColor = System::Drawing::Color::Green;
		b35->BackColor = System::Drawing::Color::Lime;
		b41->BackColor = System::Drawing::Color::Green;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Green;
		b44->BackColor = System::Drawing::Color::Green;
		b45->BackColor = System::Drawing::Color::Green;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Green;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Green;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 5)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Lime;
		b23->BackColor = System::Drawing::Color::Green;
		b24->BackColor = System::Drawing::Color::Lime;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Green;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Green;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Lime;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Green;
		b44->BackColor = System::Drawing::Color::Green;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Lime;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Lime;
	}
	else if (c % 10 == 6)
	{
		b11->BackColor = System::Drawing::Color::Lime;
		b12->BackColor = System::Drawing::Color::Lime;
		b13->BackColor = System::Drawing::Color::Lime;
		b14->BackColor = System::Drawing::Color::Lime;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Lime;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Lime;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Lime;
		b34->BackColor = System::Drawing::Color::Green;
		b35->BackColor = System::Drawing::Color::Lime;
		b41->BackColor = System::Drawing::Color::Green;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Green;
		b44->BackColor = System::Drawing::Color::Lime;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Lime;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Lime;
	}
	else if (c % 10 == 7)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Green;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Green;
		b22->BackColor = System::Drawing::Color::Green;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Green;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Lime;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Lime;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Lime;
		b44->BackColor = System::Drawing::Color::Green;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Lime;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 8)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Green;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Lime;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Green;
		b22->BackColor = System::Drawing::Color::Green;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Green;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Green;
		b34->BackColor = System::Drawing::Color::Lime;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Lime;
		b42->BackColor = System::Drawing::Color::Green;
		b43->BackColor = System::Drawing::Color::Lime;
		b44->BackColor = System::Drawing::Color::Green;
		b45->BackColor = System::Drawing::Color::Green;
		b51->BackColor = System::Drawing::Color::Green;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Green;
		b54->BackColor = System::Drawing::Color::Green;
		b55->BackColor = System::Drawing::Color::Green;
	}
	else if (c % 10 == 9)
	{
		b11->BackColor = System::Drawing::Color::Green;
		b12->BackColor = System::Drawing::Color::Lime;
		b13->BackColor = System::Drawing::Color::Green;
		b14->BackColor = System::Drawing::Color::Lime;
		b15->BackColor = System::Drawing::Color::Green;
		b21->BackColor = System::Drawing::Color::Lime;
		b22->BackColor = System::Drawing::Color::Lime;
		b23->BackColor = System::Drawing::Color::Lime;
		b24->BackColor = System::Drawing::Color::Lime;
		b25->BackColor = System::Drawing::Color::Lime;
		b31->BackColor = System::Drawing::Color::Green;
		b32->BackColor = System::Drawing::Color::Lime;
		b33->BackColor = System::Drawing::Color::Lime;
		b34->BackColor = System::Drawing::Color::Lime;
		b35->BackColor = System::Drawing::Color::Green;
		b41->BackColor = System::Drawing::Color::Green;
		b42->BackColor = System::Drawing::Color::Lime;
		b43->BackColor = System::Drawing::Color::Green;
		b44->BackColor = System::Drawing::Color::Lime;
		b45->BackColor = System::Drawing::Color::Lime;
		b51->BackColor = System::Drawing::Color::Lime;
		b52->BackColor = System::Drawing::Color::Lime;
		b53->BackColor = System::Drawing::Color::Lime;
		b54->BackColor = System::Drawing::Color::Green;
		b55->BackColor = System::Drawing::Color::Green;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit this game?", "Tic Tac Toe", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Hide();
		BacktoEntry->Show();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Turn all the lights out, if you can! \n\nChanging a light also changes the lights next to it.", "All Out", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
}
};
}