//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit31.h"
#include "Unit2.h"

#include "Unit28.h"
#include "Unit30.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcnew *cnew;
//---------------------------------------------------------------------------
__fastcall Tcnew::Tcnew(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcnew::SpeedButton2Click(TObject *Sender)
{
/* old new - temporary maintained
if (dm->DataSource3->DataSet==dm->valuta) {
dm->valutain->Append();
dm->valutaintrick->AsString=FloatToStr(dm->valutanr_factura->AsFloat)+IntToStr(dm->valutain->RecordCount+1);
dm->valutain->Post();
        }

dm->in->Append();
dm->intrick->AsString=FloatToStr(dm->ionr_factura->AsFloat)+IntToStr(dm->in->RecordCount+1);
dm->in->Post();
        }
*/
dm->cproduse->Active=true;
dm->cpreturi->Active=true;
dm->cpiesire->Active=true;
cproduse->ShowModal();
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tcnew::SpeedButton3Click(TObject *Sender)
{
dm->cservicii->Active=true;
cservicii->ShowModal();
Close();
}
//---------------------------------------------------------------------------
