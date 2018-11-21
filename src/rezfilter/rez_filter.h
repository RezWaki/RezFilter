#pragma once
#include "filters.h"

namespace rezfilter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ rez__filter
	/// </summary>
	public ref class rez__filter : public System::Windows::Forms::Form
	{
	public:
		rez__filter(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~rez__filter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current image:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(370, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Browse...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &rez__filter::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(414, 210);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Filter:";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"High Contrast", L"High Colorize", L"Redish", 
				L"Greenish", L"Bluish", L"Color balance"});
			this->comboBox1->Location = System::Drawing::Point(50, 260);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(131, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"Pick a filter...";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(187, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Tolerance:";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->Location = System::Drawing::Point(251, 260);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"30";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Location = System::Drawing::Point(371, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 22);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &rez__filter::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox3->Location = System::Drawing::Point(97, 286);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"0";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Red:";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->Location = System::Drawing::Point(200, 286);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"0";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(164, 289);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Green:";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox5->Location = System::Drawing::Point(308, 286);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(62, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"0";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(272, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Blue:";
			// 
			// rez__filter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 313);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"rez__filter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RezFilter >> NoImage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1->ShowDialog();
				 textBox1->Text = openFileDialog1->FileName;
				 Text = "RezFilter >> "+textBox1->Text;
				 pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 switch(comboBox1->SelectedIndex){
				case 0:
					pictureBox1->Image = Image::FromHbitmap(HighContrast(Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
				case 1:
					pictureBox1->Image = Image::FromHbitmap(HighColorize(Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
				case 2:
					pictureBox1->Image = Image::FromHbitmap(Redish(Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
				case 3:
					pictureBox1->Image = Image::FromHbitmap(Greenish(Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
				case 4:
					pictureBox1->Image = Image::FromHbitmap(Bluish(Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
				case 5:
					pictureBox1->Image = Image::FromHbitmap(ColorBalance(Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox2->Text), (Bitmap^)pictureBox1->Image));
				break;
			 }
		 }
};
}
