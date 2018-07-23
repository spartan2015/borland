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
TLocateOptions Flags;
Flags <<loCaseInsensitive;

Table1->First();
for (int i=0; i<Table1->RecordCount; i++){
     bool seeker=Table2->Locate("Cont",Table1Cont->AsString, Flags);
     if (!seeker)
     ShowMessage("Nu este"+Table1Cont->AsString);
     Table1->Next();
        }
}
//---------------------------------------------------------------------------
 