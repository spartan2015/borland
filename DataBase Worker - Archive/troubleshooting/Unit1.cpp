//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Table1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Button5->Enabled=false;
Table1->Prior();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Button5->Enabled=false;
Table1->Next();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBMemo1->ReadOnly=false;

DBEdit83->ReadOnly=false;
DBEdit84->ReadOnly=false;
DBEdit87->ReadOnly=false;
DBEdit88->ReadOnly=false;
DBEdit89->ReadOnly=false;
DBEdit90->ReadOnly=false;
DBEdit91->ReadOnly=false;
DBEdit92->ReadOnly=false;

Button5->Enabled=true;
Button6->Caption="Protejeaza";
Table1->Append();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Button5->Enabled=false;
if (MessageDlg("Chiar vrei sa stegi baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
 Table1->Delete();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Table1->Post();
Button5->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
if (Button6->Caption=="Modifica") {
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBMemo1->ReadOnly=false;

DBEdit83->ReadOnly=false;
DBEdit84->ReadOnly=false;
DBEdit87->ReadOnly=false;
DBEdit88->ReadOnly=false;
DBEdit89->ReadOnly=false;
DBEdit90->ReadOnly=false;
DBEdit91->ReadOnly=false;
DBEdit92->ReadOnly=false;

Button5->Enabled=true;
Button6->Caption="Protejeaza";
Table1->Edit();
}
else {
DBEdit1->ReadOnly=true;
DBEdit2->ReadOnly=true;
DBEdit3->ReadOnly=true;
DBEdit4->ReadOnly=true;
DBEdit5->ReadOnly=true;
DBEdit6->ReadOnly=true;
DBMemo1->ReadOnly=true;

DBEdit83->ReadOnly=true;
DBEdit84->ReadOnly=true;
DBEdit87->ReadOnly=true;
DBEdit88->ReadOnly=true;
DBEdit89->ReadOnly=true;
DBEdit90->ReadOnly=true;
DBEdit91->ReadOnly=true;
DBEdit92->ReadOnly=true;

Button6->Caption="Modifica";
Button5->Enabled=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
TabSheet1->Visible=false;
TabSheet1->TabVisible=false;

TReplaceFlags Flags;
Flags <<rfReplaceAll;

TabSheet2->TabVisible=true;
TabSheet2->Visible=true;
if (!Table2->Active){
Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);
Table2->Active=true; }
else    {
    Table2->Active=false;
    Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);
    Table2->Active=true; }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
TReplaceFlags Flags;
Flags <<rfReplaceAll;
 Table2->TableName=StringReplace(DBEdit1->Field->AsString," ","z", Flags);
Table2->CreateTable();
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
if (Button9->Caption=="Admin enabled") {
        Button9->Caption="Administrator";
        Button4->Enabled=false; }
else     {
        Edit1->Visible=true;
        FocusControl(Edit1);
         }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
if (Key == VK_RETURN)   {
if (Edit1->Text=="admin")
        {ShowMessage("Parola acceptata");
        Button4->Enabled=true;
        Button9->Caption="Admin enabled";
        Edit1->Text="";
        Edit1->Visible=false;
        }

        else {
        Edit1->Text="";
        Edit1->Visible=false;
        ShowMessage("Parola incorecta!");
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet2Show(TObject *Sender)
{
Help1->Visible=true;
TabSheet3->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
Table2->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
Table2->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBEdit16->ReadOnly=false;
DBEdit17->ReadOnly=false;
DBEdit18->ReadOnly=false;
DBEdit19->ReadOnly=false;
DBEdit72->ReadOnly=false;
DBCheckBox1->ReadOnly=false;
DBCheckBox6->ReadOnly=false;
DBComboBox2->ReadOnly=false;
DBComboBox3->ReadOnly=false;
DBEdit20->ReadOnly=false;
DBEdit21->ReadOnly=false;
DBEdit22->ReadOnly=false;
DBEdit23->ReadOnly=false;
DBMemo2->ReadOnly=false;
DBMemo3->ReadOnly=false;
DBMemo4->ReadOnly=false;
DBCheckBox2->ReadOnly=false;
DBCheckBox3->ReadOnly=false;
DBCheckBox4->ReadOnly=false;
DBCheckBox5->ReadOnly=false;

DBEdit93->ReadOnly=false;

Button15->Enabled=true;
Button16->Caption="Protejeaza";
Table2->Append();
FocusControl(DBEdit7);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
Button15->Enabled=false;
if (MessageDlg("Chiar vrei sa stegi baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
 Table2->Delete();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
Table2->Post();
Button15->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
if (Button16->Caption=="Modifica") {
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBEdit16->ReadOnly=false;
DBEdit17->ReadOnly=false;
DBEdit18->ReadOnly=false;
DBEdit19->ReadOnly=false;
DBEdit72->ReadOnly=false;
DBCheckBox1->ReadOnly=false;
DBCheckBox6->ReadOnly=false;
DBComboBox2->ReadOnly=false;
DBComboBox3->ReadOnly=false;
DBEdit20->ReadOnly=false;
DBEdit21->ReadOnly=false;
DBEdit22->ReadOnly=false;
DBEdit23->ReadOnly=false;
DBMemo2->ReadOnly=false;
DBMemo3->ReadOnly=false;
DBMemo4->ReadOnly=false;
DBCheckBox2->ReadOnly=false;
DBCheckBox3->ReadOnly=false;
DBCheckBox4->ReadOnly=false;
DBCheckBox5->ReadOnly=false;

DBEdit93->ReadOnly=false;

Table2->Edit();
Button15->Enabled=true;
Button16->Caption="Protejeaza";
}
else
{
DBEdit7->ReadOnly=true;
DBEdit8->ReadOnly=true;
DBEdit9->ReadOnly=true;
DBEdit10->ReadOnly=true;
DBEdit11->ReadOnly=true;
DBEdit12->ReadOnly=true;
DBEdit13->ReadOnly=true;
DBEdit14->ReadOnly=true;
DBEdit15->ReadOnly=true;
DBEdit16->ReadOnly=true;
DBEdit17->ReadOnly=true;
DBEdit18->ReadOnly=true;
DBEdit19->ReadOnly=true;
DBEdit72->ReadOnly=true;
DBCheckBox1->ReadOnly=true;
DBCheckBox6->ReadOnly=true;
DBComboBox2->ReadOnly=true;
DBComboBox3->ReadOnly=true;
DBEdit20->ReadOnly=true;
DBEdit21->ReadOnly=true;
DBEdit22->ReadOnly=true;
DBEdit23->ReadOnly=true;
DBMemo2->ReadOnly=true;
DBMemo3->ReadOnly=true;
DBMemo4->ReadOnly=true;
DBCheckBox2->ReadOnly=true;
DBCheckBox3->ReadOnly=true;
DBCheckBox4->ReadOnly=true;
DBCheckBox5->ReadOnly=true;

DBEdit93->ReadOnly=true;

Button16->Caption="Modifica";
Button15->Enabled=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
if (Key == VK_RETURN)   {
if (Edit2->Text=="admin")
        {ShowMessage("Parola acceptata!");
        Button14->Enabled=true;
        Button19->Caption="Admin enabled";
        Edit2->Text="";
        Edit2->Visible=false;
        }

        else {
        Edit2->Text="";
        Edit2->Visible=false;
        ShowMessage("Parola incorecta!");
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
if (Button19->Caption=="Admin enabled") {
        Button19->Caption="Administrator";
        Button14->Enabled=false; }
else     {
        Edit2->Visible=true;
        FocusControl(Edit2);
         }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
Table3->TableName=(DBEdit7->Field->AsString);
Table3->CreateTable();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet6Show(TObject *Sender)
{
Label38->Caption=DBEdit1->Field->AsString;
Label39->Caption=DBEdit8->Field->AsString;
Label40->Caption=DBEdit9->Field->AsString;
Label41->Caption="Sectia: "+DBEdit13->Field->AsString;
Label42->Caption="Salar tarifar: "+DBEdit16->Field->AsString;
if (!Table3->Active) {
        Table3->TableName=(DBEdit7->Field->AsString);
        Table3->Active=true; }
else {
       Table3->Active=false;
       Table3->TableName=(DBEdit7->Field->AsString);
       Table3->Active=true;
       }

       }
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
Table3->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
Table3->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet7Show(TObject *Sender)
{
Label75->Caption=(DBEdit8->Field->AsString);
Label76->Caption=(DBEdit9->Field->AsString);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet5Show(TObject *Sender)
{
if (!Table3->Active) {
        Table3->TableName=(DBEdit7->Field->AsString);
        Table3->Active=true; }
else {
       Table3->Active=false;
       Table3->TableName=(DBEdit7->Field->AsString);
       Table3->Active=true;
       }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
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

Button24->Enabled=true;
Button25->Caption="Protejeaza";
Table3->Append();
FocusControl(DBComboBox1);
TDate dat=DateToStr(Date());;
Word an,luna,zi;
DecodeDate(dat,an,luna,zi);
Table3An->AsInteger=an;
Table10->Active=true;
Table10->Filtered=true;
Table10->Filter="Anul='"+IntToStr(an)+"'";
if (luna==1) {Table3Luna->AsString="ianuarie"; DBEdit24->Field->AsInteger = Table10L01->AsInteger; }
if (luna==2) {Table3Luna->AsString="februarie"; DBEdit24->Field->AsInteger = Table10L02->AsInteger; }
if (luna==3) {Table3Luna->AsString="martie"; DBEdit24->Field->AsInteger = Table10L03->AsInteger; }
if (luna==4) {Table3Luna->AsString="aprilie"; DBEdit24->Field->AsInteger = Table10L04->AsInteger; }
if (luna==5) {Table3Luna->AsString="mai"; DBEdit24->Field->AsInteger = Table10L05->AsInteger; }
if (luna==6) {Table3Luna->AsString="iunie"; DBEdit24->Field->AsInteger = Table10L06->AsInteger; }
if (luna==7) {Table3Luna->AsString="iulie"; DBEdit24->Field->AsInteger = Table10L07->AsInteger; }
if (luna==8) {Table3Luna->AsString="august"; DBEdit24->Field->AsInteger = Table10L08->AsInteger; }
if (luna==9) {Table3Luna->AsString="septembrie"; DBEdit24->Field->AsInteger = Table10L09->AsInteger; }
if (luna==10) {Table3Luna->AsString="octombrie"; DBEdit24->Field->AsInteger = Table10L10->AsInteger; }
if (luna==11) {Table3Luna->AsString="noiembrie"; DBEdit24->Field->AsInteger = Table10L11->AsInteger; }
if (luna==12) {Table3Luna->AsString="decembrie"; DBEdit24->Field->AsInteger = Table10L12->AsInteger; }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
Button24->Enabled=false;
if (MessageDlg("Chiar vrei sa stegi inregistrarea?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
 Table3->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
Table3->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button25Click(TObject *Sender)
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

Table3->Edit();
Button24->Enabled=true;
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

Button25->Caption="Modifica";
Button24->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
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

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
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

void __fastcall TForm1::Listasporurivechime1Click(TObject *Sender)
{
TabSheet1->TabVisible=false;
Table1->Active=false;
TabSheet2->TabVisible=false;
Table2->Active=false;
TabSheet5->TabVisible=false;
Table3->Active=false;

TabSheet8->TabVisible=true;
Table4->Active=true;
Table5->Active=true;
Table6->Active=true;
Table7->Active=true;
Table9->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender)
{
TabSheet8->TabVisible=false;
Table4->Active=false;
Table5->Active=false;
Table6->Active=false;
Table7->Active=false;

TabSheet1->TabVisible=true;
Table1->Active=true;
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button17Click(TObject *Sender)
{
Help1->Visible=false;
TabSheet1->TabVisible=false;
TabSheet2->TabVisible=false;
TabSheet5->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button27Click(TObject *Sender)
{
TabSheet5->TabVisible=false;
TabSheet2->TabVisible=true;
Table3->Active=false;
TabSheet2->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBEdit25Exit(TObject *Sender)
{
Table3->Edit();
int contor,vechime;
if (DBCheckBox1) {

Word an,luna,zi,an1,luna1,zi1;
TDate dat=Date(),dat1;
DecodeDate(dat,an,luna,zi);
dat1=DBEdit18->Field->AsString;
DecodeDate(dat1,an1,luna1,zi1);

vechime=((an-an1)*12+luna-luna1)/12;
}
Table4->Active=true;
Table4->First();
contor=0;
for (int i=0; i<7; i++) {
        if (vechime>=Table4v1->AsFloat & vechime<=Table4v2->AsFloat)
        contor=Table4val->AsFloat;
Table4->Next();          }
int salar_o=ceil((DBEdit16->Field->AsFloat)/176);
Table3->Edit();
DBEdit47->Field->AsFloat=ceil(((8*salar_o)*(DBEdit25->Field->AsInteger)*contor)/100);
Table3->Post();
Table3->Edit();        //Atentie!!!
if (DBCheckBox6) {
        salar_o=ceil((DBEdit16->Field->AsFloat)/(DBEdit24->Field->AsInteger*8));
        DBEdit42->Field->AsFloat=DBEdit25->Field->AsInteger*salar_o*8;
        if (Table2Regie->AsBoolean) if (Table3Zile_luna->AsInteger==Table3Zile_lucrate->AsInteger) Table3Salar_realizat->AsFloat=Table2Salar_tarifar->AsFloat;
        }
else   {
   if (Table2Regie->AsBoolean) if (Table3Zile_luna->AsInteger==Table3Zile_lucrate->AsInteger) Table3Salar_realizat->AsFloat=Table2Salar_tarifar->AsFloat;
   DBEdit42->Field->AsFloat=DBEdit25->Field->AsInteger*salar_o*8; }

DBEdit43->Field->AsFloat=ceil( DBEdit27->Field->AsInteger*1.5*salar_o );
DBEdit44->Field->AsFloat=ceil( DBEdit28->Field->AsInteger*2*salar_o );
DBEdit45->Field->AsFloat=ceil( DBEdit29->Field->AsInteger*2*salar_o );
DBEdit46->Field->AsFloat=ceil (DBEdit30->Field->AsInteger*1.5*salar_o );

DBEdit39->Field->AsFloat=ceil( ((DBEdit16->Field->AsFloat+DBEdit47->Field->AsFloat)/DBEdit24->Field->AsFloat)
        *DBEdit38->Field->AsFloat );

DBEdit48->Field->AsFloat=DBEdit33->Field->AsInteger*salar_o;
Table3Concediu_ramas->AsInteger=Table2Concediu_pe_an->AsInteger-Table3Zile_concediu_O->AsInteger;

DBEdit49->Field->AsFloat=DBEdit42->Field->AsFloat+DBEdit43->Field->AsFloat
+DBEdit44->Field->AsFloat+DBEdit45->Field->AsFloat
+DBEdit46->Field->AsFloat+DBEdit47->Field->AsFloat
+DBEdit48->Field->AsFloat+DBEdit39->Field->AsFloat
+DBEdit95->Field->AsFloat+DBEdit97->Field->AsFloat;



Table3->Post();
Table3->Edit(); //Atentie 2!! butonul protejeaza inchide editul
//********************** pagina a 2-a****************
Table5->Active=true;
Table5->Edit();
Table3Deducere_pers_de_baza->AsFloat=Table5D_baza->AsFloat;
//*******aici zace dedp_b
if (Table3Valoare_concediu_O->AsInteger > Table5Cota_cas->AsInteger)
        Table3Baza_calcul_impozit_CO->AsFloat = Table5Cota_cas->AsInteger;
else    Table3Baza_calcul_impozit_CO->AsFloat = Table3Valoare_concediu_O->AsInteger;

if (Table3Salar_brut->AsInteger > Table5Cota_cas->AsInteger)
        Table3Baza_calcul_CAS->AsFloat = Table5Cota_cas->AsInteger;
else    Table3Baza_calcul_CAS->AsFloat =  Table3Salar_brut->AsInteger;

Table5->Post(); Table5->Edit();
Table9->Active=true;

Table3Cas->AsFloat =rotunjire( ((Table9cas->AsFloat)*(Table3Baza_calcul_CAS->AsFloat))/100 );
Table3Cas_firma->AsFloat =rotunjire( ((Table9cas_firma->AsFloat)*(Table3Baza_calcul_CAS->AsFloat))/100 );
Table3Somaj->AsFloat =rotunjire( ((Table9somaj->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Somaj_firma->AsFloat =rotunjire( ((Table9somaj_firma->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Sanatate->AsFloat =rotunjire( ((Table9sanatate->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Sanatate_firma->AsFloat =rotunjire( ((Table9sanatate_firma->AsFloat)*Table3Salar_brut->AsFloat)/100 );

Table3Cheltuieli_profesionale->AsFloat =ceil( ((Table9cheltuieli_profesionale->AsFloat)*Table5D_baza->AsFloat)/100 );
Table9->Active=false;
Table3Venit_net->AsFloat = Table3Salar_brut->AsFloat - Table3Cas->AsFloat
- Table3Somaj->AsFloat - Table3Sanatate->AsFloat - Table3Cheltuieli_profesionale->AsFloat;

float prim1,prim2,prim3,prim4,prim5;
Table6->Active=true;
Table6->Edit();
Table6->First();

prim1=Table6Cota1->AsFloat;
Table6->Next();
prim2=Table6Cota1->AsFloat;
Table6->Next();
prim3=Table6Cota1->AsFloat;
Table6->Next();
prim4=Table6Cota1->AsFloat;
Table6->Next();
prim5=Table6Cota1->AsFloat;
Table6->Next();
//************** weird

//**********unde e dedp_b???????????? cine e dedp_n?*****
float tango;
tango=0;
if (Table2Sotie_in_intretinere->AsBoolean==true) {
   Table3Deducere_suplimentara->AsFloat =ceil( (Table3Deducere_pers_de_baza->AsFloat*prim1)/100 );
   Table3->Post(); Table3->Edit();
   tango=tango+prim1; }
if (Table2Pers_handicapate_grI->AsBoolean==true) {
   Table3Deducere_suplimentara->AsFloat =ceil( Table3Deducere_suplimentara->AsFloat+(Table3Deducere_pers_de_baza->AsFloat*prim4)/100 );
   Table3->Post(); Table3->Edit();
   tango=tango+prim4;  }
if (Table2Pers_handicapate_grII->AsBoolean==true)
        if (tango<=2) {
   Table3Deducere_suplimentara->AsFloat =ceil( Table3Deducere_suplimentara->AsFloat+(Table3Deducere_pers_de_baza->AsFloat*prim5)/100 );
   Table3->Post(); Table3->Edit();
   tango=tango+prim5;  }
if (Table2Numar_copii->AsFloat>=2 & tango<=2) {
   Table3Deducere_suplimentara->AsFloat =ceil( Table3Deducere_suplimentara->AsFloat+(Table3Deducere_pers_de_baza->AsFloat*prim2)/100 );
   Table3->Post(); Table3->Edit();
   tango=tango+prim2;  }
int chil=floor( (Table2Numar_copii->AsFloat -2)/2 );
for (int i=1; i<chil+1; i++) {
 if (tango<=2) {
Table3Deducere_suplimentara->AsFloat =ceil( Table3Deducere_suplimentara->AsFloat+(Table3Deducere_pers_de_baza->AsFloat*prim3)/100 );
Table3->Post(); Table3->Edit();
tango=tango+prim3;  }
}

Table3Baza_calcul_impozit->AsInteger=Table3Venit_net->AsInteger-Table3Deducere_pers_de_baza->AsInteger-Table3Deducere_suplimentara->AsInteger;
//***** gata. De acu table7 verificat partial - 1error***********
Table7->Active=true;
Table7->Edit();
Table7->First();

if (Table3Baza_calcul_impozit->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit->AsFloat-Table7V1->AsFloat;
   Table3Impozit->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit->AsFloat-Table7V1->AsFloat;
   Table3Impozit->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit->AsFloat-Table7V1->AsFloat;
   Table3Impozit->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit->AsFloat-Table7V1->AsFloat;
   Table3Impozit->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit->AsFloat>=Table7V1->AsFloat) {
   float intro1=Table3Baza_calcul_impozit->AsFloat-Table7V1->AsFloat;
   Table3Impozit->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat); }
///*/// same only with CO    //--//
Table7->First();
if (Table3Baza_calcul_impozit_CO->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit_CO->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit_CO->AsFloat-Table7V1->AsFloat;
   Table3Impozit_concediu_O->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit_CO->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit_CO->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit_CO->AsFloat-Table7V1->AsFloat;
   Table3Impozit_concediu_O->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit_CO->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit_CO->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit_CO->AsFloat-Table7V1->AsFloat;
   Table3Impozit_concediu_O->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit_CO->AsFloat>=Table7V1->AsFloat & Table3Baza_calcul_impozit_CO->AsFloat<=Table7V2->AsFloat){
   float intro1=Table3Baza_calcul_impozit_CO->AsFloat-Table7V1->AsFloat;
   Table3Impozit_concediu_O->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat ); }
Table7->Next();
if (Table3Baza_calcul_impozit_CO->AsFloat>=Table7V1->AsFloat) {
   float intro1=Table3Baza_calcul_impozit_CO->AsFloat-Table7V1->AsFloat;
   Table3Impozit_concediu_O->AsFloat=ceil( (intro1*Table7Cota->AsFloat)/100+Table7Suma_fixa->AsFloat); }
///******************** shitty but works*********************
Table3Salar_net->AsFloat=Table3Salar_brut->AsFloat-Table3Cas->AsFloat-Table3Somaj->AsFloat-Table3Sanatate->AsFloat-Table3Impozit->AsFloat-Table3Impozit_concediu_O->AsFloat;
Table3Rest_plata->AsFloat=Table3Salar_net->AsFloat-Table3Avans->AsFloat-Table3Indemnizatii->AsFloat-Table3Popriri->AsFloat-Table3Alte_rate->AsFloat-Table3Garantii_materiale->AsFloat;
Table3Total_plata->AsFloat=Table3Rest_plata->AsFloat+Table3Diferenta_impozit->AsFloat;
} //  if recno()!=5
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text="Ora: "+TimeToStr(Time());
StatusBar1->Panels->Items[1]->Text="Data: "+DateToStr(Date());

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive << loPartialKey;
bool found;
found=Table2->Locate((ComboBox1->Text),(Edit4->Text),flags);
if (found) Label119->Caption="Gasit";
else Label119->Caption="Not found";
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Raportcomplet1Click(TObject* /*Sender*/)
{
TabSheet1->TabVisible=false;
TabSheet2->TabVisible=false;
TabSheet9->TabVisible=true;
TabSheet9->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
//********** interesting *** part II

if (RadioGroup1->ItemIndex==0)
        if (RadioGroup2->ItemIndex==1)
        {//ListForm = new TListForm(Application);
        //*****************************

        //*****************************
        ListForm->Table1->TableName=ComboBox2->Text+ComboBox3->Text+StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        ListForm->Table1->Active=true;
        ListForm->QuickRep1->Preview();
        ListForm->Table1->Close(); }
///********intercalam
else  { ListForm1->Table1->TableName=Table2->TableName;
        ListForm1->Table2->TableName=Table2Cod->AsString;

        ListForm1->QRLabel17->Caption=ComboBox2->Text;
        ListForm1->QRLabel24->Caption=ComboBox3->Text;
//***********formez filtru in AnsiString ******//
AnsiString filtru1,filtru2;
filtru1="Cod= '"+(Table2Cod->AsString)+"'";
filtru2="An= '"+(ComboBox2->Text)+"' AND "+"Luna= '"+(ComboBox3->Text)+"'";
        ListForm1->Table1->Filter=filtru1;
        ListForm1->Table2->Filter=filtru2;

        ListForm1->Table1->Active=true;
        ListForm1->Table2->Active=true;
        ListForm1->Table3->Active=true;
        ListForm1->QuickRep1->Preview();
        ListForm1->Table1->Active=false;
        ListForm1->Table2->Active=false;
        ListForm1->Table3->Active=false;
                                             }
//******** list grupat - items 1 *********
if (RadioGroup1->ItemIndex==1) {
   if (ComboBox5->Text=="Nume"){
        Form4->QRExpr1->Expression="copy(nume,1,1)";
        Form4->QRGroup1->Expression="copy(nume,1,1)";
        Form4->Table1->Active=true;
        Form4->QuickRep1->Preview();
        Form4->Table1->Active=false;}
   if (ComboBox5->Text=="Functie"){
        Form4->QRExpr1->Expression="Table1.Functie";
        Form4->QRGroup1->Expression="Table1.Functie";
        Form4->Table1->Active=true;
        Form4->QuickRep1->Preview();
        Form4->Table1->Active=false;}
   if (ComboBox5->Text=="Marca"){
        Form4->QRExpr1->Expression="Table1.Marca";
        Form4->QRGroup1->Expression="Table1.Marca";
        Form4->Table1->Active=true;
        Form4->QuickRep1->Preview();
         Form4->Table1->Active=false;}
    if (ComboBox5->Text=="Sectia"){
        Form4->QRExpr1->Expression="Table1.Sectia";
        Form4->QRGroup1->Expression="Table1.Sectia";
        Form4->Table1->Active=true;
        Form4->QuickRep1->Preview();
         Form4->Table1->Active=false;}
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender)
{
TabSheet9->TabVisible=false;
TabSheet2->TabVisible=true;
TabSheet2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet9Show(TObject *Sender)
{
//***************************
Word an,luna,zi;
TDate dat=Date();
DecodeDate(dat,an,luna,zi);
ComboBox2->Text=an;

if (luna==1) ComboBox3->Text="ianuarie";
if (luna==2) ComboBox3->Text="februarie";
if (luna==3) ComboBox3->Text="martie";
if (luna==4) ComboBox3->Text="aprilie";
if (luna==5) ComboBox3->Text="mai";
if (luna==6) ComboBox3->Text="iunie";
if (luna==7) ComboBox3->Text="iulie";
if (luna==8) ComboBox3->Text="august";
if (luna==9) ComboBox3->Text="septembrie";
if (luna==10) ComboBox3->Text="octombrie";
if (luna==11) ComboBox3->Text="noiembrie";
if (luna==12) ComboBox3->Text="decembrie";


//***********************************

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet2Hide(TObject *Sender)
{
Help1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==1) {
        RadioGroup2->ItemIndex=1;
        RadioGroup2->Enabled=false;
        ComboBox5->Enabled=true;
        }
else {  RadioGroup2->Enabled=true;
        ComboBox5->Enabled=false;
        }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button34Click(TObject *Sender)
{
TabSheet2->TabVisible=false;
TabSheet2->Visible=false;
TabSheet1->TabVisible=true;
TabSheet1->Visible=true;
Table2->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button28Click(TObject *Sender)
{
Table9->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
int rec=Table2->RecNo;

TReplaceFlags Flags;
Flags <<rfReplaceAll;
Table8->TableName=ComboBox2->Text+ComboBox3->Text+StringReplace(Table1Nume_firma->AsString," ","z",Flags);
Table8->CreateTable();

if (Table2->Active) {
        Table2->Active=false;
        Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true;}
else { Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true; }

Table8->Active=true;
Table8->Append();
int notfound; notfound=0;
for (int i=1; i<(Table2->RecordCount)+1; i++) {

Table8Nume_firma->AsString=Table1Nume_firma->AsString;
Table8Fisc->AsString = Table1Fisc->AsString;
Table8J->AsString = Table1J->AsString;
Table8Banca_1->AsString= Table1Banca_1->AsString;
Table8Banca_2->AsString= Table1Banca_2->AsString;
Table8Filiala_1->AsString=Table1Filiala_1->AsString;
Table8Filiala_2->AsString=Table1Filiala_2->AsString;
Table8Cont_banca_1->AsString=Table1Cont_banca_1->AsString;
Table8Cont_banca_2->AsString=Table1Cont_banca_2->AsString;
Table8Nume_pers_raport->AsString=Table1Nume_pers_raport->AsString;
Table8Functia_pers_raport->AsString=Table1Functia_pers_raport->AsString;
Table8e_mail_firma->AsString=Table1e_mail_firma->AsString;
Table8Telefon_firma->AsFloat=Table1Telefon_firma->AsFloat;
Table8Adresa_firma->AsString=Table1Adresa_firma->AsString;
Table8Cnp_angajator->AsFloat=Table1Cnp_angajator->AsFloat;

Table8Cod->AsString= Table2Cod->AsString;
Table8Nume->AsString=Table2Nume->AsString;
Table8Prenume->AsString=Table2Prenume->AsString;
Table8Cnp->AsFloat =Table2Cnp->AsFloat         ;
Table8Functie->AsString =Table2Functie->AsString                  ;
Table8Cod_functie->AsString = Table2Cod_functie->AsString         ;
Table8Sectia->AsString =Table2Sectia->AsString                    ;
Table8Marca->AsString =Table2Marca->AsString                      ;
Table8Data_angajare->AsString = Table2Data_angajare->AsString;
Table8Salar_tarifar->AsFloat =Table2Salar_tarifar->AsFloat ;
Table8Prima->AsFloat = Table2Prima->AsFloat;
Table8Data_prima_angajare->AsString = Table2Data_prima_angajare->AsString;
Table8Data_lichidare_salar->AsString=Table2Data_lichidare_salar->AsString;
Table8Spor_vechime->AsBoolean =  Table8Spor_vechime->AsBoolean;
Table8Regie->AsBoolean =Table2Regie->AsBoolean;
Table8Sex->AsString = Table2Sex->AsString ;
Table8Stare_civila->AsString  = Table2Stare_civila->AsString ;
Table8Telefon->AsFloat = Table2Telefon->AsFloat;
Table8Adresa->AsString = Table2Adresa->AsString;
Table8Data_nastere->AsString = Table2Data_nastere->AsString;
Table8Stagiu_militar->AsBoolean = Table2Stagiu_militar->AsBoolean;
Table8Livret_militar->AsString = Table2Livret_militar->AsString;
Table8Studii->AsString = Table2Studii->AsString;
Table8Numar_copii->AsInteger = Table2Numar_copii->AsInteger;
Table8Date_copii->AsString = Table2Date_copii->AsString;
Table8Pers_handicapate_grI->AsBoolean = Table2Pers_handicapate_grI->AsBoolean;
Table8Pers_handicapate_grII->AsBoolean = Table2Pers_handicapate_grII->AsBoolean;
Table8Sotie_in_intretinere->AsBoolean = Table2Sotie_in_intretinere->AsBoolean;
Table8Concediu_pe_an->AsInteger = Table2Concediu_pe_an->AsInteger;
Table8Norma_ore_zi->AsInteger=Table2Norma_ore_zi->AsInteger;

if (Table3->Active) {
        Table3->Active=false;
        Table3->TableName=Table2Cod->AsString;
        Table3->Active=true;  }
else { Table3->TableName=Table2Cod->AsString;
        Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;
AnsiString luna1=ComboBox3->Text;
Table3->Filtered=true;
Table3->Filter="An='"+ComboBox2->Text+"'";
bool found2=Table3->Locate("Luna",luna1,flags);
if (found2){
Table8An->AsInteger =Table3An->AsInteger        ;
Table8Luna->AsString  =Table3Luna->AsString     ;
Table8Zile_lucrate->AsInteger =Table3Zile_lucrate->AsInteger           ;
Table8Zile_nelucrate->AsInteger =Table3Zile_nelucrate->AsInteger       ;
Table8Ore_suplimentare_15->AsInteger  =Table3Ore_suplimentare_15->AsInteger            ;
Table8Ore_suplimentare_2->AsInteger  =Table3Ore_suplimentare_2->AsInteger              ;
Table8Ore_in_sarbatori->AsInteger  =Table3Ore_in_sarbatori->AsInteger                ;
Table8Ore_noapte->AsInteger =Table3Ore_noapte->AsInteger     ;
Table8Ore_nemotivate->AsInteger =Table3Ore_nemotivate->AsInteger ;
Table8Cfs->AsInteger  =Table3Cfs->AsInteger            ;
Table8Ore_in_acord->AsInteger  =Table3Ore_in_acord->AsInteger ;
Table8Premiu->AsFloat  =Table3Premiu->AsFloat           ;
Table8Alti_bani->AsFloat =Table3Alti_bani->AsFloat             ;
Table8Diferenta_diurna->AsFloat =Table3Diferenta_diurna->AsFloat  ;
Table8Regularizare->AsFloat =Table3Regularizare->AsFloat ;
Table8Salar_realizat->AsFloat =Table3Salar_realizat->AsFloat ;
Table8Suplimentar_15->AsFloat = Table3Suplimentar_15->AsFloat       ;
Table8Suplimentar_2->AsFloat = Table3Suplimentar_2->AsFloat       ;
Table8Sarbatori->AsFloat = Table3Sarbatori->AsFloat   ;
Table8Noapte->AsFloat =  Table3Noapte->AsFloat        ;
Table8Spor_vechime_val->AsFloat = Table3Spor_vechime_val->AsFloat;
Table8Valoare_acord->AsFloat = Table3Valoare_acord->AsFloat       ;
Table8Salar_brut->AsFloat = Table3Salar_brut->AsFloat       ;
Table8Zile_concediu_O->AsInteger  = Table3Zile_concediu_O->AsInteger        ;
Table8Valoare_concediu_O->AsFloat    = Table3Valoare_concediu_O->AsFloat          ;
Table8Zile_concediu_M->AsInteger  = Table3Zile_concediu_M->AsInteger        ;
Table8Valoare_concediu_M->AsFloat    = Table3Valoare_concediu_M->AsFloat          ;
Table8Preaviz->AsBoolean=Table3Preaviz->AsBoolean     ;
Table8Baza_calcul_CAS->AsFloat    =Table3Baza_calcul_CAS->AsFloat         ;
Table8Cas->AsFloat = Table3Cas->AsFloat          ;
Table8Cas_firma->AsFloat = Table3Cas_firma->AsFloat          ;
Table8Somaj->AsFloat = Table3Somaj->AsFloat         ;
Table8Somaj_firma->AsFloat = Table3Somaj_firma->AsFloat         ;
Table8Sanatate->AsFloat = Table3Sanatate->AsFloat        ;
Table8Sanatate_firma->AsFloat = Table3Sanatate_firma->AsFloat        ;
Table8Cheltuieli_profesionale->AsFloat = Table3Cheltuieli_profesionale->AsFloat         ;
Table8Venit_net->AsFloat    = Table3Venit_net->AsFloat        ;
Table8Deducere_pers_de_baza->AsFloat   =Table3Deducere_pers_de_baza->AsFloat        ;
Table8Deducere_suplimentara->AsFloat  =Table3Deducere_suplimentara->AsFloat       ;
Table8Baza_calcul_impozit->AsFloat =Table3Baza_calcul_impozit->AsFloat      ;
Table8Baza_calcul_impozit_CO->AsFloat=Table3Baza_calcul_impozit_CO->AsFloat   ;
Table8Impozit->AsFloat=Table3Impozit->AsFloat   ;
Table8Impozit_concediu_O->AsFloat   =Table3Impozit_concediu_O->AsFloat        ;
Table8Ajutor_nastere->AsFloat  =Table3Ajutor_nastere->AsFloat     ;
Table8Avans->AsFloat     =Table3Avans->AsFloat        ;
Table8Indemnizatii->AsFloat     =Table3Indemnizatii->AsFloat        ;
Table8Popriri->AsFloat   =Table3Popriri->AsFloat      ;
Table8Alte_rate->AsFloat    =Table3Alte_rate->AsFloat       ;
Table8Garantii_materiale->AsFloat    =Table3Garantii_materiale->AsFloat       ;
Table8Rest_plata->AsFloat      =Table3Rest_plata->AsFloat         ;
Table8Diferenta_impozit->AsFloat   =Table3Diferenta_impozit->AsFloat      ;
Table8Total_plata->AsFloat   =Table3Total_plata->AsFloat      ;
Table8Salar_net->AsFloat =Table3Salar_net->AsFloat    ;
Table8Concediu_ramas->AsInteger=Table3Concediu_ramas->AsInteger   ;
Table8Zile_luna->AsInteger=Table3Zile_luna->AsInteger;
Table8Zile_lucrate_D->AsInteger=Table3Zile_lucrate_D->AsInteger;
Table8Zile_lucrate_S->AsInteger=Table3Zile_lucrate_S->AsInteger;
Table8Venit_D->AsFloat=Table3Venit_D->AsFloat;
Table8Venit_S->AsFloat=Table3Venit_S->AsFloat;
}
else {notfound=notfound+1;  }
Table8->Post();
Table8->Append();
Table2->Next();
}
if (notfound>0) ShowMessage("Date la "+IntToStr(notfound)+" negasite");
Table8->Active=false;
Table8->Close();
Table3->Active=false;

Table2->RecNo=rec;
Table3->Filtered=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button35Click(TObject *Sender)
{
int rec=Table2->RecNo;

TReplaceFlags Flags;
Flags <<rfReplaceAll;
Table8->TableName=ComboBox6->Text+ComboBox7->Text+StringReplace(Table1Nume_firma->AsString," ","z",Flags);
Table8->CreateTable();

if (Table2->Active) {
        Table2->Active=false;
        Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true;}
else { Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true; }

Table8->Close();
Table8->Active=true;

int notfound; notfound=0;
for (int i=1; i<(Table2->RecordCount)+1; i++) {
Table8->Append();
Table8Nume_firma->AsString=Table1Nume_firma->AsString;
Table8Fisc->AsString = Table1Fisc->AsString;
Table8J->AsString = Table1J->AsString;
Table8Banca_1->AsString= Table1Banca_1->AsString;
Table8Banca_2->AsString= Table1Banca_2->AsString;
Table8Filiala_1->AsString=Table1Filiala_1->AsString;
Table8Filiala_2->AsString=Table1Filiala_2->AsString;
Table8Cont_banca_1->AsString=Table1Cont_banca_1->AsString;
Table8Cont_banca_2->AsString=Table1Cont_banca_2->AsString;
Table8Nume_pers_raport->AsString=Table1Nume_pers_raport->AsString;
Table8Functia_pers_raport->AsString=Table1Functia_pers_raport->AsString;
Table8e_mail_firma->AsString=Table1e_mail_firma->AsString;
Table8Telefon_firma->AsFloat=Table1Telefon_firma->AsFloat;
Table8Adresa_firma->AsString=Table1Adresa_firma->AsString;
Table8Cnp_angajator->AsFloat=Table1Cnp_angajator->AsFloat;

Table8Cod->AsString= Table2Cod->AsString;
Table8Nume->AsString=Table2Nume->AsString;
Table8Prenume->AsString=Table2Prenume->AsString;
Table8Cnp->AsFloat =Table2Cnp->AsFloat         ;
Table8Functie->AsString =Table2Functie->AsString                  ;
Table8Cod_functie->AsString = Table2Cod_functie->AsString         ;
Table8Sectia->AsString =Table2Sectia->AsString                    ;
Table8Marca->AsString =Table2Marca->AsString                      ;
Table8Data_angajare->AsString = Table2Data_angajare->AsString;
Table8Salar_tarifar->AsFloat =Table2Salar_tarifar->AsFloat ;
Table8Prima->AsFloat = Table2Prima->AsFloat;
Table8Data_prima_angajare->AsString = Table2Data_prima_angajare->AsString;
Table8Data_lichidare_salar->AsString=Table2Data_lichidare_salar->AsString;
Table8Spor_vechime->AsBoolean =  Table8Spor_vechime->AsBoolean;
Table8Regie->AsBoolean =Table2Regie->AsBoolean;
Table8Sex->AsString = Table2Sex->AsString ;
Table8Stare_civila->AsString  = Table2Stare_civila->AsString ;
Table8Telefon->AsFloat = Table2Telefon->AsFloat;
Table8Adresa->AsString = Table2Adresa->AsString;
Table8Data_nastere->AsString = Table2Data_nastere->AsString;
Table8Stagiu_militar->AsBoolean = Table2Stagiu_militar->AsBoolean;
Table8Livret_militar->AsString = Table2Livret_militar->AsString;
Table8Studii->AsString = Table2Studii->AsString;
Table8Numar_copii->AsInteger = Table2Numar_copii->AsInteger;
Table8Date_copii->AsString = Table2Date_copii->AsString;
Table8Pers_handicapate_grI->AsBoolean = Table2Pers_handicapate_grI->AsBoolean;
Table8Pers_handicapate_grII->AsBoolean = Table2Pers_handicapate_grII->AsBoolean;
Table8Sotie_in_intretinere->AsBoolean = Table2Sotie_in_intretinere->AsBoolean;
Table8Concediu_pe_an->AsInteger = Table2Concediu_pe_an->AsInteger;
Table8Norma_ore_zi->AsInteger=Table2Norma_ore_zi->AsInteger;
Table8BASS->AsFloat=Table2BASS->AsFloat;

if (Table3->Active) {
        Table3->Active=false;
        Table3->TableName=Table2Cod->AsString;
        Table3->Active=true;  }
else { Table3->TableName=Table2Cod->AsString;
        Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;
AnsiString luna1=ComboBox7->Text;
Table3->Filtered=true;
Table3->Filter="An='"+ComboBox6->Text+"'";
bool found2=Table3->Locate("Luna",luna1,flags);
if (found2){
Table8An->AsInteger =Table3An->AsInteger        ;
Table8Luna->AsString  =Table3Luna->AsString     ;
Table8Zile_lucrate->AsInteger =Table3Zile_lucrate->AsInteger           ;
Table8Zile_nelucrate->AsInteger =Table3Zile_nelucrate->AsInteger       ;
Table8Ore_suplimentare_15->AsInteger  =Table3Ore_suplimentare_15->AsInteger            ;
Table8Ore_suplimentare_2->AsInteger  =Table3Ore_suplimentare_2->AsInteger              ;
Table8Ore_in_sarbatori->AsInteger  =Table3Ore_in_sarbatori->AsInteger                ;
Table8Ore_noapte->AsInteger =Table3Ore_noapte->AsInteger     ;
Table8Ore_nemotivate->AsInteger =Table3Ore_nemotivate->AsInteger ;
Table8Cfs->AsInteger  =Table3Cfs->AsInteger            ;
Table8Ore_in_acord->AsInteger  =Table3Ore_in_acord->AsInteger ;
Table8Premiu->AsFloat  =Table3Premiu->AsFloat           ;
Table8Alti_bani->AsFloat =Table3Alti_bani->AsFloat             ;
Table8Diferenta_diurna->AsFloat =Table3Diferenta_diurna->AsFloat  ;
Table8Regularizare->AsFloat =Table3Regularizare->AsFloat ;
Table8Salar_realizat->AsFloat =Table3Salar_realizat->AsFloat ;
Table8Suplimentar_15->AsFloat = Table3Suplimentar_15->AsFloat       ;
Table8Suplimentar_2->AsFloat = Table3Suplimentar_2->AsFloat       ;
Table8Sarbatori->AsFloat = Table3Sarbatori->AsFloat   ;
Table8Noapte->AsFloat =  Table3Noapte->AsFloat        ;
Table8Spor_vechime_val->AsFloat = Table3Spor_vechime_val->AsFloat;
Table8Valoare_acord->AsFloat = Table3Valoare_acord->AsFloat       ;
Table8Salar_brut->AsFloat = Table3Salar_brut->AsFloat       ;
Table8Zile_concediu_O->AsInteger  = Table3Zile_concediu_O->AsInteger        ;
Table8Valoare_concediu_O->AsFloat    = Table3Valoare_concediu_O->AsFloat          ;
Table8Zile_concediu_M->AsInteger  = Table3Zile_concediu_M->AsInteger        ;
Table8Valoare_concediu_M->AsFloat    = Table3Valoare_concediu_M->AsFloat          ;
Table8Preaviz->AsBoolean=Table3Preaviz->AsBoolean     ;
Table8Baza_calcul_CAS->AsFloat    =Table3Baza_calcul_CAS->AsFloat         ;
Table8Cas->AsFloat = Table3Cas->AsFloat          ;
Table8Cas_firma->AsFloat = Table3Cas_firma->AsFloat          ;
Table8Somaj->AsFloat = Table3Somaj->AsFloat         ;
Table8Somaj_firma->AsFloat = Table3Somaj_firma->AsFloat         ;
Table8Sanatate->AsFloat = Table3Sanatate->AsFloat        ;
Table8Sanatate_firma->AsFloat = Table3Sanatate_firma->AsFloat        ;
Table8Cheltuieli_profesionale->AsFloat = Table3Cheltuieli_profesionale->AsFloat         ;
Table8Venit_net->AsFloat    = Table3Venit_net->AsFloat        ;
Table8Deducere_pers_de_baza->AsFloat   =Table3Deducere_pers_de_baza->AsFloat        ;
Table8Deducere_suplimentara->AsFloat  =Table3Deducere_suplimentara->AsFloat       ;
Table8Baza_calcul_impozit->AsFloat =Table3Baza_calcul_impozit->AsFloat      ;
Table8Baza_calcul_impozit_CO->AsFloat=Table3Baza_calcul_impozit_CO->AsFloat   ;
Table8Impozit->AsFloat=Table3Impozit->AsFloat   ;
Table8Impozit_concediu_O->AsFloat   =Table3Impozit_concediu_O->AsFloat        ;
Table8Ajutor_nastere->AsFloat  =Table3Ajutor_nastere->AsFloat     ;
Table8Avans->AsFloat     =Table3Avans->AsFloat        ;
Table8Indemnizatii->AsFloat     =Table3Indemnizatii->AsFloat        ;
Table8Popriri->AsFloat   =Table3Popriri->AsFloat      ;
Table8Alte_rate->AsFloat    =Table3Alte_rate->AsFloat       ;
Table8Garantii_materiale->AsFloat    =Table3Garantii_materiale->AsFloat       ;
Table8Rest_plata->AsFloat      =Table3Rest_plata->AsFloat         ;
Table8Diferenta_impozit->AsFloat   =Table3Diferenta_impozit->AsFloat      ;
Table8Total_plata->AsFloat   =Table3Total_plata->AsFloat      ;
Table8Salar_net->AsFloat =Table3Salar_net->AsFloat    ;
Table8Concediu_ramas->AsInteger=Table3Concediu_ramas->AsInteger   ;
Table8Zile_luna->AsInteger=Table3Zile_luna->AsInteger;
Table8Zile_lucrate_D->AsInteger=Table3Zile_lucrate_D->AsInteger;
Table8Zile_lucrate_S->AsInteger=Table3Zile_lucrate_S->AsInteger;
Table8Venit_D->AsFloat=Table3Venit_D->AsFloat;
Table8Venit_S->AsFloat=Table3Venit_S->AsFloat;
}
else {notfound=notfound+1;  }
Table8->Post();
Table2->Next();
}
if (notfound>0) ShowMessage("Date la "+IntToStr(notfound)+" negasite");
Table3->Active=false;

Table2->RecNo=rec;
Table3->Filtered=false;

//********* creat centralizatorul ************//
//********* o conditie ar usura comp-ul de task-ul asta**
DM1->Table1->TableName="A1_"+ComboBox6->Text+ComboBox7->Text;
DM1->Table1->CreateTable();
DM1->Table2->TableName="A2_"+ComboBox6->Text+ComboBox7->Text;
DM1->Table2->CreateTable();
//******** sa fie lumina -------**************
//******** prima A1 *****************************
DM1->Table1->Active=true;
Table8->First();
for (int i=1; i<Table8->RecordCount+1; i++) {
DM1->Table1->Append();
DM1->Table1An->AsInteger=Table8An->AsInteger;
if (Table8Luna->AsString=="ianuarie") DM1->Table1Ln->AsInteger=1;
if (Table8Luna->AsString=="februarie") DM1->Table1Ln->AsInteger=2;
if (Table8Luna->AsString=="martie") DM1->Table1Ln->AsInteger=3;
if (Table8Luna->AsString=="aprilie") DM1->Table1Ln->AsInteger=4;
if (Table8Luna->AsString=="mai") DM1->Table1Ln->AsInteger=5;
if (Table8Luna->AsString=="iunie") DM1->Table1Ln->AsInteger=6;
if (Table8Luna->AsString=="iulie") DM1->Table1Ln->AsInteger=7;
if (Table8Luna->AsString=="august") DM1->Table1Ln->AsInteger=8;
if (Table8Luna->AsString=="septembrie") DM1->Table1Ln->AsInteger=9;
if (Table8Luna->AsString=="octombrie") DM1->Table1Ln->AsInteger=10;
if (Table8Luna->AsString=="noiembrie") DM1->Table1Ln->AsInteger=11;
if (Table8Luna->AsString=="decembrie") DM1->Table1Ln->AsInteger=12;
DM1->Table1Cf->AsFloat=Table8Fisc->AsFloat;
DM1->Table1Cn->AsFloat=Table8Cnp_angajator->AsFloat;
DM1->Table1Nume->AsString=Table8Nume->AsString+" "+Table8Prenume->AsString;
DM1->Table1Cnp->AsFloat=Table8Cnp->AsFloat;
DM1->Table1Rm->AsInteger=1;
DM1->Table1Cv->AsInteger=0;
DM1->Table1Sbl->AsFloat=Table8Salar_brut->AsFloat;

DM1->Table1Cid->AsFloat=Table8Somaj->AsFloat;
DM1->Table1Civ->AsFloat=ceil(DM1->Table1Cid->AsFloat*CSpinEdit1->Value/100);

DM1->Table1Cin->AsInteger=DM1->Table1Cid->AsInteger-DM1->Table1Civ->AsInteger;
DM1->Table1->Post();
Table8->Next();
}
//************** A2 *******************************
DM1->Table2->Active=true;
DM1->Table2->Edit();
DM1->Table2Nri->AsInteger=Edit6->Text.ToInt();
DM1->Table2Datai->AsString=DateToStr(DateTimePicker1->Date);
DM1->Table2An->AsInteger=ComboBox6->Text.ToInt();
if (Table8Luna->AsString=="ianuarie") DM1->Table2Ln->AsInteger=1;
if (Table8Luna->AsString=="februarie") DM1->Table2Ln->AsInteger=2;
if (Table8Luna->AsString=="martie") DM1->Table2Ln->AsInteger=3;
if (Table8Luna->AsString=="aprilie") DM1->Table2Ln->AsInteger=4;
if (Table8Luna->AsString=="mai") DM1->Table2Ln->AsInteger=5;
if (Table8Luna->AsString=="iunie") DM1->Table2Ln->AsInteger=6;
if (Table8Luna->AsString=="iulie") DM1->Table2Ln->AsInteger=7;
if (Table8Luna->AsString=="august") DM1->Table2Ln->AsInteger=8;
if (Table8Luna->AsString=="septembrie") DM1->Table2Ln->AsInteger=9;
if (Table8Luna->AsString=="octombrie") DM1->Table2Ln->AsInteger=10;
if (Table8Luna->AsString=="noiembrie") DM1->Table2Ln->AsInteger=11;
if (Table8Luna->AsString=="decembrie") DM1->Table2Ln->AsInteger=12;
DM1->Table2Datal->AsString=Table8Data_lichidare_salar->AsString;
DM1->Table2Den->AsString=Table8Nume_firma->AsString;
DM1->Table2Cf->AsFloat=Table8Fisc->AsFloat;
DM1->Table2Rj->AsString=Table8J->AsString.SubString(1,3);
DM1->Table2Rn->AsString=Table8J->AsString.SubString(5,5);
DM1->Table2Ra->AsString=Table8J->AsString.SubString(11,4);
DM1->Table2Nra->AsInteger=Table8->RecordCount;
DM1->Table1->First();
int fond=0;
for (int j=1; j<DM1->Table1->RecordCount+1; j++) {
       fond=fond+ceil(DM1->Table1Sbl->AsFloat);
       DM1->Table1->Next();
       }
DM1->Table2Fs->AsInteger=fond;
//******** Totaluri de acu
if (!Table9->Active) Table9->Active=true;
DM1->Table2Tcad->AsFloat=ceil( (Table9somaj_firma->AsFloat)*(DM1->Table2Fs->AsInteger)/100);
DM1->Table2Tcav->AsFloat=ceil( DM1->Table2Tcad->AsInteger*(CSpinEdit1->Value)/100 );
DM1->Table2Tcan->AsFloat=DM1->Table2Tcad->AsFloat-DM1->Table2Tcav->AsFloat;
DM1->Table2Ded->AsFloat=Edit7->Text.ToInt();
DM1->Table2Tcid->AsFloat=ceil( (Table9somaj->AsFloat)*(DM1->Table2Fs->AsInteger)/100 );
DM1->Table2Tciv->AsFloat=ceil( DM1->Table2Tcid->AsInteger*(CSpinEdit1->Value)/100 );
Table9->Active=true;
DM1->Table2Tcin->AsFloat=DM1->Table2Tcid->AsFloat-DM1->Table2Tciv->AsFloat;
DM1->Table2Totd->AsFloat=DM1->Table2Tcad->AsFloat-DM1->Table2Ded->AsFloat+DM1->Table2Tcid->AsFloat;
DM1->Table2Totv->AsFloat=DM1->Table2Tcav->AsFloat+DM1->Table2Tciv->AsFloat;
DM1->Table2Totn->AsFloat=DM1->Table2Totd->AsFloat-DM1->Table2Totv->AsFloat;
DM1->Table2Oblna->AsFloat=Edit8->Text.ToInt();
DM1->Table2Oblni->AsFloat=Edit9->Text.ToInt();
DM1->Table2Maj->AsFloat=Edit10->Text.ToInt();
DM1->Table2Pen->AsFloat=Edit11->Text.ToInt();
DM1->Table2Obl->AsFloat=DM1->Table2Oblna->AsFloat+DM1->Table2Oblni->AsFloat+DM1->Table2Maj->AsFloat+DM1->Table2Pen->AsFloat;
DM1->Table2Totobl->AsFloat=DM1->Table2Obl->AsFloat+DM1->Table2Totn->AsFloat;
//*********** END of calculations ************************
DM1->Table2B1->AsString=Table8Banca_1->AsString;
DM1->Table2B2->AsString=Table8Banca_2->AsString;
DM1->Table2F1->AsString=Table8Filiala_1->AsString;
DM1->Table2F2->AsString=Table8Filiala_2->AsString;
DM1->Table2C1->AsString=Table8Cont_banca_1->AsString;
DM1->Table2C2->AsString=Table8Cont_banca_2->AsString;
DM1->Table2Funca->AsString=Table8Functia_pers_raport->AsString;
DM1->Table2Numea->AsString=Table8Nume_pers_raport->AsString;
DM1->Table2Datad->AsString=DateToStr(DateTimePicker2->Date);
DM1->Table2Sup->AsInteger=1;
DM1->Table2->Post();
//************** closing time James *************
Table8->Close();
DM1->Table1->Close();
DM1->Table2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Declaratiisomaj1Click(TObject *Sender)
{
TabSheet2->TabVisible=false;
TabSheet10->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button38Click(TObject *Sender)
{
TabSheet10->TabVisible=false;
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button36Click(TObject *Sender)
{
AnsiString alfa=GetCurrentDir();
Dialog01->ShowModal();
SetCurrentDir(alfa);
Edit12->Text=Dialog01->Label1->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button37Click(TObject *Sender)
{

DM1->Table3->EmptyTable();
DM1->Table4->EmptyTable();

DM1->a1->Execute();
DM1->a2->Execute();

DM1->Table3->Close();
DM1->Table4->Close();

int open1=FileOpen("A1.dbf",fmOpenRead);
if (open1==-1) { ShowMessage("Error opening file A1.dbf!"); exit(1);   }
int c1=FileCreate(Edit12->Text+"A1.dbf");
if (c1==-1) { ShowMessage("Erro creating file A1.dbf!"); exit(1); }
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
}
//---------------------------------------------------------------------------
float __fastcall TForm1::rotunjire(float e)
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
void __fastcall TForm1::Button39Click(TObject *Sender)
{
int rec=Table2->RecNo;

TReplaceFlags Flags;
Flags <<rfReplaceAll;
Table8->TableName=ComboBox8->Text+ComboBox9->Text+StringReplace(Table1Nume_firma->AsString," ","z",Flags);
Table8->CreateTable();

if (Table2->Active) {
        Table2->Active=false;
        Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true;}
else { Table2->TableName=StringReplace(Table1Nume_firma->AsString," ","z",Flags);;
        Table2->Active=true; }

Table8->Close();
Table8->Active=true;

int notfound; notfound=0;
for (int i=1; i<(Table2->RecordCount)+1; i++) {
Table8->Append();
Table8Nume_firma->AsString=Table1Nume_firma->AsString;
Table8Fisc->AsString = Table1Fisc->AsString;
Table8J->AsString = Table1J->AsString;
Table8Banca_1->AsString= Table1Banca_1->AsString;
Table8Banca_2->AsString= Table1Banca_2->AsString;
Table8Filiala_1->AsString=Table1Filiala_1->AsString;
Table8Filiala_2->AsString=Table1Filiala_2->AsString;
Table8Cont_banca_1->AsString=Table1Cont_banca_1->AsString;
Table8Cont_banca_2->AsString=Table1Cont_banca_2->AsString;
Table8Nume_pers_raport->AsString=Table1Nume_pers_raport->AsString;
Table8Functia_pers_raport->AsString=Table1Functia_pers_raport->AsString;
Table8e_mail_firma->AsString=Table1e_mail_firma->AsString;
Table8Telefon_firma->AsFloat=Table1Telefon_firma->AsFloat;
Table8Adresa_firma->AsString=Table1Adresa_firma->AsString;
Table8Cnp_angajator->AsFloat=Table1Cnp_angajator->AsFloat;

Table8Cod->AsString= Table2Cod->AsString;
Table8Nume->AsString=Table2Nume->AsString;
Table8Prenume->AsString=Table2Prenume->AsString;
Table8Cnp->AsFloat =Table2Cnp->AsFloat         ;
Table8Functie->AsString =Table2Functie->AsString                  ;
Table8Cod_functie->AsString = Table2Cod_functie->AsString         ;
Table8Sectia->AsString =Table2Sectia->AsString                    ;
Table8Marca->AsString =Table2Marca->AsString                      ;
Table8Data_angajare->AsString = Table2Data_angajare->AsString;
Table8Salar_tarifar->AsFloat =Table2Salar_tarifar->AsFloat ;
Table8Prima->AsFloat = Table2Prima->AsFloat;
Table8Data_prima_angajare->AsString = Table2Data_prima_angajare->AsString;
Table8Data_lichidare_salar->AsString=Table2Data_lichidare_salar->AsString;
Table8Spor_vechime->AsBoolean =  Table8Spor_vechime->AsBoolean;
Table8Regie->AsBoolean =Table2Regie->AsBoolean;
Table8Sex->AsString = Table2Sex->AsString ;
Table8Stare_civila->AsString  = Table2Stare_civila->AsString ;
Table8Telefon->AsFloat = Table2Telefon->AsFloat;
Table8Adresa->AsString = Table2Adresa->AsString;
Table8Data_nastere->AsString = Table2Data_nastere->AsString;
Table8Stagiu_militar->AsBoolean = Table2Stagiu_militar->AsBoolean;
Table8Livret_militar->AsString = Table2Livret_militar->AsString;
Table8Studii->AsString = Table2Studii->AsString;
Table8Numar_copii->AsInteger = Table2Numar_copii->AsInteger;
Table8Date_copii->AsString = Table2Date_copii->AsString;
Table8Pers_handicapate_grI->AsBoolean = Table2Pers_handicapate_grI->AsBoolean;
Table8Pers_handicapate_grII->AsBoolean = Table2Pers_handicapate_grII->AsBoolean;
Table8Sotie_in_intretinere->AsBoolean = Table2Sotie_in_intretinere->AsBoolean;
Table8Concediu_pe_an->AsInteger = Table2Concediu_pe_an->AsInteger;
Table8Norma_ore_zi->AsInteger=Table2Norma_ore_zi->AsInteger;
Table8BASS->AsFloat=Table2BASS->AsFloat;

if (Table3->Active) {
        Table3->Active=false;
        Table3->TableName=Table2Cod->AsString;
        Table3->Active=true;  }
else { Table3->TableName=Table2Cod->AsString;
        Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;
AnsiString luna1=ComboBox7->Text;
Table3->Filtered=true;
Table3->Filter="An='"+ComboBox6->Text+"'";
bool found2=Table3->Locate("Luna",luna1,flags);
if (found2){
Table8An->AsInteger =Table3An->AsInteger        ;
Table8Luna->AsString  =Table3Luna->AsString     ;
Table8Zile_lucrate->AsInteger =Table3Zile_lucrate->AsInteger           ;
Table8Zile_nelucrate->AsInteger =Table3Zile_nelucrate->AsInteger       ;
Table8Ore_suplimentare_15->AsInteger  =Table3Ore_suplimentare_15->AsInteger            ;
Table8Ore_suplimentare_2->AsInteger  =Table3Ore_suplimentare_2->AsInteger              ;
Table8Ore_in_sarbatori->AsInteger  =Table3Ore_in_sarbatori->AsInteger                ;
Table8Ore_noapte->AsInteger =Table3Ore_noapte->AsInteger     ;
Table8Ore_nemotivate->AsInteger =Table3Ore_nemotivate->AsInteger ;
Table8Cfs->AsInteger  =Table3Cfs->AsInteger            ;
Table8Ore_in_acord->AsInteger  =Table3Ore_in_acord->AsInteger ;
Table8Premiu->AsFloat  =Table3Premiu->AsFloat           ;
Table8Alti_bani->AsFloat =Table3Alti_bani->AsFloat             ;
Table8Diferenta_diurna->AsFloat =Table3Diferenta_diurna->AsFloat  ;
Table8Regularizare->AsFloat =Table3Regularizare->AsFloat ;
Table8Salar_realizat->AsFloat =Table3Salar_realizat->AsFloat ;
Table8Suplimentar_15->AsFloat = Table3Suplimentar_15->AsFloat       ;
Table8Suplimentar_2->AsFloat = Table3Suplimentar_2->AsFloat       ;
Table8Sarbatori->AsFloat = Table3Sarbatori->AsFloat   ;
Table8Noapte->AsFloat =  Table3Noapte->AsFloat        ;
Table8Spor_vechime_val->AsFloat = Table3Spor_vechime_val->AsFloat;
Table8Valoare_acord->AsFloat = Table3Valoare_acord->AsFloat       ;
Table8Salar_brut->AsFloat = Table3Salar_brut->AsFloat       ;
Table8Zile_concediu_O->AsInteger  = Table3Zile_concediu_O->AsInteger        ;
Table8Valoare_concediu_O->AsFloat    = Table3Valoare_concediu_O->AsFloat          ;
Table8Zile_concediu_M->AsInteger  = Table3Zile_concediu_M->AsInteger        ;
Table8Valoare_concediu_M->AsFloat    = Table3Valoare_concediu_M->AsFloat          ;
Table8Preaviz->AsBoolean=Table3Preaviz->AsBoolean     ;
Table8Baza_calcul_CAS->AsFloat    =Table3Baza_calcul_CAS->AsFloat         ;
Table8Cas->AsFloat = Table3Cas->AsFloat          ;
Table8Cas_firma->AsFloat = Table3Cas_firma->AsFloat          ;
Table8Somaj->AsFloat = Table3Somaj->AsFloat         ;
Table8Somaj_firma->AsFloat = Table3Somaj_firma->AsFloat         ;
Table8Sanatate->AsFloat = Table3Sanatate->AsFloat        ;
Table8Sanatate_firma->AsFloat = Table3Sanatate_firma->AsFloat        ;
Table8Cheltuieli_profesionale->AsFloat = Table3Cheltuieli_profesionale->AsFloat         ;
Table8Venit_net->AsFloat    = Table3Venit_net->AsFloat        ;
Table8Deducere_pers_de_baza->AsFloat   =Table3Deducere_pers_de_baza->AsFloat        ;
Table8Deducere_suplimentara->AsFloat  =Table3Deducere_suplimentara->AsFloat       ;
Table8Baza_calcul_impozit->AsFloat =Table3Baza_calcul_impozit->AsFloat      ;
Table8Baza_calcul_impozit_CO->AsFloat=Table3Baza_calcul_impozit_CO->AsFloat   ;
Table8Impozit->AsFloat=Table3Impozit->AsFloat   ;
Table8Impozit_concediu_O->AsFloat   =Table3Impozit_concediu_O->AsFloat        ;
Table8Ajutor_nastere->AsFloat  =Table3Ajutor_nastere->AsFloat     ;
Table8Avans->AsFloat     =Table3Avans->AsFloat        ;
Table8Indemnizatii->AsFloat     =Table3Indemnizatii->AsFloat        ;
Table8Popriri->AsFloat   =Table3Popriri->AsFloat      ;
Table8Alte_rate->AsFloat    =Table3Alte_rate->AsFloat       ;
Table8Garantii_materiale->AsFloat    =Table3Garantii_materiale->AsFloat       ;
Table8Rest_plata->AsFloat      =Table3Rest_plata->AsFloat         ;
Table8Diferenta_impozit->AsFloat   =Table3Diferenta_impozit->AsFloat      ;
Table8Total_plata->AsFloat   =Table3Total_plata->AsFloat      ;
Table8Salar_net->AsFloat =Table3Salar_net->AsFloat    ;
Table8Concediu_ramas->AsInteger=Table3Concediu_ramas->AsInteger   ;
Table8Zile_luna->AsInteger=Table3Zile_luna->AsInteger;
Table8Zile_lucrate_D->AsInteger=Table3Zile_lucrate_D->AsInteger;
Table8Zile_lucrate_S->AsInteger=Table3Zile_lucrate_S->AsInteger;
Table8Venit_D->AsFloat=Table3Venit_D->AsFloat;
Table8Venit_S->AsFloat=Table3Venit_S->AsFloat;
}
else {notfound=notfound+1;  }
Table8->Post();
Table2->Next();
}
if (notfound>0) ShowMessage("Date la "+IntToStr(notfound)+" negasite");
Table3->Active=false;
Table2->RecNo=rec;
Table3->Filtered=false;
//******************* creat centralizatorul*************************************
//------------------------ A11--------------------------------------------------
DM1->Table5->TableName="A11_"+ComboBox8->Text+ComboBox9->Text;
DM1->Table5->CreateTable();
DM1->Table6->TableName="A12_"+ComboBox8->Text+ComboBox9->Text;
DM1->Table6->CreateTable();

DM1->Table5->Active=true;

Table8->First();
for (int i=1; i<Table8->RecordCount+1; i++) {

DM1->Table5->Append();
DM1->Table5AN->AsInteger=Table8An->AsInteger;
if (Table8Luna->AsString=="ianuarie") DM1->Table5LN->AsInteger=1;
if (Table8Luna->AsString=="februarie") DM1->Table5LN->AsInteger=2;
if (Table8Luna->AsString=="martie") DM1->Table5LN->AsInteger=3;
if (Table8Luna->AsString=="aprilie") DM1->Table5LN->AsInteger=4;
if (Table8Luna->AsString=="mai") DM1->Table5LN->AsInteger=5;
if (Table8Luna->AsString=="iunie") DM1->Table5LN->AsInteger=6;
if (Table8Luna->AsString=="iulie") DM1->Table5LN->AsInteger=7;
if (Table8Luna->AsString=="august") DM1->Table5LN->AsInteger=8;
if (Table8Luna->AsString=="septembrie") DM1->Table5LN->AsInteger=9;
if (Table8Luna->AsString=="octombrie") DM1->Table5LN->AsInteger=10;
if (Table8Luna->AsString=="noiembrie") DM1->Table5LN->AsInteger=11;
if (Table8Luna->AsString=="decembrie") DM1->Table5LN->AsInteger=12;

DM1->Table5CF->AsFloat=Table8Fisc->AsFloat;
DM1->Table5RJ->AsString=Table8J->AsString.SubString(1,3);
DM1->Table5RN->AsString=Table8J->AsString.SubString(5,5);
DM1->Table5RA->AsString=Table8J->AsString.SubString(11,4);

DM1->Table5NUME->AsString=Table8Nume->AsString+" "+Table8Prenume->AsString;
DM1->Table5CNP->AsFloat=Table8Cnp->AsFloat;
DM1->Table5CM->AsInteger=1;

if (Table8Pensionar) {
        DM1->Table5CM=0;
        DM1->Table5CV=0;
        if (Table8Norma_ore_zi->AsInteger==2) DM1->Table5PE->AsInteger=2;
        if (Table8Norma_ore_zi->AsInteger==3) DM1->Table5PE->AsInteger=3;
        if (Table8Norma_ore_zi->AsInteger==4) DM1->Table5PE->AsInteger=4;
        if (Table8Norma_ore_zi->AsInteger==5) DM1->Table5PE->AsInteger=5;
        if (Table8Norma_ore_zi->AsInteger==6) DM1->Table5PE->AsInteger=6;
        if (Table8Norma_ore_zi->AsInteger==7) DM1->Table5PE->AsInteger=7;
        if (Table8Norma_ore_zi->AsInteger==8) DM1->Table5PE->AsInteger=8;
}
if (!Table8Pensionar & Table8Norma_ore_zi->AsInteger<8) {
        DM1->Table5CM=0;
        if (Table8Norma_ore_zi->AsInteger==2) DM1->Table5CV->AsInteger=2;
        if (Table8Norma_ore_zi->AsInteger==3) DM1->Table5CV->AsInteger=3;
        if (Table8Norma_ore_zi->AsInteger==4) DM1->Table5CV->AsInteger=4;
        if (Table8Norma_ore_zi->AsInteger==5) DM1->Table5CV->AsInteger=5;
        if (Table8Norma_ore_zi->AsInteger==6) DM1->Table5CV->AsInteger=6;
        if (Table8Norma_ore_zi->AsInteger==7) DM1->Table5CV->AsInteger=7;
}
else DM1->Table5CM->AsInteger=1;
DM1->Table5TT->AsInteger=Table8Zile_luna->AsInteger;
DM1->Table5NN->AsInteger=Table8Zile_lucrate->AsInteger;
DM1->Table5DD->AsInteger=Table8Zile_lucrate_D->AsInteger;
DM1->Table5SS->AsInteger=Table8Zile_lucrate_S->AsInteger;
DM1->Table5PP->AsInteger=0;
DM1->Table5TVN->AsFloat=Table8Salar_realizat->AsFloat-Table8Venit_D->AsFloat-Table8Venit_S->AsFloat;
DM1->Table5TVD->AsFloat=Table8Venit_D->AsFloat;
DM1->Table5TVS->AsFloat=Table8Venit_S->AsFloat;
DM1->Table5TV->AsFloat=Table8Salar_realizat->AsFloat;
DM1->Table5CASAT->AsFloat=Table8Cas->AsFloat;
DM1->Table5BASS->AsFloat=Table8BASS->AsFloat;
DM1->Table5CASTOT->AsFloat=rotunjire (DM1->Table5CASAT->AsFloat*pcas->Value )-DM1->Table5BASS->AsFloat;
DM1->Table5CNPA->AsFloat=Table8Cnp_angajator->AsFloat;
DM1->Table5NORMA->AsInteger=Table8Norma_ore_zi->AsInteger;

DM1->Table5->Post();
                }
//********************** incheiat A11*******************************************
//----------------------A12-----------------------------------------------------
DM1->Table6->Active=true;

DM1->Table5->Append();
DM1->Table6AN->AsInteger=Table8An->AsInteger;
if (Table8Luna->AsString=="ianuarie") DM1->Table6LN->AsInteger=1;
if (Table8Luna->AsString=="februarie") DM1->Table6LN->AsInteger=2;
if (Table8Luna->AsString=="martie") DM1->Table6LN->AsInteger=3;
if (Table8Luna->AsString=="aprilie") DM1->Table6LN->AsInteger=4;
if (Table8Luna->AsString=="mai") DM1->Table6LN->AsInteger=5;
if (Table8Luna->AsString=="iunie") DM1->Table6LN->AsInteger=6;
if (Table8Luna->AsString=="iulie") DM1->Table6LN->AsInteger=7;
if (Table8Luna->AsString=="august") DM1->Table6LN->AsInteger=8;
if (Table8Luna->AsString=="septembrie") DM1->Table6LN->AsInteger=9;
if (Table8Luna->AsString=="octombrie") DM1->Table6LN->AsInteger=10;
if (Table8Luna->AsString=="noiembrie") DM1->Table6LN->AsInteger=11;
if (Table8Luna->AsString=="decembrie") DM1->Table6LN->AsInteger=12;

Word an, luna, zi;
DecodeDate(DateTimePicker3->Date, an, luna, zi);
DM1->Table6DCZZ->AsInteger=zi;
DM1->Table6DCLL->AsInteger=luna;
DM1->Table6DCAA->AsInteger=an;
DM1->Table6DEN->AsString=Table8Nume_firma->AsString;
DM1->Table6CF->AsFloat=Table8Fisc->AsFloat;
DM1->Table6RJ->AsString=Table8J->AsString.SubString(1,3);
DM1->Table6RN->AsString=Table8J->AsString.SubString(5,5);
DM1->Table6RA->AsString=Table8J->AsString.SubString(11,4);
DM1->Table6NRM->AsInteger=DM1->Table5->RecordCount;
DM1->Table5->First();
        for (int l=1; l<DM1->Table5->RecordCount+1; l++){
DM1->Table6FS->AsFloat+=DM1->Table5TV->AsFloat;
DM1->Table6FSN->AsFloat+=DM1->Table5TVN->AsFloat;
DM1->Table6FSD->AsFloat+=DM1->Table5TVD->AsFloat;
DM1->Table6FSS->AsFloat+=DM1->Table5TVS->AsFloat;
DM1->Table6BASS->AsFloat+=DM1->Table5BASS->AsFloat;
DM1->Table5->Next();
}
Table9->Active=true;
DM1->Table6CASS->AsFloat=DM1->Table6FS->AsFloat*Table9cas->AsFloat;
DM1->Table6CASAN->AsFloat=DM1->Table6FS->AsFloat*Table9cas_firma->AsFloat;
Table9->Active=false;
DM1->Table6CASVIR->AsFloat=DM1->Table6CASS->AsFloat+DM1->Table6CASAN->AsFloat;
DM1->Table6CAS145->AsFloat=StrToFloat(Edit13->Text);
DM1->Table6NRF->AsInteger=StrToInt(Edit23->Text);
DM1->Table6B1->AsString=Table8Banca_1->AsString;
DM1->Table6B2->AsString=Table8Banca_2->AsString;
DM1->Table6B3->AsString="";
DM1->Table6B4->AsString="";
DM1->Table6F1->AsString=Table8Filiala_1->AsString;
DM1->Table6F1->AsString=Table8Filiala_2->AsString;
DM1->Table6F1->AsString="";
DM1->Table6F1->AsString="";
DM1->Table6C1->AsString=Table8Cont_banca_1->AsString;
DM1->Table6C2->AsString=Table8Cont_banca_2->AsString;
DM1->Table6C3->AsString="";
DM1->Table6C4->AsString="";
DM1->Table6CNPA->AsFloat=Table8Cnp_angajator->AsFloat;
DM1->Table6CAAMBP->AsFloat=rotunjire( 0.5*DM1->Table6FS->AsFloat );

DM1->Table6A_LOCA->AsString=Edit15->Text;
DM1->Table6A_STR->AsString=Edit17->Text;
DM1->Table6A_NR->AsInteger=StrToInt(Edit18->Text);
DM1->Table6A_BL->AsString=Edit19->Text;
DM1->Table6A_SC->AsString=Edit20->Text;
DM1->Table6A_ET->AsInteger=StrToInt(Edit21->Text);
DM1->Table6A_AP->AsInteger=StrToInt(Edit22->Text);
DM1->Table6A_JUD->AsInteger=StrToInt(Edit14->Text);
DM1->Table6A_SECT->AsString=Edit16->Text;

DM1->Table6TELEFON->AsFloat=Table8Telefon_firma->AsFloat;
DM1->Table6E_MAIL->AsString=Table8e_mail_firma->AsString;
//************************** end A22****************************************

Table5->Close();
Table6->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeclaratiiCAS1Click(TObject *Sender)
{
TabSheet2->TabVisible=false;
TabSheet11->TabVisible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button41Click(TObject *Sender)
{
TabSheet11->TabVisible=false;
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

