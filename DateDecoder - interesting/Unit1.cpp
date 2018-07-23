//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Word Year, Month, Day, Hour, Min, Sec, MSec;
  TDateTime dtPresent = Now();
  DecodeDate(dtPresent, Year, Month, Day);
  Label1->Caption = AnsiString("Today is Day ") + IntToStr(Day) + AnsiString(" of Month ") + IntToStr(Month) + AnsiString(" of Year ") + IntToStr(Year);
  DecodeTime(dtPresent, Hour, Min, Sec, MSec);
  Label2->Caption = AnsiString("The time is Minute ") + IntToStr(Min) + AnsiString(" of Hour ") + IntToStr(Hour);
}
//---------------------------------------------------------------------------
