//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit2.h"
#include "Unit11.h"
#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmagazie *magazie;
//---------------------------------------------------------------------------
__fastcall Tmagazie::Tmagazie(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmagazie::Button3Click(TObject *Sender)
{
dm->magazie->Close();
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tmagazie::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->State==cbChecked) dm->magazie->Filtered=true;
else dm->magazie->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall Tmagazie::radio1Click(TObject *Sender)
{
if (radio1->ItemIndex==0) dm->magazie->Filter="tip='intrari'";
else dm->magazie->Filter="tip='iesiri'";
}
//---------------------------------------------------------------------------


void __fastcall Tmagazie::Button1Click(TObject *Sender)
{
TLocateOptions lo;
lo <<loCaseInsensitive;

if (radio2->ItemIndex==0) {
bool l1=dm->io->Locate("nr_factura",dm->magazienr_factura->AsString,lo);
if (!l1) { ShowMessage("Eroare: Nu am gasit factura !"); return;}
notareceptie->QuickRep1->Preview();
        }
if (radio2->ItemIndex==1)
fisamagazie->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall Tmagazie::Edit2Change(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive <<loPartialKey;
dm->magazie->Locate(ComboBox1->Text,Edit2->Text,flags);
}
//---------------------------------------------------------------------------

void __fastcall Tmagazie::Edit1Change(TObject *Sender)
{
dm->magazie->Filter=ComboBox1->Text+"='"+Edit1->Text+"'";
}
//---------------------------------------------------------------------------

void __fastcall Tmagazie::Button2Click(TObject *Sender)
{
TLocateOptions flags;
flags << loCaseInsensitive;
dm->stoc->Active=true;
dm->magazie->Filtered=false;
dm->cproduse->First();
for (int sf=0;sf<dm->cproduse->RecordCount;sf++) {
if (dm->magazie->RecordCount>0){
for (int k=0; k<dm->magazie->RecordCount; k++) {
     bool seeker = dm->stoc->Locate("Denumire",dm->cprodusedenumire->AsString,flags);
     if (!seeker) {
        dm->stoc->Append();
        dm->stocDenumire->AsString=dm->cprodusedenumire->AsString;
        dm->stocintrare->AsInteger=dm->magazieintrare->AsInteger;
        dm->stociesire->AsInteger=dm->magazieiesire->AsInteger;
        dm->stocstoc->AsInteger=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        dm->stoccont->AsString=dm->magaziecont->AsString;
        dm->stocum->AsString=dm->magazieum->AsString;
        dm->stoc->Post();
        }
     if (seeker) {
        dm->stoc->Edit();
        dm->stocintrare->AsInteger+=dm->magazieintrare->AsInteger;
        dm->stociesire->AsInteger+=dm->magazieiesire->AsInteger;
        dm->stocstoc->AsInteger+=dm->magazieintrare->AsInteger-dm->magazieiesire->AsInteger;
        dm->stoc->Post();
                  }
        dm->magazie->Next();
                }
        }
        dm->cproduse->Next();
        }

dm->stoc->Active=false;
dm->stoc->Filtered=true;
}
//---------------------------------------------------------------------------

