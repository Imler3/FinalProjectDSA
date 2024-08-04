#pragma once
#include "algorithmSource.cpp"
#include "mergesort.cpp"
#include <iostream>
#include <string>
#include <algorithm>

namespace FinalProjectDSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace System::Text;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ SolosLabelPanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ merge;
	private: System::Windows::Forms::Button^ quick;
	private: System::Windows::Forms::Label^ heapSortOutput;
	private: System::Windows::Forms::Label^ heapOutput2;
	private: System::Windows::Forms::Label^ heapOutput3;
	private: System::Windows::Forms::Label^ heapOutput1;
	private: System::Windows::Forms::Label^ heapOutput0;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ heapOutputD1;
	private: System::Windows::Forms::Label^ heapOutputD3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ heapD;

	private: System::Windows::Forms::Label^ heapOutputD0;
	private: System::Windows::Forms::Button^ mergeD;

	private: System::Windows::Forms::Label^ heapOutputD2;
	private: System::Windows::Forms::Label^ heapSortOutD;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ heapT;
	private: System::Windows::Forms::Label^ heapOutputT0;



	private: System::Windows::Forms::Button^ mergeT;
	private: System::Windows::Forms::Label^ heapOutputT1;
	private: System::Windows::Forms::Label^ heapOutputT3;



	private: System::Windows::Forms::Label^ heapOutputT2;

	private: System::Windows::Forms::Label^ heapSortOutT;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ heapOutputS1;
	private: System::Windows::Forms::Label^ heapOutputS3;
	private: System::Windows::Forms::Label^ heapOutputS2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ heapS;
	private: System::Windows::Forms::Label^ heapOutputS0;
	private: System::Windows::Forms::Button^ mergeS;
	private: System::Windows::Forms::Label^ heapSortOutS;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SolosLabelPanel = (gcnew System::Windows::Forms::Panel());
			this->quick = (gcnew System::Windows::Forms::Button());
			this->merge = (gcnew System::Windows::Forms::Button());
			this->heapOutput3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->heapOutput0 = (gcnew System::Windows::Forms::Label());
			this->heapOutput1 = (gcnew System::Windows::Forms::Label());
			this->heapOutput2 = (gcnew System::Windows::Forms::Label());
			this->heapSortOutput = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->heapD = (gcnew System::Windows::Forms::Button());
			this->mergeD = (gcnew System::Windows::Forms::Button());
			this->heapOutputD1 = (gcnew System::Windows::Forms::Label());
			this->heapOutputD3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->heapOutputD0 = (gcnew System::Windows::Forms::Label());
			this->heapOutputD2 = (gcnew System::Windows::Forms::Label());
			this->heapSortOutD = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->heapOutputT0 = (gcnew System::Windows::Forms::Label());
			this->heapOutputT1 = (gcnew System::Windows::Forms::Label());
			this->heapOutputT3 = (gcnew System::Windows::Forms::Label());
			this->heapOutputT2 = (gcnew System::Windows::Forms::Label());
			this->heapSortOutT = (gcnew System::Windows::Forms::Label());
			this->heapT = (gcnew System::Windows::Forms::Button());
			this->mergeT = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->heapS = (gcnew System::Windows::Forms::Button());
			this->mergeS = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->heapOutputS1 = (gcnew System::Windows::Forms::Label());
			this->heapOutputS3 = (gcnew System::Windows::Forms::Label());
			this->heapOutputS2 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->heapOutputS0 = (gcnew System::Windows::Forms::Label());
			this->heapSortOutS = (gcnew System::Windows::Forms::Label());
			this->SolosLabelPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(509, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 21);
			this->button1->TabIndex = 0;
			this->button1->Text = L"▼";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"NSimSun", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Solos";
			// 
			// SolosLabelPanel
			// 
			this->SolosLabelPanel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SolosLabelPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SolosLabelPanel->Controls->Add(this->quick);
			this->SolosLabelPanel->Controls->Add(this->merge);
			this->SolosLabelPanel->Controls->Add(this->button1);
			this->SolosLabelPanel->Location = System::Drawing::Point(26, 46);
			this->SolosLabelPanel->Name = L"SolosLabelPanel";
			this->SolosLabelPanel->Size = System::Drawing::Size(558, 49);
			this->SolosLabelPanel->TabIndex = 2;
			// 
			// quick
			// 
			this->quick->Location = System::Drawing::Point(197, 12);
			this->quick->Name = L"quick";
			this->quick->Size = System::Drawing::Size(75, 23);
			this->quick->TabIndex = 5;
			this->quick->Text = L"Heap Sort";
			this->quick->UseVisualStyleBackColor = true;
			this->quick->Visible = false;
			this->quick->Click += gcnew System::EventHandler(this, &MyForm::quick_Click);
			// 
			// merge
			// 
			this->merge->Location = System::Drawing::Point(97, 12);
			this->merge->Name = L"merge";
			this->merge->Size = System::Drawing::Size(75, 23);
			this->merge->TabIndex = 4;
			this->merge->Text = L"Merge Sort";
			this->merge->UseVisualStyleBackColor = true;
			this->merge->Visible = false;
			this->merge->Click += gcnew System::EventHandler(this, &MyForm::merge_Click);
			// 
			// heapOutput3
			// 
			this->heapOutput3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->heapOutput3->AutoSize = true;
			this->heapOutput3->BackColor = System::Drawing::Color::Transparent;
			this->heapOutput3->Location = System::Drawing::Point(643, 0);
			this->heapOutput3->Name = L"heapOutput3";
			this->heapOutput3->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutput3->Size = System::Drawing::Size(91, 63);
			this->heapOutput3->TabIndex = 3;
			this->heapOutput3->Text = L"............................";
			this->heapOutput3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->heapOutput3->Visible = false;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->heapOutput0);
			this->panel1->Controls->Add(this->heapOutput1);
			this->panel1->Controls->Add(this->heapOutput3);
			this->panel1->Controls->Add(this->heapOutput2);
			this->panel1->Controls->Add(this->heapSortOutput);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(26, 90);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 10);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// heapOutput0
			// 
			this->heapOutput0->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutput0->AutoSize = true;
			this->heapOutput0->BackColor = System::Drawing::Color::Transparent;
			this->heapOutput0->Location = System::Drawing::Point(271, 0);
			this->heapOutput0->Name = L"heapOutput0";
			this->heapOutput0->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutput0->Size = System::Drawing::Size(61, 63);
			this->heapOutput0->TabIndex = 5;
			this->heapOutput0->Text = L"..................";
			this->heapOutput0->Visible = false;
			// 
			// heapOutput1
			// 
			this->heapOutput1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutput1->AutoSize = true;
			this->heapOutput1->BackColor = System::Drawing::Color::Transparent;
			this->heapOutput1->Location = System::Drawing::Point(351, 0);
			this->heapOutput1->Name = L"heapOutput1";
			this->heapOutput1->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutput1->Size = System::Drawing::Size(97, 63);
			this->heapOutput1->TabIndex = 4;
			this->heapOutput1->Text = L"..............................";
			this->heapOutput1->Visible = false;
			// 
			// heapOutput2
			// 
			this->heapOutput2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutput2->AutoSize = true;
			this->heapOutput2->BackColor = System::Drawing::Color::Transparent;
			this->heapOutput2->Location = System::Drawing::Point(481, 0);
			this->heapOutput2->Name = L"heapOutput2";
			this->heapOutput2->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutput2->Size = System::Drawing::Size(97, 63);
			this->heapOutput2->TabIndex = 2;
			this->heapOutput2->Text = L"..............................";
			this->heapOutput2->Visible = false;
			// 
			// heapSortOutput
			// 
			this->heapSortOutput->AutoSize = true;
			this->heapSortOutput->BackColor = System::Drawing::Color::Transparent;
			this->heapSortOutput->Dock = System::Windows::Forms::DockStyle::Top;
			this->heapSortOutput->Location = System::Drawing::Point(0, 0);
			this->heapSortOutput->Name = L"heapSortOutput";
			this->heapSortOutput->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapSortOutput->Size = System::Drawing::Size(96, 63);
			this->heapSortOutput->TabIndex = 1;
			this->heapSortOutput->Text = L"(Choose an option)";
			this->heapSortOutput->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 49);
			this->label2->MaximumSize = System::Drawing::Size(230, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(509, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 21);
			this->button2->TabIndex = 0;
			this->button2->Text = L"▼";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"NSimSun", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Duos";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->heapD);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->mergeD);
			this->panel2->Location = System::Drawing::Point(26, 140);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(558, 49);
			this->panel2->TabIndex = 7;
			// 
			// heapD
			// 
			this->heapD->Location = System::Drawing::Point(197, 12);
			this->heapD->Name = L"heapD";
			this->heapD->Size = System::Drawing::Size(75, 23);
			this->heapD->TabIndex = 10;
			this->heapD->Text = L"Heap Sort";
			this->heapD->UseVisualStyleBackColor = true;
			this->heapD->Visible = false;
			this->heapD->Click += gcnew System::EventHandler(this, &MyForm::heapD_Click);
			// 
			// mergeD
			// 
			this->mergeD->Location = System::Drawing::Point(97, 12);
			this->mergeD->Name = L"mergeD";
			this->mergeD->Size = System::Drawing::Size(75, 23);
			this->mergeD->TabIndex = 9;
			this->mergeD->Text = L"Merge Sort";
			this->mergeD->UseVisualStyleBackColor = true;
			this->mergeD->Visible = false;
			this->mergeD->Click += gcnew System::EventHandler(this, &MyForm::mergeD_Click);
			// 
			// heapOutputD1
			// 
			this->heapOutputD1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputD1->AutoSize = true;
			this->heapOutputD1->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputD1->Location = System::Drawing::Point(342, 0);
			this->heapOutputD1->Name = L"heapOutputD1";
			this->heapOutputD1->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputD1->Size = System::Drawing::Size(97, 63);
			this->heapOutputD1->TabIndex = 4;
			this->heapOutputD1->Text = L"..............................";
			this->heapOutputD1->Visible = false;
			// 
			// heapOutputD3
			// 
			this->heapOutputD3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->heapOutputD3->AutoSize = true;
			this->heapOutputD3->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputD3->Location = System::Drawing::Point(626, 0);
			this->heapOutputD3->Name = L"heapOutputD3";
			this->heapOutputD3->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputD3->Size = System::Drawing::Size(91, 63);
			this->heapOutputD3->TabIndex = 3;
			this->heapOutputD3->Text = L"............................";
			this->heapOutputD3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->heapOutputD3->Visible = false;
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->heapOutputD0);
			this->panel3->Controls->Add(this->heapOutputD1);
			this->panel3->Controls->Add(this->heapOutputD3);
			this->panel3->Controls->Add(this->heapOutputD2);
			this->panel3->Controls->Add(this->heapSortOutD);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(26, 184);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(800, 10);
			this->panel3->TabIndex = 8;
			this->panel3->Visible = false;
			// 
			// heapOutputD0
			// 
			this->heapOutputD0->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputD0->AutoSize = true;
			this->heapOutputD0->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputD0->Location = System::Drawing::Point(253, 0);
			this->heapOutputD0->Name = L"heapOutputD0";
			this->heapOutputD0->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputD0->Size = System::Drawing::Size(61, 63);
			this->heapOutputD0->TabIndex = 5;
			this->heapOutputD0->Text = L"..................";
			this->heapOutputD0->Visible = false;
			// 
			// heapOutputD2
			// 
			this->heapOutputD2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputD2->AutoSize = true;
			this->heapOutputD2->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputD2->Location = System::Drawing::Point(472, 0);
			this->heapOutputD2->Name = L"heapOutputD2";
			this->heapOutputD2->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputD2->Size = System::Drawing::Size(97, 63);
			this->heapOutputD2->TabIndex = 2;
			this->heapOutputD2->Text = L"..............................";
			this->heapOutputD2->Visible = false;
			// 
			// heapSortOutD
			// 
			this->heapSortOutD->AutoSize = true;
			this->heapSortOutD->BackColor = System::Drawing::Color::Transparent;
			this->heapSortOutD->Dock = System::Windows::Forms::DockStyle::Top;
			this->heapSortOutD->Location = System::Drawing::Point(0, 0);
			this->heapSortOutD->Name = L"heapSortOutD";
			this->heapSortOutD->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapSortOutD->Size = System::Drawing::Size(96, 63);
			this->heapSortOutD->TabIndex = 1;
			this->heapSortOutD->Text = L"(Choose an option)";
			this->heapSortOutD->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Agency FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 49);
			this->label9->MaximumSize = System::Drawing::Size(230, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->heapOutputT0);
			this->panel4->Controls->Add(this->heapOutputT1);
			this->panel4->Controls->Add(this->heapOutputT3);
			this->panel4->Controls->Add(this->heapOutputT2);
			this->panel4->Controls->Add(this->heapSortOutT);
			this->panel4->Location = System::Drawing::Point(26, 268);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(800, 10);
			this->panel4->TabIndex = 11;
			this->panel4->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Agency FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 49);
			this->label10->MaximumSize = System::Drawing::Size(230, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 0;
			// 
			// heapOutputT0
			// 
			this->heapOutputT0->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputT0->AutoSize = true;
			this->heapOutputT0->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputT0->Location = System::Drawing::Point(253, 0);
			this->heapOutputT0->Name = L"heapOutputT0";
			this->heapOutputT0->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputT0->Size = System::Drawing::Size(61, 63);
			this->heapOutputT0->TabIndex = 5;
			this->heapOutputT0->Text = L"..................";
			this->heapOutputT0->Visible = false;
			// 
			// heapOutputT1
			// 
			this->heapOutputT1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputT1->AutoSize = true;
			this->heapOutputT1->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputT1->Location = System::Drawing::Point(342, 0);
			this->heapOutputT1->Name = L"heapOutputT1";
			this->heapOutputT1->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputT1->Size = System::Drawing::Size(97, 63);
			this->heapOutputT1->TabIndex = 4;
			this->heapOutputT1->Text = L"..............................";
			this->heapOutputT1->Visible = false;
			// 
			// heapOutputT3
			// 
			this->heapOutputT3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->heapOutputT3->AutoSize = true;
			this->heapOutputT3->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputT3->Location = System::Drawing::Point(626, 0);
			this->heapOutputT3->Name = L"heapOutputT3";
			this->heapOutputT3->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputT3->Size = System::Drawing::Size(91, 63);
			this->heapOutputT3->TabIndex = 3;
			this->heapOutputT3->Text = L"............................";
			this->heapOutputT3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->heapOutputT3->Visible = false;
			// 
			// heapOutputT2
			// 
			this->heapOutputT2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputT2->AutoSize = true;
			this->heapOutputT2->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputT2->Location = System::Drawing::Point(472, 0);
			this->heapOutputT2->Name = L"heapOutputT2";
			this->heapOutputT2->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputT2->Size = System::Drawing::Size(97, 63);
			this->heapOutputT2->TabIndex = 2;
			this->heapOutputT2->Text = L"..............................";
			this->heapOutputT2->Visible = false;
			// 
			// heapSortOutT
			// 
			this->heapSortOutT->AutoSize = true;
			this->heapSortOutT->BackColor = System::Drawing::Color::Transparent;
			this->heapSortOutT->Dock = System::Windows::Forms::DockStyle::Top;
			this->heapSortOutT->Location = System::Drawing::Point(0, 0);
			this->heapSortOutT->Name = L"heapSortOutT";
			this->heapSortOutT->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapSortOutT->Size = System::Drawing::Size(96, 63);
			this->heapSortOutT->TabIndex = 1;
			this->heapSortOutT->Text = L"(Choose an option)";
			this->heapSortOutT->Visible = false;
			// 
			// heapT
			// 
			this->heapT->Location = System::Drawing::Point(197, 7);
			this->heapT->Name = L"heapT";
			this->heapT->Size = System::Drawing::Size(75, 23);
			this->heapT->TabIndex = 10;
			this->heapT->Text = L"Heap Sort";
			this->heapT->UseVisualStyleBackColor = true;
			this->heapT->Visible = false;
			this->heapT->Click += gcnew System::EventHandler(this, &MyForm::heapT_Click);
			// 
			// mergeT
			// 
			this->mergeT->Location = System::Drawing::Point(97, 7);
			this->mergeT->Name = L"mergeT";
			this->mergeT->Size = System::Drawing::Size(75, 23);
			this->mergeT->TabIndex = 9;
			this->mergeT->Text = L"Merge Sort";
			this->mergeT->UseVisualStyleBackColor = true;
			this->mergeT->Visible = false;
			this->mergeT->Click += gcnew System::EventHandler(this, &MyForm::mergeT_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->heapT);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->mergeT);
			this->panel5->Location = System::Drawing::Point(26, 224);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(558, 49);
			this->panel5->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label11->Font = (gcnew System::Drawing::Font(L"NSimSun", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(7, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 21);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Trios";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(509, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 21);
			this->button5->TabIndex = 0;
			this->button5->Text = L"▼";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->heapS);
			this->panel6->Controls->Add(this->mergeS);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Location = System::Drawing::Point(26, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(558, 49);
			this->panel6->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"NSimSun", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Squads";
			// 
			// heapS
			// 
			this->heapS->Location = System::Drawing::Point(197, 12);
			this->heapS->Name = L"heapS";
			this->heapS->Size = System::Drawing::Size(75, 23);
			this->heapS->TabIndex = 10;
			this->heapS->Text = L"Heap Sort";
			this->heapS->UseVisualStyleBackColor = true;
			this->heapS->Visible = false;
			this->heapS->Click += gcnew System::EventHandler(this, &MyForm::heapS_Click);
			// 
			// mergeS
			// 
			this->mergeS->Location = System::Drawing::Point(102, 12);
			this->mergeS->Name = L"mergeS";
			this->mergeS->Size = System::Drawing::Size(75, 23);
			this->mergeS->TabIndex = 9;
			this->mergeS->Text = L"Merge Sort";
			this->mergeS->UseVisualStyleBackColor = true;
			this->mergeS->Visible = false;
			this->mergeS->Click += gcnew System::EventHandler(this, &MyForm::mergeS_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(509, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 21);
			this->button3->TabIndex = 0;
			this->button3->Text = L"▼";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// heapOutputS1
			// 
			this->heapOutputS1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputS1->AutoSize = true;
			this->heapOutputS1->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputS1->Location = System::Drawing::Point(342, 0);
			this->heapOutputS1->Name = L"heapOutputS1";
			this->heapOutputS1->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputS1->Size = System::Drawing::Size(97, 63);
			this->heapOutputS1->TabIndex = 4;
			this->heapOutputS1->Text = L"..............................";
			this->heapOutputS1->Visible = false;
			// 
			// heapOutputS3
			// 
			this->heapOutputS3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->heapOutputS3->AutoSize = true;
			this->heapOutputS3->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputS3->Location = System::Drawing::Point(626, 0);
			this->heapOutputS3->Name = L"heapOutputS3";
			this->heapOutputS3->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputS3->Size = System::Drawing::Size(91, 63);
			this->heapOutputS3->TabIndex = 3;
			this->heapOutputS3->Text = L"............................";
			this->heapOutputS3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->heapOutputS3->Visible = false;
			// 
			// heapOutputS2
			// 
			this->heapOutputS2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputS2->AutoSize = true;
			this->heapOutputS2->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputS2->Location = System::Drawing::Point(472, 0);
			this->heapOutputS2->Name = L"heapOutputS2";
			this->heapOutputS2->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputS2->Size = System::Drawing::Size(97, 63);
			this->heapOutputS2->TabIndex = 2;
			this->heapOutputS2->Text = L"..............................";
			this->heapOutputS2->Visible = false;
			// 
			// panel7
			// 
			this->panel7->AutoScroll = true;
			this->panel7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->heapOutputS0);
			this->panel7->Controls->Add(this->heapOutputS1);
			this->panel7->Controls->Add(this->heapOutputS3);
			this->panel7->Controls->Add(this->heapOutputS2);
			this->panel7->Controls->Add(this->heapSortOutS);
			this->panel7->Location = System::Drawing::Point(26, 352);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(800, 10);
			this->panel7->TabIndex = 13;
			this->panel7->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Agency FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 49);
			this->label13->MaximumSize = System::Drawing::Size(230, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 17);
			this->label13->TabIndex = 0;
			// 
			// heapOutputS0
			// 
			this->heapOutputS0->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->heapOutputS0->AutoSize = true;
			this->heapOutputS0->BackColor = System::Drawing::Color::Transparent;
			this->heapOutputS0->Location = System::Drawing::Point(253, 0);
			this->heapOutputS0->Name = L"heapOutputS0";
			this->heapOutputS0->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapOutputS0->Size = System::Drawing::Size(61, 63);
			this->heapOutputS0->TabIndex = 5;
			this->heapOutputS0->Text = L"..................";
			this->heapOutputS0->Visible = false;
			// 
			// heapSortOutS
			// 
			this->heapSortOutS->AutoSize = true;
			this->heapSortOutS->BackColor = System::Drawing::Color::Transparent;
			this->heapSortOutS->Dock = System::Windows::Forms::DockStyle::Top;
			this->heapSortOutS->Location = System::Drawing::Point(0, 0);
			this->heapSortOutS->Name = L"heapSortOutS";
			this->heapSortOutS->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->heapSortOutS->Size = System::Drawing::Size(96, 63);
			this->heapSortOutS->TabIndex = 1;
			this->heapSortOutS->Text = L"(Choose an option)";
			this->heapSortOutS->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(931, 399);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SolosLabelPanel);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Name = L"MyForm";
			this->Text = L"    ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SolosLabelPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel1->Visible) {
			panel1->Visible = false;
			merge->Visible = false;
			quick->Visible = false;
			heapSortOutput->Visible = false;
			heapOutput0->Visible = false;
			heapOutput1->Visible = false;
			heapOutput2->Visible = false;
			heapOutput3->Visible = false;
			panel1->Height = 5;
			button1->Text = L"▼";
		}
		else {
			panel1->Visible = true;
			merge->Visible = true;
			quick->Visible = true;
			heapSortOutput->Visible = true;
			heapOutput0->Visible = true;
			heapOutput1->Visible = true;
			heapOutput2->Visible = true;
			heapOutput3->Visible = true;
			panel1->Height = 282;
			button1->Text = L"▲";
		}
	}
	private: System::Void merge_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player1> soloPlayas = loadPlayersFromCSV1("Fortnite_players_stats.csv", 1);
		mergeSort(soloPlayas, 0, soloPlayas.size() - 1, comparePlayers);

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : soloPlayas) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append("Player ID: ");
			out.append(to_string(player.player_id));
			out.append("\n");
			out0.append("- Matches: ");
			out0.append(to_string(player.matches_played));
			out0.append("\n");
			out1.append(" - Win Ratio: ");
			out1.append(to_string(player.win_ratio));
			out1.append("\n");
			out2.append(" - Minutes: ");
			out2.append(to_string(player.minutes_played));
			out2.append("\n");
			out3.append(" - Total Score: ");
			out3.append(to_string(player.total_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutput->Text = gcnew String(out.c_str());
		heapOutput0->Text = gcnew String(out0.c_str());
		heapOutput1->Text = gcnew String(out1.c_str());
		heapOutput2->Text = gcnew String(out2.c_str());
		heapOutput3->Text = gcnew String(out3.c_str());
	}
	private: System::Void quick_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player> soloPlayers = loadPlayersFromCSV("Fortnite_players_stats.csv", 1);
		calculateCompositeScores(soloPlayers);
		heapSort(soloPlayers, compareCompositeScore);

		//heapSortOutput->Text = Convert::ToString(soloPlayers.size());

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : soloPlayers) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append(player.name);
			out.append("\n");
			out0.append("- Wins: ");
			out0.append(to_string(player.top1));
			out0.append("\n");
			out1.append(" - Eliminations: ");
			out1.append(to_string(player.eliminations));
			out1.append("\n");
			out2.append(" - Kill/Death Ratio: ");
			out2.append(to_string(player.kill_death_ratio));
			out2.append("\n");
			out3.append(" - Composite Score: ");
			out3.append(to_string(player.composite_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutput->Text = gcnew String(out.c_str()); 
		heapOutput0->Text = gcnew String(out0.c_str());
		heapOutput1->Text = gcnew String(out1.c_str());
		heapOutput2->Text = gcnew String(out2.c_str());
		heapOutput3->Text = gcnew String(out3.c_str());
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel3->Visible) {
			panel3->Visible = false;
			mergeD->Visible = false;
			heapD->Visible = false;
			heapSortOutD->Visible = false;
			heapOutputD0->Visible = false;
			heapOutputD1->Visible = false;
			heapOutputD2->Visible = false;
			heapOutputD3->Visible = false;
			panel3->Height = 5;
			button2->Text = L"▼";
		}
		else {
			panel3->Visible = true;
			mergeD->Visible = true;
			heapD->Visible = true;
			heapSortOutD->Visible = true;
			heapOutputD0->Visible = true;
			heapOutputD1->Visible = true;
			heapOutputD2->Visible = true;
			heapOutputD3->Visible = true;
			panel3->Height = 282;
			button2->Text = L"▲";
		}
	}
	private: System::Void heapD_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player> duoPlayers = loadPlayersFromCSV("Fortnite_players_stats.csv", 2);
		calculateCompositeScores(duoPlayers);
		heapSort(duoPlayers, compareCompositeScore);

		//heapSortOutput->Text = Convert::ToString(soloPlayers.size());

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : duoPlayers) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append(player.name);
			out.append("\n");
			out0.append("- Wins: ");
			out0.append(to_string(player.top1));
			out0.append("\n");
			out1.append(" - Eliminations: ");
			out1.append(to_string(player.eliminations));
			out1.append("\n");
			out2.append(" - Kill/Death Ratio: ");
			out2.append(to_string(player.kill_death_ratio));
			out2.append("\n");
			out3.append(" - Composite Score: ");
			out3.append(to_string(player.composite_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutD->Text = gcnew String(out.c_str());
		heapOutputD0->Text = gcnew String(out0.c_str());
		heapOutputD1->Text = gcnew String(out1.c_str());
		heapOutputD2->Text = gcnew String(out2.c_str());
		heapOutputD3->Text = gcnew String(out3.c_str());
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel4->Visible) {
			panel4->Visible = false;
			mergeT->Visible = false;
			heapT->Visible = false;
			heapSortOutT->Visible = false;
			heapOutputT0->Visible = false;
			heapOutputT1->Visible = false;
			heapOutputT2->Visible = false;
			heapOutputT3->Visible = false;
			panel4->Height = 5;
			button5->Text = L"▼";
		}
		else {
			panel4->Visible = true;
			mergeT->Visible = true;
			heapT->Visible = true;
			heapSortOutT->Visible = true;
			heapOutputT0->Visible = true;
			heapOutputT1->Visible = true;
			heapOutputT2->Visible = true;
			heapOutputT3->Visible = true;
			panel4->Height = 282;
			button5->Text = L"▲";
		}
	}
	private: System::Void heapT_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player> trioPlayers = loadPlayersFromCSV("Fortnite_players_stats.csv", 3);
		calculateCompositeScores(trioPlayers);
		heapSort(trioPlayers, compareCompositeScore);

		//heapSortOutput->Text = Convert::ToString(soloPlayers.size());

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : trioPlayers) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append(player.name);
			out.append("\n");
			out0.append("- Wins: ");
			out0.append(to_string(player.top1));
			out0.append("\n");
			out1.append(" - Eliminations: ");
			out1.append(to_string(player.eliminations));
			out1.append("\n");
			out2.append(" - Kill/Death Ratio: ");
			out2.append(to_string(player.kill_death_ratio));
			out2.append("\n");
			out3.append(" - Composite Score: ");
			out3.append(to_string(player.composite_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutT->Text = gcnew String(out.c_str());
		heapOutputT0->Text = gcnew String(out0.c_str());
		heapOutputT1->Text = gcnew String(out1.c_str());
		heapOutputT2->Text = gcnew String(out2.c_str());
		heapOutputT3->Text = gcnew String(out3.c_str());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel7->Visible) {
			panel7->Visible = false;
			mergeS->Visible = false;
			heapS->Visible = false;
			heapSortOutS->Visible = false;
			heapOutputS0->Visible = false;
			heapOutputS1->Visible = false;
			heapOutputS2->Visible = false;
			heapOutputS3->Visible = false;
			panel7->Height = 5;
			button3->Text = L"▼";
		}
		else {
			panel7->Visible = true;
			mergeS->Visible = true;
			heapS->Visible = true;
			heapSortOutS->Visible = true;
			heapOutputS0->Visible = true;
			heapOutputS1->Visible = true;
			heapOutputS2->Visible = true;
			heapOutputS3->Visible = true;
			panel7->Height = 282;
			button3->Text = L"▲";
		}
	}
	private: System::Void heapS_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player> squadPlayers = loadPlayersFromCSV("Fortnite_players_stats.csv", 4);
		calculateCompositeScores(squadPlayers);
		heapSort(squadPlayers, compareCompositeScore);

		//heapSortOutput->Text = Convert::ToString(soloPlayers.size());

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : squadPlayers) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append(player.name);
			out.append("\n");
			out0.append("- Wins: ");
			out0.append(to_string(player.top1));
			out0.append("\n");
			out1.append(" - Eliminations: ");
			out1.append(to_string(player.eliminations));
			out1.append("\n");
			out2.append(" - Kill/Death Ratio: ");
			out2.append(to_string(player.kill_death_ratio));
			out2.append("\n");
			out3.append(" - Composite Score: ");
			out3.append(to_string(player.composite_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutS->Text = gcnew String(out.c_str());
		heapOutputS0->Text = gcnew String(out0.c_str());
		heapOutputS1->Text = gcnew String(out1.c_str());
		heapOutputS2->Text = gcnew String(out2.c_str());
		heapOutputS3->Text = gcnew String(out3.c_str());
	}
	private: System::Void mergeD_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player1> duoPlayas = loadPlayersFromCSV1("Fortnite_players_stats.csv", 2);
		mergeSort(duoPlayas, 0, duoPlayas.size() - 1, comparePlayers);

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : duoPlayas) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append("Player ID: ");
			out.append(to_string(player.player_id));
			out.append("\n");
			out0.append("- Matches: ");
			out0.append(to_string(player.matches_played));
			out0.append("\n");
			out1.append(" - Win Ratio: ");
			out1.append(to_string(player.win_ratio));
			out1.append("\n");
			out2.append(" - Minutes: ");
			out2.append(to_string(player.minutes_played));
			out2.append("\n");
			out3.append(" - Total Score: ");
			out3.append(to_string(player.total_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutD->Text = gcnew String(out.c_str());
		heapOutputD0->Text = gcnew String(out0.c_str());
		heapOutputD1->Text = gcnew String(out1.c_str());
		heapOutputD2->Text = gcnew String(out2.c_str());
		heapOutputD3->Text = gcnew String(out3.c_str());
	}
	private: System::Void mergeT_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player1> trioPlayas = loadPlayersFromCSV1("Fortnite_players_stats.csv", 3);
		mergeSort(trioPlayas, 0, trioPlayas.size() - 1, comparePlayers);

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : trioPlayas) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append("Player ID: ");
			out.append(to_string(player.player_id));
			out.append("\n");
			out0.append("- Matches: ");
			out0.append(to_string(player.matches_played));
			out0.append("\n");
			out1.append(" - Win Ratio: ");
			out1.append(to_string(player.win_ratio));
			out1.append("\n");
			out2.append(" - Minutes: ");
			out2.append(to_string(player.minutes_played));
			out2.append("\n");
			out3.append(" - Total Score: ");
			out3.append(to_string(player.total_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutT->Text = gcnew String(out.c_str());
		heapOutputT0->Text = gcnew String(out0.c_str());
		heapOutputT1->Text = gcnew String(out1.c_str());
		heapOutputT2->Text = gcnew String(out2.c_str());
		heapOutputT3->Text = gcnew String(out3.c_str());
	}
	private: System::Void mergeS_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Player1> squadPlayas = loadPlayersFromCSV1("Fortnite_players_stats.csv", 4);
		mergeSort(squadPlayas, 0, squadPlayas.size() - 1, comparePlayers);

		string out0 = "";
		string out = "";
		string out1 = "";
		string out2 = "";
		string out3 = "";
		for (const auto& player : squadPlayas) {
			//Console::WriteLine(gcnew String(player.name.c_str()));
			//out.append("boobs\n");
			out.append("Player ID: ");
			out.append(to_string(player.player_id));
			out.append("\n");
			out0.append("- Matches: ");
			out0.append(to_string(player.matches_played));
			out0.append("\n");
			out1.append(" - Win Ratio: ");
			out1.append(to_string(player.win_ratio));
			out1.append("\n");
			out2.append(" - Minutes: ");
			out2.append(to_string(player.minutes_played));
			out2.append("\n");
			out3.append(" - Total Score: ");
			out3.append(to_string(player.total_score));
			out3.append("\n");
		}
		//label2->Text = L"successful";
		heapSortOutS->Text = gcnew String(out.c_str());
		heapOutputS0->Text = gcnew String(out0.c_str());
		heapOutputS1->Text = gcnew String(out1.c_str());
		heapOutputS2->Text = gcnew String(out2.c_str());
		heapOutputS3->Text = gcnew String(out3.c_str());
	}
};
}
