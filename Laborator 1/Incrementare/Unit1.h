//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Title;
        TLabel *VariableText;
        TButton *Increment;
        TButton *Decrement;
        TButton *Exit;
        TEdit *Variable;
        void __fastcall IncrementClick(TObject *Sender);
        void __fastcall DecrementClick(TObject *Sender);
        void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif