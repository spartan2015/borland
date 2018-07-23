//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit9.h"
#include "Unit7.h"
#include "math.h"
#include "Unit12.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TDeclaratii_cas *Declaratii_cas;
//---------------------------------------------------------------------------
__fastcall TDeclaratii_cas::TDeclaratii_cas(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDeclaratii_cas::Button41Click(TObject *Sender)
{
Close();
MainFrame->Show();
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_cas::Button39Click(TObject *Sender)
{
int rec=D1->Table2->RecNo;
if (Edit14->Text.Length()<3){MessageDlg("Cod localitate obligatoriu!!!", mtWarning, TMsgDlgButtons() << mbAbort, 0); return;}
if (Edit15->Text.Length()<3){MessageDlg("Localitatea obligatorie!!!", mtWarning, TMsgDlgButtons() << mbAbort, 0); return;}
TReplaceFlags Flags;
Flags <<rfReplaceAll;
D1->Table10->TableName=ComboBox8->Text+ComboBox9->Text+StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
D1->Table10->CreateTable();

if (D1->Table2->Active) {
        D1->Table2->Active=false;
        D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);;
        D1->Table2->Active=true;}
else { D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);;
        D1->Table2->Active=true; }

D1->Table10->Close();
D1->Table10->Active=true;

int notfound; notfound=0;
for (int i=1; i<(D1->Table2->RecordCount)+1; i++) {
D1->Table10->Append();
if (D1->Table10Nume_firma->AsString.Length()>29) ShowMessage("Nume firma mai mare de | 29 caractere! Trunchiat in CAS!");
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
else {
        D1->Table3->DatabaseName="data\\"+StringReplace(D1->Table1Nume_firma->AsString," ","z", Flags);
        D1->Table3->TableName=D1->Table2Cod->AsString;
        D1->Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;
AnsiString luna1=ComboBox9->Text;
D1->Table3->Filtered=true;
D1->Table3->Filter="An='"+ComboBox8->Text+"'";
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
//******************centralizat*************************************************
//------------------------ A11--------------------------------------------------
D1->Table15->TableName="A11_"+ComboBox8->Text+ComboBox9->Text;
D1->Table15->CreateTable();
D1->Table16->TableName="A12_"+ComboBox8->Text+ComboBox9->Text;
D1->Table16->CreateTable();

D1->Table15->Active=true;

D1->Table10->First();
for (int i=1; i<D1->Table10->RecordCount+1; i++) {

D1->Table15->Append();
D1->Table15AN->AsInteger=D1->Table10An->AsInteger;
if (D1->Table10Luna->AsString=="ianuarie") D1->Table15LN->AsInteger=1;
if (D1->Table10Luna->AsString=="februarie") D1->Table15LN->AsInteger=2;
if (D1->Table10Luna->AsString=="martie") D1->Table15LN->AsInteger=3;
if (D1->Table10Luna->AsString=="aprilie") D1->Table15LN->AsInteger=4;
if (D1->Table10Luna->AsString=="mai") D1->Table15LN->AsInteger=5;
if (D1->Table10Luna->AsString=="iunie") D1->Table15LN->AsInteger=6;
if (D1->Table10Luna->AsString=="iulie") D1->Table15LN->AsInteger=7;
if (D1->Table10Luna->AsString=="august") D1->Table15LN->AsInteger=8;
if (D1->Table10Luna->AsString=="septembrie") D1->Table15LN->AsInteger=9;
if (D1->Table10Luna->AsString=="octombrie") D1->Table15LN->AsInteger=10;
if (D1->Table10Luna->AsString=="noiembrie") D1->Table15LN->AsInteger=11;
if (D1->Table10Luna->AsString=="decembrie") D1->Table15LN->AsInteger=12;

D1->Table15CF->AsFloat=D1->Table10Fisc->AsFloat;
AnsiString j=D1->Table10J->AsString;
int index = j.Pos("/");
D1->Table15RJ->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
index = j.Pos("/");
D1->Table15RN->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
D1->Table15RA->AsString=j ;

D1->Table15NUME->AsString=D1->Table10Nume->AsString+" "+D1->Table10Prenume->AsString;
D1->Table15CNP->AsFloat=D1->Table10Cnp->AsFloat;
if (D1->Table10Pensionar->AsString=="True"){
        D1->Table15CM->AsInteger=0;
        D1->Table15CV->AsInteger=0;
        D1->Table15SOM->AsInteger=0;
        D1->Table15PE->AsInteger=D1->Table10ore_zi->AsInteger;
        }
if (D1->Table10partial->AsString=="True"){
        D1->Table15CM->AsInteger=0;
        D1->Table15SOM->AsInteger=0;
        D1->Table15CV->AsInteger=D1->Table10ore_zi->AsInteger;
        D1->Table15PE->AsInteger=0;
        }
if (D1->Table10partial->AsString=="False" & D1->Table10Pensionar->AsString=="False") D1->Table15CM->AsInteger=1;
D1->Table15SOM->AsInteger=0;

D1->Table15TT->AsInteger=D1->Table10Zile_luna->AsInteger;
D1->Table15NN->AsInteger=D1->Table10Zile_lucrate->AsInteger;
D1->Table15DD->AsInteger=D1->Table10Zile_lucrate_D->AsInteger;
D1->Table15SS->AsInteger=D1->Table10Zile_lucrate_S->AsInteger;
D1->Table15PP->AsInteger=0;
D1->Table15TVN->AsFloat=D1->Table10Salar_realizat->AsFloat-D1->Table10Venit_D->AsFloat-D1->Table10Venit_S->AsFloat;
D1->Table15TVD->AsFloat=D1->Table10Venit_D->AsFloat;
D1->Table15TVS->AsFloat=D1->Table10Venit_S->AsFloat;
D1->Table15TV->AsFloat=D1->Table10Salar_realizat->AsFloat;
D1->Table15CASAT->AsFloat=D1->Table10Cas->AsFloat;
D1->Table15BASS->AsFloat=D1->Table10BASS->AsFloat;
D1->Table15CASTOT->AsFloat=rotunjire (D1->Table15CASAT->AsFloat*pcas->Value/100 );
D1->Table15CNPA->AsFloat=D1->Table10Cnp_angajator->AsFloat;
D1->Table15NORMA->AsInteger=D1->Table10Norma_ore_zi->AsInteger;

D1->Table15->Post();
D1->Table10->Next();
                }
//********************** incheiat A11*******************************************
//----------------------A12-----------------------------------------------------
D1->Table16->Active=true;

D1->Table16->Append();
D1->Table16AN->AsInteger=D1->Table10An->AsInteger;
if (D1->Table10Luna->AsString=="ianuarie") D1->Table16LN->AsInteger=1;
if (D1->Table10Luna->AsString=="februarie") D1->Table16LN->AsInteger=2;
if (D1->Table10Luna->AsString=="martie") D1->Table16LN->AsInteger=3;
if (D1->Table10Luna->AsString=="aprilie") D1->Table16LN->AsInteger=4;
if (D1->Table10Luna->AsString=="mai") D1->Table16LN->AsInteger=5;
if (D1->Table10Luna->AsString=="iunie") D1->Table16LN->AsInteger=6;
if (D1->Table10Luna->AsString=="iulie") D1->Table16LN->AsInteger=7;
if (D1->Table10Luna->AsString=="august") D1->Table16LN->AsInteger=8;
if (D1->Table10Luna->AsString=="septembrie") D1->Table16LN->AsInteger=9;
if (D1->Table10Luna->AsString=="octombrie") D1->Table16LN->AsInteger=10;
if (D1->Table10Luna->AsString=="noiembrie") D1->Table16LN->AsInteger=11;
if (D1->Table10Luna->AsString=="decembrie") D1->Table16LN->AsInteger=12;

Word an, luna, zi;
TDate data=DateTimePicker3->DateTime;
DecodeDate(data, an, luna, zi);
D1->Table16DCZZ->AsInteger=zi;
D1->Table16DCLL->AsInteger=luna;
D1->Table16DCAA->AsInteger=an;
D1->Table16DEN->AsString=D1->Table10Nume_firma->AsString;
D1->Table16CF->AsFloat=D1->Table10Fisc->AsFloat;
AnsiString j=D1->Table10J->AsString;
int index = j.Pos("/");
D1->Table16RJ->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
index = j.Pos("/");
D1->Table16RN->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
D1->Table16RA->AsString=j ;
D1->Table16NRM->AsInteger=D1->Table15->RecordCount;
D1->Table15->First();
        for (int l=1; l<D1->Table15->RecordCount+1; l++){
D1->Table16FS->AsFloat+=D1->Table15TV->AsFloat;
D1->Table16FSN->AsFloat+=D1->Table15TVN->AsFloat;
D1->Table16FSD->AsFloat+=D1->Table15TVD->AsFloat;
D1->Table16FSS->AsFloat+=D1->Table15TVS->AsFloat;
D1->Table16BASS->AsFloat+=D1->Table15BASS->AsFloat;
D1->Table15->Next();
}
D1->Table9->Active=true;
D1->Table16CASS->AsFloat=rotunjire( D1->Table16FS->AsFloat*D1->Table9cas->AsFloat/100 );
D1->Table16CASAN->AsFloat=rotunjire( D1->Table16FS->AsFloat*D1->Table9cas_firma->AsFloat/100);
D1->Table9->Active=false;
D1->Table16CASVIR->AsFloat=D1->Table16CASS->AsFloat+D1->Table16CASAN->AsFloat-D1->Table16BASS->AsFloat;
D1->Table16CAS145->AsFloat=StrToFloat(Edit13->Text);
D1->Table16NRF->AsInteger=StrToInt(Edit23->Text);
D1->Table16B1->AsString=D1->Table10Banca_1->AsString;
D1->Table16B2->AsString=D1->Table10Banca_2->AsString;
D1->Table16B3->AsString="";
D1->Table16B4->AsString="";
D1->Table16F1->AsString=D1->Table10Filiala_1->AsString;
D1->Table16F2->AsString=D1->Table10Filiala_2->AsString;
D1->Table16F3->AsString="";
D1->Table16F4->AsString="";
D1->Table16C1->AsString=D1->Table10Cont_banca_1->AsString;
D1->Table16C2->AsString=D1->Table10Cont_banca_2->AsString;
D1->Table16C3->AsString="";
D1->Table16C4->AsString="";
D1->Table16CNPA->AsFloat=D1->Table10Cnp_angajator->AsFloat;
D1->Table9->Active=true;
D1->Table16CAAMBP->AsFloat=rotunjire( D1->Table9fond_accidente->AsFloat*D1->Table16FS->AsFloat/100 );
D1->Table9->Active=false;

D1->Table16A_LOCA->AsString=Edit15->Text;
D1->Table16A_STR->AsString=Edit17->Text;
D1->Table16A_NR->AsString=Edit18->Text;
D1->Table16A_BL->AsString=Edit19->Text;
D1->Table16A_SC->AsString=Edit20->Text;
D1->Table16A_ET->AsString=Edit21->Text;
D1->Table16A_AP->AsString=Edit22->Text;
D1->Table16A_JUD->AsString=Edit14->Text;
D1->Table16A_SECT->AsString=Edit16->Text;

D1->Table16TELEFON->AsFloat=D1->Table10Telefon_firma->AsFloat;
D1->Table16E_MAIL->AsString=D1->Table10e_mail_firma->AsString;
D1->Table16->Post();
//************************** end A22****************************************

D1->Table15->Close();
D1->Table16->Close();
D1->Table10->Close();
Button40->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_cas::Button1Click(TObject *Sender)
{
AnsiString alfa=GetCurrentDir();
Dir_dialog->ShowModal();
if (Dir_dialog->Label1->Caption.Length()==3)
        Edit1->Text=Dir_dialog->Label1->Caption;
else
        Edit1->Text=Dir_dialog->Label1->Caption+"\\";
SetCurrentDir(alfa);
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_cas::Button40Click(TObject *Sender)
{
D1->Table17->EmptyTable();
D1->Table18->EmptyTable();

D1->b1->Execute();
D1->b2->Execute();

D1->Table17->Close();
D1->Table18->Close();

int open1=FileOpen("A11.dbf",fmOpenRead);
if (open1==-1) { ShowMessage("Error opening file A11.dbf!"); return;   }
int c1=FileCreate(Edit1->Text+"A11.dbf");
if (c1==-1) { ShowMessage("Error creating file A11.dbf!"); return; }
char *buffer;
buffer=new char[1024];
long lungime=FileSeek(open1,0,2);
FileSeek(open1,0,0);
int count=1024;
for (;lungime; lungime-=count) {
        if (lungime-count<count) {
        count=lungime;
        buffer=new char[count];
        }
        FileRead(open1,buffer,count);
        FileWrite(c1,buffer,count);
}
FileClose(c1);
FileClose(open1);

//--------------- A12----------------------------
open1=FileOpen("A12.dbf",fmOpenRead);
if (open1==-1) { ShowMessage("Error opening file A12.dbf!"); return;   }
c1=FileCreate(Edit1->Text+"A12.dbf");
if (c1==-1) { ShowMessage("Error creating file A12.dbf!"); return; }
buffer=new char[1024];
lungime=FileSeek(open1,0,2);
FileSeek(open1,0,0);
count=1024;
for (;lungime; lungime-=count) {
        if (lungime-count<count) {
        count=lungime;
        buffer=new char[count];
        }
        FileRead(open1,buffer,count);
        FileWrite(c1,buffer,count);
}
FileClose(c1);
FileClose(open1);
}
//---------------------------------------------------------------------------
float __fastcall TDeclaratii_cas::rotunjire(float e)
{
float z1,z2;
long int mare,mic;
mare= (long int) e+1;
mic= (long int) e;
z1=mare-e;
z2=e-mic;
e = z1>z2 ? mic : mare ;
if (z1==z2) e=ceil(e);
return e;
}
//---------------------------------------------------------------------------


void __fastcall TDeclaratii_cas::Button2Click(TObject *Sender)
{
D1->Table15->Active=true;
a11->QuickRep1->Preview();
D1->Table15->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_cas::Button3Click(TObject *Sender)
{
D1->Table16->Active=true;
a12->QuickRep1->Preview();
D1->Table16->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_cas::FormActivate(TObject *Sender)
{
TDate dat=Date();
Word zi,luna,an;
DecodeDate(dat,an,luna,zi);
ComboBox8->Text=an;
AnsiString s=FormatDateTime("mmmm", Now() + 0.125);
ComboBox9->Text=s;
StatusBar->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
DateTimePicker3->Date=Now();
}
//---------------------------------------------------------------------------


void __fastcall TDeclaratii_cas::Button4Click(TObject *Sender)
{
cod_judet->ShowModal();        
}
//---------------------------------------------------------------------------

