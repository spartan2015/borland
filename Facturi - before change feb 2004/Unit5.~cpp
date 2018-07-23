//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
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
void __fastcall Tfactura::Button3Click(TObject *Sender)
{
dm->in->Active=false;
dm->io->Edit();
dm->io->Post();
Close();
//---------- check and add if necessary -------------------
dm->firme->Active=true;
TLocateOptions flags;
flags <<loCaseInsensitive;
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
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button1Click(TObject *Sender)
{
dm->in->Append();
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button2Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        dm->in->Delete();
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button4Click(TObject *Sender)
{
TLocateOptions flags;
flags << loCaseInsensitive;
dm->magazie->Active=true;
dm->stoc->Active=true;
dm->in->Edit();
dm->in->Post();
dm->io->Edit();
dm->in->First();
int maga=0;
for (int i=1;i<dm->in->RecordCount+1; i++) {
        if (dm->incont->AsString.SubString(1,1)==3) {
        maga++;
        dm->magazie->Append();
        dm->magazienume_firma->AsString=dm->ionume_firma->AsString;
        dm->magaziej->AsString=dm->ioj->AsString;
        dm->magaziefisc->AsString=dm->iofisc->AsString;
        dm->magazienr_factura->AsInteger=dm->ionr_factura->AsInteger;
        dm->magaziedata_factura->AsString=dm->iodata_factura->AsString;
        dm->magazieDenumire->AsString=dm->inDenumire->AsString;
        dm->magazieunitatea->AsString=dm->inunitatea->AsString;
        if (dm->io->TableName=="intrari")
        dm->magazieintrare->AsInteger=dm->incantitate->AsInteger;
        if (dm->io->TableName=="iesiri")
        dm->magazieiesire->AsInteger=dm->incantitate->AsInteger;
bool seek=dm->stoc->Locate("Denumire",dm->inDenumire->AsString,flags);
        if (seek){
        dm->magaziestoc->AsInteger=dm->stocstoc->AsInteger;
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
        if (!seek){
        dm->magaziestoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        }
        dm->magaziepret_unitar->AsFloat=dm->inpret_unitar->AsFloat;
        dm->magazievaloarea->AsFloat=dm->invaloarea->AsFloat;
        dm->magazietva->AsFloat=dm->intva->AsFloat;
        dm->magaziecont->AsString=dm->incont->AsString;
        dm->magazielegatura->AsString=dm->iolegatura->AsString;
        if (dm->io->TableName=="intrari") dm->magazietip->AsString="intrari";
        else dm->magazietip->AsString="iesiri";
        dm->magazie->Post();
        }
        dm->iototal_valoare->AsFloat+=dm->invaloarea->AsFloat;
        dm->iototal_tva->AsFloat+=dm->intva->AsFloat;
        dm->in->Next();
        }
                dm->iototal_plata->AsFloat=dm->iototal_valoare->AsFloat+dm->iototal_tva->AsFloat;
dm->io->Post();
dm->magazie->Active=false;
dm->stoc->Active=false;
msgmagazie->Label2->Caption=IntToStr(maga);
msgmagazie->ShowModal();
                }
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button5Click(TObject *Sender)
{
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
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button6Click(TObject *Sender)
{
dm->firme->Active=true;
firme->ShowModal();
dm->firme->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfactura::Button7Click(TObject *Sender)
{
dm->delegati->Active=true;
delegati->ShowModal();
dm->delegati->Active=false;
}
//---------------------------------------------------------------------------

