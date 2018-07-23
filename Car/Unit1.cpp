//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMain *Main;
//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMain::InchideExecute(TObject *Sender)
{
dm->firme->Close();
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TMain::SpeedButton8Click(TObject *Sender)
{
dm->firme->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TMain::SpeedButton9Click(TObject *Sender)
{
dm->firme->Next();
}
//---------------------------------------------------------------------------

void __fastcall TMain::InsertExecute(TObject *Sender)
{
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBMemo1->ReadOnly=false;

SpeedButton5->Caption="Protejeaza";
dm->firme->Append();
FocusControl(DBEdit1);      
}
//---------------------------------------------------------------------------

void __fastcall TMain::DeleteExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi??",mtWarning,TMsgDlgButtons() <<mbYes<<mbNo, 0)==mrYes)
        dm->firme->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TMain::SaveExecute(TObject *Sender)
{
dm->firme->Edit();
dm->firme->Post();
}
//---------------------------------------------------------------------------

void __fastcall TMain::AccesExecute(TObject *Sender)
{
dm->ang->DatabaseName="data\\"+dm->firmeNume_firma->AsString+"\\";
dm->ang->Active=true;

dm->fise->DatabaseName="data\\"+dm->firmeNume_firma->AsString+"\\";

Main->Hide();
angajati->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMain::CreazaExecute(TObject *Sender)
{
CreateDir("data\\"+dm->firmeNume_firma->AsString);
dm->ang->DatabaseName="data\\"+dm->firmeNume_firma->AsString+"\\";
dm->fise->DatabaseName="data\\"+dm->firmeNume_firma->AsString+"\\";
if (dm->ang->Exists)
        if (MessageDlg("Deja exista angajati.db, inlocuiesc?",mtWarning,TMsgDlgButtons() <<mbYes<<mbNo, 0)==mrYes)
        dm->ang->CreateTable();
        else return;
else dm->ang->CreateTable();
if (dm->fise->Exists)
        if (MessageDlg("Deja exista fise.db, inlocuiesc?",mtWarning,TMsgDlgButtons() <<mbYes<<mbNo, 0)==mrYes)
        dm->fise->CreateTable();
        else return;
else dm->fise->CreateTable();
}
//---------------------------------------------------------------------------

void __fastcall TMain::ModificaExecute(TObject *Sender)
{
if (SpeedButton5->Caption=="Modifica") {
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBMemo1->ReadOnly=false;

SpeedButton5->Caption="Protejeaza";
dm->firme->Edit();
}
else {
DBEdit1->ReadOnly=true;
DBEdit2->ReadOnly=true;
DBEdit3->ReadOnly=true;
DBEdit4->ReadOnly=true;
DBEdit5->ReadOnly=true;
DBEdit6->ReadOnly=true;
DBEdit7->ReadOnly=true;
DBEdit8->ReadOnly=true;
DBEdit9->ReadOnly=true;
DBEdit10->ReadOnly=true;
DBEdit11->ReadOnly=true;
DBEdit12->ReadOnly=true;
DBEdit13->ReadOnly=true;
DBEdit14->ReadOnly=true;
DBEdit15->ReadOnly=true;
DBMemo1->ReadOnly=true;

SpeedButton5->Caption="Modifica";
        }
}
//---------------------------------------------------------------------------

