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
	private: System::Windows::Forms::Label^  Display;
	private: System::Windows::Forms::Button^  ButtonErase;
	private: System::Windows::Forms::Button^  ButtonNegate;
	private: System::Windows::Forms::Button^  Button8;

	protected: 

	protected: 




	private: System::Windows::Forms::Button^  Button9;

	private: System::Windows::Forms::Button^  Button4;
	private: System::Windows::Forms::Button^  Button6;


	private: System::Windows::Forms::Button^  Button5;

	private: System::Windows::Forms::Button^  Button1;
	private: System::Windows::Forms::Button^  Button2;
	private: System::Windows::Forms::Button^  Button3;




	private: System::Windows::Forms::Button^  Button0;

	private: System::Windows::Forms::Button^  ButtonDot;

	private: System::Windows::Forms::Button^  ButtonDivide;
	private: System::Windows::Forms::Button^  ButtonMultiply;
	private: System::Windows::Forms::Button^  ButtonAdd;
	private: System::Windows::Forms::Button^  ButtonSubstract;
	private: System::Windows::Forms::Button^  ButtonEqual;







	private: System::Windows::Forms::Button^  ButtonRadical;


	private: System::Windows::Forms::Button^  ButtonPower;
	private: System::Windows::Forms::Button^  Button7;



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
			this->Display = (gcnew System::Windows::Forms::Label());
			this->ButtonErase = (gcnew System::Windows::Forms::Button());
			this->ButtonNegate = (gcnew System::Windows::Forms::Button());
			this->Button8 = (gcnew System::Windows::Forms::Button());
			this->Button9 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->Button6 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Button0 = (gcnew System::Windows::Forms::Button());
			this->ButtonDot = (gcnew System::Windows::Forms::Button());
			this->ButtonDivide = (gcnew System::Windows::Forms::Button());
			this->ButtonMultiply = (gcnew System::Windows::Forms::Button());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonSubstract = (gcnew System::Windows::Forms::Button());
			this->ButtonEqual = (gcnew System::Windows::Forms::Button());
			this->ButtonRadical = (gcnew System::Windows::Forms::Button());
			this->ButtonPower = (gcnew System::Windows::Forms::Button());
			this->Button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(12, 9);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(170, 39);
			this->Display->TabIndex = 0;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ButtonErase
			// 
			this->ButtonErase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonErase->Location = System::Drawing::Point(12, 52);
			this->ButtonErase->Name = L"ButtonErase";
			this->ButtonErase->Size = System::Drawing::Size(38, 33);
			this->ButtonErase->TabIndex = 2;
			this->ButtonErase->Text = L"C";
			this->ButtonErase->UseVisualStyleBackColor = true;
			this->ButtonErase->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// ButtonNegate
			// 
			this->ButtonNegate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonNegate->Location = System::Drawing::Point(12, 206);
			this->ButtonNegate->Name = L"ButtonNegate";
			this->ButtonNegate->Size = System::Drawing::Size(38, 33);
			this->ButtonNegate->TabIndex = 3;
			this->ButtonNegate->Text = L"±";
			this->ButtonNegate->UseVisualStyleBackColor = true;
			this->ButtonNegate->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Button8
			// 
			this->Button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button8->Location = System::Drawing::Point(56, 90);
			this->Button8->Name = L"Button8";
			this->Button8->Size = System::Drawing::Size(38, 33);
			this->Button8->TabIndex = 23;
			this->Button8->Text = L"8";
			this->Button8->UseVisualStyleBackColor = true;
			this->Button8->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Button9
			// 
			this->Button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button9->Location = System::Drawing::Point(100, 90);
			this->Button9->Name = L"Button9";
			this->Button9->Size = System::Drawing::Size(38, 33);
			this->Button9->TabIndex = 24;
			this->Button9->Text = L"9";
			this->Button9->UseVisualStyleBackColor = true;
			this->Button9->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// Button4
			// 
			this->Button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button4->Location = System::Drawing::Point(12, 129);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(38, 33);
			this->Button4->TabIndex = 25;
			this->Button4->Text = L"4";
			this->Button4->UseVisualStyleBackColor = true;
			this->Button4->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Button6
			// 
			this->Button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button6->Location = System::Drawing::Point(100, 128);
			this->Button6->Name = L"Button6";
			this->Button6->Size = System::Drawing::Size(38, 33);
			this->Button6->TabIndex = 26;
			this->Button6->Text = L"6";
			this->Button6->UseVisualStyleBackColor = true;
			this->Button6->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Button5
			// 
			this->Button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button5->Location = System::Drawing::Point(56, 128);
			this->Button5->Name = L"Button5";
			this->Button5->Size = System::Drawing::Size(38, 33);
			this->Button5->TabIndex = 27;
			this->Button5->Text = L"5";
			this->Button5->UseVisualStyleBackColor = true;
			this->Button5->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Button1
			// 
			this->Button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button1->Location = System::Drawing::Point(12, 167);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(38, 33);
			this->Button1->TabIndex = 28;
			this->Button1->Text = L"1";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Button2
			// 
			this->Button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button2->Location = System::Drawing::Point(56, 168);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(38, 33);
			this->Button2->TabIndex = 29;
			this->Button2->Text = L"2";
			this->Button2->UseVisualStyleBackColor = true;
			this->Button2->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// Button3
			// 
			this->Button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button3->Location = System::Drawing::Point(100, 167);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(38, 33);
			this->Button3->TabIndex = 30;
			this->Button3->Text = L"3";
			this->Button3->UseVisualStyleBackColor = true;
			this->Button3->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// Button0
			// 
			this->Button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button0->Location = System::Drawing::Point(56, 206);
			this->Button0->Name = L"Button0";
			this->Button0->Size = System::Drawing::Size(38, 33);
			this->Button0->TabIndex = 31;
			this->Button0->Text = L"0";
			this->Button0->UseVisualStyleBackColor = true;
			this->Button0->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// ButtonDot
			// 
			this->ButtonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonDot->Location = System::Drawing::Point(100, 206);
			this->ButtonDot->Name = L"ButtonDot";
			this->ButtonDot->Size = System::Drawing::Size(38, 33);
			this->ButtonDot->TabIndex = 32;
			this->ButtonDot->Text = L".";
			this->ButtonDot->UseVisualStyleBackColor = true;
			this->ButtonDot->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// ButtonDivide
			// 
			this->ButtonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonDivide->Location = System::Drawing::Point(144, 50);
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->Size = System::Drawing::Size(38, 33);
			this->ButtonDivide->TabIndex = 33;
			this->ButtonDivide->Text = L"/";
			this->ButtonDivide->UseVisualStyleBackColor = true;
			this->ButtonDivide->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// ButtonMultiply
			// 
			this->ButtonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonMultiply->Location = System::Drawing::Point(144, 90);
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->Size = System::Drawing::Size(38, 33);
			this->ButtonMultiply->TabIndex = 34;
			this->ButtonMultiply->Text = L"*";
			this->ButtonMultiply->UseVisualStyleBackColor = true;
			this->ButtonMultiply->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonAdd->Location = System::Drawing::Point(144, 128);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(38, 33);
			this->ButtonAdd->TabIndex = 35;
			this->ButtonAdd->Text = L"+";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// ButtonSubstract
			// 
			this->ButtonSubstract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonSubstract->Location = System::Drawing::Point(144, 168);
			this->ButtonSubstract->Name = L"ButtonSubstract";
			this->ButtonSubstract->Size = System::Drawing::Size(38, 33);
			this->ButtonSubstract->TabIndex = 36;
			this->ButtonSubstract->Text = L"-";
			this->ButtonSubstract->UseVisualStyleBackColor = true;
			this->ButtonSubstract->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// ButtonEqual
			// 
			this->ButtonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonEqual->Location = System::Drawing::Point(144, 207);
			this->ButtonEqual->Name = L"ButtonEqual";
			this->ButtonEqual->Size = System::Drawing::Size(38, 33);
			this->ButtonEqual->TabIndex = 37;
			this->ButtonEqual->Text = L"=";
			this->ButtonEqual->UseVisualStyleBackColor = true;
			this->ButtonEqual->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// ButtonRadical
			// 
			this->ButtonRadical->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonRadical->Location = System::Drawing::Point(100, 51);
			this->ButtonRadical->Name = L"ButtonRadical";
			this->ButtonRadical->Size = System::Drawing::Size(38, 33);
			this->ButtonRadical->TabIndex = 38;
			this->ButtonRadical->Text = L"√";
			this->ButtonRadical->UseVisualStyleBackColor = true;
			this->ButtonRadical->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// ButtonPower
			// 
			this->ButtonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonPower->Location = System::Drawing::Point(56, 51);
			this->ButtonPower->Name = L"ButtonPower";
			this->ButtonPower->Size = System::Drawing::Size(38, 33);
			this->ButtonPower->TabIndex = 39;
			this->ButtonPower->Text = L"xᵞ";
			this->ButtonPower->UseVisualStyleBackColor = true;
			this->ButtonPower->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// Button7
			// 
			this->Button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button7->Location = System::Drawing::Point(12, 91);
			this->Button7->Name = L"Button7";
			this->Button7->Size = System::Drawing::Size(38, 33);
			this->Button7->TabIndex = 40;
			this->Button7->Text = L"7";
			this->Button7->UseVisualStyleBackColor = true;
			this->Button7->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(196, 249);
			this->Controls->Add(this->Button7);
			this->Controls->Add(this->ButtonPower);
			this->Controls->Add(this->ButtonRadical);
			this->Controls->Add(this->ButtonEqual);
			this->Controls->Add(this->ButtonSubstract);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->ButtonMultiply);
			this->Controls->Add(this->ButtonDivide);
			this->Controls->Add(this->ButtonDot);
			this->Controls->Add(this->Button0);
			this->Controls->Add(this->Button3);
			this->Controls->Add(this->Button2);
			this->Controls->Add(this->Button1);
			this->Controls->Add(this->Button5);
			this->Controls->Add(this->Button6);
			this->Controls->Add(this->Button4);
			this->Controls->Add(this->Button9);
			this->Controls->Add(this->Button8);
			this->Controls->Add(this->ButtonNegate);
			this->Controls->Add(this->ButtonErase);
			this->Controls->Add(this->Display);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Void Button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Display->Text == "0"){
				Display->Text = "1";
			 }
			 else{
				 Display->Text = Display->Text + 1;
			 }
		    }
System::Void Button2_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "2";
			 }
			 else{
				 Display->Text = Display->Text + 2;
	    }
	}
System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "3";
			 }
			 else{
				 Display->Text = Display->Text + 3;
			 }
	    }
System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "4";
			 }
			 else{
				 Display->Text = Display->Text + 4;
			 }
	    }
System::Void Button5_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "5";
			 }
			 else{
				 Display->Text = Display->Text + 5;
			 }
	    }
System::Void Button6_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "6";
			 }
			 else{
				 Display->Text = Display->Text + 6;
			 }
	    }
System::Void Button7_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "7";
			 }
			 else{
				 Display->Text = Display->Text + 7;
			 }
	    }
System::Void Button8_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "8";
			 }
			 else{
				 Display->Text = Display->Text + 8;
			 }
	    }
System::Void Button9_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "9";
			 }
			 else{
				 Display->Text = Display->Text + 9;
			 }
	    }
System::Void Button0_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (Display->Text == "0"){
				Display->Text = "0";
			 }
			 else{
				 Display->Text = Display->Text + 0;
			 }
	    }
System::Void ButtonErase_Click(System::Object^  sender, System::EventArgs^  e) {
		    Display -> Text = "0";
		    valueInit = 0;
		    valueOper = 0;
		    counter = 0;
		    status = 0;
	    }
System::Void ButtonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '+';
		    counter = 0;
		    status = 1;
		    }
	    }
System::Void ButtonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
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
System::Void ButtonSubstract_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '-';
		    counter = 0;
		    status = 1;
		    }
	    }
System::Void ButtonMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '*';
		    counter = 0;
		    status = 1;
		    }
	    }
System::Void ButtonDivide_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '/';
		    counter = 0;
		    status = 1;
		    }
	    }
System::Void ButtonDot_Click(System::Object^  sender, System::EventArgs^  e) {
		    if (counter == 0){
		    Display->Text = Display->Text + ".";
		    counter = 1;
		    }
	    }
System::Void ButtonRadical_Click(System::Object^  sender, System::EventArgs^  e) {
		   valueInit = Convert::ToDouble(Display->Text);
		   valueInit = sqrt(valueInit);
		   Display->Text = Convert::ToString(valueInit);
	    }
System::Void ButtonPower_Click(System::Object^  sender, System::EventArgs^  e) {
		    if(status == 0){
		    valueInit = Convert::ToDouble(Display->Text);
		    Display->Text = "";
		    operation = '^';
		    counter = 0;
		    status = 1;
		    }
	    }

System::Void ButtonNegate_Click(System::Object^  sender, System::EventArgs^  e) {

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