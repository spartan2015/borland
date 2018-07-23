//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TListForm *ListForm;
//---------------------------------------------------------------------------
__fastcall TListForm::TListForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TListForm::FormActivate(TObject *Sender)
{
if (Table1->Active) {
        Table1->Active=false;
        Table1->TableName="centralizator.db";
        Table1->Active=true; }
else {
        Table1->TableName="centralizator.db";
        Table1->Active=true; }
}
//---------------------------------------------------------------------------

