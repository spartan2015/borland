//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==0) {Form2->QuickRep1->Page->Orientation=poPortrait; Form2->QuickRep1->Preview();}
if (RadioGroup1->ItemIndex==1) {Form2->QuickRep1->Page->Orientation=poLandscape; Form2->QuickRep1->Preview();}
}
//---------------------------------------------------------------------------