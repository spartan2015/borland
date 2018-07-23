//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit16.h"
#include "Unit2.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit25.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tregistrucasa *registrucasa;
//---------------------------------------------------------------------------
__fastcall Tregistrucasa::Tregistrucasa(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tregistrucasa::Button2Click(TObject *Sender)
{
RadioGroup1->ItemIndex=-1;
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tregistrucasa::Button1Click(TObject *Sender)
{
if (dm->cb->TableName.Pos("casa")==0) {
if (RadioGroup1->ItemIndex==0){
   raportcomplet->QRGroup1->Expression="cb.data";
   raportcomplet->QRBand3->Enabled=true;

   raportcomplet->QRDBText15->Enabled=true;
   raportcomplet->QRLabel22->Caption="Tranzactii in ziua de:";

 raportcomplet->QuickRep1->Preview();
        }
if (RadioGroup1->ItemIndex==1){
   raportcomplet->QRGroup1->Expression=NULL;
   raportcomplet->QRBand3->Enabled=false;

   raportcomplet->QRDBText15->Enabled=false;
   raportcomplet->QRLabel22->Caption="Tranzactii "+dm->Table2an->AsString+" "+dm->Table2luna->AsString;

        raportcomplet->QuickRep1->Preview();
        }
        }
if (dm->cb->TableName.Pos("casa")!=0) {
if (RadioGroup1->ItemIndex==0){
   raport_banca_valuta->QRGroup1->Expression="cb.data";
   raport_banca_valuta->QRBand3->Enabled=true;

   raport_banca_valuta->QRDBText15->Enabled=true;
   raport_banca_valuta->QRLabel22->Caption="Tranzactii in ziua de:";

 raport_banca_valuta->QuickRep1->Preview();
        }
if (RadioGroup1->ItemIndex==1){
   raport_banca_valuta->QRGroup1->Expression=NULL;
   raport_banca_valuta->QRBand3->Enabled=false;

   raport_banca_valuta->QRDBText15->Enabled=false;
   raport_banca_valuta->QRLabel22->Caption="Tranzactii "+dm->Table2an->AsString+" "+dm->Table2luna->AsString;

        raport_banca_valuta->QuickRep1->Preview();
        }
        }
}
//---------------------------------------------------------------------------

