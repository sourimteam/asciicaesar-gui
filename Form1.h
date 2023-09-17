#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace asciicaesar_gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ buttonInput;
	private: System::Windows::Forms::TextBox^ inputFile;

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonOutput;
	private: System::Windows::Forms::TextBox^ outputFile;
	private: System::Windows::Forms::NumericUpDown^ deviation;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonConvert;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::CheckBox^ dontIgnoreNewline;
	private: System::Windows::Forms::CheckBox^ checkDecrypt;












	private: System::ComponentModel::IContainer^ components;



	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->buttonInput = (gcnew System::Windows::Forms::Button());
			this->inputFile = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonOutput = (gcnew System::Windows::Forms::Button());
			this->outputFile = (gcnew System::Windows::Forms::TextBox());
			this->deviation = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonConvert = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dontIgnoreNewline = (gcnew System::Windows::Forms::CheckBox());
			this->checkDecrypt = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deviation))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonInput
			// 
			this->buttonInput->Location = System::Drawing::Point(557, 12);
			this->buttonInput->Name = L"buttonInput";
			this->buttonInput->Size = System::Drawing::Size(75, 23);
			this->buttonInput->TabIndex = 0;
			this->buttonInput->Text = L"Open";
			this->buttonInput->UseVisualStyleBackColor = true;
			this->buttonInput->Click += gcnew System::EventHandler(this, &Form1::buttonInput_Click);
			// 
			// inputFile
			// 
			this->inputFile->Enabled = false;
			this->inputFile->Location = System::Drawing::Point(77, 14);
			this->inputFile->Name = L"inputFile";
			this->inputFile->Size = System::Drawing::Size(474, 20);
			this->inputFile->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Input file:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Output file:";
			// 
			// buttonOutput
			// 
			this->buttonOutput->Location = System::Drawing::Point(557, 54);
			this->buttonOutput->Name = L"buttonOutput";
			this->buttonOutput->Size = System::Drawing::Size(75, 23);
			this->buttonOutput->TabIndex = 4;
			this->buttonOutput->Text = L"Save";
			this->buttonOutput->UseVisualStyleBackColor = true;
			this->buttonOutput->Click += gcnew System::EventHandler(this, &Form1::buttonOutput_Click);
			// 
			// outputFile
			// 
			this->outputFile->Enabled = false;
			this->outputFile->Location = System::Drawing::Point(77, 56);
			this->outputFile->Name = L"outputFile";
			this->outputFile->Size = System::Drawing::Size(474, 20);
			this->outputFile->TabIndex = 5;
			// 
			// deviation
			// 
			this->deviation->Location = System::Drawing::Point(77, 91);
			this->deviation->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->deviation->Name = L"deviation";
			this->deviation->Size = System::Drawing::Size(74, 20);
			this->deviation->TabIndex = 6;
			this->deviation->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Deviation:";
			// 
			// buttonConvert
			// 
			this->buttonConvert->Location = System::Drawing::Point(557, 91);
			this->buttonConvert->Name = L"buttonConvert";
			this->buttonConvert->Size = System::Drawing::Size(75, 23);
			this->buttonConvert->TabIndex = 8;
			this->buttonConvert->Text = L"Convert";
			this->buttonConvert->UseVisualStyleBackColor = true;
			this->buttonConvert->Click += gcnew System::EventHandler(this, &Form1::buttonConvert_Click);
			// 
			// dontIgnoreNewline
			// 
			this->dontIgnoreNewline->AutoSize = true;
			this->dontIgnoreNewline->Location = System::Drawing::Point(166, 93);
			this->dontIgnoreNewline->Name = L"dontIgnoreNewline";
			this->dontIgnoreNewline->Size = System::Drawing::Size(122, 17);
			this->dontIgnoreNewline->TabIndex = 10;
			this->dontIgnoreNewline->Text = L"Don\'t ignore newline";
			this->dontIgnoreNewline->UseVisualStyleBackColor = true;
			// 
			// checkDecrypt
			// 
			this->checkDecrypt->AutoSize = true;
			this->checkDecrypt->Location = System::Drawing::Point(488, 94);
			this->checkDecrypt->Name = L"checkDecrypt";
			this->checkDecrypt->Size = System::Drawing::Size(63, 17);
			this->checkDecrypt->TabIndex = 11;
			this->checkDecrypt->Text = L"Decrypt";
			this->checkDecrypt->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 120);
			this->Controls->Add(this->checkDecrypt);
			this->Controls->Add(this->dontIgnoreNewline);
			this->Controls->Add(this->buttonConvert);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->deviation);
			this->Controls->Add(this->outputFile);
			this->Controls->Add(this->buttonOutput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inputFile);
			this->Controls->Add(this->buttonInput);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"asciicaesar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deviation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonInput_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->inputFile->Text = this->openFileDialog1->FileName;
		}
	}
	private: System::Void buttonOutput_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->outputFile->Text = this->saveFileDialog1->FileName;
		}
	}
	private: System::Void buttonConvert_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream input(msclr::interop::marshal_as<std::string>(this->inputFile->Text));
		std::ofstream output(msclr::interop::marshal_as<std::string>(this->outputFile->Text));
		if (!input.is_open()) {
			MessageBox::Show("Error open input file");
			return;
		}
		if (!output.is_open()) {
			MessageBox::Show("Error open output file");
			return;
		}
		char ch;
		while (input >> std::noskipws >> ch) {
			if (!this->dontIgnoreNewline->Checked && ch == '\n') {
				output << ch;
				continue;
			}
			if (this->checkDecrypt->Checked)
				output << (char)(ch - (int)this->deviation->Value);
			else
				output << (char)(ch + (int)this->deviation->Value);
		}
		MessageBox::Show("Done!");
	}
};
}
