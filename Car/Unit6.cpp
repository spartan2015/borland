//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsold_initial *sold_initial;
//---------------------------------------------------------------------------
__fastcall Tsold_initial::Tsold_initial(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsold_initial::SpeedButton1Click(TObject *Sender)
{
dm->fise->Post();
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tsold_initial::SpeedButton2Click(TObject *Sender)
{
dm->fise->Cancel();
Close();
}
//---------------------------------------------------------------------------
