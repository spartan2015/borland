//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit2.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmsgmagazie *msgmagazie;
//---------------------------------------------------------------------------
__fastcall Tmsgmagazie::Tmsgmagazie(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmsgmagazie::Button2Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall Tmsgmagazie::Button1Click(TObject *Sender)
{
Close();
dm->magazie->Active=true;
dm->cproduse->Active=true;
if (dm->io->TableName=="intrari") magazie->radio1->ItemIndex=0;
else magazie->radio1->ItemIndex=1;
dm->magazie->Filtered=true;
dm->magazie->Filter="nr_factura='"+dm->ionr_factura->AsString+"'";
magazie->CheckBox1->State=cbChecked;
magazie->ShowModal();
}
//---------------------------------------------------------------------------
