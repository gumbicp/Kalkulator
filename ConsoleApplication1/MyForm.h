#pragma once

namespace ConsoleApplication1 {

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
			first = 0;
			second = 0;
			result = 0;
			F_OPERATION = false;
			

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
	private: System::Windows::Forms::Button^  but_clear;
	protected:

	private: System::Windows::Forms::Button^  but_seven;
	private: System::Windows::Forms::Button^  but_eight;
	private: System::Windows::Forms::Button^  but_memory;
	protected:



	private: System::Windows::Forms::Button^  but_four;
	private: System::Windows::Forms::Button^  but_five;
	private: System::Windows::Forms::Button^  but_percent;



	private: System::Windows::Forms::Button^  but_two;
	private: System::Windows::Forms::Button^  but_tree;



	private: System::Windows::Forms::Button^  but_one;
	private: System::Windows::Forms::Button^  but_point;
	private: System::Windows::Forms::Button^  but_nine;





	private: System::Windows::Forms::Button^  but_six;

	private: System::Windows::Forms::Button^  but_zero;

	private: System::Windows::Forms::Button^  but_equale;
	private: System::Windows::Forms::Button^  but_plus;
	private: System::Windows::Forms::Button^  but_minus;
	private: System::Windows::Forms::Button^  but_multiple;
	private: System::Windows::Forms::Button^  but_dzielenie;






	private: System::Windows::Forms::CheckBox^  checkb_hex;


	private: System::Windows::Forms::CheckBox^  checkb_dec;
	private: System::Windows::Forms::CheckBox^  checkb_oct;
	private: System::Windows::Forms::CheckBox^  checkb_bin;
	private: System::Windows::Forms::CheckBox^  checkb_conwenter;
	private: System::Windows::Forms::CheckBox^  B;
	private: System::Windows::Forms::Label^  label_screen;







	private:
		/// <summary>
		/// Required designer variable.
		System::Double first;
		System::Double second;
		System::Double result;
		System::Boolean F_OPERATION;
		Operations_e ope;
		System::Int16 whatOpe{ 0 };

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->but_clear = (gcnew System::Windows::Forms::Button());
			this->but_seven = (gcnew System::Windows::Forms::Button());
			this->but_eight = (gcnew System::Windows::Forms::Button());
			this->but_memory = (gcnew System::Windows::Forms::Button());
			this->but_four = (gcnew System::Windows::Forms::Button());
			this->but_five = (gcnew System::Windows::Forms::Button());
			this->but_percent = (gcnew System::Windows::Forms::Button());
			this->but_two = (gcnew System::Windows::Forms::Button());
			this->but_tree = (gcnew System::Windows::Forms::Button());
			this->but_one = (gcnew System::Windows::Forms::Button());
			this->but_point = (gcnew System::Windows::Forms::Button());
			this->but_nine = (gcnew System::Windows::Forms::Button());
			this->but_six = (gcnew System::Windows::Forms::Button());
			this->but_zero = (gcnew System::Windows::Forms::Button());
			this->but_equale = (gcnew System::Windows::Forms::Button());
			this->but_plus = (gcnew System::Windows::Forms::Button());
			this->but_minus = (gcnew System::Windows::Forms::Button());
			this->but_multiple = (gcnew System::Windows::Forms::Button());
			this->but_dzielenie = (gcnew System::Windows::Forms::Button());
			this->checkb_hex = (gcnew System::Windows::Forms::CheckBox());
			this->checkb_dec = (gcnew System::Windows::Forms::CheckBox());
			this->checkb_oct = (gcnew System::Windows::Forms::CheckBox());
			this->checkb_bin = (gcnew System::Windows::Forms::CheckBox());
			this->checkb_conwenter = (gcnew System::Windows::Forms::CheckBox());
			this->B = (gcnew System::Windows::Forms::CheckBox());
			this->label_screen = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// but_clear
			// 
			this->but_clear->Location = System::Drawing::Point(12, 90);
			this->but_clear->Name = L"but_clear";
			this->but_clear->Size = System::Drawing::Size(54, 37);
			this->but_clear->TabIndex = 0;
			this->but_clear->Text = L"C";
			this->but_clear->UseVisualStyleBackColor = true;
			this->but_clear->Click += gcnew System::EventHandler(this, &MyForm::but_clear_Click);
			// 
			// but_seven
			// 
			this->but_seven->Location = System::Drawing::Point(72, 89);
			this->but_seven->Name = L"but_seven";
			this->but_seven->Size = System::Drawing::Size(40, 37);
			this->but_seven->TabIndex = 1;
			this->but_seven->Text = L"7";
			this->but_seven->UseVisualStyleBackColor = true;
			this->but_seven->Click += gcnew System::EventHandler(this, &MyForm::but_seven_Click);
			// 
			// but_eight
			// 
			this->but_eight->Location = System::Drawing::Point(118, 90);
			this->but_eight->Name = L"but_eight";
			this->but_eight->Size = System::Drawing::Size(40, 37);
			this->but_eight->TabIndex = 2;
			this->but_eight->Text = L"8";
			this->but_eight->UseVisualStyleBackColor = true;
			this->but_eight->Click += gcnew System::EventHandler(this, &MyForm::but_eight_Click);
			// 
			// but_memory
			// 
			this->but_memory->Location = System::Drawing::Point(12, 133);
			this->but_memory->Name = L"but_memory";
			this->but_memory->Size = System::Drawing::Size(54, 36);
			this->but_memory->TabIndex = 3;
			this->but_memory->Text = L"M";
			this->but_memory->UseVisualStyleBackColor = true;
			// 
			// but_four
			// 
			this->but_four->Location = System::Drawing::Point(72, 132);
			this->but_four->Name = L"but_four";
			this->but_four->Size = System::Drawing::Size(40, 37);
			this->but_four->TabIndex = 4;
			this->but_four->Text = L"4";
			this->but_four->UseVisualStyleBackColor = true;
			this->but_four->Click += gcnew System::EventHandler(this, &MyForm::but_four_Click);
			// 
			// but_five
			// 
			this->but_five->Location = System::Drawing::Point(118, 133);
			this->but_five->Name = L"but_five";
			this->but_five->Size = System::Drawing::Size(40, 37);
			this->but_five->TabIndex = 5;
			this->but_five->Text = L"5";
			this->but_five->UseVisualStyleBackColor = true;
			this->but_five->Click += gcnew System::EventHandler(this, &MyForm::but_five_Click);
			// 
			// but_percent
			// 
			this->but_percent->Location = System::Drawing::Point(12, 176);
			this->but_percent->Name = L"but_percent";
			this->but_percent->Size = System::Drawing::Size(54, 36);
			this->but_percent->TabIndex = 6;
			this->but_percent->Text = L"%";
			this->but_percent->UseVisualStyleBackColor = true;
			// 
			// but_two
			// 
			this->but_two->Location = System::Drawing::Point(118, 176);
			this->but_two->Name = L"but_two";
			this->but_two->Size = System::Drawing::Size(40, 37);
			this->but_two->TabIndex = 7;
			this->but_two->Text = L"2";
			this->but_two->UseVisualStyleBackColor = true;
			this->but_two->Click += gcnew System::EventHandler(this, &MyForm::but_two_Click);
			// 
			// but_tree
			// 
			this->but_tree->Location = System::Drawing::Point(166, 176);
			this->but_tree->Name = L"but_tree";
			this->but_tree->Size = System::Drawing::Size(40, 37);
			this->but_tree->TabIndex = 8;
			this->but_tree->Text = L"3";
			this->but_tree->UseVisualStyleBackColor = true;
			this->but_tree->Click += gcnew System::EventHandler(this, &MyForm::but_tree_Click);
			// 
			// but_one
			// 
			this->but_one->Location = System::Drawing::Point(72, 175);
			this->but_one->Name = L"but_one";
			this->but_one->Size = System::Drawing::Size(40, 37);
			this->but_one->TabIndex = 9;
			this->but_one->Text = L"1";
			this->but_one->UseVisualStyleBackColor = true;
			this->but_one->Click += gcnew System::EventHandler(this, &MyForm::but_one_Click);
			// 
			// but_point
			// 
			this->but_point->Location = System::Drawing::Point(12, 219);
			this->but_point->Name = L"but_point";
			this->but_point->Size = System::Drawing::Size(54, 36);
			this->but_point->TabIndex = 10;
			this->but_point->Text = L".";
			this->but_point->UseVisualStyleBackColor = true;
			this->but_point->Click += gcnew System::EventHandler(this, &MyForm::but_point_Click);
			// 
			// but_nine
			// 
			this->but_nine->Location = System::Drawing::Point(166, 90);
			this->but_nine->Name = L"but_nine";
			this->but_nine->Size = System::Drawing::Size(40, 37);
			this->but_nine->TabIndex = 11;
			this->but_nine->Text = L"9";
			this->but_nine->UseVisualStyleBackColor = true;
			this->but_nine->Click += gcnew System::EventHandler(this, &MyForm::but_nine_Click);
			// 
			// but_six
			// 
			this->but_six->Location = System::Drawing::Point(166, 133);
			this->but_six->Name = L"but_six";
			this->but_six->Size = System::Drawing::Size(40, 37);
			this->but_six->TabIndex = 12;
			this->but_six->Text = L"6";
			this->but_six->UseVisualStyleBackColor = true;
			this->but_six->Click += gcnew System::EventHandler(this, &MyForm::but_six_Click);
			// 
			// but_zero
			// 
			this->but_zero->Location = System::Drawing::Point(72, 218);
			this->but_zero->Name = L"but_zero";
			this->but_zero->Size = System::Drawing::Size(40, 37);
			this->but_zero->TabIndex = 13;
			this->but_zero->Text = L"0";
			this->but_zero->UseVisualStyleBackColor = true;
			this->but_zero->Click += gcnew System::EventHandler(this, &MyForm::but_zero_Click);
			// 
			// but_equale
			// 
			this->but_equale->Location = System::Drawing::Point(118, 219);
			this->but_equale->Name = L"but_equale";
			this->but_equale->Size = System::Drawing::Size(88, 37);
			this->but_equale->TabIndex = 14;
			this->but_equale->Text = L"=";
			this->but_equale->UseVisualStyleBackColor = true;
			this->but_equale->Click += gcnew System::EventHandler(this, &MyForm::but_equale_Click);
			// 
			// but_plus
			// 
			this->but_plus->Location = System::Drawing::Point(212, 90);
			this->but_plus->Name = L"but_plus";
			this->but_plus->Size = System::Drawing::Size(60, 37);
			this->but_plus->TabIndex = 15;
			this->but_plus->Text = L"+";
			this->but_plus->UseVisualStyleBackColor = true;
			this->but_plus->Click += gcnew System::EventHandler(this, &MyForm::but_plus_Click);
			// 
			// but_minus
			// 
			this->but_minus->Location = System::Drawing::Point(212, 132);
			this->but_minus->Name = L"but_minus";
			this->but_minus->Size = System::Drawing::Size(60, 37);
			this->but_minus->TabIndex = 16;
			this->but_minus->Text = L"-";
			this->but_minus->UseVisualStyleBackColor = true;
			// 
			// but_multiple
			// 
			this->but_multiple->Location = System::Drawing::Point(212, 176);
			this->but_multiple->Name = L"but_multiple";
			this->but_multiple->Size = System::Drawing::Size(60, 37);
			this->but_multiple->TabIndex = 17;
			this->but_multiple->Text = L"x";
			this->but_multiple->UseVisualStyleBackColor = true;
			// 
			// but_dzielenie
			// 
			this->but_dzielenie->Location = System::Drawing::Point(212, 219);
			this->but_dzielenie->Name = L"but_dzielenie";
			this->but_dzielenie->Size = System::Drawing::Size(60, 37);
			this->but_dzielenie->TabIndex = 18;
			this->but_dzielenie->Text = L"/";
			this->but_dzielenie->UseVisualStyleBackColor = true;
			// 
			// checkb_hex
			// 
			this->checkb_hex->AutoSize = true;
			this->checkb_hex->Location = System::Drawing::Point(192, 38);
			this->checkb_hex->Name = L"checkb_hex";
			this->checkb_hex->Size = System::Drawing::Size(45, 17);
			this->checkb_hex->TabIndex = 20;
			this->checkb_hex->Text = L"Hex";
			this->checkb_hex->UseVisualStyleBackColor = true;
			// 
			// checkb_dec
			// 
			this->checkb_dec->AutoSize = true;
			this->checkb_dec->Checked = true;
			this->checkb_dec->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkb_dec->Location = System::Drawing::Point(192, 67);
			this->checkb_dec->Name = L"checkb_dec";
			this->checkb_dec->Size = System::Drawing::Size(46, 17);
			this->checkb_dec->TabIndex = 21;
			this->checkb_dec->Text = L"Dec";
			this->checkb_dec->UseVisualStyleBackColor = true;
			// 
			// checkb_oct
			// 
			this->checkb_oct->AutoSize = true;
			this->checkb_oct->Location = System::Drawing::Point(95, 38);
			this->checkb_oct->Name = L"checkb_oct";
			this->checkb_oct->Size = System::Drawing::Size(43, 17);
			this->checkb_oct->TabIndex = 22;
			this->checkb_oct->Text = L"Oct";
			this->checkb_oct->UseVisualStyleBackColor = true;
			// 
			// checkb_bin
			// 
			this->checkb_bin->AutoSize = true;
			this->checkb_bin->Location = System::Drawing::Point(95, 66);
			this->checkb_bin->Name = L"checkb_bin";
			this->checkb_bin->Size = System::Drawing::Size(41, 17);
			this->checkb_bin->TabIndex = 23;
			this->checkb_bin->Text = L"Bin";
			this->checkb_bin->UseVisualStyleBackColor = true;
			// 
			// checkb_conwenter
			// 
			this->checkb_conwenter->AutoSize = true;
			this->checkb_conwenter->Location = System::Drawing::Point(9, 38);
			this->checkb_conwenter->Name = L"checkb_conwenter";
			this->checkb_conwenter->Size = System::Drawing::Size(68, 17);
			this->checkb_conwenter->TabIndex = 24;
			this->checkb_conwenter->Text = L"Currency";
			this->checkb_conwenter->UseVisualStyleBackColor = true;
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->Location = System::Drawing::Point(9, 66);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(51, 17);
			this->B->TabIndex = 25;
			this->B->Text = L"Save";
			this->B->UseVisualStyleBackColor = true;
			// 
			// label_screen
			// 
			this->label_screen->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label_screen->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_screen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_screen->Location = System::Drawing::Point(6, 4);
			this->label_screen->Name = L"label_screen";
			this->label_screen->Size = System::Drawing::Size(272, 31);
			this->label_screen->TabIndex = 26;
			this->label_screen->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label_screen);
			this->Controls->Add(this->B);
			this->Controls->Add(this->checkb_conwenter);
			this->Controls->Add(this->checkb_bin);
			this->Controls->Add(this->checkb_oct);
			this->Controls->Add(this->checkb_dec);
			this->Controls->Add(this->checkb_hex);
			this->Controls->Add(this->but_dzielenie);
			this->Controls->Add(this->but_multiple);
			this->Controls->Add(this->but_minus);
			this->Controls->Add(this->but_plus);
			this->Controls->Add(this->but_equale);
			this->Controls->Add(this->but_zero);
			this->Controls->Add(this->but_six);
			this->Controls->Add(this->but_nine);
			this->Controls->Add(this->but_point);
			this->Controls->Add(this->but_one);
			this->Controls->Add(this->but_tree);
			this->Controls->Add(this->but_two);
			this->Controls->Add(this->but_percent);
			this->Controls->Add(this->but_five);
			this->Controls->Add(this->but_four);
			this->Controls->Add(this->but_memory);
			this->Controls->Add(this->but_eight);
			this->Controls->Add(this->but_seven);
			this->Controls->Add(this->but_clear);
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/**
 * Put number on label_creen.
 */
private: System::Void handler_numeric(System::String^ toPut) {
	if (!F_OPERATION){
		if (label_screen->Text == "0")
			label_screen->Text = toPut;
		else
			label_screen->Text = Convert::ToDouble(label_screen->Text) + toPut;
	}
	else
	{
		label_screen->Text = toPut;
		second = Convert::ToDouble(toPut);
	}
}
/**
 *	Button 0 Click event. Put 0 in label_screen.
 */
private: System::Void but_zero_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label_screen->Text != "0")
		label_screen->Text = Convert::ToDouble(label_screen->Text) + "0";
}
/**
*	Button 1 Click event. Put 1 in label_screen.
*/
private: System::Void but_one_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("1");
}
/**
*	Button C Click event. Put 0 in label_screen.
*/
private: System::Void but_clear_Click(System::Object^  sender, System::EventArgs^  e) {
	label_screen->Text = "0";
	F_OPERATION = false;
	result = 0;
}
/**
 *	Button 2 Click event. Put 2 in label_screen.
 */
private: System::Void but_two_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("2");
}
/**
 *	Button 3 Click event. Put 3 in label_screen.
 */
private: System::Void but_tree_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("3");
}
/**
*	Button 4 Click event. Put 4 in label_screen.
*/
private: System::Void but_four_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("4");
}
/**
*	Button 5 Click event. Put 5 in label_screen.
*/
private: System::Void but_five_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("5");
}
/**
*	Button 6 Click event. Put 6 in label_screen.
*/
private: System::Void but_six_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("6");
}
/**
*	Button 7 Click event. Put 7 in label_screen.
*/
private: System::Void but_seven_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("7");
}
/**
*	Button 6 Click event. Put 6 in label_screen.
*/
private: System::Void but_eight_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("8");
}
/**
*	Button 9 Click event. Put 9 in label_screen.
*/
private: System::Void but_nine_Click(System::Object^  sender, System::EventArgs^  e) {
	handler_numeric("9");
}
/**
*	Button . Click event. Put . in label_screen.
* TODO: not implemented yet
*/
private: System::Void but_point_Click(System::Object^  sender, System::EventArgs^  e) {
	//if (label_screen->Text == "0")
	//	label_screen->Text = "0.0";
	//else
	//	label_screen->Text = Convert::ToDouble(label_screen->Text) + ".0";
}
/**
*	Button + Click event. Add numbers.
*	F_OPERATION go true
*   
*/
private: System::Void but_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	whatOpe = PLUS;
	F_OPERATION = true;
	// first operation
	if(result == 0){ 
		first = Convert::ToDouble(label_screen->Text);
		result += first;
		//label_screen->Text = "0";
	}
	// + .. + .. + operation
	else {
		result += Convert::ToDouble(label_screen->Text);
		label_screen->Text = Convert::ToString(result);
	}
}
/**
*	Button . Click event. Put . in label_screen.
*/
private: System::Void but_equale_Click(System::Object^  sender, System::EventArgs^  e) {
	switch (ope)
	{
	case PLUS:
		result += second;
		break;
	default:
		break;
	}
	
	label_screen->Text = Convert::ToString(result); 
}
};
}
