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
        if (dm->io->Active) {
if ((StrToFloat(MaskEdit1->Text)+dm->iosuma_achitata->AsFloat) > dm->iototal_plata->AsFloat){
        float suma=(StrToFloat(MaskEdit1->Text)+dm->iosuma_achitata->AsFloat)- dm->iototal_plata->AsFloat;
        ShowMessage("Atentie! Depasire total factura cu: "+FloatToStr(suma));
        return;
        }
dm->io->Edit();
dm->iosuma_achitata->AsFloat+=StrToFloat(MaskEdit1->Text);
dm->io->Post();
dm->casalei->Edit();
DBEdit9->Field->AsFloat-=StrToFloat(MaskEdit1->Text);
dm->casalei->Post();
        }
        //====
        if (dm->valuta->Active) {
if ((StrToFloat(MaskEdit1->Text)+dm->valutasuma_achitata->AsFloat) > dm->valutatotal_plata->AsFloat){
        float suma=(StrToFloat(MaskEdit1->Text)+dm->valutasuma_achitata->AsFloat)- dm->valutatotal_plata->AsFloat;
        ShowMessage("Atentie! Depasire total factura cu: "+FloatToStr(suma));
        return;
        }
dm->valuta->Edit();
dm->valutasuma_achitata->AsFloat+=StrToFloat(MaskEdit1->Text);
dm->valuta->Post();
dm->cb->Edit();
DBEdit9->Field->AsFloat-=StrToFloat(MaskEdit1->Text);
dm->cb->Post();
        }
// === end cb
transfer+=StrToFloat(MaskEdit1->Text);
MaskEdit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button3Click(TObject *Sender)
{
// - anuleaza transferurile facute numai in sesiunea asta !
if (dm->io->Active) {
        dm->io->Edit();
        dm->iosuma_achitata->AsFloat-=transfer;
        dm->io->Post();
        dm->casalei->Edit();
        DBEdit9->Field->AsFloat+=transfer;
        dm->casalei->Post();
        }
if (dm->valuta->Active) {
        dm->valuta->Edit();
        dm->valutasuma_achitata->AsFloat-=transfer;
        dm->valuta->Post();
        dm->cb->Edit();
        DBEdit9->Field->AsFloat+=transfer;
        dm->cb->Post();
        }
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button2Click(TObject *Sender)
{
dm->platilei->Active=true;
dm->plativaluta->Active=true;
        if (dm->cb->Active){
//ShowMessage("Nu puteti achita cu valuta aici");
//return;
int lola=dm->plativaluta->RecordCount+1;
            dm->plativaluta->Append();
            dm->plativalutatrick->AsString=dm->valutanr_factura->AsString+IntToStr(lola);
            dm->plativalutanr_factura->AsString=dm->valutanr_factura->AsInteger;
            dm->plativalutaio->AsString=dm->cbio->AsString;
            dm->plativalutatip->AsString=dm->cbtip->AsString;
            dm->plativalutanr_act_achitare->AsString=dm->cbnr_act->AsString;
            dm->plativalutacurs_valutar->AsFloat=dm->cbcurs_valutar->AsFloat;
 if (dm->cbio->AsString=="intrare") dm->plativalutavaluta_intrare->AsFloat=transfer;
 if (dm->cbio->AsString=="iesire") dm->plativalutavaluta_iesire->AsFloat=transfer;
            dm->plativalutaintrare->AsFloat=dm->plativalutavaluta_intrare->AsFloat*dm->cbcurs_valutar->AsFloat;
            dm->plativalutaiesire->AsFloat=dm->plativalutavaluta_iesire->AsFloat*dm->cbcurs_valutar->AsFloat;
            dm->plativaluta->Post();
            }
//===========
        if (dm->casalei->Active){
int lola=dm->platilei->RecordCount+1;
            dm->io->Edit();
            if (dm->casalei->TableName=="casalei") dm->ioc->AsBoolean=true;
            if (dm->casalei->TableName!="casalei") dm->iob->AsBoolean=true;
            dm->io->Post();
            dm->platilei->Append();
            dm->platileitrick->AsString=dm->ionr_factura->AsString+IntToStr(lola);
            dm->platileinr_factura->AsString=dm->ionr_factura->AsInteger;
            dm->platileiio->AsString=dm->casaleiio->AsString;
            dm->platileitip->AsString=dm->casaleitip->AsString;
            dm->platileinr_act_achitare->AsString=dm->casaleinr_act->AsString;
 if (dm->casaleiio->AsString=="intrare") dm->platileiintrare->AsFloat=transfer;
 if (dm->casaleiio->AsString=="iesire") dm->platileiiesire->AsFloat=transfer;
            dm->platilei->Post();
            }
dm->platilei->Active=false;
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tplatafactura::Button4Click(TObject *Sender)
{
        if (dm->io->Active) {
if (DBEdit9->Field->AsFloat >= dm->iototal_plata->AsFloat)
         MaskEdit1->Text = FloatToStr(dm->iototal_plata->AsFloat);
if (DBEdit9->Field->AsFloat < dm->iototal_plata->AsFloat)
         MaskEdit1->Text = FloatToStr(DBEdit9->Field->AsFloat);
         }
        if (dm->valuta->Active) {
if (DBEdit9->Field->AsFloat >= dm->valutatotal_plata->AsFloat)
         MaskEdit1->Text = FloatToStr(dm->valutatotal_plata->AsFloat);
if (DBEdit9->Field->AsFloat < dm->valutatotal_plata->AsFloat)
         MaskEdit1->Text = FloatToStr(DBEdit9->Field->AsFloat);
         }
}
//---------------------------------------------------------------------------
