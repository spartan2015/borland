//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit29.h"

#include "Unit31.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfactura *factura;
//---------------------------------------------------------------------------
__fastcall Tfactura::Tfactura(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfactura::ExitExecute(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive;
//**************
if (dm->DataSource4->DataSet==dm->in) dm->in->Active=false;
if (dm->DataSource4->DataSet==dm->valutain) dm->valutain->Active=false;
Close();
//---------- check and add (firme & delegati) if necessary -------------------
// firme
if (dm->DataSource3->DataSet==dm->io){
dm->firme->Active=true;
bool seeker=dm->firme->Locate("nume_firma",dm->ionume_firma->AsString,flags);
if (!seeker) {
        dm->firme->Append();
        dm->firmenume_firma->AsString=dm->ionume_firma->AsString;
        dm->firmej->AsString=dm->ioj->AsString;
        dm->firmefisc->AsString=dm->iofisc->AsString;
        dm->firmebanca->AsString=dm->iobanca->AsString;
        dm->firmefiliala->AsString=dm->iofiliala->AsString;
        dm->firmecont_banca->AsString=dm->iocont_banca->AsString;
        dm->firmetelefon->AsInteger=dm->iotelefon->AsInteger;
        dm->firmeadresa->AsString=dm->ioadresa->AsString;
        dm->firmeemail->AsString=dm->ioemail->AsString;
        dm->firmecapital_social->AsFloat=dm->iocapital_social->AsFloat;
        dm->firme->Post();
        }
dm->firme->Active=false;
// delegati
dm->delegati->Active=true;
bool seeker1=dm->delegati->Locate("nume_delegat",dm->ionume_delegat->AsString,flags);
if (!seeker1) {
        dm->delegati->Append();
        dm->delegatinume_delegat->AsString=dm->ionume_delegat->AsString;
        dm->delegatibuletin_delegat->AsString=dm->iobuletin_delegat->AsString;
        dm->delegati->Post();
        }
dm->delegati->Active=false;
        }
// un if
// urmeaza 2 if
if (dm->DataSource3->DataSet==dm->valuta) {
dm->valuta->Edit();
dm->valuta->Post();
//---------- check and add (firme & delegati) if necessary -------------------
// firme
dm->firme->Active=true;
bool seeker=dm->firme->Locate("nume_firma",dm->valutanume_firma->AsString,flags);
if (!seeker) {
        dm->firme->Append();
        dm->firmenume_firma->AsString=dm->valutanume_firma->AsString;
        dm->firmej->AsString=dm->valutaj->AsString;
        dm->firmefisc->AsString=dm->valutafisc->AsString;
        dm->firmebanca->AsString=dm->valutabanca->AsString;
        dm->firmefiliala->AsString=dm->valutafiliala->AsString;
        dm->firmecont_banca->AsString=dm->valutacont_banca->AsString;
        dm->firmetelefon->AsInteger=dm->valutatelefon->AsInteger;
        dm->firmeadresa->AsString=dm->valutaadresa->AsString;
        dm->firmeemail->AsString=dm->valutaemail->AsString;
        dm->firmecapital_social->AsFloat=dm->valutacapital_social->AsFloat;
        dm->firme->Post();
        }
dm->firme->Active=false;
// delegati
dm->delegati->Active=true;
bool seeker1=dm->delegati->Locate("nume_delegat",dm->valutanume_delegat->AsString,flags);
if (!seeker1) {
        dm->delegati->Append();
        dm->delegatinume_delegat->AsString=dm->valutanume_delegat->AsString;
        dm->delegatibuletin_delegat->AsString=dm->valutabuletin_delegat->AsString;
        dm->delegati->Post();
        }
dm->delegati->Active=false;
factura->Label31->Visible=false;
factura->DBEdit32->Visible=false;
factura->DBEdit32->DataField="";
factura->DBEdit32->Enabled=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::StergeExecute(TObject *Sender)
{
if (dm->DataSource5->DataSet==dm->in) {
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes){
        dm->in->Delete();
// dupa stergere se reindexeaza... start
dm->in->First();
for (int i=0;i<dm->in->RecordCount;i++){
        dm->in->Edit();
        dm->intrick->AsString=dm->ionr_factura->AsString+IntToStr(dm->in->RecNo);
        dm->in->Post();
        dm->in->Next();
        }
//end indexare.
        }
                }
if (dm->DataSource5->DataSet==dm->valutain) {
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes){
        dm->valutain->Delete();
// dupa stergere se reindexeaza... start
dm->valutain->First();
for (int i=0;i<dm->valutain->RecordCount;i++){
        dm->valutain->Edit();
        dm->valutaintrick->AsString=dm->valutanr_factura->AsString+IntToStr(dm->valutain->RecNo);
        dm->valutain->Post();
        dm->valutain->Next();
        }
//end indexare.
        }
                }
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::SalveazaExecute(TObject *Sender)
{
TLocateOptions flags;
flags << loCaseInsensitive;

dm->magazie->Active=true;
dm->cproduse->Active=true;
dm->stoc->Active=true;
int maga=0;

if (dm->DataSource3->DataSet==dm->io) {
if (dm->ionr_factura==NULL) {
        ShowMessage("Numar factura obligatoriu, refaceti !");
        return;
        }
dm->in->Edit();
dm->in->Post();
dm->io->Edit();
dm->in->First();

for (int i=1;i<dm->in->RecordCount+1; i++) {
        if (dm->inverificat->AsBoolean!=true){
        dm->in->Edit();
        dm->invaloarea->AsFloat=dm->inpret_unitar->AsFloat*dm->incantitate->AsFloat;
        dm->intva->AsFloat=(dm->invaloarea->AsFloat*dm->inptva->AsInteger)/100;
        dm->inverificat->AsBoolean=true;
        dm->in->Post();
                if (dm->incont->AsString.SubString(1,1)==3) {
        maga++;
        bool v1=dm->cproduse->Locate("denumire",dm->inDenumire->AsString,flags);
        if (!v1) return;
        dm->magazie->Append();
        dm->magazietrick->AsString=dm->cprodusecod->AsString+(dm->magazie->RecordCount+1);
        dm->magazienr_factura->AsInteger=dm->ionr_factura->AsInteger;
        dm->magazienume_firma->AsString=dm->ionume_firma->AsString;
        dm->magaziedata_factura->AsString=dm->iodata_factura->AsString;
        dm->magazieum->AsString=dm->inunitatea->AsString;
        if (dm->io->TableName=="intrari") dm->magazieintrare->AsInteger=dm->incantitate->AsInteger;
        if (dm->io->TableName=="iesiri") dm->magazieiesire->AsInteger=dm->incantitate->AsInteger;
        dm->magaziepu->AsFloat=dm->inpret_unitar->AsFloat;
        dm->magazievaloarea->AsFloat=dm->invaloarea->AsFloat;
        dm->magazietva->AsFloat=dm->intva->AsFloat;
        dm->magaziecont->AsString=dm->incont->AsString;
        //*
        dm->magaziefc_adaos->AsInteger=dm->infc_adaos->AsInteger;
        dm->magaziefc_pv->AsFloat=dm->infc_pv->AsFloat;
        dm->magaziefc_tva->AsFloat=dm->infc_tva->AsFloat;
        dm->magaziefc_pvtva->AsFloat=dm->infc_pvtva->AsFloat;
        //*
        dm->magazie->Post();
if (dm->magazie->RecNo > 1) {
        dm->magazie->Prior();
        int stoc=dm->magaziestoc->AsInteger;
        dm->magazie->Next();
        dm->magazie->Edit();
        dm->magaziestoc->AsInteger=stoc;
        dm->magazie->Post();
        }
bool seek=dm->stoc->Locate("Denumire",dm->inDenumire->AsString,flags);
dm->magazie->Edit();
        if (seek){
        dm->magaziestoc->AsInteger+=dm->stocstoc->AsInteger;
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
        if (!seek){
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
dm->magazie->Post();
        }
        dm->iototal_valoare->AsFloat+=dm->invaloarea->AsFloat;
        dm->iototal_tva->AsFloat+=dm->intva->AsFloat;

                }
        dm->in->Next();
        }
        dm->iototal_plata->AsFloat=dm->iototal_valoare->AsFloat+dm->iototal_tva->AsFloat;
dm->io->Post();
                        }
//------------------------ primul terminat
// eroare in implementarea pe valuta de verificat;
/*
if (dm->DataSource3->DataSet==dm->valuta) {
dm->valutain->Edit();
dm->valutain->Post();
dm->valuta->Edit();
dm->valutain->First();
for (int i=1;i<dm->valutain->RecordCount+1; i++) {
        if (dm->valutaincont->AsString.SubString(1,1)==3) {
        maga++;
        dm->magazie->Append();
        dm->magazienume_firma->AsString=dm->valutanume_firma->AsString;
        dm->magaziej->AsString=dm->valutaj->AsString;
        dm->magaziefisc->AsString=dm->valutafisc->AsString;
        dm->magazienr_factura->AsInteger=dm->valutanr_factura->AsInteger;
        dm->magaziedata_factura->AsString=dm->valutadata_factura->AsString;
        dm->magazieDenumire->AsString=dm->valutainDenumire->AsString;
        dm->magazieunitatea->AsString=dm->valutainunitatea->AsString;
        if (dm->valuta->TableName=="import")
        dm->magazieintrare->AsInteger=dm->valutaincantitate->AsInteger;
        if (dm->valuta->TableName=="export")
        dm->magazieiesire->AsInteger=dm->valutaincantitate->AsInteger;
bool seek=dm->stoc->Locate("Denumire",dm->valutainDenumire->AsString,flags);
        if (seek){
        dm->magaziestoc->AsInteger=dm->stocstoc->AsInteger;
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
        if (!seek){
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
        dm->magaziepret_unitar->AsFloat=dm->valutainpret_unitar->AsFloat;
        dm->magazievaloarea->AsFloat=dm->valutainvaloarea->AsFloat;
        dm->magazietva->AsFloat=dm->valutaintva->AsFloat;
        dm->magaziecont->AsString=dm->valutaincont->AsString;

        if (dm->valuta->TableName=="import") dm->magazietip->AsString="import";
        if (dm->valuta->TableName=="export") dm->magazietip->AsString="export";
        dm->magazie->Post();
        }
        dm->valutatotal_valoare->AsFloat+=dm->valutainvaloarea->AsFloat;
        dm->valutatotal_tva->AsFloat+=dm->valutaintva->AsFloat;
        dm->valutain->Next();
        }
                dm->valutatotal_plata->AsFloat=dm->valutatotal_valoare->AsFloat+dm->valutatotal_tva->AsFloat;
dm->valuta->Post();
        }
        */
// separat de ifuri
dm->magazie->Active=false;
dm->cproduse->Active=false;
dm->stoc->Active=false;
msgmagazie->Label2->Caption=IntToStr(maga);
msgmagazie->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::PrintExecute(TObject *Sender)
{
if (dm->DataSource3->DataSet==dm->io) {
if (dm->io->TableName=="intrari") {
        raport_factura->QRDBText1->Left=68;
        raport_factura->QRDBText2->Left=68;
        raport_factura->QRDBText3->Left=68;
        raport_factura->QRDBText4->Left=68;
        raport_factura->QRDBText5->Left=68;
        raport_factura->QRDBText6->Left=68;
        raport_factura->QRDBText7->Left=68;
        raport_factura->QRDBText8->Left=68;
        raport_factura->QRDBText9->Left=68;
        raport_factura->QRDBText10->Left=613;
        raport_factura->QRDBText11->Left=613;
        raport_factura->QRDBText12->Left=613;
        raport_factura->QRDBText13->Left=613;
        raport_factura->QRDBText14->Left=613;
        raport_factura->QRDBText15->Left=613;
        raport_factura->QRDBText16->Left=613;
        raport_factura->QRDBText17->Left=613;
        raport_factura->QRDBText18->Left=613;
        }
if (dm->io->TableName=="iesiri") {
        raport_factura->QRDBText1->Left=613;
        raport_factura->QRDBText2->Left=613;
        raport_factura->QRDBText3->Left=613;
        raport_factura->QRDBText4->Left=613;
        raport_factura->QRDBText5->Left=613;
        raport_factura->QRDBText6->Left=613;
        raport_factura->QRDBText7->Left=613;
        raport_factura->QRDBText8->Left=613;
        raport_factura->QRDBText9->Left=613;
        raport_factura->QRDBText10->Left=68;
        raport_factura->QRDBText11->Left=68;
        raport_factura->QRDBText12->Left=68;
        raport_factura->QRDBText13->Left=68;
        raport_factura->QRDBText14->Left=68;
        raport_factura->QRDBText15->Left=68;
        raport_factura->QRDBText16->Left=68;
        raport_factura->QRDBText17->Left=68;
        raport_factura->QRDBText18->Left=68;
        }
raport_factura->QuickRep1->Preview();
                }
if (dm->DataSource3->DataSet==dm->valuta) {
if (dm->valuta->TableName=="import") {
        raport_factura_valuta->QRDBText1->Left=68;
        raport_factura_valuta->QRDBText2->Left=68;
        raport_factura_valuta->QRDBText3->Left=68;
        raport_factura_valuta->QRDBText4->Left=68;
        raport_factura_valuta->QRDBText5->Left=68;
        raport_factura_valuta->QRDBText6->Left=68;
        raport_factura_valuta->QRDBText7->Left=68;
        raport_factura_valuta->QRDBText8->Left=68;
        raport_factura_valuta->QRDBText9->Left=68;
        raport_factura_valuta->QRDBText10->Left=613;
        raport_factura_valuta->QRDBText11->Left=613;
        raport_factura_valuta->QRDBText12->Left=613;
        raport_factura_valuta->QRDBText13->Left=613;
        raport_factura_valuta->QRDBText14->Left=613;
        raport_factura_valuta->QRDBText15->Left=613;
        raport_factura_valuta->QRDBText16->Left=613;
        raport_factura_valuta->QRDBText17->Left=613;
        raport_factura_valuta->QRDBText18->Left=613;
        }
if (dm->valuta->TableName=="export") {
        raport_factura_valuta->QRDBText1->Left=613;
        raport_factura_valuta->QRDBText2->Left=613;
        raport_factura_valuta->QRDBText3->Left=613;
        raport_factura_valuta->QRDBText4->Left=613;
        raport_factura_valuta->QRDBText5->Left=613;
        raport_factura_valuta->QRDBText6->Left=613;
        raport_factura_valuta->QRDBText7->Left=613;
        raport_factura_valuta->QRDBText8->Left=613;
        raport_factura_valuta->QRDBText9->Left=613;
        raport_factura_valuta->QRDBText10->Left=68;
        raport_factura_valuta->QRDBText11->Left=68;
        raport_factura_valuta->QRDBText12->Left=68;
        raport_factura_valuta->QRDBText13->Left=68;
        raport_factura_valuta->QRDBText14->Left=68;
        raport_factura_valuta->QRDBText15->Left=68;
        raport_factura_valuta->QRDBText16->Left=68;
        raport_factura_valuta->QRDBText17->Left=68;
        raport_factura_valuta->QRDBText18->Left=68;
        }
raport_factura_valuta->QuickRep1->Preview();
                }
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::FirmeExecute(TObject *Sender)
{
dm->firme->Active=true;
firme->ShowModal();
dm->firme->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::DelegatiExecute(TObject *Sender)
{
dm->delegati->Active=true;
delegati->Button2->Visible=true;
delegati->ShowModal();
delegati->Button2->Visible=false;
dm->delegati->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::AdaugaExecute(TObject *Sender)
{
cnew->ShowModal();
FocusControl(DBEdit25);
}
//---------------------------------------------------------------------------

