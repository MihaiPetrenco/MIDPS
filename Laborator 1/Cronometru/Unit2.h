//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *START;
        TButton *STOP;
        TButton *RESET;
        TButton *EXIT;
        TEdit *StopwatchEdit;
        TLabel *TextCenter;
        TLabel *TextUpper;
        TEdit *TimerEdit;
        TTimer *Time;
        TTimer *Stopwatch;
        void __fastcall STARTClick(TObject *Sender);
        void __fastcall STOPClick(TObject *Sender);
        void __fastcall TimeTimer(TObject *Sender);
        void __fastcall StopwatchTimer(TObject *Sender);
        void __fastcall EXITClick(TObject *Sender);
        void __fastcall RESETClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
