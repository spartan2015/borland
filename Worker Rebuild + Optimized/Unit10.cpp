//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit9.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TDeclaratii_somaj *Declaratii_somaj;
//---------------------------------------------------------------------------
__fastcall TDeclaratii_somaj::TDeclaratii_somaj(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDeclaratii_somaj::Button38Click(TObject *Sender)
{
Close();
MainFrame->Show();
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button35Click(TObject *Sender)
{
int rec=D1->Table2->RecNo;

TReplaceFlags Flags;
Flags <<rfReplaceAll;
D1->Table10->TableName=ComboBox6->Text+ComboBox7->Text+StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
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
AnsiString luna1=ComboBox7->Text;
D1->Table3->Filtered=true;
D1->Table3->Filter="An='"+ComboBox6->Text+"'";
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
else {notfound+=1;  }
D1->Table10->Post();
D1->Table2->Next();
}
if (notfound>0) ShowMessage("Date la "+IntToStr(notfound)+" negasite");
D1->Table3->Active=false;
D1->Table2->RecNo=rec;
D1->Table3->Filtered=false;
//**************************centralizat******************
//********* o conditie ar usura comp-ul de task-ul asta**
D1->Table11->TableName="A1_"+ComboBox6->Text+ComboBox7->Text;
D1->Table11->CreateTable();
D1->Table12->TableName="A2_"+ComboBox6->Text+ComboBox7->Text;
D1->Table12->CreateTable();
//******** sa fie lumina -------**************
//******** prima A1 *****************************
D1->Table11->Active=true;
D1->Table10->First();
int pen=0;
for (int i=1; i<D1->Table10->RecordCount+1; i++) {
if (D1->Table10Pensionar->AsBoolean==false) {
D1->Table11->Append();
D1->Table11An->AsInteger=D1->Table10An->AsInteger;
if (D1->Table10Luna->AsString=="ianuarie") D1->Table11Ln->AsInteger=1;
if (D1->Table10Luna->AsString=="februarie") D1->Table11Ln->AsInteger=2;
if (D1->Table10Luna->AsString=="martie") D1->Table11Ln->AsInteger=3;
if (D1->Table10Luna->AsString=="aprilie") D1->Table11Ln->AsInteger=4;
if (D1->Table10Luna->AsString=="mai") D1->Table11Ln->AsInteger=5;
if (D1->Table10Luna->AsString=="iunie") D1->Table11Ln->AsInteger=6;
if (D1->Table10Luna->AsString=="iulie") D1->Table11Ln->AsInteger=7;
if (D1->Table10Luna->AsString=="august") D1->Table11Ln->AsInteger=8;
if (D1->Table10Luna->AsString=="septembrie") D1->Table11Ln->AsInteger=9;
if (D1->Table10Luna->AsString=="octombrie") D1->Table11Ln->AsInteger=10;
if (D1->Table10Luna->AsString=="noiembrie") D1->Table11Ln->AsInteger=11;
if (D1->Table10Luna->AsString=="decembrie") D1->Table11Ln->AsInteger=12;
D1->Table11Cf->AsFloat=D1->Table10Fisc->AsFloat;
D1->Table11Cn->AsFloat=D1->Table10Cnp_angajator->AsFloat;
D1->Table11Nume->AsString=D1->Table10Nume->AsString+" "+D1->Table10Prenume->AsString;
D1->Table11Cnp->AsFloat=D1->Table10Cnp->AsFloat;
D1->Table11Rm->AsInteger=1;
D1->Table11Cv->AsInteger=0;
D1->Table11Sbl->AsFloat=D1->Table10Salar_brut->AsFloat;

D1->Table11Cid->AsFloat=D1->Table10Somaj->AsFloat;
D1->Table11Civ->AsFloat=rotunjire (D1->Table11Cid->AsFloat*CSpinEdit1->Value/100);

D1->Table11Cin->AsInteger=D1->Table11Cid->AsInteger-D1->Table11Civ->AsInteger;
D1->Table11->Post();
        }
else pen+=1;
D1->Table10->Next();
}
if (pen>0) ShowMessage("Pensionari pentru care nu se raporteaza somajul: "+IntToStr(pen)+" !");
//************** A2 *******************************
D1->Table12->Active=true;
D1->Table12->Edit();
D1->Table12Nri->AsInteger=Edit6->Text.ToInt();
D1->Table12Datai->AsString=DateToStr(DateTimePicker1->Date);
D1->Table12An->AsInteger=ComboBox6->Text.ToInt();
if (D1->Table10Luna->AsString=="ianuarie") D1->Table12Ln->AsInteger=1;
if (D1->Table10Luna->AsString=="februarie") D1->Table12Ln->AsInteger=2;
if (D1->Table10Luna->AsString=="martie") D1->Table12Ln->AsInteger=3;
if (D1->Table10Luna->AsString=="aprilie") D1->Table12Ln->AsInteger=4;
if (D1->Table10Luna->AsString=="mai") D1->Table12Ln->AsInteger=5;
if (D1->Table10Luna->AsString=="iunie") D1->Table12Ln->AsInteger=6;
if (D1->Table10Luna->AsString=="iulie") D1->Table12Ln->AsInteger=7;
if (D1->Table10Luna->AsString=="august") D1->Table12Ln->AsInteger=8;
if (D1->Table10Luna->AsString=="septembrie") D1->Table12Ln->AsInteger=9;
if (D1->Table10Luna->AsString=="octombrie") D1->Table12Ln->AsInteger=10;
if (D1->Table10Luna->AsString=="noiembrie") D1->Table12Ln->AsInteger=11;
if (D1->Table10Luna->AsString=="decembrie") D1->Table12Ln->AsInteger=12;
D1->Table12Datal->AsString=DateToStr(DateTimePicker3->Date);
D1->Table12Den->AsString=D1->Table10Nume_firma->AsString;
D1->Table12Cf->AsFloat=D1->Table10Fisc->AsFloat;
AnsiString j=D1->Table10J->AsString;
int index = j.Pos("/");
D1->Table12Rj->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
index = j.Pos("/");
D1->Table12Rn->AsString=j.SubString(1,index-1) ;
j=j.Delete(1,index);
D1->Table12Ra->AsString=j ;
D1->Table12Nra->AsInteger=D1->Table10->RecordCount;
D1->Table11->First();
int fond=0;
for (int j=1; j<D1->Table11->RecordCount+1; j++) {
       fond=fond+ D1->Table11Sbl->AsFloat;
       D1->Table11->Next();
       }
D1->Table12Fs->AsInteger=fond;
//******** Totaluri de acu
if (!D1->Table9->Active) D1->Table9->Active=true;
D1->Table12Tcad->AsFloat=rotunjire ( (D1->Table9somaj_firma->AsFloat)*(D1->Table12Fs->AsInteger)/100);
D1->Table12Tcav->AsFloat=rotunjire ( D1->Table12Tcad->AsInteger*(CSpinEdit1->Value)/100 );
D1->Table12Tcan->AsFloat=D1->Table12Tcad->AsFloat-D1->Table12Tcav->AsFloat;
D1->Table12Ded->AsFloat=Edit7->Text.ToInt();
D1->Table12Tcid->AsFloat=rotunjire ( (D1->Table9somaj->AsFloat)*(D1->Table12Fs->AsInteger)/100 );
D1->Table12Tciv->AsFloat=rotunjire ( D1->Table12Tcid->AsInteger*(CSpinEdit1->Value)/100 );
D1->Table9->Active=false;
D1->Table12Tcin->AsFloat=D1->Table12Tcid->AsFloat-D1->Table12Tciv->AsFloat;
D1->Table12Totd->AsFloat=D1->Table12Tcad->AsFloat-D1->Table12Ded->AsFloat+D1->Table12Tcid->AsFloat;
D1->Table12Totv->AsFloat=D1->Table12Tcav->AsFloat+D1->Table12Tciv->AsFloat;
D1->Table12Totn->AsFloat=D1->Table12Totd->AsFloat-D1->Table12Totv->AsFloat;
D1->Table12Oblna->AsFloat=Edit8->Text.ToInt();
D1->Table12Oblni->AsFloat=Edit9->Text.ToInt();
D1->Table12Maj->AsFloat=Edit10->Text.ToInt();
D1->Table12Pen->AsFloat=Edit11->Text.ToInt();
D1->Table12Obl->AsFloat=D1->Table12Oblna->AsFloat+D1->Table12Oblni->AsFloat+D1->Table12Maj->AsFloat+D1->Table12Pen->AsFloat;
D1->Table12Totobl->AsFloat=D1->Table12Obl->AsFloat+D1->Table12Totn->AsFloat;
//*********** END of calculations ************************
D1->Table12B1->AsString=D1->Table10Banca_1->AsString;
D1->Table12B2->AsString=D1->Table10Banca_2->AsString;
D1->Table12F1->AsString=D1->Table10Filiala_1->AsString;
D1->Table12F2->AsString=D1->Table10Filiala_2->AsString;
D1->Table12C1->AsString=D1->Table10Cont_banca_1->AsString;
D1->Table12C2->AsString=D1->Table10Cont_banca_2->AsString;
D1->Table12Funca->AsString=D1->Table10Functia_pers_raport->AsString;
D1->Table12Numea->AsString=D1->Table10Nume_pers_raport->AsString;
D1->Table12Datad->AsString=DateToStr(DateTimePicker2->Date);
D1->Table12Sup->AsInteger=1;
D1->Table12->Post();
//************** closing time James *************
D1->Table11->Close();
D1->Table12->Close();

D1->Table10->Close();
Button37->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button36Click(TObject *Sender)
{
AnsiString alfa=GetCurrentDir();
Dir_dialog->ShowModal();
if (Dir_dialog->Label1->Caption.Length()==3)
        Edit12->Text=Dir_dialog->Label1->Caption;
else
        Edit12->Text=Dir_dialog->Label1->Caption+"\\";
SetCurrentDir(alfa);
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button37Click(TObject *Sender)
{
D1->Table13->EmptyTable();
D1->Table14->EmptyTable();

D1->a1->Execute();
D1->a2->Execute();

D1->Table13->Close();
D1->Table14->Close();

int open1=FileOpen("A1.dbf",fmOpenRead);
if (open1==-1) { ShowMessage("Error opening file A1.dbf!"); return;   }
int c1=FileCreate(Edit12->Text+"A1.dbf");
if (c1==-1) { ShowMessage("Error creating file A1.dbf!"); return; }
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
//---------------------------A2---------------------------
open1=FileOpen("A2.dbf",fmOpenRead);
if (open1==-1) { ShowMessage("Error opening file A2.dbf!"); return;   }
c1=FileCreate(Edit12->Text+"A2.dbf");
if (c1==-1) { ShowMessage("Error creating file A2.dbf!"); return; }
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
float __fastcall TDeclaratii_somaj::rotunjire(float e)
{
float z1,z2;
long int mare,mic;
mare= (long int) e+1;
mic= (long int) e;
z1=mare-e;
z2=e-mic;
e = z1>z2 ? mic : mare ;
if (z1==z2) e=rotunjire(e);
return e;
}
//---------------------------------------------------------------------------
void __fastcall TDeclaratii_somaj::FormActivate(TObject *Sender)
{
TDate dat=Date();
Word zi,luna,an;
DecodeDate(dat,an,luna,zi);
ComboBox6->Text=an;
AnsiString s=FormatDateTime("mmmm", Now() + 0.125);
ComboBox7->Text=s;
StatusBar->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
DateTimePicker1->Date=Now();
DateTimePicker2->Date=Now();
DateTimePicker3->Date=Now();
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button1Click(TObject *Sender)
{
AnsiString alfa;
alfa=GetCurrentDir();
D1->Table11->Active=true;
D1->Table12->Active=true;
a1->QuickRep1->Preview();
SetCurrentDir(alfa);
D1->Table11->Active=false;
D1->Table12->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button2Click(TObject *Sender)
{
AnsiString alfa;
alfa=GetCurrentDir();
D1->Table11->Active=true;
D1->Table12->Active=true;
a2->QuickRep1->Preview();
SetCurrentDir(alfa);
D1->Table11->Active=false;
D1->Table12->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TDeclaratii_somaj::Button3Click(TObject *Sender)
{
AnsiString alfa;
alfa=GetCurrentDir();
D1->Table11->Active=true;
D1->Table12->Active=true;
a3->QuickRep1->Preview();
SetCurrentDir(alfa);
D1->Table11->Active=false;
D1->Table12->Active=false;
}
//---------------------------------------------------------------------------

