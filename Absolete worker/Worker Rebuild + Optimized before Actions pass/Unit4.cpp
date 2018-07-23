//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit6.h"
#include "Unit8.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRapoarte *Rapoarte;
//---------------------------------------------------------------------------
__fastcall TRapoarte::TRapoarte(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRapoarte::Button32Click(TObject *Sender)
{
Close();
MainFrame->Show();
}
//---------------------------------------------------------------------------
void __fastcall TRapoarte::Button33Click(TObject *Sender)
{
int rec=D1->Table2->RecNo;

TReplaceFlags Flags;
Flags <<rfReplaceAll;
D1->Table10->TableName=ComboBox2->Text+ComboBox3->Text+StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
D1->Table10->CreateTable();

if (D1->Table2->Active) {
        D1->Table2->Active=false;
        D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);;
        D1->Table2->Active=true;}
else {  D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);;
        D1->Table2->Active=true; }

D1->Table10->Close();
D1->Table10->Active=true;

int notfound; notfound=0;
for (int i=1; i<(D1->Table2->RecordCount)+1; i++) {
D1->Table10->Append();
D1->Table10Nume_firma->AsString=D1->Table1Nume_firma->AsString;
D1->Table10Fisc->AsString = D1->Table1Fisc->AsString;
D1->Table10J->AsString = D1->Table1J->AsString;
D1->Table10Banca_1->AsString= D1->Table1Banca_1->AsString;
D1->Table10Banca_2->AsString= D1->Table1Banca_2->AsString;
D1->Table10Filiala_1->AsString=D1->Table1Filiala_1->AsString;
D1->Table10Filiala_2->AsString=D1->Table1Filiala_2->AsString;
D1->Table10Cont_banca_1->AsString=D1->Table1Cont_banca_1->AsString;
D1->Table10Cont_banca_2->AsString=D1->Table1Cont_banca_2->AsString;
D1->Table10Nume_pers_raport->AsString=D1->Table1Nume_pers_raport->AsString;
D1->Table10Functia_pers_raport->AsString=D1->Table1Functia_pers_raport->AsString;
D1->Table10e_mail_firma->AsString=D1->Table1e_mail_firma->AsString;
D1->Table10Telefon_firma->AsFloat=D1->Table1Telefon_firma->AsFloat;
D1->Table10Adresa_firma->AsString=D1->Table1Adresa_firma->AsString;
D1->Table10Cnp_angajator->AsFloat=D1->Table1Cnp_angajator->AsFloat;

D1->Table10Cod->AsString= D1->Table2Cod->AsString;
D1->Table10Nume->AsString=D1->Table2Nume->AsString;
D1->Table10Prenume->AsString=D1->Table2Prenume->AsString;
D1->Table10Cnp->AsFloat =D1->Table2Cnp->AsFloat         ;
D1->Table10Functie->AsString =D1->Table2Functie->AsString                  ;
D1->Table10Cod_functie->AsString = D1->Table2Cod_functie->AsString         ;
D1->Table10Sectia->AsString =D1->Table2Sectia->AsString                    ;
D1->Table10Marca->AsString =D1->Table2Marca->AsString                      ;
D1->Table10Data_angajare->AsString = D1->Table2Data_angajare->AsString;
D1->Table10Salar_tarifar->AsFloat =D1->Table2Salar_tarifar->AsFloat ;
D1->Table10Prima->AsFloat = D1->Table2Prima->AsFloat;
D1->Table10Data_prima_angajare->AsString = D1->Table2Data_prima_angajare->AsString;
D1->Table10Spor_vechime->AsBoolean =  D1->Table10Spor_vechime->AsBoolean;
D1->Table10Regie->AsBoolean =D1->Table2Regie->AsBoolean;
D1->Table10Sex->AsString = D1->Table2Sex->AsString ;
D1->Table10Stare_civila->AsString  = D1->Table2Stare_civila->AsString ;
D1->Table10Telefon->AsFloat = D1->Table2Telefon->AsFloat;
D1->Table10Adresa->AsString = D1->Table2Adresa->AsString;
D1->Table10Data_nastere->AsString = D1->Table2Data_nastere->AsString;
D1->Table10Stagiu_militar->AsBoolean = D1->Table2Stagiu_militar->AsBoolean;
D1->Table10Livret_militar->AsString = D1->Table2Livret_militar->AsString;
D1->Table10Studii->AsString = D1->Table2Studii->AsString;
D1->Table10Numar_copii->AsInteger = D1->Table2Numar_copii->AsInteger;
D1->Table10Date_copii->AsString = D1->Table2Date_copii->AsString;
D1->Table10Pers_handicapate_grI->AsBoolean = D1->Table2Pers_handicapate_grI->AsBoolean;
D1->Table10Pers_handicapate_grII->AsBoolean = D1->Table2Pers_handicapate_grII->AsBoolean;
D1->Table10Sotie_in_intretinere->AsBoolean = D1->Table2Sotie_in_intretinere->AsBoolean;
D1->Table10Concediu_pe_an->AsInteger = D1->Table2Concediu_pe_an->AsInteger;
D1->Table10Norma_ore_zi->AsInteger=D1->Table2Norma_ore_zi->AsInteger;
D1->Table10BASS->AsFloat=D1->Table2BASS->AsFloat;
D1->Table10partial->AsString=D1->Table2partial->AsString;
D1->Table10ore_zi->AsInteger=D1->Table2ore_zi->AsInteger ;
D1->Table10Pensionar->AsString=D1->Table2Pensionar->AsString;

if (D1->Table3->Active) {
        D1->Table3->Active=false;
        D1->Table3->DatabaseName="data\\"+StringReplace(D1->Table1Nume_firma->AsString," ","z", Flags);
        D1->Table3->TableName=D1->Table2Cod->AsString;
        D1->Table3->Active=true;  }
else {  D1->Table3->DatabaseName="data\\"+StringReplace(D1->Table1Nume_firma->AsString," ","z", Flags);
        D1->Table3->TableName=D1->Table2Cod->AsString;
        D1->Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;
AnsiString luna1=ComboBox3->Text;
D1->Table3->Filtered=true;
D1->Table3->Filter="An='"+ComboBox2->Text+"'";
bool found2=D1->Table3->Locate("Luna",luna1,flags);
if (found2){
D1->Table10An->AsInteger =D1->Table3An->AsInteger        ;
D1->Table10Luna->AsString  =D1->Table3Luna->AsString     ;
D1->Table10Zile_lucrate->AsInteger =D1->Table3Zile_lucrate->AsInteger           ;
D1->Table10Zile_nelucrate->AsInteger =D1->Table3Zile_nelucrate->AsInteger       ;
D1->Table10Ore_suplimentare_15->AsInteger  =D1->Table3Ore_suplimentare_15->AsInteger            ;
D1->Table10Ore_suplimentare_2->AsInteger  =D1->Table3Ore_suplimentare_2->AsInteger              ;
D1->Table10Ore_in_sarbatori->AsInteger  =D1->Table3Ore_in_sarbatori->AsInteger                ;
D1->Table10Ore_noapte->AsInteger =D1->Table3Ore_noapte->AsInteger     ;
D1->Table10Ore_nemotivate->AsInteger =D1->Table3Ore_nemotivate->AsInteger ;
D1->Table10Cfs->AsInteger  =D1->Table3Cfs->AsInteger            ;
D1->Table10Ore_in_acord->AsInteger  =D1->Table3Ore_in_acord->AsInteger ;
D1->Table10Premiu->AsFloat  =D1->Table3Premiu->AsFloat           ;
D1->Table10Alti_bani->AsFloat =D1->Table3Alti_bani->AsFloat             ;
D1->Table10Diferenta_diurna->AsFloat =D1->Table3Diferenta_diurna->AsFloat  ;
D1->Table10Regularizare->AsFloat =D1->Table3Regularizare->AsFloat ;
D1->Table10Salar_realizat->AsFloat =D1->Table3Salar_realizat->AsFloat ;
D1->Table10Suplimentar_15->AsFloat = D1->Table3Suplimentar_15->AsFloat       ;
D1->Table10Suplimentar_2->AsFloat = D1->Table3Suplimentar_2->AsFloat       ;
D1->Table10Sarbatori->AsFloat = D1->Table3Sarbatori->AsFloat   ;
D1->Table10Noapte->AsFloat =  D1->Table3Noapte->AsFloat        ;
D1->Table10Spor_vechime_val->AsFloat = D1->Table3Spor_vechime_val->AsFloat;
D1->Table10Valoare_acord->AsFloat = D1->Table3Valoare_acord->AsFloat       ;
D1->Table10Salar_brut->AsFloat = D1->Table3Salar_brut->AsFloat       ;
D1->Table10Zile_concediu_O->AsInteger  = D1->Table3Zile_concediu_O->AsInteger        ;
D1->Table10Valoare_concediu_O->AsFloat    = D1->Table3Valoare_concediu_O->AsFloat          ;
D1->Table10Zile_concediu_M->AsInteger  = D1->Table3Zile_concediu_M->AsInteger        ;
D1->Table10Valoare_concediu_M->AsFloat    = D1->Table3Valoare_concediu_M->AsFloat          ;
D1->Table10Preaviz->AsBoolean=D1->Table3Preaviz->AsBoolean     ;
D1->Table10Baza_calcul_CAS->AsFloat    =D1->Table3Baza_calcul_CAS->AsFloat         ;
D1->Table10Cas->AsFloat = D1->Table3Cas->AsFloat          ;
D1->Table10Cas_firma->AsFloat = D1->Table3Cas_firma->AsFloat          ;
D1->Table10Somaj->AsFloat = D1->Table3Somaj->AsFloat         ;
D1->Table10Somaj_firma->AsFloat = D1->Table3Somaj_firma->AsFloat         ;
D1->Table10Sanatate->AsFloat = D1->Table3Sanatate->AsFloat        ;
D1->Table10Sanatate_firma->AsFloat = D1->Table3Sanatate_firma->AsFloat        ;
D1->Table10Cheltuieli_profesionale->AsFloat = D1->Table3Cheltuieli_profesionale->AsFloat         ;
D1->Table10Venit_net->AsFloat    = D1->Table3Venit_net->AsFloat        ;
D1->Table10Deducere_pers_de_baza->AsFloat   =D1->Table3Deducere_pers_de_baza->AsFloat        ;
D1->Table10Deducere_suplimentara->AsFloat  =D1->Table3Deducere_suplimentara->AsFloat       ;
D1->Table10Baza_calcul_impozit->AsFloat =D1->Table3Baza_calcul_impozit->AsFloat      ;
D1->Table10Baza_calcul_impozit_CO->AsFloat=D1->Table3Baza_calcul_impozit_CO->AsFloat   ;
D1->Table10Impozit->AsFloat=D1->Table3Impozit->AsFloat   ;
D1->Table10Impozit_concediu_O->AsFloat   =D1->Table3Impozit_concediu_O->AsFloat        ;
D1->Table10Ajutor_nastere->AsFloat  =D1->Table3Ajutor_nastere->AsFloat     ;
D1->Table10Avans->AsFloat     =D1->Table3Avans->AsFloat        ;
D1->Table10Indemnizatii->AsFloat     =D1->Table3Indemnizatii->AsFloat        ;
D1->Table10Popriri->AsFloat   =D1->Table3Popriri->AsFloat      ;
D1->Table10Alte_rate->AsFloat    =D1->Table3Alte_rate->AsFloat       ;
D1->Table10Garantii_materiale->AsFloat    =D1->Table3Garantii_materiale->AsFloat       ;
D1->Table10Rest_plata->AsFloat      =D1->Table3Rest_plata->AsFloat         ;
D1->Table10Diferenta_impozit->AsFloat   =D1->Table3Diferenta_impozit->AsFloat      ;
D1->Table10Total_plata->AsFloat   =D1->Table3Total_plata->AsFloat      ;
D1->Table10Salar_net->AsFloat =D1->Table3Salar_net->AsFloat    ;
D1->Table10Concediu_ramas->AsInteger=D1->Table3Concediu_ramas->AsInteger   ;
D1->Table10Zile_luna->AsInteger=D1->Table3Zile_luna->AsInteger;
D1->Table10Zile_lucrate_D->AsInteger=D1->Table3Zile_lucrate_D->AsInteger;
D1->Table10Zile_lucrate_S->AsInteger=D1->Table3Zile_lucrate_S->AsInteger;
D1->Table10Venit_D->AsFloat=D1->Table3Venit_D->AsFloat;
D1->Table10Venit_S->AsFloat=D1->Table3Venit_S->AsFloat;
}
else {notfound=notfound+1;  }
D1->Table10->Post();
D1->Table2->Next();
}
if (notfound>0) ShowMessage("Date la "+IntToStr(notfound)+" negasite");
D1->Table3->Active=false;
D1->Table2->RecNo=rec;
D1->Table3->Filtered=false;
D1->Table10->Active=false;

}
//---------------------------------------------------------------------------
void __fastcall TRapoarte::Button31Click(TObject *Sender)
{
if (D1->Table10->Active) {D1->Table10->Active=false;
TReplaceFlags Flags;
Flags <<rfReplaceAll;
                        D1->Table10->TableName=ComboBox2->Text+ComboBox3->Text+StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
                        }
                        else {
                        TReplaceFlags Flags;
                        Flags <<rfReplaceAll;
                        D1->Table10->TableName=ComboBox2->Text+ComboBox3->Text+StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
                        }
if (RadioGroup1->ItemIndex==0 & RadioGroup2->ItemIndex==0)
        {
D1->Table10->Active=true;
D1->Table10->Filtered=true;
D1->Table10->Filter="Cod='"+D1->Table2Cod->AsString+"'";
stat_plata->Table1->Active=true;
stat_plata->QuickRep1->Preview();
stat_plata->Table1->Active=false;
D1->Table10->Filtered=false;
D1->Table10->Active=false;
        }
if (RadioGroup1->ItemIndex==0 & RadioGroup2->ItemIndex==1)
        {
D1->Table10->Active=true;
stat_plata->Table1->Active=true;
stat_plata->QuickRep1->Preview();
stat_plata->Table1->Active=false;
D1->Table10->Active=false;
        }
if (RadioGroup1->ItemIndex==1)
        {
stat_plata_grupat->Table1->Active=true;
D1->Table10->Active=true;
   if (ComboBox5->Text=="Nume"){
        stat_plata_grupat->QRExpr1->Expression="copy(nume,1,1)";
        stat_plata_grupat->QRGroup1->Expression="copy(nume,1,1)";
        stat_plata_grupat->QuickRep1->Preview();      }
   if (ComboBox5->Text=="Functia"){
        stat_plata_grupat->QRExpr1->Expression="Table10.Functie";
        stat_plata_grupat->QRGroup1->Expression="Table10.Functie";
        stat_plata_grupat->QuickRep1->Preview();       }
   if (ComboBox5->Text=="Marca"){
        stat_plata_grupat->QRExpr1->Expression="Table10.Marca";
        stat_plata_grupat->QRGroup1->Expression="Table10.Marca";
        stat_plata_grupat->QuickRep1->Preview();}
   if (ComboBox5->Text=="Sectia"){
        stat_plata_grupat->QRExpr1->Expression="Table10.Sectia";
        stat_plata_grupat->QRGroup1->Expression="Table10.Sectia";
        stat_plata_grupat->QuickRep1->Preview();}
D1->Table10->Active=false;
stat_plata_grupat->Table1->Active=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TRapoarte::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==1)
        {
 RadioGroup2->Enabled=false;
 ComboBox5->Enabled=true;
        }
if (RadioGroup1->ItemIndex!=1)
        {
 RadioGroup2->Enabled=true;
 ComboBox5->Enabled=false;
        }
 }
//---------------------------------------------------------------------------

void __fastcall TRapoarte::FormActivate(TObject *Sender)
{
TDate dat=Date();
Word zi,luna,an;
DecodeDate(dat,an,luna,zi);
ComboBox2->Text=an;
AnsiString s=FormatDateTime("mmmm", Now() + 0.125);
ComboBox3->Text=s;
StatusBar->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
}
//---------------------------------------------------------------------------

