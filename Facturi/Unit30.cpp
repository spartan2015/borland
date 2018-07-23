//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit30.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcservicii *cservicii;
//---------------------------------------------------------------------------
__fastcall Tcservicii::Tcservicii(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcservicii::SpeedButton2Click(TObject *Sender)
{
dm->cservicii->Append();
}
//---------------------------------------------------------------------------
void __fastcall Tcservicii::SpeedButton3Click(TObject *Sender)
{
dm->cservicii->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tcservicii::SpeedButton1Click(TObject *Sender)
{
// pentru lei
if (dm->in->Active){
        dm->in->Append();
        dm->intrick->AsString=FloatToStr(dm->ionr_factura->AsFloat)+IntToStr(dm->in->RecordCount+1);
        dm->inDenumire->AsString=dm->cserviciidenumire->AsString;
        dm->inunitatea->AsString=dm->cserviciium->AsString;
        dm->inptva->AsInteger=dm->cserviciitva->AsInteger;
        dm->incont->AsString=dm->cserviciicont->AsString;
        dm->in->Post();
        }
dm->cservicii->Active=false;
cservicii->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tcservicii::SpeedButton4Click(TObject *Sender)
{
dm->cservicii->Edit();
dm->cservicii->Post();
}
//---------------------------------------------------------------------------
