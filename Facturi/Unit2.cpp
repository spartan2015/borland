//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tdm *dm;
//---------------------------------------------------------------------------
__fastcall Tdm::Tdm(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdm::DataModuleCreate(TObject *Sender)
{
Table1->Active=true;
}
//---------------------------------------------------------------------------




void __fastcall Tdm::ioCalcFields(TDataSet *DataSet)
{
if (dm->iosuma_achitata->AsFloat == dm->iototal_plata->AsFloat){
        dm->ioachitare_totala->AsBoolean=true;
        dm->ioachitare_partiala->AsBoolean=false;
        }
if (dm->iosuma_achitata->AsFloat < dm->iototal_plata->AsFloat){
        dm->ioachitare_partiala->AsBoolean=true;
        dm->ioachitare_totala->AsBoolean=false;
        }
}
//---------------------------------------------------------------------------


void __fastcall Tdm::cpiesireCalcFields(TDataSet *DataSet)
{
dm->cpiesirepret->AsFloat=dm->cpreturipret->AsFloat+dm->cpiesireadaos->AsFloat/100*dm->cpreturipret->AsFloat;
dm->cpiesiretva->AsFloat=dm->cpiesirepret->AsFloat*dm->cprodusetva->AsFloat/100;
dm->cpiesirepret_final->AsFloat=dm->cpiesiretva->AsFloat+dm->cpiesirepret->AsFloat;
}
//---------------------------------------------------------------------------

