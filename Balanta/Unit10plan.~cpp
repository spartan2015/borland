//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10plan.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unitrep.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tplanconturi *planconturi;
//---------------------------------------------------------------------------
__fastcall Tplanconturi::Tplanconturi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tplanconturi::Edit1Change(TObject *Sender)
{
Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive <<loPartialKey;
dm1->Table4->Locate(ComboBox1->Text,Edit1->Text,flags);
}
//---------------------------------------------------------------------------



void __fastcall Tplanconturi::SpeedButton1Click(TObject *Sender)
{
dm1->Table4->Close();
Main->Show();
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::SpeedButton3Click(TObject *Sender)
{
dm1->Table4->Edit();
dm1->Table4->Post();
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::SpeedButton2Click(TObject *Sender)
{
FocusControl(DBEdit1);
dm1->Table4->Append();
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::SpeedButton4Click(TObject *Sender)
{
 if (MessageDlg("Sterg ?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo, 0) == mrYes)
       dm1->Table4->Delete();
 }
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::SpeedButton5Click(TObject *Sender)
{
raport_plan_conturi->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

