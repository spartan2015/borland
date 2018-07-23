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
Table1->Active=true;
Table1->First();
int compa=Edit1->Text.ToInt();
for (int i=0; i<4; i++)  {
      Edit2->Text=Table1v1->AsString;
      Edit3->Text=Table1v2->AsString;
      if  (compa>=(Table1v1->AsInteger) & compa<=(Table1v2->AsInteger))
      {Label1->Caption=Table1val->AsString; }
      Table1->Next();
      ShowMessage(i);
      }                         }
//---------------------------------------------------------------------------

