//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "dos.h"
#include <stdio.h>

struct date d;
struct time t;

int ms=0;
int sec=0;
int min=0;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
    TimerEdit->Clear();
    StopwatchEdit->Clear();
    STOP->Enabled = false;
    Stopwatch->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::STARTClick(TObject *Sender)
{
        START->Enabled = false;
        STOP->Enabled = true;
        Stopwatch->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::STOPClick(TObject *Sender)
{
        START->Enabled = true;
        STOP->Enabled = false;
        Stopwatch->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimeTimer(TObject *Sender)
{
      char buff[20];
      getdate(&d);
      gettime(&t);
      sprintf(buff,"%02d-%02d-%4d\t\t%02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,
      t.ti_hour,t.ti_min,t.ti_sec);

      TimerEdit->Text=(AnsiString)buff;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::StopwatchTimer(TObject *Sender)
{
        ms+=10;
        if(ms == 100)
        {
          sec++;
          ms = 0;
        }

        if(sec == 60)
        {
          min++;
          sec=0;
        }

        char buff[20];
        sprintf(buff,"       %02d:%02d:%02d",min,sec,ms);
        StopwatchEdit->Text = (AnsiString)buff;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EXITClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RESETClick(TObject *Sender)
{
        ms = 0;
        sec = 0;
        min = 0;

        char buff[20];
        sprintf(buff,"       %02d:%02d:%02d",min,sec,ms);
        StopwatchEdit->Text = (AnsiString)buff;
}
//---------------------------------------------------------------------------
