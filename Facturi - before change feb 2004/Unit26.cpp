//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit26.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tplatafactura *platafactura;
double transfer=0;
//---------------------------------------------------------------------------
__fastcall Tplatafactura::Tplatafactura(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button1Click(TObject *Sender)
{
if (StrToFloat(MaskEdit1->Text)>DBEdit9->Field->AsFloat){
        ShowMessage("Suma specificata depaseste disponibilul");
        MaskEdit1->Clear();
        return;
        }
if ((StrToFloat(MaskEdit1->Text)+dm->iosuma_achitata->AsFloat)>dm->iototal_plata->AsFloat){
        float suma=dm->iototal_plata->AsFloat-(StrToFloat(MaskEdit1->Text)+dm->iosuma_achitata->AsFloat);
        ShowMessage("Atentie! Depasire total factura cu: "+FloatToStr(suma));
        return;
        }
dm->iosuma_achitata->AsFloat+=StrToFloat(MaskEdit1->Text);
DBEdit9->Field->AsFloat-=StrToFloat(MaskEdit1->Text);
transfer+=StrToFloat(MaskEdit1->Text);
MaskEdit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button3Click(TObject *Sender)
{
dm->iosuma_achitata->AsFloat-=transfer;
DBEdit9->Field->AsFloat+=transfer;

Close();
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button2Click(TObject *Sender)
{
dm->plati->Active=true;
if (dm->cb->Active){
ShowMessage("Nu puteti achita cu valuta aici");
return;
/*int lola=dm->plati->RecCount+1;
            dm->plati->Append();
            dm->platitrick->AsInteger=lola;
            dm->platinr_factura->AsString=dm->ionr_factura->AsInteger;
            dm->platiio->AsString=dm->cbio->AsString;
            dm->platitip->AsString=dm->cbtip->AsString;
            dm->platinr_act_achitare->AsString=dm->cbnr_act->AsString;
            dm->platicurs_valutar->AsFloat=dm->cbcurs_valutar->AsFloat;
 if (dm->casaleiio->AsString=="intrare") dm->plativaluta_intrare->AsFloat=transfer;
 if (dm->casaleiio->AsString=="iesire") dm->plativaluta_iesire->AsFloat=transfer;
            dm->platiintrare->AsFloat=dm->plativaluta_intrare->AsFloat*dm->cbcurs_valutar->AsFloat;
            dm->platiiesire->AsFloat=dm->plativaluta_iesire->AsFloat*dm->cbcurs_valutar->AsFloat;
            dm->plati->Post();
     */       }
if (dm->casalei->Active){
int lola=dm->plati->RecordCount+1;
            dm->plati->Append();
            dm->platitrick->AsInteger=lola;
            dm->platinr_factura->AsString=dm->ionr_factura->AsInteger;
            dm->platiio->AsString=dm->casaleiio->AsString;
            dm->platitip->AsString=dm->casaleitip->AsString;
            dm->platinr_act_achitare->AsString=dm->casaleinr_act->AsString;
 if (dm->casaleiio->AsString=="intrare") dm->platiintrare->AsFloat=transfer;
 if (dm->casaleiio->AsString=="iesire") dm->platiiesire->AsFloat=transfer;
            dm->plati->Post();
            }
dm->plati->Active=false;
Close();
}
//---------------------------------------------------------------------------
