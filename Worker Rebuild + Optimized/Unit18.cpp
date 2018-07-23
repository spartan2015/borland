//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit18.h"
#include "Unit2.h"
#include "Unit19.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tautomatizare *automatizare;
//---------------------------------------------------------------------------
__fastcall Tautomatizare::Tautomatizare(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tautomatizare::Button1Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;

meter->Show();
//******************
D1->Table4->Active=true;
D1->Table4->Filtered=true;
D1->Table4->Filter="Anul='"+ComboBox1->Text+"'";
int zile=0;
if (ComboBox2->Text=="ianuarie")  zile = D1->Table4L01->AsInteger;
if (ComboBox2->Text=="februarie") zile = D1->Table4L02->AsInteger;
if (ComboBox2->Text=="martie")    zile = D1->Table4L03->AsInteger;
if (ComboBox2->Text=="aprilie")   zile = D1->Table4L04->AsInteger;
if (ComboBox2->Text=="mai")       zile = D1->Table4L05->AsInteger;
if (ComboBox2->Text=="iunie")     zile = D1->Table4L06->AsInteger;
if (ComboBox2->Text=="iulie")     zile = D1->Table4L07->AsInteger;
if (ComboBox2->Text=="august")    zile = D1->Table4L08->AsInteger;
if (ComboBox2->Text=="septembrie")zile = D1->Table4L09->AsInteger;
if (ComboBox2->Text=="octombrie") zile = D1->Table4L10->AsInteger;
if (ComboBox2->Text=="noiembrie") zile = D1->Table4L11->AsInteger;
if (ComboBox2->Text=="decembrie") zile = D1->Table4L12->AsInteger;
if (zile==0) {ShowMessage("Eroare in dbf pentru variabila zile...Apelati programatorul!"); return; }
D1->Table4->Active=false;
//******************
D1->Table2->First();
int rec=D1->Table2->RecordCount;
meter->cc1->MaxValue=rec;
       for (int i=1; i<rec+1; i++) {
meter->cc2->Progress=0;
meter->cc1->Progress=i;
meter->cc2->Progress=25;
if (!D1->Table3->Active) {
        D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+D1->Table2Cod->AsString;
        D1->Table3->Active=true;
        }
else {
        D1->Table3->Close();
        D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+D1->Table2Cod->AsString;
        D1->Table3->Active=true;
   }
        D1->Table3->Append();
        D1->Table3Zile_lucrate->AsInteger=zile;
        D1->Table3Zile_luna->AsInteger=zile;
        D1->Table3An->AsInteger=ComboBox1->Text.ToInt();
        D1->Table3Luna->AsString=ComboBox2->Text;
        //**\\
int contor,vechime;
contor=0;
if (D1->Table2Spor_vechime->AsBoolean==true) {
Word an,luna,zi,an1,luna1,zi1;
TDate dat=Date(),dat1;
DecodeDate(dat,an,luna,zi);
dat1=D1->Table2Data_prima_angajare->AsString;
DecodeDate(dat1,an1,luna1,zi1);

vechime=((an-an1)*12+luna-luna1)/12;

D1->Table5->Active=true;
D1->Table5->First();
for (int i=0; i<7; i++) {
        if (vechime>=D1->Table5v1->AsFloat & vechime<=D1->Table5v2->AsFloat)
        contor=D1->Table5val->AsFloat;
D1->Table5->Next();          }
        }
int salar_o=rotunjire ( (D1->Table2Salar_tarifar->AsFloat)/176 );
D1->Table3->Edit();
D1->Table3Spor_vechime_val->AsFloat=rotunjire (((8*salar_o)*(D1->Table3Zile_lucrate->AsInteger)*contor)/100);
D1->Table3->Post();
D1->Table3->Edit();        //Atentie!!!
if (D1->Table2Regie->AsBoolean==true) {
        salar_o=rotunjire ((D1->Table2Salar_tarifar->AsFloat)/(D1->Table3Zile_luna->AsInteger*8));
        D1->Table3Salar_realizat->AsFloat=D1->Table3Zile_lucrate->AsInteger*salar_o*8;
        if (D1->Table2Regie->AsBoolean) if (D1->Table3Zile_luna->AsInteger==D1->Table3Zile_lucrate->AsInteger) D1->Table3Salar_realizat->AsFloat=D1->Table2Salar_tarifar->AsFloat;
        }
else   {
   if (D1->Table2Regie->AsBoolean) if (D1->Table3Zile_luna->AsInteger==D1->Table3Zile_lucrate->AsInteger) D1->Table3Salar_realizat->AsFloat=D1->Table2Salar_tarifar->AsFloat;
   D1->Table3Salar_realizat->AsFloat=D1->Table3Zile_lucrate->AsInteger*salar_o*8; }

D1->Table3Suplimentar_15->AsFloat=rotunjire ( D1->Table3Ore_suplimentare_15->AsInteger*1.5*salar_o );
D1->Table3Suplimentar_2->AsFloat=rotunjire ( D1->Table3Ore_suplimentare_2->AsInteger*2*salar_o );
D1->Table3Sarbatori->AsFloat=rotunjire ( D1->Table3Ore_in_sarbatori->AsInteger*2*salar_o );
D1->Table3Noapte->AsFloat=rotunjire (D1->Table3Ore_noapte->AsInteger*1.5*salar_o );

D1->Table3Valoare_concediu_O->AsFloat=rotunjire ( ((D1->Table2Salar_tarifar->AsFloat+D1->Table3Spor_vechime_val->AsFloat)/D1->Table3Zile_luna->AsFloat)
        *D1->Table3Zile_concediu_O->AsFloat );

D1->Table3Valoare_acord->AsFloat=D1->Table3Ore_in_acord->AsInteger*salar_o;
D1->Table3Concediu_ramas->AsInteger=D1->Table2Concediu_pe_an->AsInteger-D1->Table3Zile_concediu_O->AsInteger;

D1->Table3Salar_brut->AsFloat=D1->Table3Salar_realizat->AsFloat+D1->Table3Suplimentar_15->AsFloat
+D1->Table3Suplimentar_2->AsFloat+D1->Table3Sarbatori->AsFloat
+D1->Table3Noapte->AsFloat+D1->Table3Spor_vechime_val->AsFloat
+D1->Table3Valoare_acord->AsFloat+D1->Table3Valoare_concediu_O->AsFloat
+D1->Table3Venit_D->AsFloat+D1->Table3Venit_S->AsFloat;

D1->Table3->Post();
D1->Table3->Edit(); //Atentie 2!! butonul protejeaza inchide editul
//********************** pagina a 2-a****************
D1->Table6->Active=true;
D1->Table6->Edit();
if (D1->Table2fara_deducere->AsBoolean!=true)
D1->Table3Deducere_pers_de_baza->AsFloat=D1->Table6D_baza->AsFloat;
else
D1->Table3Deducere_pers_de_baza->AsFloat=0;
//*******aici zace dedp_b
if (D1->Table3Valoare_concediu_O->AsInteger > D1->Table6Cota_cas->AsInteger)
        D1->Table3Baza_calcul_impozit_CO->AsFloat = D1->Table6Cota_cas->AsInteger;
else    D1->Table3Baza_calcul_impozit_CO->AsFloat = D1->Table3Valoare_concediu_O->AsInteger;

if (D1->Table3Salar_brut->AsInteger > D1->Table6Cota_cas->AsInteger)
        D1->Table3Baza_calcul_CAS->AsFloat = D1->Table6Cota_cas->AsInteger;
else    D1->Table3Baza_calcul_CAS->AsFloat =  D1->Table3Salar_brut->AsInteger;

D1->Table9->Active=true;

D1->Table3Cas->AsFloat =rotunjire( ((D1->Table9cas->AsFloat)*(D1->Table3Baza_calcul_CAS->AsFloat))/100 );
D1->Table3Cas_firma->AsFloat =rotunjire( ((D1->Table9cas_firma->AsFloat)*(D1->Table3Baza_calcul_CAS->AsFloat))/100 );
if (D1->Table2Pensionar->AsBoolean==false) { //pensionarii nu platesc somaj
D1->Table3Somaj->AsFloat =rotunjire( ((D1->Table9somaj->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );
D1->Table3Somaj_firma->AsFloat =rotunjire( ((D1->Table9somaj_firma->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );
                                                }
D1->Table3Sanatate->AsFloat =rotunjire( ((D1->Table9sanatate->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );
D1->Table3Sanatate_firma->AsFloat =rotunjire( ((D1->Table9sanatate_firma->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );

if (D1->Table2fara_deducere->AsBoolean!=true)
D1->Table3Cheltuieli_profesionale->AsFloat =rotunjire( ((D1->Table9cheltuieli_profesionale->AsFloat)*D1->Table6D_baza->AsFloat)/100 );
else
D1->Table3Cheltuieli_profesionale->AsFloat =0;
D1->Table9->Active=false;
D1->Table3Venit_net->AsFloat = D1->Table3Salar_brut->AsFloat - D1->Table3Cas->AsFloat
- D1->Table3Somaj->AsFloat - D1->Table3Sanatate->AsFloat - D1->Table3Cheltuieli_profesionale->AsFloat;

float prim1,prim2,prim3,prim4,prim5;
D1->Table7->Active=true;
D1->Table7->Edit();
D1->Table7->First();

prim1=D1->Table7Cota1->AsFloat;
D1->Table7->Next();
prim2=D1->Table7Cota1->AsFloat;
D1->Table7->Next();
prim3=D1->Table7Cota1->AsFloat;
D1->Table7->Next();
prim4=D1->Table7Cota1->AsFloat;
D1->Table7->Next();
prim5=D1->Table7Cota1->AsFloat;
D1->Table7->Next();
//************** weird

//**********unde e dedp_b???????????? cine e dedp_b?*****
float tango;
tango=0;
if (D1->Table2Sotie_in_intretinere->AsBoolean==true) {
   D1->Table3Deducere_suplimentara->AsFloat =rotunjire( (D1->Table3Deducere_pers_de_baza->AsFloat*prim1)/100 );
   D1->Table3->Post(); D1->Table3->Edit();
   tango=tango+prim1; }
if (D1->Table2Pers_handicapate_grI->AsBoolean==true) {
   D1->Table3Deducere_suplimentara->AsFloat =rotunjire( D1->Table3Deducere_suplimentara->AsFloat+(D1->Table3Deducere_pers_de_baza->AsFloat*prim4)/100 );
   D1->Table3->Post(); D1->Table3->Edit();
   tango=tango+prim4;  }
if (D1->Table2Pers_handicapate_grII->AsBoolean==true)
        if (tango<=2) {
   D1->Table3Deducere_suplimentara->AsFloat =rotunjire( D1->Table3Deducere_suplimentara->AsFloat+(D1->Table3Deducere_pers_de_baza->AsFloat*prim5)/100 );
   D1->Table3->Post(); D1->Table3->Edit();
   tango=tango+prim5;  }
if (D1->Table2Numar_copii->AsFloat>=2 & tango<=2) {
   D1->Table3Deducere_suplimentara->AsFloat =rotunjire( D1->Table3Deducere_suplimentara->AsFloat+(D1->Table3Deducere_pers_de_baza->AsFloat*prim2)/100 );
   D1->Table3->Post(); D1->Table3->Edit();
   tango=tango+prim2;  }
int chil=floor( (D1->Table2Numar_copii->AsFloat -2)/2 );
for (int i=1; i<chil+1; i++) {
 if (tango<=2) {
D1->Table3Deducere_suplimentara->AsFloat =rotunjire( D1->Table3Deducere_suplimentara->AsFloat+(D1->Table3Deducere_pers_de_baza->AsFloat*prim3)/100 );
D1->Table3->Post(); D1->Table3->Edit();
tango=tango+prim3;  }
}

D1->Table3Baza_calcul_impozit->AsInteger=D1->Table3Venit_net->AsInteger-D1->Table3Deducere_pers_de_baza->AsInteger-D1->Table3Deducere_suplimentara->AsInteger;
//***** gata. De acu table7 verificat partial - 1error***********
D1->Table8->Active=true;
D1->Table8->Edit();
D1->Table8->First();

if (D1->Table3Baza_calcul_impozit->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit->AsFloat>=D1->Table8V1->AsFloat) {
   float intro1=D1->Table3Baza_calcul_impozit->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat); }
///*/// same only with CO    //--//
D1->Table8->First();
if (D1->Table3Baza_calcul_impozit_CO->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit_CO->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit_CO->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit_concediu_O->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit_CO->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit_CO->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit_CO->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit_concediu_O->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit_CO->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit_CO->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit_CO->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit_concediu_O->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit_CO->AsFloat>=D1->Table8V1->AsFloat & D1->Table3Baza_calcul_impozit_CO->AsFloat<=D1->Table8V2->AsFloat){
   float intro1=D1->Table3Baza_calcul_impozit_CO->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit_concediu_O->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat ); }
D1->Table8->Next();
if (D1->Table3Baza_calcul_impozit_CO->AsFloat>=D1->Table8V1->AsFloat) {
   float intro1=D1->Table3Baza_calcul_impozit_CO->AsFloat-D1->Table8V1->AsFloat;
   D1->Table3Impozit_concediu_O->AsFloat=rotunjire( (intro1*D1->Table8Cota->AsFloat)/100+D1->Table8Suma_fixa->AsFloat); }
///******************** shitty but works*********************
D1->Table3Salar_net->AsFloat=D1->Table3Salar_brut->AsFloat-D1->Table3Cas->AsFloat-D1->Table3Somaj->AsFloat-D1->Table3Sanatate->AsFloat-D1->Table3Impozit->AsFloat-D1->Table3Impozit_concediu_O->AsFloat;
D1->Table3Rest_plata->AsFloat=D1->Table3Salar_net->AsFloat-D1->Table3Avans->AsFloat-D1->Table3Indemnizatii->AsFloat-D1->Table3Popriri->AsFloat-D1->Table3Alte_rate->AsFloat-D1->Table3Garantii_materiale->AsFloat;
D1->Table3Total_plata->AsFloat=D1->Table3Rest_plata->AsFloat+D1->Table3Diferenta_impozit->AsFloat;
D1->Table3->Post();
//--------------------inchid bazele de date pt conservare memorie------------
D1->Table6->Close();
D1->Table7->Close();
D1->Table8->Close();
        //**\\
        D1->Table3->Active=false;
        D1->Table2->Next();
meter->cc2->Progress=100;
        }
//******************
meter->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tautomatizare::FormActivate(TObject *Sender)
{
//Timer1->Enabled=true;
TDate dat=Date();
Word zi,luna,an;
DecodeDate(dat,an,luna,zi);
ComboBox1->Text=an;
AnsiString s=FormatDateTime("mmmm", Now() + 0.125);
ComboBox2->Text=s;
StatusBar1->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
}
//---------------------------------------------------------------------------
void __fastcall Tautomatizare::FormClose(TObject *Sender,
      TCloseAction &Action)
{
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall Tautomatizare::Timer1Timer(TObject *Sender)
{
TDate dat=Date();
Word zi,luna,an;
DecodeDate(dat,an,luna,zi);
AnsiString s=FormatDateTime("mmmm", Now() + 0.125);
StatusBar1->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
}
//---------------------------------------------------------------------------
void __fastcall Tautomatizare::Button2Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
 float __fastcall Tautomatizare::rotunjire(float e)
{
float z1,z2;
long int mare,mic;
mare= (long int) e+1;
mic= (long int) e;
z1=mare-e;
z2=e-mic;
e = z1>z2 ? mic : mare ;
if (z1==z2) e=ceil (e);
return e;
}
//---------------------------------------------------------------------------
