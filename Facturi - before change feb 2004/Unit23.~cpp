//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit23.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit21.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tbanca *banca;
//---------------------------------------------------------------------------
__fastcall Tbanca::Tbanca(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tbanca::Button4Click(TObject *Sender)
{
Close();
Depozit->Show();        
}
//---------------------------------------------------------------------------
void __fastcall Tbanca::Button1Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
randomize();
dm->banca->Append();
dm->bancabanca->AsString=Edit1->Text;
dm->bancamoneda->AsString=Edit2->Text;
dm->bancacont->AsString=Edit3->Text;
dm->banca->Post();
if (dm->bancamoneda->AsString=="lei"){
        dm->casalei->TableName=StringReplace(dm->bancabanca->AsString," ","z",Flags)+random(2000);
        while(dm->casalei->Exists) {
        dm->casalei->TableName=StringReplace(dm->bancabanca->AsString," ","z",Flags)+random(2000);
        }
        dm->banca->Edit();
        dm->bancalegatura->AsString=dm->casalei->TableName;
        dm->banca->Post();
        dm->casalei->CreateTable();
        }
if (dm->bancamoneda->AsString!="lei") {
        dm->cb->TableName=StringReplace(dm->bancabanca->AsString," ","z",Flags)+random(2000);
        while(dm->cb->Exists) {
        dm->cb->TableName=StringReplace(dm->bancabanca->AsString," ","z",Flags)+random(2000);
        }
        dm->banca->Edit();
        dm->bancalegatura->AsString=dm->cb->TableName;
        dm->banca->Post();
        dm->cb->CreateTable();
        }
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
}
//---------------------------------------------------------------------------
void __fastcall Tbanca::Button2Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;

if (MessageDlg("Sterg???",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
if (dm->bancamoneda->AsString=="lei"){
        dm->casalei->TableName=dm->bancalegatura->AsString;
        if (!dm->casalei->Exists) return;
        dm->casalei->DeleteTable();
        }
if (dm->bancamoneda->AsString!="lei"){
        dm->cb->TableName=dm->bancalegatura->AsString;
        if (!dm->cb->Exists) return;
        dm->cb->DeleteTable();
        }
      }
}
//---------------------------------------------------------------------------
void __fastcall Tbanca::Button3Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
if (dm->bancamoneda->AsString=="lei"){
        dm->casalei->TableName=dm->bancalegatura->AsString;
        if (!dm->casalei->Exists){
                ShowMessage("Eroare - modul banca - Inexistent");
                return;
                }
        dm->casalei->Active=true;
        casabancalei->Show();
        Close();
        }
if (dm->bancamoneda->AsString!="lei"){
        dm->cb->TableName=dm->bancalegatura->AsString;
        if (!dm->casalei->Exists){
                ShowMessage("Eroare - modul banca - Inexistent");
                return;
                }
        dm->cb->Active=true;
        casabanca->Show();
        Close();
        }
}
//---------------------------------------------------------------------------
