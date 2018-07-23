//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfiltercon *filtercon;
//---------------------------------------------------------------------------
__fastcall Tfiltercon::Tfiltercon(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfiltercon::ListBox1DblClick(TObject *Sender)
{
Edit1->Text=Edit1->Text+" "+ListBox1->Items->Strings[ListBox1->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall Tfiltercon::ListBox2Click(TObject *Sender)
{
if (ListBox2->Items->Strings[ListBox2->ItemIndex]!="AND" & ListBox2->Items->Strings[ListBox2->ItemIndex]!="OR")
Edit1->Text=Edit1->Text+" "+ListBox2->Items->Strings[ListBox2->ItemIndex]+"'editeaza'";
else
Edit1->Text=Edit1->Text+" "+ListBox2->Items->Strings[ListBox2->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall Tfiltercon::SpeedButton3Click(TObject *Sender)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall Tfiltercon::SpeedButton1Click(TObject *Sender)
{
dm->fise->Filter=Edit1->Text;
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfiltercon::SpeedButton2Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

