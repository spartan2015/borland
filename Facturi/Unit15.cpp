//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit15.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmesajcasabanca *mesajcasabanca;
//---------------------------------------------------------------------------
__fastcall Tmesajcasabanca::Tmesajcasabanca(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmesajcasabanca::Button1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
