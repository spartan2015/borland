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
dm->Table1->Close();
Application->Terminate();
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
dm->Table1->Append();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------

void __fastcall TMain::DeleteExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        dm->Table1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TMain::SaveExecute(TObject *Sender)
{
dm->Table1->Edit();
dm->Table1->Post();
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
dm->Table1->Edit();
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

void __fastcall TMain::AccesExecute(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;

dm->Table2->TableName=StringReplace(DBEdit1->Field->AsString," ","z", Flags);
dm->Table2->Active=true;
Hide();
Depozit->Show();
Depozit->Caption="Depozit: "+dm->Table1Nume_firma->AsString;

//centralizatoare
dm->firme->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->delegati->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";

dm->cproduse->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cservicii->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cpreturi->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cpiesire->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
}
//---------------------------------------------------------------------------


void __fastcall TMain::CreazaExecute(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
TReplaceFlags Flags;
Flags <<rfReplaceAll;

CreateDir("data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags));

dm->Table2->TableName=StringReplace(DBEdit1->Field->AsString," ","z", Flags);
dm->Table2->CreateTable();

//== centralizatoarele ====
dm->firme->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->firme->CreateTable();

dm->delegati->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->delegati->CreateTable();

dm->cproduse->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cproduse->CreateTable();

dm->cservicii->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cservicii->CreateTable();

dm->cpreturi->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cpreturi->CreateTable();

dm->cpiesire->DatabaseName="data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags)+"\\";
dm->cpiesire->CreateTable();
        }
}
//---------------------------------------------------------------------------

void __fastcall TMain::SpeedButton8Click(TObject *Sender)
{
dm->Table1->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TMain::SpeedButton9Click(TObject *Sender)
{
dm->Table1->Next();
}
//---------------------------------------------------------------------------

