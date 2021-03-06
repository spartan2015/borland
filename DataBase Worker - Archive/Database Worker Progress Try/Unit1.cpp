//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
Button6->Caption="Modifica";
Button5->Enabled=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
TabSheet1->Visible=false;
TabSheet1->TabVisible=false;
Table2->TableName=(DBEdit5->Field->AsString);
Table2->Active=true;
TabSheet2->TabVisible=true;
TabSheet2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
Table2->TableName=(DBEdit5->Field->AsString);
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
if (!Table2->Active){
Table2->TableName=(DBEdit5->Field->AsString);
Table2->Active=true; }
else    {
    Table2->Active=false;
    Table2->TableName=(DBEdit5->Field->AsString);
    Table2->Active=true; }

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

TTable *NewTable = new TTable(Form1);
NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName =(DBEdit7->Field->AsString);
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

TFieldDef *NewField = NewTable->FieldDefs->AddFieldDef(); // define first field
NewField->DataType = ftInteger;
NewField->Name = "An";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 15;
NewField->Name = "Luna";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_tarifar";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_ora";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_lucrate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_nelucrate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_suplimentare_15";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_suplimentare_2";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_in_sarbatori";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_noapte";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_nemotivate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Cfs";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_in_acord";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Premiu";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Alti_bani";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Diferenta_diurna";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Regularizare";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_realizat";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Suplimentar_15";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Suplimentar_2";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sarbatori";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Noapte";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Spor_vechime_val";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_acord";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_brut";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_concediu_M";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_concediu_M";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Preaviz";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_CAS";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cas";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cas_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Somaj";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Somaj_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sanatate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sanatate_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cheltuieli_profesionale";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Venit_net";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Deducere_pers_de_baza";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Deducere_suplimentara";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_impozit_CO";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Impozit_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Ajutor_nastere";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Avans";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Indemnizatii";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Popriri";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Alte_rate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Garantii_materiale";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Rest_plata";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Diferenta_impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_net";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Total_plata";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Concediu_ramas";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_luna";

bool CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Overwrite table ") + (DBEdit7->Field->AsString) +
                               AnsiString("?")).c_str(),

                               "Table Exists", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table
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
AnsiString d1,d2,d3;
AnsiString dat1,dat=DateToStr(Date());
int index=dat.Pos("/");
dat1=dat;
d1=dat.Delete(index,dat.Length());
dat1=dat1.Delete(1,index);
dat=dat1;
index=dat1.Pos("/");
d2=dat1.Delete(index,dat1.Length());
dat=dat.Delete(1,index);
d3=dat;

int d11=d1.ToInt();
if (d11==1) Table3Luna->AsString="Ianuarie";
if (d11==2) Table3Luna->AsString="Februarie";
if (d11==3) Table3Luna->AsString="Martie";
if (d11==4) Table3Luna->AsString="Aprilie";
if (d11==5) Table3Luna->AsString="Mai";
if (d11==6) Table3Luna->AsString="Iunie";
if (d11==7) Table3Luna->AsString="Iulie";
if (d11==8) Table3Luna->AsString="August";
if (d11==9) Table3Luna->AsString="Septembrie";
if (d11==10) Table3Luna->AsString="Octombrie";
if (d11==11) Table3Luna->AsString="Noiembrie";
if (d11==12) Table3Luna->AsString="Decembrie";
Table3An->AsInteger=d3.ToInt();
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
+DBEdit48->Field->AsFloat+DBEdit39->Field->AsFloat;


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
Table3Cas->AsInteger=0;
Table3Cas->AsFloat =ceil( ((Table9cas->AsFloat)*(Table3Baza_calcul_CAS->AsFloat))/100 );
Table3Cas_firma->AsFloat =ceil( ((Table9cas_firma->AsFloat)*(Table3Baza_calcul_CAS->AsFloat))/100 );
Table3Somaj->AsFloat =ceil( ((Table9somaj->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Somaj_firma->AsFloat =ceil( ((Table9somaj_firma->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Sanatate->AsFloat =ceil( ((Table9sanatate->AsFloat)*Table3Salar_brut->AsFloat)/100 );
Table3Sanatate_firma->AsFloat =ceil( ((Table9sanatate_firma->AsFloat)*Table3Salar_brut->AsFloat)/100 );

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

//********** interesting *** part II

if (RadioGroup1->ItemIndex==0)
        if (RadioGroup2->ItemIndex==1)
        {//ListForm = new TListForm(Application);
        //*****************************

        //*****************************
        ListForm->Table1->TableName="centralizator.db";
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

void __fastcall TForm1::Button33Click(TObject *Sender)
{
         int rec=Table2->RecNo;

TTable *NewTable = new TTable(Form1);
NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName ="centralizator";
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

TFieldDef *NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Nume_firma";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Fisc";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "J";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Banca";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Cod_banca";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftFloat;
NewField->Name = "Telefon_firma";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftMemo;
NewField->Name = "Adresa_firma";

//***********************

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Nume";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Prenume";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Cod";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cnp";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Functie";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Cod_functie";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Sectia";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Marca";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftDate;
NewField->Name = "Data_angajare";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_tarifar";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Prima";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftDate;
NewField->Name = "Data_prima_angajare";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Vechime";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Spor_vechime";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Regie";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 1;
NewField->Name = "Sex";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 12;
NewField->Name = "Stare_civila";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Telefon";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftMemo;
NewField->Name = "Adresa";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftDate;
NewField->Name = "Data_nastere";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Stagiu_militar";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Livret_militar";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftMemo;
NewField->Name = "Studii";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "Numar_copii";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftMemo;
NewField->Name = "Date_copii";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Pers_handicapate_grI";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Pers_handicapate_grII";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Sotie_in_intretinere";

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "Concediu_pe_an";

//*****************Table3*************

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "An";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 15;
NewField->Name = "Luna";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_ora";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_lucrate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_nelucrate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_suplimentare_1,5";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_suplimentare_2";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_in_sarbatori";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_noapte";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_nemotivate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Cfs";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Ore_in_acord";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Premiu";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Alti_bani";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Diferenta_diurna";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Regularizare";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_realizat";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Suplimentar_1,5";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Suplimentar_2";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sarbatori";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Noapte";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Spor_vechime_val";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_acord";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_brut";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_concediu_M";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Valoare_concediu_M";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftBoolean;
NewField->Name = "Preaviz";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_CAS";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cas";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cas_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Somaj";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Somaj_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sanatate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Sanatate_firma";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Cheltuieli_profesionale";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Venit_net";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Deducere_pers_de_baza";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Deducere_suplimentara";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Baza_calcul_impozit_CO";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Impozit_concediu_O";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Ajutor_nastere";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Avans";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Indemnizatii";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Popriri";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Alte_rate";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Garantii_materiale";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Rest_plata";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Diferenta_impozit";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Salar_net";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftFloat;
NewField->Name = "Total_plata";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Concediu_ramas";

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftInteger;
NewField->Name = "Zile_luna";


/*NewTable->IndexDefs->Clear();
TIndexDef *NewIndex = NewTable->IndexDefs->AddIndexDef(); // add an index
NewIndex->Name = "PrimaryIndex";
NewIndex->Fields = "Luna";
NewIndex->Options << ixPrimary;
/*/
// Now check for prior existence of this table
bool CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Overwrite table ") + "centralizator" +
                               AnsiString("?")).c_str(),
                        "Table Exists", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table

//********** END*************************************
if (Table2->Active) {
        Table2->Active=false;
        Table2->TableName=Table1Cod_banca->AsString;
        Table2->Active=true;}
else { Table2->TableName=Table1Cod_banca->AsString;
        Table2->Active=true; }
Table8->Close();
Table8->Active=true;
Table8->Append();
int notfound; notfound=0;
for (int i=1; i<(Table2->RecordCount)+1; i++) {

Table8Nume_firma->AsString=Table1Nume_firma->AsString;
Table8Fisc->AsString = Table1Fisc->AsString;
Table8J->AsString = Table1J->AsString;
Table8Banca->AsString= Table1Banca->AsString;
Table8Telefon_firma->AsFloat=Table1Telefon_firma->AsFloat;
Table8Adresa_firma->AsString=Table1Adresa_firma->AsString;

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
Table8Vechime->AsInteger = Table2Vechime->AsInteger;
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


if (Table3->Active) {
        Table3->Active=false;
        Table3->TableName=Table2Cod->AsString;
        Table3->Active=true;  }
else { Table3->TableName=Table2Cod->AsString;
        Table3->Active=true; }

Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive << loPartialKey;

AnsiString an1=ComboBox2->Text;
AnsiString luna1=ComboBox3->Text;
bool found1=Table3->Locate("An",an1,flags);
bool found2=Table3->Locate("Luna",luna1,flags);
if (found1 & found2){
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

