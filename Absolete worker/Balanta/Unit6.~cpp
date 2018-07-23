//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRulaj_cumulat *Rulaj_cumulat;
//---------------------------------------------------------------------------
__fastcall TRulaj_cumulat::TRulaj_cumulat(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button1Click(TObject *Sender)
{
DataModule1->Table6->Append();        
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button2Click(TObject *Sender)
{
Set <TLocateOption,0,1> flags;
flags <<loCaseInsensitive;
DataModule1->Table6->Edit();
DataModule1->Table6->Post();
DataModule1->Table4->Open();
for (int i=1; i<DataModule1->Table6->RecordCount+1; i++) {
        DataModule1->Table4->Locate("Simbol", DataModule1->Table6Cont->AsString, flags);
        DataModule1->Table6->Edit();
        DataModule1->Table6Denumire->AsString=DataModule1->Table4Denumire->AsString;
        DataModule1->Table6->Post();
        DataModule1->Table6->Next();
                }
DataModule1->Table4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) DataModule1->Table6->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button4Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi tot?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) DataModule1->Table6->EmptyTable();
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button5Click(TObject *Sender)
{
Hide();
}
//---------------------------------------------------------------------------

