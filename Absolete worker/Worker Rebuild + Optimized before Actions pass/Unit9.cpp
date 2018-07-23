//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDir_dialog *Dir_dialog;
//---------------------------------------------------------------------------
__fastcall TDir_dialog::TDir_dialog(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDir_dialog::Button1Click(TObject *Sender)
{
Dir_dialog->Close();
}
//---------------------------------------------------------------------------

