//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit13.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit19.h"
#include "Unit23.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcasabanca *casabanca;
//---------------------------------------------------------------------------
__fastcall Tcasabanca::Tcasabanca(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcasabanca::Action1nouExecute(TObject *Sender)
{
dm->cb->Append();
FocusControl(DBEdit10);
}
//---------------------------------------------------------------------------
void __fastcall Tcasabanca::Action2stergeExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        dm->cb->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tcasabanca::Action1salveazaExecute(TObject *Sender)
{
TLocateOptions loflags;
loflags << loCaseInsensitive;
dm->cb->Edit();
dm->cb->Post();
//sold locator and checker
dm->cb->Filtered=true;
dm->cb->Filter="soldbool='true'";
if (dm->cb->RecNo>1) {
        ShowMessage("Eroare solduri! Sterge si lasa numai unul!");
        return;
        }
dm->cb->Filtered=false;
bool seek=dm->cb->Locate("soldbool","true",loflags);
if (!seek) {
        solder->Label1->Caption="Atentie! Nu a fost gasit soldul initial pe aceasta luna!!! Daca doriti sa il introduceti acum apasati butonul 'Sold' Daca doriti sa abandonati operatiunea apasati 'Anulare'";
        solder->Show();
        return;
        }
if (seek & dm->cb->RecNo!=1){
        ShowMessage("Eroare pozitie sold!");
        }
dm->cb->Filtered=false;
//************ sold end **************************
dm->cb->RecNo=2;
int spectrum=0,legolas=0; //primul e increment pt stand by iar legolas pentru cele care s-a realizat legatura;
double sold_lei=0,sold_valuta=0;
for (int i=0; i<dm->cb->RecordCount; i++){
    if (!dm->cbchecked->AsBoolean) {
        if (dm->cbio->AsString=="intrare"){
            legolas++;
            dm->cb->Prior();
            sold_lei=dm->cbsold_lei->AsFloat;
            sold_valuta=dm->cbsold_valuta->AsFloat;
            dm->cb->Next();
            dm->cb->Edit();
            dm->cbsold_lei->AsFloat=sold_lei+dm->cbintrare->AsFloat-dm->cbiesire->AsFloat;
            dm->cbsold_valuta->AsFloat=sold_valuta+dm->cbvaluta_intrare->AsFloat-dm->cbvaluta_iesire->AsFloat;
            dm->cbchecked->AsBoolean=true;
            dm->cb->Post();
                        }
        if (dm->cbio->AsString=="iesire"){
            legolas++;
            dm->cb->Prior();
            sold_lei=dm->cbsold_lei->AsFloat;
            sold_valuta=dm->cbsold_valuta->AsFloat;
            dm->cb->Next();
            dm->cb->Edit();
            dm->cbsold_lei->AsFloat=sold_lei+dm->cbintrare->AsFloat-dm->cbiesire->AsFloat;
            dm->cbsold_valuta->AsFloat=sold_valuta+dm->cbvaluta_intrare->AsFloat-dm->cbvaluta_iesire->AsFloat;
            dm->cbchecked->AsBoolean=true;
            dm->cb->Post();
                        }

        }
if(dm->cbfacturi_achitate->AsString.Length()==0 & !dm->cbstand_by->AsBoolean ){
        ShowMessage("Incorectitudine act procesat curent: "+IntToStr(dm->cb->RecNo)+" Reverifica!");
        return;
                }
if (dm->cbstand_by->AsBoolean) spectrum++;
        dm->cb->Next();
        }
// for inchidere ******************
mesajcasabanca->Label3->Caption=IntToStr(spectrum);
mesajcasabanca->Label4->Caption=IntToStr(legolas);
mesajcasabanca->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall Tcasabanca::inapoiExecute(TObject *Sender)
{
dm->cb->Close();
Close();
if (dm->cb->Active) dm->cb->Close();
if (dm->cb->TableName.Pos("casa")!=0) moneda->Show();
else  banca->Show();

}
//---------------------------------------------------------------------------

void __fastcall Tcasabanca::Edit1Change(TObject *Sender)
{
TLocateOptions flags;
flags << loCaseInsensitive;
dm->cb->Locate(ComboBox1->Text,Edit1->Text,flags);
}
//---------------------------------------------------------------------------

void __fastcall Tcasabanca::Button5Click(TObject *Sender)
{
if (DBMemo1->Lines->Count==0){
        dm->cb->Edit();
        if (dm->cbio->AsString=="intrare") dm->cbsuma_intrare_disponibila->AsFloat=dm->cbvaluta_intrare->AsFloat;
        if (dm->cbio->AsString=="iesire") dm->cbsuma_iesire_disponibila->AsFloat=dm->cbvaluta_iesire->AsFloat;
        dm->cb->Post();
        }
dm->firme->Active=true;
seeker->Show();
seeker->Button1->Caption="Import";
seeker->Button2->Caption="Export";
}
//---------------------------------------------------------------------------

void __fastcall Tcasabanca::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked) {
        dm->cb->Filtered=true;
        dm->cb->Filter=" ";
        }
else    {
    dm->cb->Filtered=false;
    }

}
//---------------------------------------------------------------------------

void __fastcall Tcasabanca::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==0) dm->cb->Filter="stand_by='true'";
if (RadioGroup1->ItemIndex==1) dm->cb->Filter="checked='true'";
if (RadioGroup1->ItemIndex==2) dm->cb->Filter="checked='false'";
}
//---------------------------------------------------------------------------
void __fastcall Tcasabanca::DBComboBox1Change(TObject *Sender)
{
if (DBComboBox1->Text=="intrare") {
        DBEdit9->DataField="intrare";
        DBEdit6->DataField="valuta_intrare";
        }
if (DBComboBox1->Text=="iesire"){
        DBEdit9->DataField="iesire";
        DBEdit6->DataField="valuta_iesire";
        }
}
//---------------------------------------------------------------------------


void __fastcall Tcasabanca::Button6Click(TObject *Sender)
{
registrucasa->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tcasabanca::Button7Click(TObject *Sender)
{
solder->Label1->Caption="Atentie! Daca doriti sa il introduceti acum apasati butonul 'Sold' Daca doriti sa abandonati operatiunea apasati 'Anulare'";
solder->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tcasabanca::DBEdit6Exit(TObject *Sender)
{
DBEdit9->Field->AsFloat=DBEdit5->Field->AsFloat*DBEdit6->Field->AsFloat;        
}
//---------------------------------------------------------------------------

