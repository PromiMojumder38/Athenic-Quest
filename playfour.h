#pragma once

namespace AthenicQuest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for playfour
	/// </summary>
	public ref class playfour : public System::Windows::Forms::Form
	{
	public:
		playfour(Form^ EntryPage)
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
		~playfour()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ BacktoEntry;//This game ends and goes back to entry page
	private: System::Windows::Forms::Button^ bt11;
	private: System::Windows::Forms::Button^ bt12;
	private: System::Windows::Forms::Button^ bt13;
	private: System::Windows::Forms::Button^ bt14;
	private: System::Windows::Forms::Button^ bt15;
	private: System::Windows::Forms::Button^ bt16;
	private: System::Windows::Forms::Button^ bt17;
	private: System::Windows::Forms::Button^ bt27;
	protected:

	protected:







	private: System::Windows::Forms::Button^ bt26;

	private: System::Windows::Forms::Button^ bt25;

	private: System::Windows::Forms::Button^ bt24;

	private: System::Windows::Forms::Button^ bt23;

	private: System::Windows::Forms::Button^ bt22;

	private: System::Windows::Forms::Button^ bt21;
	private: System::Windows::Forms::Button^ bt37;


	private: System::Windows::Forms::Button^ bt36;

	private: System::Windows::Forms::Button^ bt35;

	private: System::Windows::Forms::Button^ bt34;

	private: System::Windows::Forms::Button^ bt33;

	private: System::Windows::Forms::Button^ bt32;

	private: System::Windows::Forms::Button^ bt31;
	private: System::Windows::Forms::Button^ bt47;


	private: System::Windows::Forms::Button^ bt46;

	private: System::Windows::Forms::Button^ bt45;

	private: System::Windows::Forms::Button^ bt44;

	private: System::Windows::Forms::Button^ bt43;

	private: System::Windows::Forms::Button^ bt42;

	private: System::Windows::Forms::Button^ bt41;
	private: System::Windows::Forms::Button^ bt57;


	private: System::Windows::Forms::Button^ bt56;

	private: System::Windows::Forms::Button^ bt55;

	private: System::Windows::Forms::Button^ bt54;

	private: System::Windows::Forms::Button^ bt53;

	private: System::Windows::Forms::Button^ bt52;

	private: System::Windows::Forms::Button^ bt51;
	private: System::Windows::Forms::Button^ bt67;


	private: System::Windows::Forms::Button^ bt66;

	private: System::Windows::Forms::Button^ bt65;

	private: System::Windows::Forms::Button^ bt64;

	private: System::Windows::Forms::Button^ bt63;

	private: System::Windows::Forms::Button^ bt62;

	private: System::Windows::Forms::Button^ bt61;
	private: System::Windows::Forms::Button^ turn;

	private: System::Windows::Forms::Button^ button2;




protected private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ blu;
protected private:
private: System::Windows::Forms::Button^ Red;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private:



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
			this->bt11 = (gcnew System::Windows::Forms::Button());
			this->bt12 = (gcnew System::Windows::Forms::Button());
			this->bt13 = (gcnew System::Windows::Forms::Button());
			this->bt14 = (gcnew System::Windows::Forms::Button());
			this->bt15 = (gcnew System::Windows::Forms::Button());
			this->bt16 = (gcnew System::Windows::Forms::Button());
			this->bt17 = (gcnew System::Windows::Forms::Button());
			this->bt27 = (gcnew System::Windows::Forms::Button());
			this->bt26 = (gcnew System::Windows::Forms::Button());
			this->bt25 = (gcnew System::Windows::Forms::Button());
			this->bt24 = (gcnew System::Windows::Forms::Button());
			this->bt23 = (gcnew System::Windows::Forms::Button());
			this->bt22 = (gcnew System::Windows::Forms::Button());
			this->bt21 = (gcnew System::Windows::Forms::Button());
			this->bt37 = (gcnew System::Windows::Forms::Button());
			this->bt36 = (gcnew System::Windows::Forms::Button());
			this->bt35 = (gcnew System::Windows::Forms::Button());
			this->bt34 = (gcnew System::Windows::Forms::Button());
			this->bt33 = (gcnew System::Windows::Forms::Button());
			this->bt32 = (gcnew System::Windows::Forms::Button());
			this->bt31 = (gcnew System::Windows::Forms::Button());
			this->bt47 = (gcnew System::Windows::Forms::Button());
			this->bt46 = (gcnew System::Windows::Forms::Button());
			this->bt45 = (gcnew System::Windows::Forms::Button());
			this->bt44 = (gcnew System::Windows::Forms::Button());
			this->bt43 = (gcnew System::Windows::Forms::Button());
			this->bt42 = (gcnew System::Windows::Forms::Button());
			this->bt41 = (gcnew System::Windows::Forms::Button());
			this->bt57 = (gcnew System::Windows::Forms::Button());
			this->bt56 = (gcnew System::Windows::Forms::Button());
			this->bt55 = (gcnew System::Windows::Forms::Button());
			this->bt54 = (gcnew System::Windows::Forms::Button());
			this->bt53 = (gcnew System::Windows::Forms::Button());
			this->bt52 = (gcnew System::Windows::Forms::Button());
			this->bt51 = (gcnew System::Windows::Forms::Button());
			this->bt67 = (gcnew System::Windows::Forms::Button());
			this->bt66 = (gcnew System::Windows::Forms::Button());
			this->bt65 = (gcnew System::Windows::Forms::Button());
			this->bt64 = (gcnew System::Windows::Forms::Button());
			this->bt63 = (gcnew System::Windows::Forms::Button());
			this->bt62 = (gcnew System::Windows::Forms::Button());
			this->bt61 = (gcnew System::Windows::Forms::Button());
			this->turn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blu = (gcnew System::Windows::Forms::Button());
			this->Red = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt11
			// 
			this->bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt11->Location = System::Drawing::Point(262, 189);
			this->bt11->Name = L"bt11";
			this->bt11->Size = System::Drawing::Size(90, 75);
			this->bt11->TabIndex = 0;
			this->bt11->UseVisualStyleBackColor = false;
			this->bt11->Click += gcnew System::EventHandler(this, &playfour::bt11_Click);
			// 
			// bt12
			// 
			this->bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt12->Location = System::Drawing::Point(349, 189);
			this->bt12->Name = L"bt12";
			this->bt12->Size = System::Drawing::Size(90, 75);
			this->bt12->TabIndex = 1;
			this->bt12->UseVisualStyleBackColor = false;
			this->bt12->Click += gcnew System::EventHandler(this, &playfour::bt12_Click);
			// 
			// bt13
			// 
			this->bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt13->Location = System::Drawing::Point(435, 189);
			this->bt13->Name = L"bt13";
			this->bt13->Size = System::Drawing::Size(90, 75);
			this->bt13->TabIndex = 2;
			this->bt13->UseVisualStyleBackColor = false;
			this->bt13->Click += gcnew System::EventHandler(this, &playfour::bt13_Click);
			// 
			// bt14
			// 
			this->bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt14->Location = System::Drawing::Point(522, 189);
			this->bt14->Name = L"bt14";
			this->bt14->Size = System::Drawing::Size(90, 75);
			this->bt14->TabIndex = 3;
			this->bt14->UseVisualStyleBackColor = false;
			this->bt14->Click += gcnew System::EventHandler(this, &playfour::bt14_Click);
			// 
			// bt15
			// 
			this->bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt15->Location = System::Drawing::Point(608, 189);
			this->bt15->Name = L"bt15";
			this->bt15->Size = System::Drawing::Size(90, 75);
			this->bt15->TabIndex = 4;
			this->bt15->UseVisualStyleBackColor = false;
			this->bt15->Click += gcnew System::EventHandler(this, &playfour::bt15_Click);
			// 
			// bt16
			// 
			this->bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt16->Location = System::Drawing::Point(694, 189);
			this->bt16->Name = L"bt16";
			this->bt16->Size = System::Drawing::Size(90, 75);
			this->bt16->TabIndex = 5;
			this->bt16->UseVisualStyleBackColor = false;
			this->bt16->Click += gcnew System::EventHandler(this, &playfour::bt16_Click);
			// 
			// bt17
			// 
			this->bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt17->Location = System::Drawing::Point(781, 189);
			this->bt17->Name = L"bt17";
			this->bt17->Size = System::Drawing::Size(90, 75);
			this->bt17->TabIndex = 6;
			this->bt17->UseVisualStyleBackColor = false;
			this->bt17->Click += gcnew System::EventHandler(this, &playfour::bt17_Click);
			// 
			// bt27
			// 
			this->bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt27->Location = System::Drawing::Point(781, 261);
			this->bt27->Name = L"bt27";
			this->bt27->Size = System::Drawing::Size(90, 75);
			this->bt27->TabIndex = 13;
			this->bt27->UseVisualStyleBackColor = false;
			this->bt27->Click += gcnew System::EventHandler(this, &playfour::bt27_Click);
			// 
			// bt26
			// 
			this->bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt26->Location = System::Drawing::Point(694, 261);
			this->bt26->Name = L"bt26";
			this->bt26->Size = System::Drawing::Size(90, 75);
			this->bt26->TabIndex = 12;
			this->bt26->UseVisualStyleBackColor = false;
			this->bt26->Click += gcnew System::EventHandler(this, &playfour::bt26_Click);
			// 
			// bt25
			// 
			this->bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt25->Location = System::Drawing::Point(608, 261);
			this->bt25->Name = L"bt25";
			this->bt25->Size = System::Drawing::Size(90, 75);
			this->bt25->TabIndex = 11;
			this->bt25->UseVisualStyleBackColor = false;
			this->bt25->Click += gcnew System::EventHandler(this, &playfour::bt25_Click);
			// 
			// bt24
			// 
			this->bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt24->Location = System::Drawing::Point(522, 261);
			this->bt24->Name = L"bt24";
			this->bt24->Size = System::Drawing::Size(90, 75);
			this->bt24->TabIndex = 10;
			this->bt24->UseVisualStyleBackColor = false;
			this->bt24->Click += gcnew System::EventHandler(this, &playfour::bt24_Click);
			// 
			// bt23
			// 
			this->bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt23->Location = System::Drawing::Point(435, 261);
			this->bt23->Name = L"bt23";
			this->bt23->Size = System::Drawing::Size(90, 75);
			this->bt23->TabIndex = 9;
			this->bt23->UseVisualStyleBackColor = false;
			this->bt23->Click += gcnew System::EventHandler(this, &playfour::bt23_Click);
			// 
			// bt22
			// 
			this->bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt22->Location = System::Drawing::Point(349, 261);
			this->bt22->Name = L"bt22";
			this->bt22->Size = System::Drawing::Size(90, 75);
			this->bt22->TabIndex = 8;
			this->bt22->UseVisualStyleBackColor = false;
			this->bt22->Click += gcnew System::EventHandler(this, &playfour::bt22_Click);
			// 
			// bt21
			// 
			this->bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt21->Location = System::Drawing::Point(262, 261);
			this->bt21->Name = L"bt21";
			this->bt21->Size = System::Drawing::Size(90, 75);
			this->bt21->TabIndex = 7;
			this->bt21->UseVisualStyleBackColor = false;
			this->bt21->Click += gcnew System::EventHandler(this, &playfour::bt21_Click);
			// 
			// bt37
			// 
			this->bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt37->Location = System::Drawing::Point(781, 333);
			this->bt37->Name = L"bt37";
			this->bt37->Size = System::Drawing::Size(90, 75);
			this->bt37->TabIndex = 20;
			this->bt37->UseVisualStyleBackColor = false;
			this->bt37->Click += gcnew System::EventHandler(this, &playfour::bt37_Click);
			// 
			// bt36
			// 
			this->bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt36->Location = System::Drawing::Point(694, 333);
			this->bt36->Name = L"bt36";
			this->bt36->Size = System::Drawing::Size(90, 75);
			this->bt36->TabIndex = 19;
			this->bt36->UseVisualStyleBackColor = false;
			this->bt36->Click += gcnew System::EventHandler(this, &playfour::bt36_Click);
			// 
			// bt35
			// 
			this->bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt35->Location = System::Drawing::Point(608, 333);
			this->bt35->Name = L"bt35";
			this->bt35->Size = System::Drawing::Size(90, 75);
			this->bt35->TabIndex = 18;
			this->bt35->UseVisualStyleBackColor = false;
			this->bt35->Click += gcnew System::EventHandler(this, &playfour::bt35_Click);
			// 
			// bt34
			// 
			this->bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt34->Location = System::Drawing::Point(522, 333);
			this->bt34->Name = L"bt34";
			this->bt34->Size = System::Drawing::Size(90, 75);
			this->bt34->TabIndex = 17;
			this->bt34->UseVisualStyleBackColor = false;
			this->bt34->Click += gcnew System::EventHandler(this, &playfour::bt34_Click);
			// 
			// bt33
			// 
			this->bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt33->Location = System::Drawing::Point(435, 333);
			this->bt33->Name = L"bt33";
			this->bt33->Size = System::Drawing::Size(90, 75);
			this->bt33->TabIndex = 16;
			this->bt33->UseVisualStyleBackColor = false;
			this->bt33->Click += gcnew System::EventHandler(this, &playfour::bt33_Click);
			// 
			// bt32
			// 
			this->bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt32->Location = System::Drawing::Point(349, 333);
			this->bt32->Name = L"bt32";
			this->bt32->Size = System::Drawing::Size(90, 75);
			this->bt32->TabIndex = 15;
			this->bt32->UseVisualStyleBackColor = false;
			this->bt32->Click += gcnew System::EventHandler(this, &playfour::bt32_Click);
			// 
			// bt31
			// 
			this->bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt31->Location = System::Drawing::Point(262, 333);
			this->bt31->Name = L"bt31";
			this->bt31->Size = System::Drawing::Size(90, 75);
			this->bt31->TabIndex = 14;
			this->bt31->UseVisualStyleBackColor = false;
			this->bt31->Click += gcnew System::EventHandler(this, &playfour::bt31_Click);
			// 
			// bt47
			// 
			this->bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt47->Location = System::Drawing::Point(781, 404);
			this->bt47->Name = L"bt47";
			this->bt47->Size = System::Drawing::Size(90, 75);
			this->bt47->TabIndex = 27;
			this->bt47->UseVisualStyleBackColor = false;
			this->bt47->Click += gcnew System::EventHandler(this, &playfour::bt47_Click);
			// 
			// bt46
			// 
			this->bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt46->Location = System::Drawing::Point(694, 404);
			this->bt46->Name = L"bt46";
			this->bt46->Size = System::Drawing::Size(90, 75);
			this->bt46->TabIndex = 26;
			this->bt46->UseVisualStyleBackColor = false;
			this->bt46->Click += gcnew System::EventHandler(this, &playfour::bt46_Click);
			// 
			// bt45
			// 
			this->bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt45->Location = System::Drawing::Point(608, 404);
			this->bt45->Name = L"bt45";
			this->bt45->Size = System::Drawing::Size(90, 75);
			this->bt45->TabIndex = 25;
			this->bt45->UseVisualStyleBackColor = false;
			this->bt45->Click += gcnew System::EventHandler(this, &playfour::bt45_Click);
			// 
			// bt44
			// 
			this->bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt44->Location = System::Drawing::Point(522, 404);
			this->bt44->Name = L"bt44";
			this->bt44->Size = System::Drawing::Size(90, 75);
			this->bt44->TabIndex = 24;
			this->bt44->UseVisualStyleBackColor = false;
			this->bt44->Click += gcnew System::EventHandler(this, &playfour::bt44_Click);
			// 
			// bt43
			// 
			this->bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt43->Location = System::Drawing::Point(435, 404);
			this->bt43->Name = L"bt43";
			this->bt43->Size = System::Drawing::Size(90, 75);
			this->bt43->TabIndex = 23;
			this->bt43->UseVisualStyleBackColor = false;
			this->bt43->Click += gcnew System::EventHandler(this, &playfour::bt43_Click);
			// 
			// bt42
			// 
			this->bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt42->Location = System::Drawing::Point(349, 404);
			this->bt42->Name = L"bt42";
			this->bt42->Size = System::Drawing::Size(90, 75);
			this->bt42->TabIndex = 22;
			this->bt42->UseVisualStyleBackColor = false;
			this->bt42->Click += gcnew System::EventHandler(this, &playfour::bt42_Click);
			// 
			// bt41
			// 
			this->bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt41->Location = System::Drawing::Point(262, 404);
			this->bt41->Name = L"bt41";
			this->bt41->Size = System::Drawing::Size(90, 75);
			this->bt41->TabIndex = 21;
			this->bt41->UseVisualStyleBackColor = false;
			this->bt41->Click += gcnew System::EventHandler(this, &playfour::bt41_Click);
			// 
			// bt57
			// 
			this->bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt57->Location = System::Drawing::Point(781, 474);
			this->bt57->Name = L"bt57";
			this->bt57->Size = System::Drawing::Size(90, 75);
			this->bt57->TabIndex = 34;
			this->bt57->UseVisualStyleBackColor = false;
			this->bt57->Click += gcnew System::EventHandler(this, &playfour::bt57_Click);
			// 
			// bt56
			// 
			this->bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt56->Location = System::Drawing::Point(694, 474);
			this->bt56->Name = L"bt56";
			this->bt56->Size = System::Drawing::Size(90, 75);
			this->bt56->TabIndex = 33;
			this->bt56->UseVisualStyleBackColor = false;
			this->bt56->Click += gcnew System::EventHandler(this, &playfour::bt56_Click);
			// 
			// bt55
			// 
			this->bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt55->Location = System::Drawing::Point(608, 474);
			this->bt55->Name = L"bt55";
			this->bt55->Size = System::Drawing::Size(90, 75);
			this->bt55->TabIndex = 32;
			this->bt55->UseVisualStyleBackColor = false;
			this->bt55->Click += gcnew System::EventHandler(this, &playfour::bt55_Click);
			// 
			// bt54
			// 
			this->bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt54->Location = System::Drawing::Point(522, 474);
			this->bt54->Name = L"bt54";
			this->bt54->Size = System::Drawing::Size(90, 75);
			this->bt54->TabIndex = 31;
			this->bt54->UseVisualStyleBackColor = false;
			this->bt54->Click += gcnew System::EventHandler(this, &playfour::bt54_Click);
			// 
			// bt53
			// 
			this->bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt53->Location = System::Drawing::Point(435, 474);
			this->bt53->Name = L"bt53";
			this->bt53->Size = System::Drawing::Size(90, 75);
			this->bt53->TabIndex = 30;
			this->bt53->UseVisualStyleBackColor = false;
			this->bt53->Click += gcnew System::EventHandler(this, &playfour::bt53_Click);
			// 
			// bt52
			// 
			this->bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt52->Location = System::Drawing::Point(349, 474);
			this->bt52->Name = L"bt52";
			this->bt52->Size = System::Drawing::Size(90, 75);
			this->bt52->TabIndex = 29;
			this->bt52->UseVisualStyleBackColor = false;
			this->bt52->Click += gcnew System::EventHandler(this, &playfour::bt52_Click);
			// 
			// bt51
			// 
			this->bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt51->Location = System::Drawing::Point(262, 474);
			this->bt51->Name = L"bt51";
			this->bt51->Size = System::Drawing::Size(90, 75);
			this->bt51->TabIndex = 28;
			this->bt51->UseVisualStyleBackColor = false;
			this->bt51->Click += gcnew System::EventHandler(this, &playfour::bt51_Click);
			// 
			// bt67
			// 
			this->bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt67->Location = System::Drawing::Point(781, 542);
			this->bt67->Name = L"bt67";
			this->bt67->Size = System::Drawing::Size(90, 75);
			this->bt67->TabIndex = 41;
			this->bt67->UseVisualStyleBackColor = false;
			this->bt67->Click += gcnew System::EventHandler(this, &playfour::bt67_Click);
			// 
			// bt66
			// 
			this->bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt66->Location = System::Drawing::Point(694, 542);
			this->bt66->Name = L"bt66";
			this->bt66->Size = System::Drawing::Size(90, 75);
			this->bt66->TabIndex = 40;
			this->bt66->UseVisualStyleBackColor = false;
			this->bt66->Click += gcnew System::EventHandler(this, &playfour::bt66_Click);
			// 
			// bt65
			// 
			this->bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt65->Location = System::Drawing::Point(608, 542);
			this->bt65->Name = L"bt65";
			this->bt65->Size = System::Drawing::Size(90, 75);
			this->bt65->TabIndex = 39;
			this->bt65->UseVisualStyleBackColor = false;
			this->bt65->Click += gcnew System::EventHandler(this, &playfour::bt65_Click);
			// 
			// bt64
			// 
			this->bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt64->Location = System::Drawing::Point(522, 542);
			this->bt64->Name = L"bt64";
			this->bt64->Size = System::Drawing::Size(90, 75);
			this->bt64->TabIndex = 38;
			this->bt64->UseVisualStyleBackColor = false;
			this->bt64->Click += gcnew System::EventHandler(this, &playfour::bt64_Click);
			// 
			// bt63
			// 
			this->bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt63->Location = System::Drawing::Point(435, 542);
			this->bt63->Name = L"bt63";
			this->bt63->Size = System::Drawing::Size(90, 75);
			this->bt63->TabIndex = 37;
			this->bt63->UseVisualStyleBackColor = false;
			this->bt63->Click += gcnew System::EventHandler(this, &playfour::bt63_Click);
			// 
			// bt62
			// 
			this->bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt62->Location = System::Drawing::Point(349, 542);
			this->bt62->Name = L"bt62";
			this->bt62->Size = System::Drawing::Size(90, 75);
			this->bt62->TabIndex = 36;
			this->bt62->UseVisualStyleBackColor = false;
			this->bt62->Click += gcnew System::EventHandler(this, &playfour::bt62_Click);
			// 
			// bt61
			// 
			this->bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bt61->Location = System::Drawing::Point(262, 542);
			this->bt61->Name = L"bt61";
			this->bt61->Size = System::Drawing::Size(90, 75);
			this->bt61->TabIndex = 35;
			this->bt61->UseVisualStyleBackColor = false;
			this->bt61->Click += gcnew System::EventHandler(this, &playfour::bt61_Click);
			// 
			// turn
			// 
			this->turn->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->turn->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turn->Location = System::Drawing::Point(12, 63);
			this->turn->Name = L"turn";
			this->turn->Size = System::Drawing::Size(229, 64);
			this->turn->TabIndex = 42;
			this->turn->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(900, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 64);
			this->button2->TabIndex = 43;
			this->button2->Text = L"New Game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &playfour::nugem);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(349, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(501, 58);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Tap \'New game to start the game.";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// blu
			// 
			this->blu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->blu->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->blu->ForeColor = System::Drawing::Color::Blue;
			this->blu->Location = System::Drawing::Point(12, 318);
			this->blu->Name = L"blu";
			this->blu->Size = System::Drawing::Size(229, 64);
			this->blu->TabIndex = 46;
			this->blu->Text = L"Blue: 0";
			this->blu->UseVisualStyleBackColor = false;
			// 
			// Red
			// 
			this->Red->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Red->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Red->ForeColor = System::Drawing::Color::Red;
			this->Red->Location = System::Drawing::Point(12, 388);
			this->Red->Name = L"Red";
			this->Red->Size = System::Drawing::Size(229, 64);
			this->Red->TabIndex = 47;
			this->Red->Text = L"Red: 0";
			this->Red->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Teal;
			this->button3->Location = System::Drawing::Point(900, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 64);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Rules";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &playfour::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(900, 458);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(229, 64);
			this->button4->TabIndex = 49;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &playfour::button4_Click);
			// 
			// playfour
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1159, 713);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Red);
			this->Controls->Add(this->blu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->turn);
			this->Controls->Add(this->bt67);
			this->Controls->Add(this->bt66);
			this->Controls->Add(this->bt65);
			this->Controls->Add(this->bt64);
			this->Controls->Add(this->bt63);
			this->Controls->Add(this->bt62);
			this->Controls->Add(this->bt61);
			this->Controls->Add(this->bt57);
			this->Controls->Add(this->bt56);
			this->Controls->Add(this->bt55);
			this->Controls->Add(this->bt54);
			this->Controls->Add(this->bt53);
			this->Controls->Add(this->bt52);
			this->Controls->Add(this->bt51);
			this->Controls->Add(this->bt47);
			this->Controls->Add(this->bt46);
			this->Controls->Add(this->bt45);
			this->Controls->Add(this->bt44);
			this->Controls->Add(this->bt43);
			this->Controls->Add(this->bt42);
			this->Controls->Add(this->bt41);
			this->Controls->Add(this->bt37);
			this->Controls->Add(this->bt36);
			this->Controls->Add(this->bt35);
			this->Controls->Add(this->bt34);
			this->Controls->Add(this->bt33);
			this->Controls->Add(this->bt32);
			this->Controls->Add(this->bt31);
			this->Controls->Add(this->bt27);
			this->Controls->Add(this->bt26);
			this->Controls->Add(this->bt25);
			this->Controls->Add(this->bt24);
			this->Controls->Add(this->bt23);
			this->Controls->Add(this->bt22);
			this->Controls->Add(this->bt21);
			this->Controls->Add(this->bt17);
			this->Controls->Add(this->bt16);
			this->Controls->Add(this->bt15);
			this->Controls->Add(this->bt14);
			this->Controls->Add(this->bt13);
			this->Controls->Add(this->bt12);
			this->Controls->Add(this->bt11);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"playfour";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play Four In a Row";
			this->Load += gcnew System::EventHandler(this, &playfour::playfour_Load);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void playfour_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   void gameplay(Button^ x1, Button^ x2, Button^ x3, Button^ x4)
		   {
			   int bc = 0, rc = 0;
			   if (x1->BackColor == System::Drawing::SystemColors::MenuHighlight && x2->BackColor == System::Drawing::SystemColors::MenuHighlight
				   && x3->BackColor == System::Drawing::SystemColors::MenuHighlight && x4->BackColor == System::Drawing::SystemColors::MenuHighlight)
			   {
				   bc++;
				   x1->BackColor = System::Drawing::Color::DarkBlue;
				   x2->BackColor = System::Drawing::Color::DarkBlue;
				   x3->BackColor = System::Drawing::Color::DarkBlue;
				   x4->BackColor = System::Drawing::Color::DarkBlue;
				   MessageBox::Show("Blue Wins", "Play Four in a Row", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   turn->Text = "";
				   blu->Text = "Blue: " + bc.ToString();
			   }
			   else if (x1->BackColor == System::Drawing::Color::Red && x2->BackColor == System::Drawing::Color::Red
				   && x3->BackColor == System::Drawing::Color::Red && x4->BackColor == System::Drawing::Color::Red)
			   {
				   rc++;
				   x1->BackColor = System::Drawing::Color::DarkRed;
				   x2->BackColor = System::Drawing::Color::DarkRed;
				   x3->BackColor = System::Drawing::Color::DarkRed;
				   x4->BackColor = System::Drawing::Color::DarkRed;
				   MessageBox::Show("Red Wins", "Play Four in a Row", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				   turn->Text = "";
				   Red->Text = "Red: " + rc.ToString();
			   }
			   else if (bt11->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt12->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt13->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt14->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt15->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt16->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt17->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt21->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt22->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt23->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt24->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt25->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt26->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt27->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt31->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt32->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt33->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt34->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt35->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt36->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt37->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt41->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt42->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt43->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt44->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt45->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt46->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt47->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt51->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt52->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt53->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt54->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt55->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt56->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt57->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt61->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt62->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt63->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt64->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt65->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt66->BackColor != System::Drawing::SystemColors::ButtonHighlight && bt67->BackColor != System::Drawing::SystemColors::ButtonHighlight)
			   {
			   MessageBox::Show("Game drawn, try again!", "Play Four in a Row", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   turn->Text = "";

			   }
}
	private: System::Void nugem(System::Object^ sender, System::EventArgs^ e) {
		bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight; 
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
		bt11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		bt67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
	}
		   void sln()
		   {
			  
			   gameplay(bt61, bt62, bt63, bt64);
			   gameplay(bt65, bt66, bt63, bt64);
			   gameplay(bt64, bt65, bt66, bt67);
			   gameplay(bt65, bt62, bt63, bt64);

			   
			   gameplay(bt51, bt52, bt53, bt54);
			   gameplay(bt55, bt56, bt53, bt54);
			   gameplay(bt54, bt55, bt56, bt57);
			   gameplay(bt55, bt52, bt53, bt54);

			   gameplay(bt41, bt42, bt43, bt44);
			   gameplay(bt45, bt46, bt43, bt44);
			   gameplay(bt44, bt45, bt46, bt47);
			   gameplay(bt45, bt42, bt43, bt44);

			   gameplay(bt31, bt32, bt33, bt34);
			   gameplay(bt35, bt36, bt33, bt34);
			   gameplay(bt34, bt35, bt36, bt37);
			   gameplay(bt35, bt32, bt33, bt34);

			   gameplay(bt21, bt22, bt23, bt24);
			   gameplay(bt25, bt26, bt23, bt24);
			   gameplay(bt24, bt25, bt26, bt27);
			   gameplay(bt25, bt22, bt23, bt24);

			   gameplay(bt11, bt12, bt13, bt14);
			   gameplay(bt15, bt16, bt13, bt14);
			   gameplay(bt14, bt15, bt16, bt17);
			   gameplay(bt15, bt12, bt13, bt14);

			   gameplay(bt61, bt51, bt41, bt31);
			   gameplay(bt21, bt51, bt41, bt31);
			   gameplay(bt21, bt11, bt41, bt31);
			  
			   gameplay(bt62, bt52, bt42, bt32);
			   gameplay(bt22, bt52, bt42, bt32);
			   gameplay(bt22, bt12, bt42, bt32);

			   gameplay(bt63, bt53, bt43, bt33);
			   gameplay(bt23, bt53, bt43, bt33);
			   gameplay(bt23, bt13, bt43, bt33);

			   gameplay(bt64, bt54, bt44, bt34);
			   gameplay(bt24, bt54, bt44, bt34);
			   gameplay(bt24, bt14, bt44, bt34);

			   gameplay(bt65, bt55, bt45, bt35);
			   gameplay(bt25, bt55, bt45, bt35);
			   gameplay(bt25, bt15, bt45, bt35);

			   gameplay(bt66, bt56, bt46, bt36);
			   gameplay(bt26, bt56, bt46, bt36);
			   gameplay(bt26, bt16, bt46, bt36);

			   gameplay(bt67, bt57, bt47, bt37);
			   gameplay(bt27, bt57, bt47, bt37);
			   gameplay(bt27, bt17, bt47, bt37);
		
			   gameplay(bt11, bt22, bt33, bt44);
			   gameplay(bt55, bt22, bt33, bt44);
			   gameplay(bt55, bt66, bt33, bt44);
			   gameplay(bt12, bt23, bt34, bt45);
			   gameplay(bt13, bt24, bt35, bt46);
			   gameplay(bt14, bt25, bt36, bt47);
			   gameplay(bt21, bt32, bt43, bt54);
			   gameplay(bt23, bt34, bt45, bt56);
			   gameplay(bt24, bt35, bt46, bt57);
			   gameplay(bt31, bt42, bt53, bt64);
			   gameplay(bt32, bt43, bt54, bt65);
			   gameplay(bt34, bt45, bt56, bt67);
			   gameplay(bt41, bt32, bt23, bt14);
			   gameplay(bt42, bt33, bt24, bt15);
			   gameplay(bt43, bt34, bt25, bt16);
			   gameplay(bt44, bt35, bt26, bt17);
			   gameplay(bt51, bt42, bt33, bt24);
			   gameplay(bt52, bt43, bt34, bt25);
			   gameplay(bt53, bt44, bt35, bt26);
			   gameplay(bt54, bt45, bt36, bt27);

			   gameplay(bt61, bt52, bt43, bt34);
			   gameplay(bt62, bt53, bt44, bt35);
			   gameplay(bt63, bt54, bt45, bt36);
			   gameplay(bt64, bt55, bt46, bt37);
	}
			
	 
	private: System::Void bt61_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
			else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
			else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
			else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
			else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
			else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}
		sln();
	};
	private: System::Void bt62_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
			else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
			else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
			else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
			else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
			else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}
		sln();
	}
	private: System::Void bt63_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
			else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
			else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
			else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
			else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
			else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
	private: System::Void bt64_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
			else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
			else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
			else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
			else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
			else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
	private: System::Void bt65_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
			else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
			else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
			else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
			else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
			else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
	private: System::Void bt66_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
			else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
			else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
			else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
			else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
			else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
	private: System::Void bt67_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
			else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
			else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
			else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
			else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
			else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
	private: System::Void bt51_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn->Text == "Blue's turn!")
		{
			if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
			else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
			turn->Text = "Red's turn!";
			turn->ForeColor = System::Drawing::Color::Red;
		}
		else if (turn->Text == "Red's turn!")
		{
			if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
			else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
			else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
			else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
			else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
			else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
			turn->Text = "Blue's turn!";
			turn->ForeColor = System::Drawing::Color::Blue;
		}sln();
	}
private: System::Void bt52_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt53_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt54_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt55_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt56_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color:: Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt57_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt41_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt42_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}

private: System::Void bt43_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt44_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt45_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt46_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt47_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}

private: System::Void bt32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt33_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt37_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt67->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt67->BackColor = System::Drawing::Color::Red;
		else if (bt57->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt57->BackColor = System::Drawing::Color::Red;
		else if (bt47->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt47->BackColor = System::Drawing::Color::Red;
		else if (bt37->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt37->BackColor = System::Drawing::Color::Red;
		else if (bt27->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt27->BackColor = System::Drawing::Color::Red;
		else if (bt17->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt17->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt66->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt66->BackColor = System::Drawing::Color::Red;
		else if (bt56->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt56->BackColor = System::Drawing::Color::Red;
		else if (bt46->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt46->BackColor = System::Drawing::Color::Red;
		else if (bt36->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt36->BackColor = System::Drawing::Color::Red;
		else if (bt26->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt26->BackColor = System::Drawing::Color::Red;
		else if (bt16->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt16->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt65->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt65->BackColor = System::Drawing::Color::Red;
		else if (bt55->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt55->BackColor = System::Drawing::Color::Red;
		else if (bt45->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt45->BackColor = System::Drawing::Color::Red;
		else if (bt35->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt35->BackColor = System::Drawing::Color::Red;
		else if (bt25->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt25->BackColor = System::Drawing::Color::Red;
		else if (bt15->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt15->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt64->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt64->BackColor = System::Drawing::Color::Red;
		else if (bt54->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt54->BackColor = System::Drawing::Color::Red;
		else if (bt44->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt44->BackColor = System::Drawing::Color::Red;
		else if (bt34->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt34->BackColor = System::Drawing::Color::Red;
		else if (bt24->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt24->BackColor = System::Drawing::Color::Red;
		else if (bt14->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt14->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt63->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt63->BackColor = System::Drawing::Color::Red;
		else if (bt53->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt53->BackColor = System::Drawing::Color::Red;
		else if (bt43->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt43->BackColor = System::Drawing::Color::Red;
		else if (bt33->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt33->BackColor = System::Drawing::Color::Red;
		else if (bt23->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt23->BackColor = System::Drawing::Color::Red;
		else if (bt13->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt13->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt62->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt62->BackColor = System::Drawing::Color::Red;
		else if (bt52->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt52->BackColor = System::Drawing::Color::Red;
		else if (bt42->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt42->BackColor = System::Drawing::Color::Red;
		else if (bt32->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt32->BackColor = System::Drawing::Color::Red;
		else if (bt22->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt22->BackColor = System::Drawing::Color::Red;
		else if (bt12->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt12->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void bt21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (turn->Text == "Blue's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::SystemColors::MenuHighlight;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::SystemColors::MenuHighlight;
		turn->Text = "Red's turn!";
		turn->ForeColor = System::Drawing::Color::Red;
	}
	else if (turn->Text == "Red's turn!")
	{
		if (bt61->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt61->BackColor = System::Drawing::Color::Red;
		else if (bt51->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt51->BackColor = System::Drawing::Color::Red;
		else if (bt41->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt41->BackColor = System::Drawing::Color::Red;
		else if (bt31->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt31->BackColor = System::Drawing::Color::Red;
		else if (bt21->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt21->BackColor = System::Drawing::Color::Red;
		else if (bt11->BackColor == System::Drawing::SystemColors::ButtonHighlight) bt11->BackColor = System::Drawing::Color::Red;
		turn->Text = "Blue's turn!";
		turn->ForeColor = System::Drawing::Color::Blue;
	}sln();
}
private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("1) Tap 'New Game' to start the game\n\n\n2) Point the cursor over the column you wish to drop your piece in.\n\n\n3) When you can connect four pieces vertically, horizontally or diagonally you win.\n\n\n", "Rules", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit this game?", "4 in a Line!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Hide();
		BacktoEntry->Show();
	}
}
};
}
