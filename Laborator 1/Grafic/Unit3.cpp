//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "dos.h"
#include <stdio.h>
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

struct date d;
struct time t;

int x = 0;
int y = 100;
int step = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
    TimeEdit->Clear();
    PanelRed->Height = 0;
    PanelRed->Color = RGB(255,0,0);
    PanelBlack->Color = RGB(0,0,0);
    DrawTimer->Enabled = false;
    DrawTimer->Interval = 100;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimeTimer(TObject *Sender)
{
        char buf[20];
        getdate(&d);
        gettime(&t);
        sprintf(buf,"%02d-%02d-%4d     %02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,
        t.ti_hour,t.ti_min,t.ti_sec);
        TimeEdit->Text=(AnsiString)buf;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::STARTClick(TObject *Sender)
{
        START->Enabled = false;
        STOP->Enabled = true;
        DrawTimer->Enabled = true;
        DrawingArea -> Canvas -> Pen -> Color = clBlack;
        DrawingArea -> Canvas -> Brush -> Color = clSilver;
        DrawingArea -> Canvas -> Brush -> Style = bsCross;
        DrawingArea -> Canvas -> Rectangle(0,0,233,201);
        DrawingArea -> Canvas -> Pen -> Color = clRed;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::STOPClick(TObject *Sender)
{
        START->Enabled = true;
        STOP->Enabled = false;
        DrawTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EXITClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DrawTimerTimer(TObject *Sender)
{
        DrawingArea -> Canvas -> MoveTo(x,y);

        do
        {
           if (step % 2 == 0)
           {
              y = y + rand() % 50;
              step++;
           }

           else
           {
              y = y - rand() % 50;
              step++;
           }

        }while (y < 75 || y > 125);

        x +=1 ;
        PanelRed -> Height = y;


        DrawingArea -> Canvas -> LineTo(x,y);
        if (x >= 233)
        {
           DrawTimer -> Enabled = false;
           //PanelRed -> Height = 0;
           STOP -> Enabled = false;
           START -> Enabled = false;
        }
}
void __fastcall TForm1::RESETClick(TObject *Sender)
{
        if (x >= 233)
        START->Enabled = true;

        DrawingArea->Repaint();
        DrawingArea -> Canvas -> Pen -> Color = clBlack;
        DrawingArea -> Canvas -> Brush -> Color = clSilver;
        DrawingArea -> Canvas -> Brush -> Style = bsCross;
        DrawingArea -> Canvas -> Rectangle(0,0,233,201);
        DrawingArea -> Canvas -> Pen -> Color = clRed;
        y = 100;
        x = 0;
}
//---------------------------------------------------------------------------
