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

void __fastcall TForm1::LoadlistExecute(TObject *Sender)
{
Label1->Caption=Table1->FieldCount;

for(int i = 0; i < Table1->FieldCount; i++)
    ListBox1->Items->Add(Table1->Fields->Fields[i]->FieldName);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddExecute(TObject *Sender)
{
ListBox2->Items->Add(ListBox1->Items->Strings[ListBox1->ItemIndex]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteExecute(TObject *Sender)
{
ListBox2->Items->Delete(ListBox2->ItemIndex);
}
//---------------------------------------------------------------------------

