//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int i = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        Variable-> Text = i;
        VariableText->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IncrementClick(TObject *Sender)
{
        Variable-> Text = ++i;
        VariableText->Caption = "Valoarea este incrementata";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DecrementClick(TObject *Sender)
{
        Variable-> Text = --i;
        VariableText->Caption = "Valoarea este decrementata";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------
