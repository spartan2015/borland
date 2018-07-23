//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsarbatorilegale *sarbatorilegale;
//---------------------------------------------------------------------------
__fastcall Tsarbatorilegale::Tsarbatorilegale(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::Edit2KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_RETURN){
        D1->sl->Append();
        D1->slluna->AsString=Edit1->Text;
        D1->slzi->AsInteger=StrToInt(Edit2->Text);
        D1->sl->Post();
        Edit1->Clear();
        Edit2->Clear();
        FocusControl(Edit1);
        }
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::SpeedButton1Click(TObject *Sender)
{
        D1->sl->Append();
        D1->slluna->AsString=Edit1->Text;
        D1->slzi->AsInteger=StrToInt(Edit2->Text);
        D1->sl->Post();
        Edit1->Clear();
        Edit2->Clear();
        FocusControl(Edit1);
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::SpeedButton2Click(TObject *Sender)
{
if (MessageDlg("Sigur stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        D1->sl->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::SpeedButton3Click(TObject *Sender)
{
D1->sl->Close();
Close();        
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked==true)
        D1->sl->Filtered=true;
else D1->sl->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall Tsarbatorilegale::Edit3Change(TObject *Sender)
{
if (Edit3->Text!=NULL)
D1->sl->Filter=ComboBox1->Text+"='"+Edit3->Text+"*'";
}
//---------------------------------------------------------------------------
