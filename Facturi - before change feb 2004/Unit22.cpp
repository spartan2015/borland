//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit22.h"
#include "Unit2.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit24.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tregistrucasalei *registrucasalei;
//---------------------------------------------------------------------------
__fastcall Tregistrucasalei::Tregistrucasalei(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tregistrucasalei::Button1Click(TObject *Sender)
{
if (dm->casalei->TableName.Pos("casa")!=0) {
if (RadioGroup1->ItemIndex==0){
   raportcasalei->QRGroup1->Expression="casalei.data";
   raportcasalei->QRBand3->Enabled=true;

   raportcasalei->QRDBText12->Enabled=true;
   raportcasalei->QRLabel7->Caption="Tranzactii in ziua de:";


 raportcasalei->QuickRep1->Preview();
        }
if (RadioGroup1->ItemIndex==1) {
   raportcasalei->QRGroup1->Expression=NULL;
   raportcasalei->QRBand3->Enabled=false;

   raportcasalei->QRDBText12->Enabled=false;
   raportcasalei->QRLabel17->Caption="Tranzactii "+dm->Table2an->AsString+" "+dm->Table2luna->AsString;


       raportcasalei->QuickRep1->Preview();
        }
        }
if (dm->casalei->TableName.Pos("casa")==0) {
if (RadioGroup1->ItemIndex==0){
   raport_banca_lei->QRGroup1->Expression="casalei.data";
   raport_banca_lei->QRBand3->Enabled=true;

   raport_banca_lei->QRDBText12->Enabled=true;
   raport_banca_lei->QRLabel7->Caption="Tranzactii in ziua de:";


 raport_banca_lei->QuickRep1->Preview();
        }
if (RadioGroup1->ItemIndex==1){
   raport_banca_lei->QRGroup1->Expression=NULL;
   raport_banca_lei->QRBand3->Enabled=false;

   raport_banca_lei->QRDBText12->Enabled=false;
   raport_banca_lei->QRLabel17->Caption="Tranzactii "+dm->Table2an->AsString+" "+dm->Table2luna->AsString;


       raport_banca_lei->QuickRep1->Preview();
        }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tregistrucasalei::Button2Click(TObject *Sender)
{
RadioGroup1->ItemIndex=-1;
Close();
}
//---------------------------------------------------------------------------
