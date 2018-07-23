//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tstatplata *statplata;
//---------------------------------------------------------------------------
__fastcall Tstatplata::Tstatplata(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button20Click(TObject *Sender)
{
D1->Table3->Prior();
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button21Click(TObject *Sender)
{
D1->Table3->Next();
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button22Click(TObject *Sender)
{
DBComboBox1->ReadOnly=false;
DBComboBox4->ReadOnly=false;
DBEdit24->ReadOnly=false;
DBEdit25->ReadOnly=false;
DBEdit26->ReadOnly=false;
DBEdit27->ReadOnly=false;
DBEdit28->ReadOnly=false;
DBEdit29->ReadOnly=false;
DBEdit30->ReadOnly=false;
DBEdit31->ReadOnly=false;
DBEdit32->ReadOnly=false;
DBEdit33->ReadOnly=false;
DBEdit34->ReadOnly=false;
DBEdit35->ReadOnly=false;
DBEdit36->ReadOnly=false;
DBEdit37->ReadOnly=false;
DBEdit38->ReadOnly=false;
DBEdit39->ReadOnly=false;
DBEdit40->ReadOnly=false;
DBEdit41->ReadOnly=false;
DBCheckBox7->ReadOnly=false;

DBEdit63->ReadOnly=false;
DBEdit64->ReadOnly=false;
DBEdit65->ReadOnly=false;
DBEdit66->ReadOnly=false;
DBEdit67->ReadOnly=false;
DBEdit68->ReadOnly=false;
DBEdit69->ReadOnly=false;
DBEdit70->ReadOnly=false;
DBEdit71->ReadOnly=false;
DBEdit94->ReadOnly=false;
DBEdit95->ReadOnly=false;
DBEdit96->ReadOnly=false;
DBEdit97->ReadOnly=false;

Button24->Enabled=true;
Button25->Caption="Protejeaza";
D1->Table3->Append();
FocusControl(DBComboBox1);
TDate dat=DateToStr(Date());;
Word an,luna,zi;
DecodeDate(dat,an,luna,zi);
D1->Table3An->AsInteger=an;
D1->Table4->Active=true;
D1->Table4->Filtered=true;
D1->Table4->Filter="Anul='"+IntToStr(an)+"'";
if (luna==1) {D1->Table3Luna->AsString="ianuarie"; DBEdit24->Field->AsInteger = D1->Table4L01->AsInteger; }
if (luna==2) {D1->Table3Luna->AsString="februarie"; DBEdit24->Field->AsInteger = D1->Table4L02->AsInteger; }
if (luna==3) {D1->Table3Luna->AsString="martie"; DBEdit24->Field->AsInteger = D1->Table4L03->AsInteger; }
if (luna==4) {D1->Table3Luna->AsString="aprilie"; DBEdit24->Field->AsInteger = D1->Table4L04->AsInteger; }
if (luna==5) {D1->Table3Luna->AsString="mai"; DBEdit24->Field->AsInteger = D1->Table4L05->AsInteger; }
if (luna==6) {D1->Table3Luna->AsString="iunie"; DBEdit24->Field->AsInteger = D1->Table4L06->AsInteger; }
if (luna==7) {D1->Table3Luna->AsString="iulie"; DBEdit24->Field->AsInteger = D1->Table4L07->AsInteger; }
if (luna==8) {D1->Table3Luna->AsString="august"; DBEdit24->Field->AsInteger = D1->Table4L08->AsInteger; }
if (luna==9) {D1->Table3Luna->AsString="septembrie"; DBEdit24->Field->AsInteger = D1->Table4L09->AsInteger; }
if (luna==10) {D1->Table3Luna->AsString="octombrie"; DBEdit24->Field->AsInteger = D1->Table4L10->AsInteger; }
if (luna==11) {D1->Table3Luna->AsString="noiembrie"; DBEdit24->Field->AsInteger = D1->Table4L11->AsInteger; }
if (luna==12) {D1->Table3Luna->AsString="decembrie"; DBEdit24->Field->AsInteger = D1->Table4L12->AsInteger; }
D1->Table4->Active=false;
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button23Click(TObject *Sender)
{
Button24->Enabled=false;
if (MessageDlg("Chiar vrei sa stegi inregistrarea?",mtWarning,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
 D1->Table3->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button24Click(TObject *Sender)
{
D1->Table3->Edit();
D1->Table3->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button25Click(TObject *Sender)
{
if (Button25->Caption=="Modifica") {
DBComboBox1->ReadOnly=false;
DBComboBox4->ReadOnly=false;
DBEdit24->ReadOnly=false;
DBEdit25->ReadOnly=false;
DBEdit26->ReadOnly=false;
DBEdit27->ReadOnly=false;
DBEdit28->ReadOnly=false;
DBEdit29->ReadOnly=false;
DBEdit30->ReadOnly=false;
DBEdit31->ReadOnly=false;
DBEdit32->ReadOnly=false;
DBEdit33->ReadOnly=false;
DBEdit34->ReadOnly=false;
DBEdit35->ReadOnly=false;
DBEdit36->ReadOnly=false;
DBEdit37->ReadOnly=false;
DBEdit38->ReadOnly=false;
DBEdit39->ReadOnly=false;
DBEdit40->ReadOnly=false;
DBEdit41->ReadOnly=false;
DBCheckBox7->ReadOnly=false;

DBEdit63->ReadOnly=false;
DBEdit64->ReadOnly=false;
DBEdit65->ReadOnly=false;
DBEdit66->ReadOnly=false;
DBEdit67->ReadOnly=false;
DBEdit68->ReadOnly=false;
DBEdit69->ReadOnly=false;
DBEdit70->ReadOnly=false;
DBEdit71->ReadOnly=false;
DBEdit94->ReadOnly=false;
DBEdit95->ReadOnly=false;
DBEdit96->ReadOnly=false;
DBEdit97->ReadOnly=false;

D1->Table3->Edit();
Button25->Caption="Protejeaza";
}
else {
DBComboBox1->ReadOnly=true;
DBComboBox1->ReadOnly=true;
DBEdit24->ReadOnly=true;
DBEdit25->ReadOnly=true;
DBEdit26->ReadOnly=true;
DBEdit27->ReadOnly=true;
DBEdit28->ReadOnly=true;
DBEdit29->ReadOnly=true;
DBEdit30->ReadOnly=true;
DBEdit31->ReadOnly=true;
DBEdit32->ReadOnly=true;
DBEdit33->ReadOnly=true;
DBEdit34->ReadOnly=true;
DBEdit35->ReadOnly=true;
DBEdit36->ReadOnly=true;
DBEdit37->ReadOnly=true;
DBEdit38->ReadOnly=true;
DBEdit39->ReadOnly=true;
DBEdit40->ReadOnly=true;
DBEdit41->ReadOnly=true;
DBCheckBox7->ReadOnly=true;

DBEdit63->ReadOnly=true;
DBEdit64->ReadOnly=true;
DBEdit65->ReadOnly=true;
DBEdit66->ReadOnly=true;
DBEdit67->ReadOnly=true;
DBEdit68->ReadOnly=true;
DBEdit69->ReadOnly=true;
DBEdit70->ReadOnly=true;
DBEdit71->ReadOnly=true;
DBEdit94->ReadOnly=false;
DBEdit95->ReadOnly=false;
DBEdit96->ReadOnly=false;
DBEdit97->ReadOnly=false;

Button25->Caption="Modifica";
        }
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button26Click(TObject *Sender)
{
if (Button26->Caption=="Admin enabled") {
        Button26->Caption="Administrator";
        Button23->Enabled=false; }
else     {
        Edit3->Visible=true;
        FocusControl(Edit3);
         }        
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN)   {
if (Edit3->Text=="admin") {
        ShowMessage("Parola acceptata");
        Button23->Enabled=true;
        Button26->Caption="Admin enabled";
        Edit3->Text="";
        Edit3->Visible=false;
        }

        else {
        Edit3->Text="";
        Edit3->Visible=false;
        ShowMessage("Parola incorecta");
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::Button27Click(TObject *Sender)
{
MainFrame->Show();
Close();
D1->Table3->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tstatplata::DBEdit25Exit(TObject *Sender)
{
D1->Table3->Edit();
int contor,vechime;
contor=0;
if (MainFrame->DBCheckBox1->Checked==true) {

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
DBEdit47->Field->AsFloat=rotunjire (((8*salar_o)*(DBEdit25->Field->AsInteger)*contor)/100);
D1->Table3->Post();
D1->Table3->Edit();        //Atentie!!!
if (D1->Table2Regie->AsBoolean==true) {
        salar_o=rotunjire ((D1->Table2Salar_tarifar->AsFloat)/(DBEdit24->Field->AsInteger*8));
        DBEdit42->Field->AsFloat=DBEdit25->Field->AsInteger*salar_o*8;
        if (D1->Table2Regie->AsBoolean) if (D1->Table3Zile_luna->AsInteger==D1->Table3Zile_lucrate->AsInteger) D1->Table3Salar_realizat->AsFloat=D1->Table2Salar_tarifar->AsFloat;
        }
else   {
   if (D1->Table2Regie->AsBoolean) if (D1->Table3Zile_luna->AsInteger==D1->Table3Zile_lucrate->AsInteger) D1->Table3Salar_realizat->AsFloat=D1->Table2Salar_tarifar->AsFloat;
   DBEdit42->Field->AsFloat=DBEdit25->Field->AsInteger*salar_o*8; }

DBEdit43->Field->AsFloat=rotunjire ( DBEdit27->Field->AsInteger*1.5*salar_o );
DBEdit44->Field->AsFloat=rotunjire ( DBEdit28->Field->AsInteger*2*salar_o );
DBEdit45->Field->AsFloat=rotunjire ( DBEdit29->Field->AsInteger*2*salar_o );
DBEdit46->Field->AsFloat=rotunjire (DBEdit30->Field->AsInteger*1.5*salar_o );

DBEdit39->Field->AsFloat=rotunjire ( ((D1->Table2Salar_tarifar->AsFloat+DBEdit47->Field->AsFloat)/DBEdit24->Field->AsFloat)
        *DBEdit38->Field->AsFloat );

DBEdit48->Field->AsFloat=DBEdit33->Field->AsInteger*salar_o;
D1->Table3Concediu_ramas->AsInteger=D1->Table2Concediu_pe_an->AsInteger-D1->Table3Zile_concediu_O->AsInteger;

DBEdit49->Field->AsFloat=DBEdit42->Field->AsFloat+DBEdit43->Field->AsFloat
+DBEdit44->Field->AsFloat+DBEdit45->Field->AsFloat
+DBEdit46->Field->AsFloat+DBEdit47->Field->AsFloat
+DBEdit48->Field->AsFloat+DBEdit39->Field->AsFloat
+DBEdit95->Field->AsFloat+DBEdit97->Field->AsFloat;



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
D1->Table3Somaj->AsFloat =rotunjire( ((D1->Table9somaj->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );
D1->Table3Somaj_firma->AsFloat =rotunjire( ((D1->Table9somaj_firma->AsFloat)*D1->Table3Salar_brut->AsFloat)/100 );
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

//--------------------inchid bazele de date pt conservare memorie------------
D1->Table6->Close();
D1->Table7->Close();
D1->Table8->Close();
}
//---------------------------------------------------------------------------
 float __fastcall Tstatplata::rotunjire(float e)
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
void __fastcall Tstatplata::DBComboBox4Change(TObject *Sender)
{
D1->Table4->Active=true;
D1->Table4->Filtered=true;
D1->Table4->Filter="Anul='"+DBComboBox1->Text+"'";
if (DBComboBox4->Text=="ianuarie")  DBEdit24->Field->AsInteger = D1->Table4L01->AsInteger;
if (DBComboBox4->Text=="februarie") DBEdit24->Field->AsInteger = D1->Table4L02->AsInteger;
if (DBComboBox4->Text=="martie")    DBEdit24->Field->AsInteger = D1->Table4L03->AsInteger;
if (DBComboBox4->Text=="aprilie")   DBEdit24->Field->AsInteger = D1->Table4L04->AsInteger;
if (DBComboBox4->Text=="mai")       DBEdit24->Field->AsInteger = D1->Table4L05->AsInteger;
if (DBComboBox4->Text=="iunie")     DBEdit24->Field->AsInteger = D1->Table4L06->AsInteger;
if (DBComboBox4->Text=="iulie")     DBEdit24->Field->AsInteger = D1->Table4L07->AsInteger;
if (DBComboBox4->Text=="august")    DBEdit24->Field->AsInteger = D1->Table4L08->AsInteger;
if (DBComboBox4->Text=="septembrie")DBEdit24->Field->AsInteger = D1->Table4L09->AsInteger;
if (DBComboBox4->Text=="octombrie") DBEdit24->Field->AsInteger = D1->Table4L10->AsInteger;
if (DBComboBox4->Text=="noiembrie") DBEdit24->Field->AsInteger = D1->Table4L11->AsInteger;
if (DBComboBox4->Text=="decembrie") DBEdit24->Field->AsInteger = D1->Table4L12->AsInteger;
D1->Table4->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall Tstatplata::DBEdit63Exit(TObject *Sender)
{
D1->Table3->Edit();
D1->Table3Rest_plata->AsFloat=D1->Table3Salar_net->AsFloat-D1->Table3Avans->AsFloat-D1->Table3Indemnizatii->AsFloat-D1->Table3Popriri->AsFloat-D1->Table3Alte_rate->AsFloat-D1->Table3Garantii_materiale->AsFloat;
D1->Table3Total_plata->AsFloat=D1->Table3Rest_plata->AsFloat+D1->Table3Diferenta_impozit->AsFloat;
D1->Table3->Post();

}
//---------------------------------------------------------------------------

