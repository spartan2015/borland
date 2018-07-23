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
Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive << loPartialKey;
bool found;
found=Table1->Locate((ComboBox1->Text),(Edit1->Text),flags);
if (found) Label1->Caption="Gasit";
else Label1->Caption="Not found";
}
//---------------------------------------------------------------------------
