//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit20.h"
#include "Unit2.h"
#include "Unit13.h"
#include "Unit21.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmoneda *moneda;
//---------------------------------------------------------------------------
__fastcall Tmoneda::Tmoneda(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::radioClick(TObject *Sender)
{
if (radio->ItemIndex==1) dm->casa->Active=true;
if (radio->ItemIndex==0) dm->casa->Active=false;
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::Button1Click(TObject *Sender)
{
dm->casa->Append();
dm->casamoneda->AsString=Edit1->Text;
dm->casa->Post();
Edit1->Clear();
dm->cb->TableName="casa"+dm->casamoneda->AsString;
dm->cb->CreateTable();
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::SpeedButton1Click(TObject *Sender)
{
dm->casa->Prior();
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::SpeedButton2Click(TObject *Sender)
{
dm->casa->Next();        
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) {
dm->cb->TableName="casa"+dm->casamoneda->AsString;
dm->cb->DeleteTable();
        }
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::Button5Click(TObject *Sender)
{
radio->ItemIndex=0;
if (dm->casa->Active)dm->casa->Close();
Depozit->Show();
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tmoneda::Button4Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;

if (radio->ItemIndex==0){
        dm->casalei->TableName="casalei";
        dm->casalei->Active=true;
        casabancalei->Show();
        }
if (radio->ItemIndex==1){
        dm->cb->TableName="casa"+StringReplace(dm->casamoneda->AsString," ","z",Flags);
        dm->cb->Active=true;
        casabanca->Show();
        }
}
//---------------------------------------------------------------------------
