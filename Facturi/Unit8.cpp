//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tdelegati *delegati;
//---------------------------------------------------------------------------
__fastcall Tdelegati::Tdelegati(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tdelegati::Button2Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall Tdelegati::Button1Click(TObject *Sender)
{
if (dm->io->Active | dm->valuta->Active) {
if (dm->DataSource3->DataSet==dm->io){
dm->io->Edit();
dm->ionume_delegat->AsString=dm->delegatinume_delegat->AsString;
dm->iobuletin_delegat->AsString=dm->delegatibuletin_delegat->AsString;
dm->io->Post();
        }
if (dm->DataSource3->DataSet==dm->valuta) {
dm->valuta->Edit();
dm->valutanume_delegat->AsString=dm->delegatinume_delegat->AsString;
dm->valutabuletin_delegat->AsString=dm->delegatibuletin_delegat->AsString;
dm->valuta->Post();
        }
                }
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tdelegati::Edit1Change(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive <<loPartialKey;
dm->delegati->Locate("nume_delegat",Edit1->Text,flags);        
}
//---------------------------------------------------------------------------

