//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit2.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfise *fise;
//---------------------------------------------------------------------------
__fastcall Tfise::Tfise(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfise::exitExecute(TObject *Sender)
{
dm->fise->Close();
angajati->Show();
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfise::nouExecute(TObject *Sender)
{
dm->fise->Append();
dm->fisemarca->AsInteger=dm->angmarca->AsInteger;
if (dm->fise->RecordCount==0)
dm->fisetrick->AsString=dm->angmarca->AsString+"teco"+"1";
if (dm->fise->RecordCount!=0)
dm->fisetrick->AsString=dm->angmarca->AsString+"teco"+IntToStr(dm->fise->RecordCount+1);
dm->fise->Post();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------

void __fastcall Tfise::stergeExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi ?",mtWarning, TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
        {
       dm->fise->Delete();
dm->fise->First();
for (int i=0; i<dm->fise->RecordCount; i++){
        dm->fise->Edit();
        dm->fisetrick->AsString=dm->angmarca->AsString+"teco"+IntToStr(dm->fise->RecNo);
        dm->fise->Post();
        dm->fise->Next();
        }
       }
}
//---------------------------------------------------------------------------

void __fastcall Tfise::printExecute(TObject *Sender)
{
raport_fisa->QuickRep1->Preview();        
}
//---------------------------------------------------------------------------

void __fastcall Tfise::siExecute(TObject *Sender)
{
TLocateOptions lo;
lo << loCaseInsensitive;
// --- verificare dubluri de sold initial
bool locate=dm->fise->Locate("soldbool","true",lo);
if (locate) {
        ShowMessage("sold initial deja introdus!!!, aborting...");
        return;
        }
dm->fise->Insert();
dm->fiseexplicatii->AsString="Sold initial";
dm->fisemarca->AsInteger=dm->angmarca->AsInteger;
dm->fisetrick->AsString=dm->angbuletin_identitate->AsString+IntToStr(dm->fise->RecNo);
dm->fisesoldbool->AsBoolean=true;
sold_initial->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tfise::saveExecute(TObject *Sender)
{
TLocateOptions lo;
lo << loCaseInsensitive;
dm->fise->Edit();
dm->fise->Post();
// -- verific existenta soldului initial
bool locate=dm->fise->Locate("soldbool","true",lo);
if (!locate){
        ShowMessage("Nu ati introdus soldul initial !!!");
        siExecute(NULL);
        }
// -- end
double sold1=0,sold2=0,sold3=0;
for (int i=0; i<dm->fise->RecordCount; i++){
        if (dm->fisesoldbool->AsBoolean!=true)
        if (dm->fisechecker->AsBoolean!=true){
                dm->fise->Prior();
                sold1=dm->fisedobanda_sold->AsFloat;
                sold2=dm->fiseimprumut_sold->AsFloat;
                sold3=dm->fisefs_sold->AsFloat;
                dm->fise->Next();
                dm->fise->Edit();
                dm->fisedobanda_sold->AsFloat=sold1-dm->fisedobanda_incasata->AsFloat+dm->fisedobanda_calculata->AsFloat;
                dm->fiseimprumut_sold->AsFloat=sold2-dm->fiseimprumut_credit->AsFloat+dm->fiseimprumut_debit->AsFloat;
                dm->fisefs_sold->AsFloat=sold3+dm->fisefs_credit->AsFloat-dm->fisefs_debit->AsFloat;
                //dm->fisechecker->AsBoolean=true;
                dm->fise->Post();
                }
        dm->fise->Next();
        }
}
//---------------------------------------------------------------------------

void __fastcall Tfise::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked) dm->fise->Filtered=true;
else dm->fise->Filtered=false;        
}
//---------------------------------------------------------------------------

void __fastcall Tfise::Edit2Change(TObject *Sender)
{
dm->fise->Filter=ComboBox1->Text+"='"+Edit2->Text+"'";
}
//---------------------------------------------------------------------------

void __fastcall Tfise::Edit1Change(TObject *Sender)
{
TLocateOptions lo;
lo <<loCaseInsensitive<<loPartialKey;

if (Edit1->Text!=NULL)
dm->fise->Locate(ComboBox1->Text,Edit1->Text,lo);
}
//---------------------------------------------------------------------------

void __fastcall Tfise::SpeedButton7Click(TObject *Sender)
{
filtercon->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall Tfise::SpeedButton8Click(TObject *Sender)
{
dm->ang->Prior();        
}
//---------------------------------------------------------------------------

void __fastcall Tfise::SpeedButton9Click(TObject *Sender)
{
dm->ang->Next();        
}
//---------------------------------------------------------------------------

