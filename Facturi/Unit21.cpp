//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit2.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit19.h"
#include "Unit22.h"
#include "Unit20.h"
#include "Unit23.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tcasabancalei *casabancalei;
//---------------------------------------------------------------------------
__fastcall Tcasabancalei::Tcasabancalei(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcasabancalei::Button5Click(TObject *Sender)
{
if (DBMemo1->Lines->Count==0){
        dm->casalei->Edit();
        if (dm->casaleiio->AsString=="intrare") dm->casaleisuma_intrare_disponibila->AsFloat=dm->casaleiintrare->AsFloat;
        if (dm->casaleiio->AsString=="iesire") dm->casaleisuma_iesire_disponibila->AsFloat=dm->casaleiiesire->AsFloat;
        dm->casalei->Post();
        }
dm->firme->Active=true;
seeker->Show();
seeker->Button1->Caption="Intrari";
seeker->Button2->Caption="Iesiri";
}
//---------------------------------------------------------------------------
void __fastcall Tcasabancalei::Button4Click(TObject *Sender)
{
TLocateOptions loflags;
loflags << loCaseInsensitive;
dm->casalei->Edit();
dm->casalei->Post();

//******* sold locator and checker
dm->casalei->Filtered=true;
dm->casalei->Filter="soldbool='true'";
if (dm->casalei->RecNo>1) {
        ShowMessage("Eroare solduri! Sterge si lasa numai unul!");
        return;
        }
dm->casalei->Filtered=false;
        bool seek=dm->casalei->Locate("soldbool","true",loflags);
if (!seek) {
        solder->Label1->Caption="Atentie! Nu a fost gasit soldul initial pe aceasta luna!!! Daca doriti sa il introduceti acum apasati butonul 'Sold' Daca doriti sa abandonati operatiunea apasati 'Anulare'";
        solder->Show();
        return;
        }
if (seek & dm->casalei->RecNo!=1){
        ShowMessage("Eroare pozitie sold!");
        }
dm->casalei->Filtered=false;
//********************** sold end*************************

dm->casalei->RecNo=2;
int spectrum=0,legolas=0; //primul e increment pt stand by iar legolas pentru cele care s-a realizat legatura;
double sold_lei=0;
for (int i=0; i<dm->casalei->RecordCount; i++){
    if (!dm->casaleichecked->AsBoolean) {
        if (dm->casaleiio->AsString=="intrare"){
            legolas++;
            dm->casalei->Prior();
            sold_lei=dm->casaleisold_lei->AsFloat;
            dm->casalei->Next();
            dm->casalei->Edit();
            dm->casaleisold_lei->AsFloat=sold_lei+dm->casaleiintrare->AsFloat-dm->casaleiiesire->AsFloat;
            dm->casaleichecked->AsBoolean=true;
            dm->casalei->Post();
                        }
        if (dm->casaleiio->AsString=="iesire"){
            legolas++;
            dm->casalei->Prior();
            sold_lei=dm->casaleisold_lei->AsFloat;
            dm->casalei->Next();
            dm->casalei->Edit();
            dm->casaleisold_lei->AsFloat=sold_lei+dm->casaleiintrare->AsFloat-dm->casaleiiesire->AsFloat;
            dm->casaleichecked->AsBoolean=true;
            dm->casalei->Post();
                        }

        }
if(dm->casaleifacturi_achitate->AsString.Length()==0 & !dm->casaleistand_by->AsBoolean ){
        ShowMessage("Incorectitudine act procesat curent: "+IntToStr(dm->casalei->RecNo)+" Reverifica!");
        return;
                }
if (dm->casaleistand_by->AsBoolean) spectrum++;

        dm->casalei->Next();
        }
// for inchidere ******************
mesajcasabanca->Label3->Caption=IntToStr(spectrum);
mesajcasabanca->Label4->Caption=IntToStr(legolas);
mesajcasabanca->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Button7Click(TObject *Sender)
{
solder->Label1->Caption="Atentie! Daca doriti sa introduceti acum soldul initiala apasati butonul 'Sold' Daca doriti sa abandonati operatiunea apasati 'Anulare'";
solder->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Button2Click(TObject *Sender)
{
dm->casalei->Append();
FocusControl(DBEdit10);        
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        dm->casalei->Delete();        
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Button6Click(TObject *Sender)
{
registrucasalei->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==0) dm->casalei->Filter="stand_by='true'";
if (RadioGroup1->ItemIndex==1) dm->casalei->Filter="checked='true'";
if (RadioGroup1->ItemIndex==2) dm->casalei->Filter="checked='false'";
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked) {
        dm->casalei->Filtered=true;
        dm->casalei->Filter=" ";
        }
else    {
    dm->casalei->Filtered=false;
    }
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Edit1Change(TObject *Sender)
{
TLocateOptions flags;
flags << loCaseInsensitive;
dm->casalei->Locate(ComboBox1->Text,Edit1->Text,flags);        
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::Button1Click(TObject *Sender)
{
Close();
if (dm->casalei->Active) dm->casalei->Close();
if (dm->casalei->TableName.Pos("casa")!=0) moneda->Show();
else  banca->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::DBEdit9Exit(TObject *Sender)
{
dm->casalei->Edit();
dm->casaleisuma_intrare_disponibila->AsFloat=dm->casaleiintrare->AsFloat;
dm->casaleisuma_iesire_disponibila->AsFloat=dm->casaleiiesire->AsFloat;
dm->casalei->Post();
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::DBComboBox1Change(TObject *Sender)
{
if (dm->casaleiio->AsString=="intrare") DBEdit9->DataField="intrare";
if (dm->casaleiio->AsString=="iesire") DBEdit9->DataField="iesire";
}
//---------------------------------------------------------------------------

void __fastcall Tcasabancalei::DBComboBox1Exit(TObject *Sender)
{
if (dm->casaleiio->AsString=="intrare") DBEdit9->DataField="intrare";
if (dm->casaleiio->AsString=="iesire") DBEdit9->DataField="iesire";        
}
//---------------------------------------------------------------------------

