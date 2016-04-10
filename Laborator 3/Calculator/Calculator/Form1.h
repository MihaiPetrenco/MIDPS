#pragma once
#include <math.h>

double valueInit = 0;
double valueOper = 0;
char operation=' ';
int counter = 0;
int status = 0;

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^  Display;
	protected: 
	private: System::Windows::Forms::Button^  Button7;
	private: System::Windows::Forms::Button^  Button8;
	private: System::Windows::Forms::Button^  Button9;
	private: System::Windows::Forms::Button^  ButtonMultiply;
	private: System::Windows::Forms::Button^  Button4;
	private: System::Windows::Forms::Button^  Button5;
	private: System::Windows::Forms::Button^  Button6;
	private: System::Windows::Forms::Button^  ButtonAdd;
	private: System::Windows::Forms::Button^  Button1;
	private: System::Windows::Forms::Button^  Button2;
	private: System::Windows::Forms::Button^  Button3;
	private: System::Windows::Forms::Button^  ButtonSubstract;
	private: System::Windows::Forms::Button^  ButtonNegate;
	private: System::Windows::Forms::Button^  Button0;
	private: System::Windows::Forms::Button^  ButtonDot;
	private: System::Windows::Forms::Button^  ButtonEqual;
	private: System::Windows::Forms::Button^  ButtonErase;
	private: System::Windows::Forms::Button^  ButtonPower;
	private: System::Windows::Forms::Button^  ButtonRadical;
	private: System::Windows::Forms::Button^  ButtonDivide;

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
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->Button7 = (gcnew System::Windows::Forms::Button());
			this->Button8 = (gcnew System::Windows::Forms::Button());
			this->Button9 = (gcnew System::Windows::Forms::Button());
			this->ButtonMultiply = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button6 = (gcnew System::Windows::Forms::Button());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->ButtonSubstract = (gcnew System::Windows::Forms::Button());
			this->ButtonNegate = (gcnew System::Windows::Forms::Button());
			this->Button0 = (gcnew System::Windows::Forms::Button());
			this->ButtonDot = (gcnew System::Windows::Forms::Button());
			this->ButtonEqual = (gcnew System::Windows::Forms::Button());
			this->ButtonErase = (gcnew System::Windows::Forms::Button());
			this->ButtonPower = (gcnew System::Windows::Forms::Button());
			this->ButtonRadical = (gcnew System::Windows::Forms::Button());
			this->ButtonDivide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(24, 22);
			this->Display->Name = L"Display";
			this->Display->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Display->Size = System::Drawing::Size(170, 31);
			this->Display->TabIndex = 0;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Button7
			// 
			this->Button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button7->Location = System::Drawing::Point(24, 99);
			this->Button7->Name = L"Button7";
			this->Button7->Size = System::Drawing::Size(38, 37);
			this->Button7->TabIndex = 1;
			this->Button7->Text = L"7";
			this->Button7->UseVisualStyleBackColor = true;
			this->Button7->Click += gcnew System::EventHandler(this, &Form1::Button7_Click);
			// 
			// Button8
			// 
			this->Button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button8->Location = System::Drawing::Point(68, 99);
			this->Button8->Name = L"Button8";
			this->Button8->Size = System::Drawing::Size(38, 37);
			this->Button8->TabIndex = 2;
			this->Button8->Text = L"8";
			this->Button8->UseVisualStyleBackColor = true;
			this->Button8->Click += gcnew System::EventHandler(this, &Form1::Button8_Click);
			// 
			// Button9
			// 
			this->Button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button9->Location = System::Drawing::Point(112, 99);
			this->Button9->Name = L"Button9";
			this->Button9->Size = System::Drawing::Size(38, 37);
			this->Button9->TabIndex = 3;
			this->Button9->Text = L"9";
			this->Button9->UseVisualStyleBackColor = true;
			this->Button9->Click += gcnew System::EventHandler(this, &Form1::Button9_Click);
			// 
			// ButtonMultiply
			// 
			this->ButtonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonMultiply->Location = System::Drawing::Point(156, 99);
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->Size = System::Drawing::Size(38, 37);
			this->ButtonMultiply->TabIndex = 4;
			this->ButtonMultiply->Text = L"*";
			this->ButtonMultiply->UseVisualStyleBackColor = true;
			this->ButtonMultiply->Click += gcnew System::EventHandler(this, &Form1::ButtonMultiply_Click);
			// 
			// Button4
			// 
			this->Button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button4->Location = System::Drawing::Point(24, 142);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(38, 37);
			this->Button4->TabIndex = 5;
			this->Button4->Text = L"4";
			this->Button4->UseVisualStyleBackColor = true;
			this->Button4->Click += gcnew System::EventHandler(this, &Form1::Button4_Click);
			// 
			// Button5
			// 
			this->Button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button5->Location = System::Drawing::Point(68, 142);
			this->Button5->Name = L"Button5";
			this->Button5->Size = System::Drawing::Size(38, 37);
			this->Button5->TabIndex = 6;
			this->Button5->Text = L"5";
			this->Button5->UseVisualStyleBackColor = true;
			this->Button5->Click += gcnew System::EventHandler(this, &Form1::Button5_Click);
			// 
			// Button6
			// 
			this->Button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button6->Location = System::Drawing::Point(112, 142);
			this->Button6->Name = L"Button6";
			this->Button6->Size = System::Drawing::Size(38, 37);
			this->Button6->TabIndex = 7;
			this->Button6->Text = L"6";
			this->Button6->UseVisualStyleBackColor = true;
			this->Button6->Click += gcnew System::EventHandler(this, &Form1::Button6_Click);
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonAdd->Location = System::Drawing::Point(156, 142);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(38, 37);
			this->ButtonAdd->TabIndex = 8;
			this->ButtonAdd->Text = L"+";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &Form1::ButtonAdd_Click);
			// 
			// Button1
			// 
			this->Button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button1->Location = System::Drawing::Point(25, 185);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(38, 37);
			this->Button1->TabIndex = 9;
			this->Button1->Text = L"1";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// Button2
			// 
			this->Button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button2->Location = System::Drawing::Point(68, 185);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(38, 37);
			this->Button2->TabIndex = 10;
			this->Button2->Text = L"2";
			this->Button2->UseVisualStyleBackColor = true;
			this->Button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// Button3
			// 
			this->Button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button3->Location = System::Drawing::Point(112, 185);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(38, 37);
			this->Button3->TabIndex = 11;
			this->Button3->Text = L"3";
			this->Button3->UseVisualStyleBackColor = true;
			this->Button3->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
			// 
			// ButtonSubstract
			// 
			this->ButtonSubstract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonSubstract->Location = System::Drawing::Point(156, 185);
			this->ButtonSubstract->Name = L"ButtonSubstract";
			this->ButtonSubstract->Size = System::Drawing::Size(38, 37);
			this->ButtonSubstract->TabIndex = 12;
			this->ButtonSubstract->Text = L"-";
			this->ButtonSubstract->UseVisualStyleBackColor = true;
			this->ButtonSubstract->Click += gcnew System::EventHandler(this, &Form1::ButtonSubstract_Click);
			// 
			// ButtonNegate
			// 
			this->ButtonNegate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonNegate->Location = System::Drawing::Point(24, 228);
			this->ButtonNegate->Name = L"ButtonNegate";
			this->ButtonNegate->Size = System::Drawing::Size(38, 37);
			this->ButtonNegate->TabIndex = 13;
			this->ButtonNegate->Text = L"±";
			this->ButtonNegate->UseVisualStyleBackColor = true;
			this->ButtonNegate->Click += gcnew System::EventHandler(this, &Form1::ButtonNegate_Click);
			// 
			// Button0
			// 
			this->Button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button0->Location = System::Drawing::Point(68, 228);
			this->Button0->Name = L"Button0";
			this->Button0->Size = System::Drawing::Size(38, 37);
			this->Button0->TabIndex = 14;
			this->Button0->Text = L"0";
			this->Button0->UseVisualStyleBackColor = true;
			this->Button0->Click += gcnew System::EventHandler(this, &Form1::Button0_Click);
			// 
			// ButtonDot
			// 
			this->ButtonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonDot->Location = System::Drawing::Point(112, 228);
			this->ButtonDot->Name = L"ButtonDot";
			this->ButtonDot->Size = System::Drawing::Size(38, 37);
			this->ButtonDot->TabIndex = 15;
			this->ButtonDot->Text = L".";
			this->ButtonDot->UseVisualStyleBackColor = true;
			this->ButtonDot->Click += gcnew System::EventHandler(this, &Form1::ButtonDot_Click);
			// 
			// ButtonEqual
			// 
			this->ButtonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonEqual->Location = System::Drawing::Point(156, 228);
			this->ButtonEqual->Name = L"ButtonEqual";
			this->ButtonEqual->Size = System::Drawing::Size(38, 37);
			this->ButtonEqual->TabIndex = 16;
			this->ButtonEqual->Text = L"=";
			this->ButtonEqual->UseVisualStyleBackColor = true;
			this->ButtonEqual->Click += gcnew System::EventHandler(this, &Form1::ButtonEqual_Click);
			// 
			// ButtonErase
			// 
			this->ButtonErase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonErase->Location = System::Drawing::Point(24, 59);
			this->ButtonErase->Name = L"ButtonErase";
			this->ButtonErase->Size = System::Drawing::Size(38, 37);
			this->ButtonErase->TabIndex = 17;
			this->ButtonErase->Text = L"C";
			this->ButtonErase->UseVisualStyleBackColor = true;
			this->ButtonErase->Click += gcnew System::EventHandler(this, &Form1::ButtonErase_Click);
			// 
			// ButtonPower
			// 
			this->ButtonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonPower->Location = System::Drawing::Point(68, 59);
			this->ButtonPower->Name = L"ButtonPower";
			this->ButtonPower->Size = System::Drawing::Size(38, 37);
			this->ButtonPower->TabIndex = 18;
			this->ButtonPower->Text = L"xᵞ";
			this->ButtonPower->UseVisualStyleBackColor = true;
			this->ButtonPower->Click += gcnew System::EventHandler(this, &Form1::ButtonPower_Click);
			// 
			// ButtonRadical
			// 
			this->ButtonRadical->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonRadical->Location = System::Drawing::Point(112, 59);
			this->ButtonRadical->Name = L"ButtonRadical";
			this->ButtonRadical->Size = System::Drawing::Size(38, 37);
			this->ButtonRadical->TabIndex = 19;
			this->ButtonRadical->Text = L"√";
			this->ButtonRadical->UseVisualStyleBackColor = true;
			this->ButtonRadical->Click += gcnew System::EventHandler(this, &Form1::ButtonRadical_Click);
			// 
			// ButtonDivide
			// 
			this->ButtonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonDivide->Location = System::Drawing::Point(156, 59);
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->Size = System::Drawing::Size(38, 37);
			this->ButtonDivide->TabIndex = 20;
			this->ButtonDivide->Text = L"/";
			this->ButtonDivide->UseVisualStyleBackColor = true;
			this->ButtonDivide->Click += gcnew System::EventHandler(this, &Form1::ButtonDivide_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(219, 273);
			this->Controls->Add(this->ButtonDivide);
			this->Controls->Add(this->ButtonRadical);
			this->Controls->Add(this->ButtonPower);
			this->Controls->Add(this->ButtonErase);
			this->Controls->Add(this->ButtonEqual);
			this->Controls->Add(this->ButtonDot);
			this->Controls->Add(this->Button0);
			this->Controls->Add(this->ButtonNegate);
			this->Controls->Add(this->ButtonSubstract);
			this->Controls->Add(this->Button3);
			this->Controls->Add(this->Button2);
			this->Controls->Add(this->Button1);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->Button6);
			this->Controls->Add(this->Button5);
			this->Controls->Add(this->Button4);
			this->Controls->Add(this->ButtonMultiply);
			this->Controls->Add(this->Button9);
			this->Controls->Add(this->Button8);
			this->Controls->Add(this->Button7);
			this->Controls->Add(this->Display);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^  sender, System::EventArgs^  e) {
			    if (Display->Text == "0"){
				Display->Text = "1";
			 }
			 else{
				 Display->Text = Display->Text + 1;
			 }
		    }
private: System::Void Button2_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "2";
			 }
			 else{
				 Display->Text = Display->Text + 2;
			 }
	    }
private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "3";
			 }
			 else{
				 Display->Text = Display->Text + 3;
			 }
	    }
private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "4";
			 }
			 else{
				 Display->Text = Display->Text + 4;
			 }
	    }
private: System::Void Button5_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "5";
			 }
			 else{
				 Display->Text = Display->Text + 5;
			 }
	    }
private: System::Void Button6_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "6";
			 }
			 else{
				 Display->Text = Display->Text + 6;
			 }
	    }
private: System::Void Button7_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "7";
			 }
			 else{
				 Display->Text = Display->Text + 7;
			 }
	    }
private: System::Void Button8_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "8";
			 }
			 else{
				 Display->Text = Display->Text + 8;
			 }
	    }
private: System::Void Button9_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "9";
			 }
			 else{
				 Display->Text = Display->Text + 9;
			 }
	    }
private: System::Void Button0_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "0";
			 }
			 else{
				 Display->Text = Display->Text + 0;
			 }
	    }
private: System::Void ButtonErase_Click(System::Object^  sender, System::EventArgs^  e) {
		    Display -> Text = "0";
		    valueInit = 0;
		    valueOper = 0;
		    counter = 0;
		    status = 0;
	    }
private: System::Void ButtonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '+';
		    counter = 0;
		    status = 1;
		    }
	    }
private: System::Void ButtonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "")
			    Display->Text = "0";
		    valueOper = Convert::ToDouble(Display->Text);
		    int temp;
		    status = 0;
		    switch(operation){
		    case '+':
		    valueInit += valueOper;
		    operation = ' ';
		    Display -> Text = Convert::ToString(valueInit);
		    break;

		    case '-':
		    valueInit -= valueOper;
		    operation = ' ';
		    Display -> Text = Convert::ToString(valueInit);
		    break;

		    case '*':
		    valueInit *= valueOper;
		    operation = ' ';
		    Display -> Text = Convert::ToString(valueInit);
		    break;

		    case '/':
		    valueInit /= valueOper;
		    operation = ' ';
		    Display -> Text = Convert::ToString(valueInit);
		    break;

		    case '^':
		    temp = valueInit;
		    for(int i=1; i<valueOper; i++)
		    valueInit *= temp;
		    operation = ' ';
		    Display -> Text = Convert::ToString(valueInit);
		    break;
		    }
		  }
	    private: System::Void ButtonMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
				   if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '*';
		    counter = 0;
		    status = 1;
		    }
	     }
private: System::Void ButtonSubstract_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '-';
		    counter = 0;
		    status = 1;
	    }
}

private: System::Void ButtonDivide_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '/';
		    counter = 0;
		    status = 1;
		    }
	    }
private: System::Void ButtonDot_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (counter == 0){
		    Display->Text = Display->Text + ".";
		    counter = 1;
		    }
	    }
private: System::Void ButtonRadical_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(Display->Text == "")
			  valueOper = sqrt(valueInit);
		    else{
			    valueOper = Convert::ToDouble(Display->Text);
			    valueOper = sqrt(valueOper);
		    }
		    Display->Text = Convert::ToString(valueOper);
		    operation = ' ';
	    }

private: System::Void ButtonPower_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '^';
		    counter = 0;
		    status = 1;
		    }
	    }
private: System::Void ButtonNegate_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0")
			    Display->Text = "0";

		    else{
			    if(operation == ' '){
			    valueInit = Convert::ToDouble(Display->Text) * (-1);
			    Display->Text = Convert::ToString(valueInit);
			    }
			    else{
			    valueOper = Convert::ToDouble(Display->Text) * (-1);
			    Display->Text = Convert::ToString(valueOper);
			    }
		    }
	    }
};
}

