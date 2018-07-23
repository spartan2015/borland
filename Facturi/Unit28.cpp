//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit28.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcproduse *cproduse;
//---------------------------------------------------------------------------
__fastcall Tcproduse::Tcproduse(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton1Click(TObject *Sender)
{
if (dm->in->Active){
        dm->in->Append();
        dm->intrick->AsString=FloatToStr(dm->ionr_factura->AsFloat)+IntToStr(dm->in->RecordCount+1);
        dm->innr_factura->AsString=dm->ionr_factura->AsString;
        dm->inDenumire->AsString=dm->cprodusedenumire->AsString;
        dm->inunitatea->AsString=dm->cproduseum->AsString;
        dm->inptva->AsInteger=dm->cprodusetva->AsInteger;
        dm->incont->AsString=dm->cprodusecont->AsString;
        dm->inpret_unitar->AsFloat=dm->cpreturipret->AsFloat;
        dm->infc_adaos->AsInteger=dm->cpiesireadaos->AsInteger;
        dm->infc_pv->AsFloat=dm->cpiesirepret->AsFloat;
        dm->infc_tva->AsFloat=dm->cpiesiretva->AsFloat;
        dm->infc_pvtva->AsFloat=dm->cpiesirepret_final->AsFloat;
        dm->in->Post();
        }
dm->cproduse->Active=false;
dm->cpreturi->Active=false;
dm->cpiesire->Active=false;
cproduse->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton2Click(TObject *Sender)
{
dm->cproduse->Append();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton3Click(TObject *Sender)
{
dm->cproduse->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton4Click(TObject *Sender)
{
if (dm->cproduse->RecordCount==0) {
        ShowMessage("Eroare in sistem 1!");
        return;
        }
dm->cpreturi->Append();
dm->cpreturicod->AsString=dm->cprodusecod->AsString;
dm->cpreturi->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton5Click(TObject *Sender)
{
dm->cpreturi->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton6Click(TObject *Sender)
{
dm->cproduse->Edit();
dm->cproduse->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tcproduse::SpeedButton7Click(TObject *Sender)
{
if (dm->cpreturi->RecordCount==0) {
        ShowMessage("Eroare in sistem 2!");
        return;
        }
dm->cpiesire->Append();
dm->cpiesirecod_furnizor->AsString=dm->cpreturicod_furnizor->AsString;
dm->cpiesire->Post();
}
//---------------------------------------------------------------------------

void __fastcall Tcproduse::SpeedButton8Click(TObject *Sender)
{
dm->cpiesire->Delete();
}
//---------------------------------------------------------------------------

