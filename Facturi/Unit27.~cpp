//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit27.h"
#include "Unit2.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit3.h"
#include "Unit29.h"
#include "Unit26.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tbiosvaluta *biosvaluta;
//---------------------------------------------------------------------------
__fastcall Tbiosvaluta::Tbiosvaluta(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tbiosvaluta::SpeedButton1Click(TObject *Sender)
{
dm->valuta->Prior();        
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::SpeedButton2Click(TObject *Sender)
{
dm->valuta->Next();        
}
//---------------------------------------------------------------------------


void __fastcall Tbiosvaluta::CheckBox2Click(TObject *Sender)
{
if (CheckBox2->Checked) {
        if (!dm->plativaluta->Active) dm->plativaluta->Active=true;
        dm->plativaluta->Filtered=true;
        GroupBox1->Visible=true;
        }
else {
        if (dm->plativaluta->Active) dm->plativaluta->Close();
        GroupBox1->Visible=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::ExitExecute(TObject *Sender)
{
dm->valuta->Active=false;
if (dm->plativaluta->Active) dm->plativaluta->Close();

RadioGroup1->ItemIndex=-1;
dm->valutain->Close();
Close();
Depozit->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::NouExecute(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
if (dm->valuta->TableName=="vimport") {
        factura->Label1->Caption="Import de la:";
        dm->valuta->Append();
        dm->valutain->Active=true;
        factura->Caption="Factura import: "+dm->Table1Nume_firma->AsString;
        }
if (dm->valuta->TableName=="vexport") {
        factura->Label1->Caption="Export catre:";
        dm->valuta->Append();
        dm->valutain->Active=true;
        factura->Caption="Facturi export: "+dm->Table1Nume_firma->AsString;
        }
dm->DataSource3->DataSet=dm->valuta;
dm->DataSource5->DataSet=dm->valutain;
factura->Label31->Visible=true;
factura->DBEdit32->Visible=true;
factura->DBEdit32->DataField="moneda";
factura->DBEdit32->Enabled=true;
        factura->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::DetaliiExecute(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;

if (dm->valuta->TableName=="vimport") {
        factura->Label1->Caption="Import de la:";
        factura->Caption="Factura import: "+dm->Table1Nume_firma->AsString;
        }
if (dm->valuta->TableName=="vexport") {
        factura->Label1->Caption="Export catre:";
        factura->Caption="Facturi export: "+dm->Table1Nume_firma->AsString;
        }
dm->DataSource3->DataSet=dm->valuta;
dm->DataSource5->DataSet=dm->valutain;

factura->Label31->Visible=true;
factura->DBEdit32->Visible=true;
factura->DBEdit32->DataField="moneda";
factura->DBEdit32->Enabled=true;
        factura->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::StergeExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi factura?",mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) {
TReplaceFlags Flags;
Flags << rfReplaceAll;
for (int i=0; i<dm->valutain->RecordCount; i++) dm->valutain->Delete();
dm->valuta->Delete();
        }
}
//---------------------------------------------------------------------------


void __fastcall Tbiosvaluta::PrintExecute(TObject *Sender)
{
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
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::SpeedButton10Click(TObject *Sender)
{
dm->valuta->Close();
dm->valuta->Filtered=false;
if (dm->plativaluta->Active){
        dm->platilei->Close();
        CheckBox2->Checked=false;
        GroupBox1->Visible=false;
      }
biosvaluta->GroupBox2->Visible=false;

RadioGroup1->ItemIndex=-1;

if (List1->Items->Count>0){
if (dm->cb->Active) {
dm->cb->Edit();
dm->cbfacturi_achitate->AsString=List1->Items->Text;
dm->cb->Post();
List1->Clear();
                    }
                      }
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::SpeedButton8Click(TObject *Sender)
{
List1->Items->Delete(List1->ItemIndex);        
}
//---------------------------------------------------------------------------

void __fastcall Tbiosvaluta::SpeedButton9Click(TObject *Sender)
{
if (dm->cb->Active){
        platafactura->DBEdit7->DataSource=dm->DataSource8;
        platafactura->DBEdit8->DataSource=dm->DataSource8;
        platafactura->DBEdit9->DataSource=dm->DataSource8;
        platafactura->DBEdit1->DataSource=dm->DataSource14;
        platafactura->DBEdit2->DataSource=dm->DataSource14;
        platafactura->DBEdit3->DataSource=dm->DataSource14;
        platafactura->DBEdit4->DataSource=dm->DataSource14;
        platafactura->DBEdit5->DataSource=dm->DataSource14;
        platafactura->DBEdit6->DataSource=dm->DataSource14;
// suma disponibila
        if (dm->cbio->AsString=="intrare") platafactura->DBEdit9->DataField="suma_intrare_disponibila";
        if (dm->cbio->AsString=="iesire") platafactura->DBEdit9->DataField="suma_iesire_disponibila";
        }
platafactura->ShowModal();
List1->Items->Add(dm->valutanr_factura->AsString);        
}
//---------------------------------------------------------------------------

