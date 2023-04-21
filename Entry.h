#pragma once
#include "playfour.h"
#include "all_out.h"
#include "15puzzle.h"
#include "ShortestPathEntry.h"
#include "Tic_tac_toe.h"
#include "Guess_The_Function.h"

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	

	/// <summary>
	/// Summary for Entry
	/// </summary>
	public ref class Entry : public System::Windows::Forms::Form
	{
	public:
		Entry(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Entry()
		{
			if (components)
			{
				delete components;
			}
		}


	//panel using
		/*
	public:
		System::Void loadForm(Form^ form)
		{
			if (this->EntryPanel->Controls->Count > 0)
			{
				this->EntryPanel->Controls->RemoveAt(0);
			}
			Form^ f = gcnew fourInAline;
			f->TopLevel = false;
			f->Dock = DockStyle::Fill;
			this->EntryPanel->Controls->Add(f);
			this->EntryPanel->Tag = f;
			f->Show();

		}
		*/
		ref class FlickerLess : public System::Windows::Forms::Form

		{

		public: FlickerLess()

		{

			this->DoubleBuffered = true;

		}

		};


	private: System::Windows::Forms::Label^ Close;
	private: System::Windows::Forms::Button^ FourInAline;
	private: System::Windows::Forms::Button^ Puzzle_15;

	private: System::Windows::Forms::Button^ Lights_Out;

	private: System::Windows::Forms::Button^ TicTacToe;
	private: System::Windows::Forms::Button^ PathFinder;
	private: System::Windows::Forms::Button^ Function;


	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Entry::typeid));
			this->FourInAline = (gcnew System::Windows::Forms::Button());
			this->Puzzle_15 = (gcnew System::Windows::Forms::Button());
			this->Lights_Out = (gcnew System::Windows::Forms::Button());
			this->TicTacToe = (gcnew System::Windows::Forms::Button());
			this->PathFinder = (gcnew System::Windows::Forms::Button());
			this->Function = (gcnew System::Windows::Forms::Button());
			this->Close = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// FourInAline
			// 
			this->FourInAline->BackColor = System::Drawing::Color::Transparent;
			this->FourInAline->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FourInAline->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FourInAline->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FourInAline->ForeColor = System::Drawing::Color::Black;
			this->FourInAline->Location = System::Drawing::Point(49, 428);
			this->FourInAline->Name = L"FourInAline";
			this->FourInAline->Size = System::Drawing::Size(314, 62);
			this->FourInAline->TabIndex = 0;
			this->FourInAline->Text = L"FOUR IN A LINE";
			this->FourInAline->UseVisualStyleBackColor = false;
			this->FourInAline->Click += gcnew System::EventHandler(this, &Entry::FourInAline_Click);
			// 
			// Puzzle_15
			// 
			this->Puzzle_15->BackColor = System::Drawing::Color::Transparent;
			this->Puzzle_15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Puzzle_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Puzzle_15->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Puzzle_15->ForeColor = System::Drawing::Color::Black;
			this->Puzzle_15->Location = System::Drawing::Point(49, 245);
			this->Puzzle_15->Name = L"Puzzle_15";
			this->Puzzle_15->Size = System::Drawing::Size(314, 68);
			this->Puzzle_15->TabIndex = 0;
			this->Puzzle_15->Text = L"15 PUZZLE";
			this->Puzzle_15->UseVisualStyleBackColor = false;
			this->Puzzle_15->Click += gcnew System::EventHandler(this, &Entry::Puzzle15_Click);
			// 
			// Lights_Out
			// 
			this->Lights_Out->BackColor = System::Drawing::Color::Transparent;
			this->Lights_Out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Lights_Out->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lights_Out->Location = System::Drawing::Point(49, 337);
			this->Lights_Out->Name = L"Lights_Out";
			this->Lights_Out->Size = System::Drawing::Size(314, 68);
			this->Lights_Out->TabIndex = 1;
			this->Lights_Out->Text = L"LIGHTS OUT";
			this->Lights_Out->UseVisualStyleBackColor = false;
			this->Lights_Out->Click += gcnew System::EventHandler(this, &Entry::LightsOut_Click);
			// 
			// TicTacToe
			// 
			this->TicTacToe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TicTacToe->BackColor = System::Drawing::Color::Transparent;
			this->TicTacToe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TicTacToe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TicTacToe->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicTacToe->ForeColor = System::Drawing::Color::Black;
			this->TicTacToe->Location = System::Drawing::Point(810, 251);
			this->TicTacToe->Name = L"TicTacToe";
			this->TicTacToe->Size = System::Drawing::Size(276, 62);
			this->TicTacToe->TabIndex = 0;
			this->TicTacToe->Text = L"TIC TAC TOE";
			this->TicTacToe->UseVisualStyleBackColor = false;
			this->TicTacToe->Click += gcnew System::EventHandler(this, &Entry::TicTacToe_Click);
			// 
			// PathFinder
			// 
			this->PathFinder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->PathFinder->BackColor = System::Drawing::Color::Transparent;
			this->PathFinder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PathFinder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PathFinder->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PathFinder->ForeColor = System::Drawing::Color::Black;
			this->PathFinder->Location = System::Drawing::Point(810, 337);
			this->PathFinder->Name = L"PathFinder";
			this->PathFinder->Size = System::Drawing::Size(276, 68);
			this->PathFinder->TabIndex = 0;
			this->PathFinder->Text = L"PATH FINDER";
			this->PathFinder->UseVisualStyleBackColor = false;
			this->PathFinder->Click += gcnew System::EventHandler(this, &Entry::PathFinder_Click);
			// 
			// Function
			// 
			this->Function->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Function->BackColor = System::Drawing::Color::Transparent;
			this->Function->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Function->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Function->Location = System::Drawing::Point(810, 428);
			this->Function->Name = L"Function";
			this->Function->Size = System::Drawing::Size(276, 68);
			this->Function->TabIndex = 2;
			this->Function->Text = L"GUESS THE FUNCTION";
			this->Function->UseVisualStyleBackColor = false;
			this->Function->Click += gcnew System::EventHandler(this, &Entry::Function_Click);
			// 
			// Close
			// 
			this->Close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Close->BackColor = System::Drawing::Color::Transparent;
			this->Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Close->Font = (gcnew System::Drawing::Font(L"Ravie", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Close->ForeColor = System::Drawing::Color::White;
			this->Close->Location = System::Drawing::Point(1079, 21);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(54, 54);
			this->Close->TabIndex = 3;
			this->Close->Text = L"X";
			this->Close->Click += gcnew System::EventHandler(this, &Entry::Close_Click);
			// 
			// Entry
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->Lights_Out);
			this->Controls->Add(this->PathFinder);
			this->Controls->Add(this->Puzzle_15);
			this->Controls->Add(this->Function);
			this->Controls->Add(this->FourInAline);
			this->Controls->Add(this->TicTacToe);
			this->Controls->Add(this->Close);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Entry";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Athenic Quest";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void FourInAline_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	Form^ fourInAlineGame = gcnew playfour(this);
	fourInAlineGame->Show();
	this->Hide();
	
}
private: System::Void LightsOut_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ LightsOutGame = gcnew allout(this);
	LightsOutGame->Show();
	this->Hide();
}

private: System::Void Puzzle15_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ Puzzle15Game = gcnew Puzzle15(this);
	Puzzle15Game->Show();
	this->Hide();

}
private: System::Void PathFinder_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ ShortestPathGame = gcnew ShortestPathEntry(this);
	ShortestPathGame->Show();
	this->Hide();

}
private: System::Void TicTacToe_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ TicTacToeGame = gcnew Tictactoe(this);
	TicTacToeGame->Show();
	this->Hide();
}
private: System::Void Function_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ FunctionGame = gcnew function(this);
	FunctionGame->Show();
	this->Hide();
}
};
}
