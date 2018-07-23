//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tangajati *angajati;
//---------------------------------------------------------------------------
__fastcall Tangajati::Tangajati(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::exitExecute(TObject *Sender)
{
dm->ang->Close();
Main->Show();
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::accesExecute(TObject *Sender)
{
dm->fise->Active=true;
Hide();
fise->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::SpeedButton2Click(TObject *Sender)
{
dm->ang->Prior();
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::SpeedButton3Click(TObject *Sender)
{
dm->ang->Next();        
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::insertExecute(TObject *Sender)
{
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBMemo1->ReadOnly=false;

dm->ang->Append();
SpeedButton8->Caption="Protejeaza";
Label13->Caption=IntToStr(dm->ang->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::modificaExecute(TObject *Sender)
{
if (SpeedButton8->Caption=="Modifica"){
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBMemo1->ReadOnly=false;
        }
else {
DBEdit1->ReadOnly=true;
DBEdit2->ReadOnly=true;
DBEdit3->ReadOnly=true;
DBEdit4->ReadOnly=true;
DBEdit5->ReadOnly=true;
DBEdit6->ReadOnly=true;
DBEdit7->ReadOnly=true;
DBEdit8->ReadOnly=true;
DBMemo1->ReadOnly=true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::saveExecute(TObject *Sender)
{
dm->ang->Edit();
dm->ang->Post();        
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::delExecute(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi ?",mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
dm->ang->Delete();
Label13->Caption=IntToStr(dm->ang->RecordCount);
        }
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::FormActivate(TObject *Sender)
{
Label13->Caption=IntToStr(dm->ang->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::Edit1Change(TObject *Sender)
{
TLocateOptions lo;
lo <<loCaseInsensitive<<loPartialKey;

if (Edit1->Text!=NULL)
dm->ang->Locate(ComboBox1->Text,Edit1->Text,lo);
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked) dm->ang->Filtered=true;
else dm->ang->Filtered=false;
}
//---------------------------------------------------------------------------

void __fastcall Tangajati::Edit2Change(TObject *Sender)
{
dm->ang->Filter=ComboBox2->Text+"='"+Edit2->Text+"'";
}
//---------------------------------------------------------------------------


void __fastcall Tangajati::SpeedButton9Click(TObject *Sender)
{
// folosim o baza de date numita central pe care o golim dupa operatiune
dm->central->Active=true;
dm->fise->Active=true;
dm->fise->Filtered=true;
if (ComboBox4->Text=="ianuarie") dm->fise->Filter="data>='1.01."+ComboBox3->Text+"' AND "+"data<='31.01."+ComboBox3->Text+"'";
if (ComboBox4->Text=="februarie")  {
       div_t x=div(StrToFloat(ComboBox3->Text),4);
       if (x.rem==0) dm->fise->Filter="data>='1.02."+ComboBox3->Text+"' AND "+"data<='29.02."+ComboBox3->Text+"'";
       if (x.rem!=0) dm->fise->Filter="data>='1.02."+ComboBox3->Text+"' AND "+"data<='28.02."+ComboBox3->Text+"'";
       }
if (ComboBox4->Text=="martie") dm->fise->Filter="data>='1.03."+ComboBox3->Text+"' AND "+"data<='31.03."+ComboBox3->Text+"'";
if (ComboBox4->Text=="aprilie") dm->fise->Filter="data>='1.04."+ComboBox3->Text+"' AND "+"data<='30.04."+ComboBox3->Text+"'";
if (ComboBox4->Text=="mai") dm->fise->Filter="data>='1.05."+ComboBox3->Text+"' AND "+"data<='31.05."+ComboBox3->Text+"'";
if (ComboBox4->Text=="iunie") dm->fise->Filter="data>='1.06."+ComboBox3->Text+"' AND "+"data<='30.06."+ComboBox3->Text+"'";
if (ComboBox4->Text=="iulie") dm->fise->Filter="data>='1.07."+ComboBox3->Text+"' AND "+"data<='31.07."+ComboBox3->Text+"'";
if (ComboBox4->Text=="august") dm->fise->Filter="data>='1.08."+ComboBox3->Text+"' AND "+"data<='31.08."+ComboBox3->Text+"'";
if (ComboBox4->Text=="septembrie") dm->fise->Filter="data>='1.09."+ComboBox3->Text+"' AND "+"data<='30.09."+ComboBox3->Text+"'";
if (ComboBox4->Text=="octombrie") dm->fise->Filter="data>='1.10."+ComboBox3->Text+"' AND "+"data<='31.10."+ComboBox3->Text+"'";
if (ComboBox4->Text=="noiembrie") dm->fise->Filter="data>='1.11."+ComboBox3->Text+"' AND "+"data<='30.11."+ComboBox3->Text+"'";
if (ComboBox4->Text=="decembrie") dm->fise->Filter="data>='1.12."+ComboBox3->Text+"' AND "+"data<='31.12."+ComboBox3->Text+"'";
dm->ang->First();
double sold1=0,sold2=0,sold3=0;
double dob_inc=0,imp_deb=0,imp_cre=0,fs_deb=0,fs_cre=0;
for (int i=0; i<dm->ang->RecordCount;i++)  {
sold1=0;sold2=0;sold3=0;
dob_inc=0;imp_deb=0;imp_cre=0;fs_deb=0;fs_cre=0;
        dm->central->Append();
        dm->centralmarca->AsInteger=dm->angmarca->AsInteger;
        dm->centralnume->AsString=dm->angnume->AsString;
        dm->centralsectia->AsString=dm->angsectia->AsString;
        dm->centralfunctie->AsString=dm->angfunctie->AsString;
        dm->centralbuletin_identitate->AsString=dm->angbuletin_identitate->AsString;
        for(int l=0; l<dm->fise->RecordCount;l++) {
        dob_inc+=dm->fisedobanda_incasata->AsFloat;
        imp_deb+=dm->fiseimprumut_debit->AsFloat;
        imp_cre+=dm->fiseimprumut_credit->AsFloat;
        fs_deb+=dm->fisefs_debit->AsFloat;
        fs_cre+=dm->fisefs_credit->AsFloat;
        if (dm->fise->RecNo==dm->fise->RecordCount){
                sold1=dm->fisedobanda_sold->AsFloat;
                sold2=dm->fiseimprumut_sold->AsFloat;
                sold3=dm->fisefs_sold->AsFloat;
                }
        dm->fise->Next();
        }
        dm->centraldobanda_incasata->AsFloat=dob_inc;
        dm->centralimprumut_debit->AsFloat=imp_deb;
        dm->centralimprumut_credit->AsFloat=imp_cre;
        dm->centralfs_debit->AsFloat=fs_deb;
        dm->centralfs_credit->AsFloat=fs_cre;
        //=====================================
        dm->centraldobanda_sold->AsFloat=sold1;
        dm->centralimprumut_sold->AsFloat=sold2;
        dm->centralfs_sold->AsFloat=sold3;
        dm->ang->Next();
        dm->central->Post();
                }
raport_central->QRLabel4->Caption=ComboBox3->Text;
raport_central->QRLabel5->Caption=ComboBox4->Text;

raport_central->QuickRep1->Preview();
dm->central->Active=false;
dm->central->EmptyTable();
}
//---------------------------------------------------------------------------



void __fastcall Tangajati::Button1Click(TObject *Sender)
{
TLocateOptions lo;

dm->fise->EmptyTable();
ShowMessage("Table empty, ready to proceed...");
dm->fise->Active=true;
dm->Table1->Active=true;
dm->Table1->First();
int n=0;
Label13->Caption="0";
for (int i=0;i<dm->Table1->RecordCount; i++){
        bool seeker=dm->ang->Locate("marca",dm->Table1MA->AsString,lo);
        if (seeker){
        dm->fise->Append();
        dm->fisedata->AsString="31.03.2004";
        dm->fisetrick->AsString=dm->angmarca->AsString+"teco"+"1";
        dm->fisemarca->AsInteger=dm->angmarca->AsInteger;
        dm->fisesoldbool->AsString="true";
        dm->fisenr_doc->AsInteger=1;
        dm->fiseexplicatii->AsString="rulaj martie";
        dm->fisedobanda_sold->AsFloat=dm->Table1SDOB->AsFloat;
        dm->fiseimprumut_sold->AsFloat=dm->Table1SIMPR->AsFloat;
        dm->fisefs_sold->AsFloat=dm->Table1SFDS->AsFloat;
        dm->fise->Post();
                }
        if (!seeker) n++;
        Label13->Caption=IntToStr(dm->Table1->RecNo);
        dm->Table1->Next();
        }
ShowMessage("negasiti= "+IntToStr(n));
dm->Table1->Active=false;
dm->fise->Active=false;
}
//---------------------------------------------------------------------------

