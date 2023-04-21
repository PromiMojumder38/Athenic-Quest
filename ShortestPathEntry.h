#pragma once
#include "Level1.h"

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShortestPathEntry
	/// </summary>
	public ref class ShortestPathEntry : public System::Windows::Forms::Form
	{
	public:
		ShortestPathEntry(Form^ EntryPage)
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
		~ShortestPathEntry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ StartGame;
	private: System::Windows::Forms::Button^ ExitGame;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShortestPathEntry::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StartGame = (gcnew System::Windows::Forms::Button());
			this->ExitGame = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(356, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 85);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PATH FINDER";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StartGame
			// 
			this->StartGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->StartGame->BackColor = System::Drawing::Color::PeachPuff;
			this->StartGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartGame->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartGame->Location = System::Drawing::Point(290, 554);
			this->StartGame->Name = L"StartGame";
			this->StartGame->Size = System::Drawing::Size(229, 78);
			this->StartGame->TabIndex = 2;
			this->StartGame->Text = L"START";
			this->StartGame->UseVisualStyleBackColor = false;
			this->StartGame->Click += gcnew System::EventHandler(this, &ShortestPathEntry::StartGame_Click);
			// 
			// ExitGame
			// 
			this->ExitGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ExitGame->BackColor = System::Drawing::Color::PeachPuff;
			this->ExitGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitGame->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitGame->Location = System::Drawing::Point(613, 554);
			this->ExitGame->Name = L"ExitGame";
			this->ExitGame->Size = System::Drawing::Size(229, 78);
			this->ExitGame->TabIndex = 2;
			this->ExitGame->Text = L"EXIT";
			this->ExitGame->UseVisualStyleBackColor = false;
			this->ExitGame->Click += gcnew System::EventHandler(this, &ShortestPathEntry::ExitGame_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(113, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(913, 268);
			this->label2->TabIndex = 3;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// ShortestPathEntry
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ExitGame);
			this->Controls->Add(this->StartGame);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"ShortestPathEntry";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShortestPathEntry";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitGame_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to exit this game?", "Tic Tac Toe", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
			BacktoEntry->Show();
		}
	}
private: System::Void StartGame_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ Level1Game = gcnew Level1(this);
	Level1Game->Show();
	this->Hide();
}
};
}
