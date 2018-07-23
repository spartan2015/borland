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
dm1->Table6->Append();
FocusControl(DBEdit1);        
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button2Click(TObject *Sender)
{
Set <TLocateOption,0,1> flags;
flags <<loCaseInsensitive;
TReplaceFlags Flags;
Flags << rfReplaceAll;
dm1->Table6->Edit();
dm1->Table6->Post();
dm1->Table6->First();
dm1->Table4->Open();
for (int i=1; i<dm1->Table6->RecordCount+1; i++) {
        dm1->Table4->First();
        bool seeker=dm1->Table4->Locate("Simbol",dm1->Table6Cont->AsString, flags);
        if (seeker){
        dm1->Table6->Edit();
        dm1->Table6Denumire->AsString=dm1->Table4Denumire->AsString;
        dm1->Table6io->AsBoolean=dm1->Table4io->AsBoolean;dm1->Table4io->AsBoolean;
        dm1->Table6->Post();
        }
        if(!seeker) {
        ShowMessage("Not found");
        dm1->Table6->Edit();
        dm1->Table6Denumire->AsString="Negasit in planul de conturi";
        dm1->Table6io->AsBoolean=false;
        dm1->Table6->Post();
        }
        dm1->Table6->Next();
        }
dm1->Table4->Close();
if (CheckBox1->State==cbChecked){
        dm1->stcont->Open();
        dm1->Table6->First();
        for (int k=1; k<dm1->Table6->RecordCount+1; k++) {
         bool sek=dm1->stcont->Locate("cont", dm1->Table6Cont->AsString, flags);
         if (!sek) { dm1->stcont->Append();
                     dm1->stcontcont->AsString=dm1->Table6Cont->AsString;
                     dm1->stcontstare->AsBoolean=true;
                     dm1->stcont->Post();
                        }
        dm1->Table6->Next();
                        }
dm1->stcont->Active=false;
        }

}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) dm1->Table6->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button4Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi tot?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes){
        dm1->Table6->Close();
        dm1->Table6->EmptyTable();
if  (!dm1->Table6->Active) dm1->Table6->Active=true;
 }
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::Button5Click(TObject *Sender)
{
dm1->Table6->Close();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TRulaj_cumulat::FormActivate(TObject *Sender)
{
if (!dm1->Table6->Active) dm1->Table6->Active=true;
}
//---------------------------------------------------------------------------

