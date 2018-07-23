//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdlib.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
#include "Unit5.h"
#include "Unit3.h"
#include "Unit6.h"
#include "Unit10.h"
#include "Unit14.h"
#include "Unit13.h"
#include "Unit26.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tbios *bios;
//---------------------------------------------------------------------------
__fastcall Tbios::Tbios(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tbios::vedeExecute(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
if (dm->io->TableName=="intrari") {
        factura->Label1->Caption="Intrari de la:";
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        dm->in->Active=true;
        factura->Caption="Facturi intrari: "+dm->Table1Nume_firma->AsString;
        }
if (dm->io->TableName=="iesiri") {
        factura->Label1->Caption="Iesiri catre:";
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        dm->in->Active=true;
        factura->Caption="Facturi iesiri: "+dm->Table1Nume_firma->AsString;
        }
        factura->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall Tbios::DeleteTableExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi factura?",mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) {
TReplaceFlags Flags;
Flags << rfReplaceAll;
   dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
   dm->in->TableName=dm->iolegatura->AsString;
dm->in->DeleteTable();
dm->io->Delete();
        }
}
//---------------------------------------------------------------------------

void __fastcall Tbios::NouExecute(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
if (dm->io->TableName=="intrari") {
        factura->Label1->Caption="Intrari de la:";
        dm->io->Append();
        randomize();
        dm->iolegatura->AsString="f1"+IntToStr(random(90000));
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        while (dm->in->Exists) {
                randomize();
        dm->iolegatura->AsString="f1"+IntToStr(random(90000));
        dm->in->TableName=dm->iolegatura->AsString;
                }
        dm->in->CreateTable();
        dm->in->Active=true;
        factura->Caption="Facturi intrari: "+dm->Table1Nume_firma->AsString;
        }
if (dm->io->TableName=="iesiri") {
        factura->Label1->Caption="Iesiri catre:";
        dm->io->Append();
        randomize();
        dm->iolegatura->AsString="f2"+IntToStr(random(90000));
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        while (dm->in->Exists) {
                randomize();
        dm->iolegatura->AsString="f2"+IntToStr(random(90000));
        dm->in->TableName=dm->iolegatura->AsString;
                }
        dm->in->CreateTable();
        dm->in->Active=true;
        factura->Caption="Facturi iesiri: "+dm->Table1Nume_firma->AsString;
        }
        factura->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall Tbios::SalveazaExecute(TObject *Sender)
{
dm->io->Edit();
dm->io->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tbios::InapoiExecute(TObject *Sender)
{
dm->io->Active=false;
if (dm->plati->Active) dm->plati->Close();

radio->ItemIndex=-1;
Close();
Depozit->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tbios::PrintExecute(TObject *Sender)
{
 TReplaceFlags Flags;
Flags << rfReplaceAll;
if (dm->io->TableName=="intrari") {
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        raport_factura->QRDBText1->Left=68;
        raport_factura->QRDBText2->Left=68;
        raport_factura->QRDBText3->Left=68;
        raport_factura->QRDBText4->Left=68;
        raport_factura->QRDBText5->Left=68;
        raport_factura->QRDBText6->Left=68;
        raport_factura->QRDBText7->Left=68;
        raport_factura->QRDBText8->Left=68;
        raport_factura->QRDBText9->Left=68;
        raport_factura->QRDBText39->Left=68;
        raport_factura->QRDBText10->Left=613;
        raport_factura->QRDBText11->Left=613;
        raport_factura->QRDBText12->Left=613;
        raport_factura->QRDBText13->Left=613;
        raport_factura->QRDBText14->Left=613;
        raport_factura->QRDBText15->Left=613;
        raport_factura->QRDBText16->Left=613;
        raport_factura->QRDBText17->Left=613;
        raport_factura->QRDBText18->Left=613;
        raport_factura->QRDBText40->Left=613;
        }
if (dm->io->TableName=="iesiri") {
        dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
        dm->in->TableName=dm->iolegatura->AsString;
        raport_factura->QRDBText1->Left=613;
        raport_factura->QRDBText2->Left=613;
        raport_factura->QRDBText3->Left=613;
        raport_factura->QRDBText4->Left=613;
        raport_factura->QRDBText5->Left=613;
        raport_factura->QRDBText6->Left=613;
        raport_factura->QRDBText7->Left=613;
        raport_factura->QRDBText8->Left=613;
        raport_factura->QRDBText9->Left=613;
        raport_factura->QRDBText39->Left=613;
        raport_factura->QRDBText10->Left=68;
        raport_factura->QRDBText11->Left=68;
        raport_factura->QRDBText12->Left=68;
        raport_factura->QRDBText13->Left=68;
        raport_factura->QRDBText14->Left=68;
        raport_factura->QRDBText15->Left=68;
        raport_factura->QRDBText16->Left=68;
        raport_factura->QRDBText17->Left=68;
        raport_factura->QRDBText18->Left=68;
        raport_factura->QRDBText40->Left=68;
        }
dm->in->Active=true;
raport_factura->QuickRep1->Preview();
dm->in->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall Tbios::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->State==cbChecked)
        dm->io->Filtered=true;
else    dm->io->Filtered=false;
}
//---------------------------------------------------------------------------

void __fastcall Tbios::Edit1Change(TObject *Sender)
{
dm->io->Filter=ComboBox1->Text+"='"+Edit1->Text+"'";
}
//---------------------------------------------------------------------------

void __fastcall Tbios::Edit2Change(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive <<loPartialKey;
dm->io->Locate(ComboBox1->Text,Edit2->Text, flags);
}
//---------------------------------------------------------------------------

void __fastcall Tbios::magExecute(TObject *Sender)
{
dm->magazie->Active=true;
dm->magazie->Filtered=true;
if (dm->io->TableName=="intrari"){
        dm->magazie->Filter="tip='intrari'";
        magazie->radio1->ItemIndex=0;
        }
else {  dm->magazie->Filter="tip='iesiri'";
        magazie->radio1->ItemIndex=1;
        }
dm->magazie->Filter="legatura='"+dm->iolegatura->AsString+"'";
magazie->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tbios::Inpoi2Execute(TObject *Sender)
{
dm->io->Close();
dm->io->Filtered=false;
if (dm->plati->Active){
dm->plati->Close();
CheckBox2->Checked=false;
GroupBox1->Visible=false;
      }
bios->List1->Visible=false;
bios->List1->Enabled=false;
bios->Button8->Enabled=false;
bios->Button8->Visible=false;
bios->Button4->Visible=true;
bios->Button9->Visible=false;
bios->Button10->Visible=false;
bios->Label5->Visible=false;
radio->ItemIndex=-1;
if (List1->Items->Count>0){
if (dm->casalei->Active){
dm->casalei->Edit();
dm->casaleifacturi_achitate->AsString=List1->Items->Text;
dm->casalei->Post();
List1->Clear();
        }
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

void __fastcall Tbios::DubluExecute(TObject *Sender)
{
if (dm->casalei->Active){
        platafactura->DBEdit7->DataSource=dm->DataSource11;
        platafactura->DBEdit8->DataSource=dm->DataSource11;
        platafactura->DBEdit9->DataSource=dm->DataSource11;
        if (dm->casaleiio->AsString=="intrare") platafactura->DBEdit9->DataField="suma_intrare_disponibila";
        if (dm->casaleiio->AsString=="iesire") platafactura->DBEdit9->DataField="suma_iesire_disponibila";
        }
if (dm->cb->Active){
        platafactura->DBEdit7->DataSource=dm->DataSource8;
        platafactura->DBEdit8->DataSource=dm->DataSource8;
        platafactura->DBEdit9->DataSource=dm->DataSource8;
        if (dm->cbio->AsString=="intrare") platafactura->DBEdit9->DataField="suma_intrare_disponibila";
        if (dm->cbio->AsString=="iesire") platafactura->DBEdit9->DataField="suma_iesire_disponibila";
        }
platafactura->ShowModal();
List1->Items->Add(dm->ionr_factura->AsString);
}
//---------------------------------------------------------------------------

void __fastcall Tbios::DublulistExecute(TObject *Sender)
{
List1->Items->Delete(List1->ItemIndex);
}
//---------------------------------------------------------------------------

void __fastcall Tbios::radioClick(TObject *Sender)
{
if (radio->ItemIndex==0) dm->io->Filter="c='true' OR b='true'";
if (radio->ItemIndex==1) dm->io->Filter="c='false' AND b='false'";
if (radio->ItemIndex==2) dm->io->Filter="c='true'";
if (radio->ItemIndex==3) dm->io->Filter="b='true'";
}
//---------------------------------------------------------------------------

void __fastcall Tbios::CheckBox2Click(TObject *Sender)
{
if (CheckBox2->Checked) {
        if (!dm->plati->Active) dm->plati->Active=true;
        dm->plati->Filtered=true;
        GroupBox1->Visible=true;
        }
else {
        if (dm->plati->Active) dm->plati->Close();
        GroupBox1->Visible=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tbios::Button11Click(TObject *Sender)
{
dm->platilei->Filtered=true;
if (dm->io->RecNo>0)
dm->platilei->Filter="nr_factura='"+dm->ionr_factura->AsString+"'";
if (dm->io->RecNo>0) ShowMessage("Aveti 0 inregistrari facturi");
}
//---------------------------------------------------------------------------

void __fastcall Tbios::SpeedButton1Click(TObject *Sender)
{
dm->io->Prior();
}
//---------------------------------------------------------------------------

void __fastcall Tbios::SpeedButton2Click(TObject *Sender)
{
dm->io->Next();
}
//---------------------------------------------------------------------------


