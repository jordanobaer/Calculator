#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  result_lbl;
	protected:
	private: System::Windows::Forms::TextBox^  n1_txtbox;
	private: System::Windows::Forms::TextBox^  n2_txtbox;
	private: System::Windows::Forms::Button^  calculate_btn;
	private: System::Windows::Forms::RadioButton^  sum_radio;
	private: System::Windows::Forms::RadioButton^  sub_radio;
	private: System::Windows::Forms::RadioButton^  mult_radio;
	private: System::Windows::Forms::RadioButton^  div_radio;
	private: System::Windows::Forms::RadioButton^  avg_radio;
	private: System::Windows::Forms::RadioButton^  max_radio;

	private: System::Windows::Forms::CheckBox^  checkbox;

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
			this->result_lbl = (gcnew System::Windows::Forms::Label());
			this->n1_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->n2_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->calculate_btn = (gcnew System::Windows::Forms::Button());
			this->sum_radio = (gcnew System::Windows::Forms::RadioButton());
			this->sub_radio = (gcnew System::Windows::Forms::RadioButton());
			this->mult_radio = (gcnew System::Windows::Forms::RadioButton());
			this->div_radio = (gcnew System::Windows::Forms::RadioButton());
			this->avg_radio = (gcnew System::Windows::Forms::RadioButton());
			this->max_radio = (gcnew System::Windows::Forms::RadioButton());
			this->checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// result_lbl
			// 
			this->result_lbl->AutoSize = true;
			this->result_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_lbl->ForeColor = System::Drawing::SystemColors::Highlight;
			this->result_lbl->Location = System::Drawing::Point(33, 219);
			this->result_lbl->Name = L"result_lbl";
			this->result_lbl->Size = System::Drawing::Size(40, 22);
			this->result_lbl->TabIndex = 0;
			this->result_lbl->Text = L"-----";
			// 
			// n1_txtbox
			// 
			this->n1_txtbox->Location = System::Drawing::Point(37, 67);
			this->n1_txtbox->Name = L"n1_txtbox";
			this->n1_txtbox->Size = System::Drawing::Size(100, 20);
			this->n1_txtbox->TabIndex = 1;
			this->n1_txtbox->TextChanged += gcnew System::EventHandler(this, &MyForm::n1_txtbox_TextChanged);
			// 
			// n2_txtbox
			// 
			this->n2_txtbox->Location = System::Drawing::Point(37, 93);
			this->n2_txtbox->Name = L"n2_txtbox";
			this->n2_txtbox->Size = System::Drawing::Size(100, 20);
			this->n2_txtbox->TabIndex = 2;
			// 
			// calculate_btn
			// 
			this->calculate_btn->Location = System::Drawing::Point(257, 79);
			this->calculate_btn->Name = L"calculate_btn";
			this->calculate_btn->Size = System::Drawing::Size(75, 23);
			this->calculate_btn->TabIndex = 3;
			this->calculate_btn->Text = L"Calculate";
			this->calculate_btn->UseVisualStyleBackColor = true;
			this->calculate_btn->Click += gcnew System::EventHandler(this, &MyForm::calculate_btn_Click);
			// 
			// sum_radio
			// 
			this->sum_radio->AutoSize = true;
			this->sum_radio->Location = System::Drawing::Point(37, 29);
			this->sum_radio->Name = L"sum_radio";
			this->sum_radio->Size = System::Drawing::Size(31, 17);
			this->sum_radio->TabIndex = 10;
			this->sum_radio->TabStop = true;
			this->sum_radio->Text = L"+";
			this->sum_radio->UseVisualStyleBackColor = true;
			// 
			// sub_radio
			// 
			this->sub_radio->AutoSize = true;
			this->sub_radio->Location = System::Drawing::Point(74, 29);
			this->sub_radio->Name = L"sub_radio";
			this->sub_radio->Size = System::Drawing::Size(28, 17);
			this->sub_radio->TabIndex = 11;
			this->sub_radio->TabStop = true;
			this->sub_radio->Text = L"-";
			this->sub_radio->UseVisualStyleBackColor = true;
			// 
			// mult_radio
			// 
			this->mult_radio->AutoSize = true;
			this->mult_radio->Location = System::Drawing::Point(117, 29);
			this->mult_radio->Name = L"mult_radio";
			this->mult_radio->Size = System::Drawing::Size(29, 17);
			this->mult_radio->TabIndex = 12;
			this->mult_radio->TabStop = true;
			this->mult_radio->Text = L"*";
			this->mult_radio->UseVisualStyleBackColor = true;
			// 
			// div_radio
			// 
			this->div_radio->AutoSize = true;
			this->div_radio->Location = System::Drawing::Point(163, 29);
			this->div_radio->Name = L"div_radio";
			this->div_radio->Size = System::Drawing::Size(30, 17);
			this->div_radio->TabIndex = 13;
			this->div_radio->TabStop = true;
			this->div_radio->Text = L"\\";
			this->div_radio->UseVisualStyleBackColor = true;
			// 
			// avg_radio
			// 
			this->avg_radio->AutoSize = true;
			this->avg_radio->Location = System::Drawing::Point(199, 29);
			this->avg_radio->Name = L"avg_radio";
			this->avg_radio->Size = System::Drawing::Size(44, 17);
			this->avg_radio->TabIndex = 14;
			this->avg_radio->TabStop = true;
			this->avg_radio->Text = L"Avg";
			this->avg_radio->UseVisualStyleBackColor = true;
			// 
			// max_radio
			// 
			this->max_radio->AutoSize = true;
			this->max_radio->Location = System::Drawing::Point(257, 29);
			this->max_radio->Name = L"max_radio";
			this->max_radio->Size = System::Drawing::Size(45, 17);
			this->max_radio->TabIndex = 15;
			this->max_radio->TabStop = true;
			this->max_radio->Text = L"Max";
			this->max_radio->UseVisualStyleBackColor = true;
			// 
			// checkbox
			// 
			this->checkbox->AutoSize = true;
			this->checkbox->Location = System::Drawing::Point(257, 118);
			this->checkbox->Name = L"checkbox";
			this->checkbox->Size = System::Drawing::Size(155, 17);
			this->checkbox->TabIndex = 16;
			this->checkbox->Text = L"Output with 2 decimal digits";
			this->checkbox->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 257);
			this->Controls->Add(this->checkbox);
			this->Controls->Add(this->max_radio);
			this->Controls->Add(this->avg_radio);
			this->Controls->Add(this->div_radio);
			this->Controls->Add(this->mult_radio);
			this->Controls->Add(this->sub_radio);
			this->Controls->Add(this->sum_radio);
			this->Controls->Add(this->calculate_btn);
			this->Controls->Add(this->n2_txtbox);
			this->Controls->Add(this->n1_txtbox);
			this->Controls->Add(this->result_lbl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->DoubleClick += gcnew System::EventHandler(this, &MyForm::MyForm_DoubleClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		result_lbl->Text = "----";
		n1_txtbox->Text = "";
		n2_txtbox->Text = "";
		n1_txtbox->Focus();
	}
	private: System::Void calculate_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		double n1;
		double n2;
		n1 = Convert::ToDouble(n1_txtbox->Text);
		n2 = Convert::ToDouble(n2_txtbox->Text);

		//SUM
		if (sum_radio->Checked) {
			if (checkbox->Checked) {
				result_lbl->Text = (n1 + n2).ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString(n1 + n2);
			}
			
		}

		//Subtract
		if (sub_radio->Checked) {
			if (checkbox->Checked) {
				result_lbl->Text = (n1 - n2).ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString(n1 - n2);
			}

		}
		//Multiply
		if (mult_radio->Checked) {
			if (checkbox->Checked) {
				result_lbl->Text = (n1 * n2).ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString(n1 * n2);
			}

		}

		//Divide
		if (div_radio->Checked) {
			if (n2 == 0) {
				MessageBox^ box;
				box->Show("Cannot divide by 0", "Error");
				result_lbl->Text = "Error";
			}else if (checkbox->Checked) {
				result_lbl->Text = (n1 / n2).ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString(n1 / n2);
			}

		}

		//Average
		if (avg_radio->Checked) {
			if (checkbox->Checked) {
				result_lbl->Text = ((n1+n2)/2).ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString((n1 + n2)/2);
			}

		}

		//Max
		if (max_radio->Checked) {
			double max;
			if (n1 > n2) {
				max = n1;
			}
			else {
				max = n2;
			}
			if (checkbox->Checked) {
				result_lbl->Text = max.ToString("0.00");
			}
			else {
				result_lbl->Text = Convert::ToString(max);
			}

		}
		
	}
private: System::Void n1_txtbox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
