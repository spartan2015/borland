//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcontactiv *contactiv;
//---------------------------------------------------------------------------
__fastcall Tcontactiv::Tcontactiv(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcontactiv::SpeedButton2Click(TObject *Sender)
{
dm1->stcont->Close();
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tcontactiv::SpeedButton1Click(TObject *Sender)
{
dm1->stcont->Append();
}
//---------------------------------------------------------------------------

void __fastcall Tcontactiv::SpeedButton3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        dm1->stcont->Delete();        
}
//---------------------------------------------------------------------------

