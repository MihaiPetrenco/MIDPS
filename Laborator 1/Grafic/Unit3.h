//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Title;
        TEdit *TimeEdit;
        TPanel *PanelBlack;
        TPaintBox *DrawingArea;
        TBitBtn *EXIT;
        TBitBtn *STOP;
        TBitBtn *START;
        TPanel *PanelRed;
        TTimer *Time;
        TTimer *DrawTimer;
        TLabel *Label1;
        TButton *RESET;
        void __fastcall TimeTimer(TObject *Sender);
        void __fastcall STARTClick(TObject *Sender);
        void __fastcall STOPClick(TObject *Sender);
        void __fastcall EXITClick(TObject *Sender);
        void __fastcall DrawTimerTimer(TObject *Sender);
        void __fastcall RESETClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
