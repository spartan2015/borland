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
if (Table1->Active){
        Table1->Active=false;
        Table1->TableName=OpenDialog1->FileName;
        Table1->Active=true;  }
else  {
        Table1->TableName=OpenDialog1->FileName;
        Table1->Active=true;  }
for (int i=0 ; i<Table1->FieldCount; i++){
ComboBox1->Items->Add(Table1->Fields->Fields[i]->FieldName);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
OpenDialog1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Table1->Last();
Table1->Append();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Table1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
Table1->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
Table1->Close();
ComboBox1->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked==true) Table1->Filtered=true;
else Table1->Filtered=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
if (ComboBox1->Text!=NULL)
if (Edit1->Text!=NULL)
        Table1->Filter=ComboBox1->Text+"='"+Edit1->Text+"'";        
}
//---------------------------------------------------------------------------

