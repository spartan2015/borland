//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfirme *firme;
//---------------------------------------------------------------------------
__fastcall Tfirme::Tfirme(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tfirme::Edit1Change(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive << loPartialKey;
dm->firme->Locate(ComboBox1->Text,Edit1->Text,flags);
}
//---------------------------------------------------------------------------

void __fastcall Tfirme::Button1Click(TObject *Sender)
{
if (dm->io->Active || dm->valuta->Active) {
if (dm->DataSource3->DataSet==dm->io){
dm->io->Edit();
dm->ionume_firma->AsString=dm->firmenume_firma->AsString;
dm->ioj->AsString=dm->firmej->AsString;
dm->iofisc->AsString=dm->firmefisc->AsString;
dm->iobanca->AsString=dm->firmebanca->AsString;
dm->iofiliala->AsString=dm->firmefiliala->AsString;
dm->iocont_banca->AsString=dm->firmecont_banca->AsString;
dm->iotelefon->AsInteger=dm->firmetelefon->AsInteger;
dm->ioadresa->AsString=dm->firmeadresa->AsString;
dm->ioemail->AsString=dm->firmeemail->AsString;
dm->iocapital_social->AsString=dm->firmecapital_social->AsString;
dm->io->Post();
        }
if (dm->DataSource3->DataSet==dm->valuta){
dm->valuta->Edit();
dm->valutanume_firma->AsString=dm->firmenume_firma->AsString;
dm->valutaj->AsString=dm->firmej->AsString;
dm->valutafisc->AsString=dm->firmefisc->AsString;
dm->valutabanca->AsString=dm->firmebanca->AsString;
dm->valutafiliala->AsString=dm->firmefiliala->AsString;
dm->valutacont_banca->AsString=dm->firmecont_banca->AsString;
dm->valutatelefon->AsInteger=dm->firmetelefon->AsInteger;
dm->valutaadresa->AsString=dm->firmeadresa->AsString;
dm->valutaemail->AsString=dm->firmeemail->AsString;
dm->valutacapital_social->AsString=dm->firmecapital_social->AsString;
dm->valuta->Post();
        }
                     }
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfirme::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
