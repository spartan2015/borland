//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit20.h"
#include "Unit23.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDepozit *Depozit;
//---------------------------------------------------------------------------
__fastcall TDepozit::TDepozit(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDepozit::SpeedButton4Click(TObject *Sender)
{
if (MessageDlg("Sterg???",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
dm->Table2->Delete();
 }
//---------------------------------------------------------------------------
void __fastcall TDepozit::SpeedButton3Click(TObject *Sender)
{
Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive;
TReplaceFlags Flags;
Flags <<rfReplaceAll;
//***********
if (MessageDlg("Adaug ???",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )  {
bool s1=dm->Table2->Locate("an",ComboBox1->Text,flags);
bool s2=dm->Table2->Locate("luna",ComboBox2->Text,flags);
if (s1 & s2) ShowMessage("Deja exista!!!, Sterge mai intai");
else {
 dm->Table2->Append();
 dm->Table2an->AsInteger=ComboBox1->Text.ToInt();
 dm->Table2luna->AsString=ComboBox2->Text;
 dm->Table2->Post();
CreateDir("data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text);
dm->magazie->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->magazie->CreateTable();
dm->stoc->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->stoc->CreateTable();
//casa si *banca  - in cb
// start plati
dm->plativaluta->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->plativaluta->CreateTable();
dm->plativaluta->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->plativaluta->CreateTable();
// end plati
dm->cb->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casalei->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casalei->CreateTable();
dm->casa->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casa->TableName="casa";
dm->casa->CreateTable();

// end casa *banca - in cb
//banca :
dm->banca->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->banca->CreateTable();
// end banca
//*** start "io" si "in"
dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->io->TableName="intrari";
dm->io->CreateTable();
dm->io->TableName="iesiri";
dm->io->CreateTable();
dm->in->TableName="int";
dm->in->CreateTable();
dm->in->TableName="ies";
dm->in->CreateTable();
//**** end "io" si "in"
if (check1->State==cbChecked) {
dm->Table2->Filtered=false;
   if (dm->Table2->RecNo!=1) {
        dm->Table2->Prior();
        dm->Source->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsInteger+dm->Table2luna->AsString;
        dm->Table2->Next();
        dm->batch1->Source=dm->Source;
        dm->batch1->Destination=dm->stoc;
        dm->batch1->Execute();
                       }
                }
                dm->Table2->Filtered=true;
        }
   }
}
//---------------------------------------------------------------------------
void __fastcall TDepozit::FormActivate(TObject *Sender)
{
Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive;
TDate dat;
dat=Now();
Word zi, luna, an;
DecodeDate(dat, an, luna, zi);
ComboBox1->Text=IntToStr(an);
ComboBox2->Text=FormatDateTime("mmmm", Now());
//********** pozitionare data curenta daca poate **********
dm->Table2->Locate("an",(ComboBox1->Text),flags);
dm->Table2->Filtered=true;
dm->Table2->Filter="an='"+ComboBox1->Text+"'";
dm->Table2->Locate("luna",(ComboBox2->Text),flags);
dm->Table2->Filtered=false;
//********* informatii generale: **********************
dm->Table2->Filter="an='"+ComboBox1->Text+"'";
dm->Table2->Filtered=true;
Label14->Caption=dm->Table2->RecordCount ;
AnsiString filtru=(StrToInt(ComboBox1->Text)-1);
dm->Table2->Filter="an='"+filtru+"'";
Label15->Caption=dm->Table2->RecordCount ;
dm->Table2->Filtered=false;
Label16->Caption=dm->Table2->RecordCount ;
}
//---------------------------------------------------------------------------
void __fastcall TDepozit::Button2Click(TObject *Sender)
{
dm->Table2->Close();
Hide();
Main->Show();
}
//---------------------------------------------------------------------------
void __fastcall TDepozit::ComboBox1Change(TObject *Sender)
{
Set <TLocateOption,0,1 > flags;
flags <<loCaseInsensitive ;
dm->Table2->Filtered=true;
dm->Table2->Filter="an='"+ComboBox1->Text+"'";
dm->Table2->Locate("luna", ComboBox2->Text, flags);
}
//---------------------------------------------------------------------------

void __fastcall TDepozit::ComboBox2Change(TObject *Sender)
{
Set <TLocateOption,0,1 > flags;
flags <<loCaseInsensitive ;
dm->Table2->Locate("luna", ComboBox2->Text, flags);
}
//---------------------------------------------------------------------------


void __fastcall TDepozit::SpeedButton5Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
Hide();
bios->Show();
bios->Label1->Caption="Facturi intrari";
bios->Caption="Facturi intrari: "+dm->Table1Nume_firma->AsString;

dm->magazie->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->stoc->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;

dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->io->TableName="intrari";
dm->io->Active=true;

dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->in->TableName="in";
dm->in->Active=true;

dm->platilei->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->platilei->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TDepozit::Button1Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
Hide();
bios->Show();
bios->Label1->Caption="Facturi iesiri";
bios->Caption="Facturi iesiri: "+dm->Table1Nume_firma->AsString;

dm->magazie->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->stoc->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;

dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;;
dm->io->TableName="iesiri";
dm->io->Active=true;

dm->in->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;;
dm->in->TableName="ies";
dm->in->Active=true;

dm->platilei->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->platilei->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TDepozit::DBGrid1CellClick(TColumn *Column)
{
ComboBox1->Text=dm->Table2an->AsString;
ComboBox2->Text=dm->Table2luna->AsString;           
}
//---------------------------------------------------------------------------

void __fastcall TDepozit::Button3Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
Hide();
dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->cb->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casalei->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casa->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->plati->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
moneda->Show();
}
//---------------------------------------------------------------------------


void __fastcall TDepozit::Button4Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
dm->cb->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->plati->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->casalei->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->banca->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+ComboBox1->Text+ComboBox2->Text;
dm->banca->Active=true;
Depozit->Close();
banca->Show();
}
//---------------------------------------------------------------------------




