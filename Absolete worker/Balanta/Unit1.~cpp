//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
datas=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
DataModule1->Table1->Prior();
ComboBox1->Text=DataModule1->Table1an->AsString;
ComboBox2->Text=DataModule1->Table1luna->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
DataModule1->Table1->Next();
ComboBox1->Text=DataModule1->Table1an->AsString;
ComboBox2->Text=DataModule1->Table1luna->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
DataModule1->Table1->Close();
TabSheet1->TabVisible=false;
TabSheet9->TabVisible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TabSheet1Show(TObject *Sender)
{
        if (datas) {
Word an,luna,zi;
TDate dat;
dat=Date();
DecodeDate(dat,an,luna,zi);
ComboBox1->Text=IntToStr(an);
if (luna==1) ComboBox2->Text="ianuarie";
if (luna==2) ComboBox2->Text="februarie";
if (luna==3) ComboBox2->Text="martie";
if (luna==4) ComboBox2->Text="aprilie";
if (luna==5) ComboBox2->Text="mai";
if (luna==6) ComboBox2->Text="iunie";
if (luna==7) ComboBox2->Text="iulie";
if (luna==8) ComboBox2->Text="august";
if (luna==9) ComboBox2->Text="septembrie";
if (luna==10) ComboBox2->Text="octombrie";
if (luna==11) ComboBox2->Text="noiembrie";
if (luna==12) ComboBox2->Text="decembrie";

Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive;
//********** pozitionare data curenta daca poate **********
DataModule1->Table1->Locate("an",(ComboBox1->Text),flags);
DataModule1->Table1->Filtered=true;
DataModule1->Table1->Filter="an='"+ComboBox1->Text+"'";
DataModule1->Table1->Locate("luna",(ComboBox2->Text),flags);
DataModule1->Table1->Filtered=false;
datas=false;
}

//********* informatii generale: **********************
DataModule1->Table1->Filter="an='"+ComboBox1->Text+"'";
DataModule1->Table1->Filtered=true;
Label14->Caption=DataModule1->Table1->RecordCount ;
AnsiString filtru=(StrToInt(ComboBox1->Text)-1);
DataModule1->Table1->Filter="an='"+filtru+"'";
Label15->Caption=DataModule1->Table1->RecordCount ;
DataModule1->Table1->Filtered=false;
Label16->Caption=DataModule1->Table1->RecordCount ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;

if (DataModule1->Table2->Active) {
     DataModule1->Table2->Active=false;
     DataModule1->Table2->TableName="j"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
     DataModule1->Table2->Active=true;
        }
else {
     DataModule1->Table2->TableName="j"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
     DataModule1->Table2->Active=true;
        }
TabSheet1->TabVisible=false;
TabSheet1->Visible=false;
TabSheet2->TabVisible=true;
TabSheet2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
DataModule1->Table2->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
DataModule1->Table2->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
DataModule1->Table2->Edit();
if (DataModule1->Table2->RecNo==-1)
        DataModule1->Table2Nr_crt->AsInteger=DataModule1->Table2->RecordCount+1;
else
        DataModule1->Table2Nr_crt->AsInteger=DataModule1->Table2->RecNo;
if (DataModule1->Table4->Active==false) DataModule1->Table4->Active=true;
//************************* atribution************
DataModule1->Table2Sume_credit->AsFloat=DBEdit5->Field->AsFloat;
//*******they call me the seeker...************
Set < TLocateOption,0,1 > flags;
flags <<loCaseInsensitive;

bool seeker0,seeker1,seeker2,seeker3;
        seeker0=DataModule1->Table4->Locate("Simbol", DataModule1->Table2Simbol_debit->AsString, flags);
        seeker1=DataModule1->Table4->Locate("Simbol", DataModule1->Table2Simbol_credit->AsString, flags);
//checking dependencies ********************
        if (seeker0 & seeker1) {
AnsiString dat,datbig,trunc,truncpos;
int index,index1;
//********************beginner *******************
if (DBEdit3->Field->AsString.Length() == 3) {
        if (DBEdit4->Field->AsString.Length() == 3) {
//        ShowMessage("3-3");
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        }
        if (DBEdit4->Field->AsString.Length() > 3) {
//        ShowMessage("3-4");
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        if (index==0) index=dat.Pos(DBEdit4->Field->AsString.SubString(1,3));
        }

        }
else    {
        if (DBEdit4->Field->AsString.Length() == 3) {
//        ShowMessage("4-3");
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        if (dat.Length() < 3) {
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString.SubString(1,3), flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        }
        }
        if (DBEdit4->Field->AsString.Length() > 3) {
//        ShowMessage("4-4");
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        if (dat.Length() < 3) {
        DataModule1->Table4->Locate("Simbol",DBEdit3->Field->AsString.SubString(1,3), flags);
        dat=DataModule1->Table4Conturi_debitoare->AsString;
        index=dat.Pos(DBEdit4->Field->AsString);
        if (index==0) index=dat.Pos(DBEdit4->Field->AsString.SubString(1,3));
        }
        }
        }
//***** reciprocitate******************************************************
/* temp  /*/
if (DBEdit4->Field->AsString.Length() == 3) {
        if (DBEdit3->Field->AsString.Length() == 3) {
//        ShowMessage("3-3");
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        }
        if (DBEdit3->Field->AsString.Length() > 3) {
//        ShowMessage("3-4");
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        if (index==0) index=dat.Pos(DBEdit3->Field->AsString.SubString(1,3));
        }

        }
else    {
        if (DBEdit3->Field->AsString.Length() == 3) {
//        ShowMessage("4-3");
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        if (dat.Length() < 3) {
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString.SubString(1,3), flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        }
        }
        if (DBEdit3->Field->AsString.Length() > 3) {
//        ShowMessage("4-4");
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString, flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        if (dat.Length() < 3) {
        DataModule1->Table4->Locate("Simbol",DBEdit4->Field->AsString.SubString(1,3), flags);
        dat=DataModule1->Table4Conturi_creditoare->AsString;
        index=dat.Pos(DBEdit3->Field->AsString);
        if (index==0) index=dat.Pos(DBEdit3->Field->AsString.SubString(1,3));
        }
        }
        }
/*/ // end temp   /*/
//end reciprocitate *******************************************
if (index!=0 & index1!=0) DataModule1->Table2->Post();
        else {
        ShowMessage("Eroare grad II");
        }
                }
else ShowMessage("Eroare grad I");




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
DataModule1->Table2->Append();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
        DataModule1->Table2->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
        DataModule1->Table1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
DataModule1->Table2->Close();
TabSheet2->TabVisible=false;
TabSheet1->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
if (DataModule1->Table3->Active) {
             DataModule1->Table3->Active=false;
             DataModule1->Table3->TableName="b"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
             DataModule1->Table3->Active=true; }
else {
      DataModule1->Table3->TableName="b"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
      DataModule1->Table3->Active=true; }
TabSheet2->TabVisible=false;
TabSheet3->TabVisible=true;
TabSheet3->Visible=true;
TabSheet4->TabVisible=true;
TabSheet5->TabVisible=true;
TabSheet6->TabVisible=true;
TabSheet7->TabVisible=true;
TabSheet8->TabVisible=true;
      }
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
Set<TLocateOption,0,1> flags;
flags << loCaseInsensitive << loPartialKey;
bool locator0=DataModule1->Table1->Locate("an",ComboBox1->Text,flags);
bool locator1=DataModule1->Table1->Locate("luna",ComboBox2->Text,flags);
if (locator0 & locator1) ShowMessage("Deja exista");
else {
DataModule1->Table1->Append();
if (MessageDlg("Creez baza de date?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo, 0) == mrYes) {
//      Jurnal
TReplaceFlags Flags;
Flags << rfReplaceAll;

TTable *NewTable = new TTable(Form1);
NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName ="j"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

TFieldDef *NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftInteger;
NewField->Name="Nr_crt";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftDate;
NewField->Name="Data_inregistrare";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftString;
NewField->Size=25;
NewField->Name="Explicatii";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftString;
NewField->Size=12;
NewField->Name="Simbol_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftString;
NewField->Size=12;
NewField->Name="Simbol_credit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="Sume_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="Sume_credit";

bool CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Overwrite table ") +
                               AnsiString("?")).c_str(),

                               "Table Exists", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table
//			Bilant

NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName ="b"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

NewField= NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftString;
NewField->Size=10;
NewField->Name="Cont";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftString;
NewField->Size=60;
NewField->Name="Denumire";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="Debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="Credit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="sold_initial_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="sold_initial_credit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="rulaj_cumulat_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="rulaj_cumulat_credit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="total_sume_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="total_sume_credit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="sold_final_debit";

NewField=NewTable->FieldDefs->AddFieldDef();
NewField->DataType=ftFloat;
NewField->Name="sold_final_credit";
//***********index
NewTable->IndexDefs->Clear();
TIndexDef *NewIndex = NewTable->IndexDefs->AddIndexDef(); // add an index
NewIndex->Name = "PrimaryIndex";
NewIndex->Fields = "Cont";
NewIndex->Options << ixPrimary << ixUnique;

//***********end index
CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Overwrite") +
                               AnsiString("?")).c_str(),

                               "Table Exists", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table
//*************************************
DataModule1->Table1->Edit();
DataModule1->Table1an->AsString=ComboBox1->Text;
DataModule1->Table1luna->AsString=ComboBox2->Text;
DataModule1->Table1->Post();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
DataModule1->Table3->Close();
TabSheet3->TabVisible=false;
TabSheet4->TabVisible=false;
TabSheet5->TabVisible=false;
TabSheet6->TabVisible=false;
TabSheet7->TabVisible=false;
TabSheet8->TabVisible=false;

TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button7Click(TObject *Sender)
{
DataModule1->Table2->First();
DataModule1->Table4->Active=true;

TReplaceFlags Flags;
Flags << rfReplaceAll;

if (DataModule1->Table3->Active) {
        DataModule1->Table3->Active=false;
        DataModule1->Table3->TableName="j"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
        DataModule1->Table3->Active=true;   }
else {
        DataModule1->Table3->TableName="j"+(ComboBox1->Text)+(ComboBox2->Text)+StringReplace(DBEdit6->Field->AsString," ","z",Flags);
        DataModule1->Table3->Active=true;   }
//***********************deschid sold initial**********
if (!DataModule1->Table5->Active) DataModule1->Table5->Open();
//******************end sol initial********
Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive;

//****************** balanta completa cu sold initial *******
DataModule1->Table5->First();
for (int v=1; v<DataModule1->Table5->RecordCount+1; v++) {
bool seeker;
seeker=DataModule1->Table3->Locate("Cont", DataModule1->Table5Cont->AsString, flags);
if (!seeker) {
        DataModule1->Table3->Append();
        DataModule1->Table3Cont->AsString=DataModule1->Table5Cont->AsString;
        DataModule1->Table3Denumire->AsString=DataModule1->Table5Denumire->AsString;
        DataModule1->Table3sold_initial_debit->AsFloat=DataModule1->Table5Debit->AsFloat;
        DataModule1->Table3sold_initial_credit->AsFloat=DataModule1->Table5Credit->AsFloat;
        DataModule1->Table3->Post();
        }
DataModule1->Table5->Next();
}
//****************** end of balanta completa ****************
for (int i=1; i<DataModule1->Table2->RecordCount+1; i++) {
bool seeker001;
seeker001=DataModule1->Table3->Locate("Cont", DataModule1->Table2Simbol_debit->AsString, flags);
if (seeker001) {
        DataModule1->Table3->Edit();
        DataModule1->Table3Debit->AsFloat=DataModule1->Table3Debit->AsFloat+DataModule1->Table2Sume_debit->AsFloat;
        DataModule1->Table3->Post();
        }
else {
        DataModule1->Table3->Edit();
        if (DataModule1->Table3->RecordCount!=0) DataModule1->Table3->Append();
        DataModule1->Table3Cont->AsString=DataModule1->Table2Simbol_debit->AsString;
        DataModule1->Table4->Locate("Simbol", DataModule1->Table2Simbol_debit->AsString, flags);
        DataModule1->Table3Denumire->AsString=DataModule1->Table4Denumire->AsString;
        DataModule1->Table3Debit->AsFloat=DataModule1->Table2Sume_debit->AsFloat;
        DataModule1->Table3->Post();
        }
//*******again reciprocityate pentru credit*******
bool seeker002;
seeker002=DataModule1->Table3->Locate("Cont", DataModule1->Table2Simbol_credit->AsString, flags);
if (seeker002) {
        DataModule1->Table3->Edit();
        DataModule1->Table3Credit->AsFloat=DataModule1->Table3Credit->AsFloat+DataModule1->Table2Sume_credit->AsFloat;
        DataModule1->Table3->Post();
        }
else {
        DataModule1->Table3->Edit();
        if (DataModule1->Table3->RecordCount!=0) DataModule1->Table3->Append();
        DataModule1->Table3Cont->AsString=DataModule1->Table2Simbol_credit->AsString;
        DataModule1->Table4->Locate("Simbol", DataModule1->Table2Simbol_credit->AsString, flags);
        DataModule1->Table3Denumire->AsString=DataModule1->Table4Denumire->AsString;
        DataModule1->Table3Credit->AsFloat=DataModule1->Table2Sume_credit->AsFloat;
        DataModule1->Table3->Post();
        }
//*********** end recirpoc ********
DataModule1->Table2->Next();
        }
//*********** forul inchis primar inchis ***
//*********** for special pentru soldul initial
DataModule1->Table3->First();
for (int k=1; k<DataModule1->Table3->RecordCount+1; k++) {
bool seeker003;
seeker003=DataModule1->Table5->Locate("Cont",DataModule1->Table3Cont->AsString, flags);
if (seeker003) {
                DataModule1->Table3->Edit();
                DataModule1->Table3sold_initial_debit->AsFloat=DataModule1->Table5Debit->AsFloat;
                DataModule1->Table3sold_initial_credit->AsFloat=DataModule1->Table5Credit->AsFloat;
                DataModule1->Table3->Post();
                }
if (!seeker003) {
                DataModule1->Table5->Append();
                DataModule1->Table5Cont->AsString=DataModule1->Table3Cont->AsString;
                DataModule1->Table4->Locate("Simbol", DataModule1->Table3Cont->AsString, flags);
                DataModule1->Table5Denumire->AsString=DataModule1->Table4Denumire->AsString;
                DataModule1->Table5->Post();
                }
DataModule1->Table3->Next();
                                }

//***********inchidem forul special pt soldul initial**
//****************** END - inchidem bazele de date - saving memory ********
//DataModule1->Table4->Active=false;  NULL -still need him
//*********** againf for pentru rulaj cumulat, total sume si sold final***********
float debit, credit;
FormatFloat("#",0);
int records=DataModule1->Table3->RecordCount;
int rec;
AnsiString tabel, simbol;
debit=0;
credit=0;
tabel=DataModule1->Table3->TableName;
DataModule1->Table1->Filtered=true;
DataModule1->Table1->Filter="an='"+ComboBox1->Text+"'";
DataModule1->Table1->Locate("luna",ComboBox2->Text,flags);
rec=DataModule1->Table1->RecNo;
DataModule1->Table3->First();

        for (int j=1; j<records+1; j++) {
        simbol=DataModule1->Table3Cont->AsString;
        DataModule1->Table1->First();
        if (RadioGroup3->ItemIndex==0) {
        for (int i=1; i<rec; i++) {
        if (DataModule1->Table3->Active){
            DataModule1->Table3->Active=false;
            DataModule1->Table3->TableName="bilant"+DataModule1->Table1an->AsString+DataModule1->Table1luna->AsString;
            DataModule1->Table3->Active=true; }
        if (!DataModule1->Table3->Active) {
             DataModule1->Table3->TableName="bilant"+DataModule1->Table1an->AsString+DataModule1->Table1luna->AsString;
             DataModule1->Table3->Active=true; }
        bool sentry=DataModule1->Table3->Locate("Cont", simbol, flags);
        if (sentry) {
        debit=debit+DataModule1->Table3Debit->AsFloat;
        credit=credit+DataModule1->Table3Credit->AsFloat; }
        DataModule1->Table1->Next();
                }
        }
if (RadioGroup3->ItemIndex==1) {
        DataModule1->Table6->Open();
        bool sentryguy;
        sentryguy=DataModule1->Table6->Locate("Cont", DataModule1->Table3Cont->AsString, flags);
        if (sentryguy) {
                debit=DataModule1->Table6Debit->AsFloat;
                credit=DataModule1->Table6Credit->AsFloat;
             }
        DataModule1->Table6->Close();
        }
//************ forul de nivel II inchis **********
if (DataModule1->Table3->Active){
            DataModule1->Table3->Active=false;
            DataModule1->Table3->TableName=tabel;
            DataModule1->Table3->Active=true; }
        else {
             DataModule1->Table3->TableName=tabel;
             DataModule1->Table3->Active=true; }
DataModule1->Table3->Locate("Cont", simbol, flags);
DataModule1->Table3->Edit();
DataModule1->Table3rulaj_cumulat_debit->AsFloat=debit;
DataModule1->Table3rulaj_cumulat_credit->AsFloat=credit;
DataModule1->Table3total_sume_debit->AsFloat=DataModule1->Table3sold_initial_debit->AsFloat+DataModule1->Table3rulaj_cumulat_debit->AsFloat;
DataModule1->Table3total_sume_credit->AsFloat=DataModule1->Table3sold_initial_credit->AsFloat+DataModule1->Table3rulaj_cumulat_credit->AsFloat;
        DataModule1->Table4->Locate("Simbol", simbol, flags);
if (DataModule1->Table4Tip->AsString=="a")  DataModule1->Table3sold_final_debit->AsFloat=DataModule1->Table3total_sume_debit->AsFloat-DataModule1->Table3total_sume_credit->AsFloat;
if (DataModule1->Table4Tip->AsString=="p")  DataModule1->Table3sold_final_credit->AsFloat=DataModule1->Table3total_sume_credit->AsFloat-DataModule1->Table3total_sume_debit->AsFloat;
if (DataModule1->Table4Tip->AsString=="b") {
        DataModule1->Table3sold_final_debit->AsFloat=DataModule1->Table3total_sume_debit->AsFloat-DataModule1->Table3total_sume_credit->AsFloat;
        DataModule1->Table3sold_final_credit->AsFloat=DataModule1->Table3total_sume_credit->AsFloat-DataModule1->Table3total_sume_debit->AsFloat;
        if (DataModule1->Table3sold_final_debit->AsFloat>DataModule1->Table3sold_final_credit->AsFloat) DataModule1->Table3sold_final_credit->AsFloat=0;
        if (DataModule1->Table3sold_final_debit->AsFloat<DataModule1->Table3sold_final_credit->AsFloat) DataModule1->Table3sold_final_debit->AsFloat=0;
        }
DataModule1->Table3->Post();
debit=0;
credit=0;
DataModule1->Table3->Next();
        }
        //******************inchidem forul de nivel I ***************
DataModule1->Table4->Active=false;
DataModule1->Table3->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
if  (DataModule1->Table3->Active) {
DataModule1->Table3->Active=false;
DataModule1->Table3->Exclusive=true;
DataModule1->Table3->Active=true;
DataModule1->Table3->EmptyTable();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==1) {
        MaskEdit1->Enabled=false;
        ComboBox3->Enabled=false; }
else {
        MaskEdit1->Enabled=true;
        ComboBox3->Enabled=true; }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex==0) {
Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive;
        bool seeker0,seeker1;
        seeker0=DataModule1->Table1->Locate("an", MaskEdit1->Text, flags);
        seeker1=DataModule1->Table1->Locate("luna", ComboBox3->Text, flags);
if (seeker0 & seeker1) {
          ShowMessage("Gasit!");
//          DataModule1->Table5->EmptyTable();
if (DataModule1->Table3->Active) {
     DataModule1->Table3->Active=false;
     DataModule1->Table3->TableName="bilant"+MaskEdit1->Text+ComboBox3->Text;
     DataModule1->Table3->Active=true;
     DataModule1->BatchMove1->Execute();
     DataModule1->Table3->Active=false;
                        }
if (!DataModule1->Table3->Active) {
     DataModule1->Table3->TableName="bilant"+MaskEdit1->Text+ComboBox3->Text;
     DataModule1->Table3->Active=true;
     DataModule1->BatchMove1->Execute();
     DataModule1->Table3->Active=false;
                        }
                }
        }
else {
Sold_initial->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
Set <TLocateOption,0,1 > flags;
flags <<loCaseInsensitive ;
DataModule1->Table1->Filtered=true;
DataModule1->Table1->Filter="an='"+ComboBox1->Text+"'";
DataModule1->Table1->Locate("luna", ComboBox2->Text, flags);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
Set <TLocateOption,0,1 > flags;
flags <<loCaseInsensitive ;
DataModule1->Table1->Locate("luna", ComboBox2->Text, flags);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioGroup2Click(TObject *Sender)
{
if (RadioGroup2->ItemIndex==0){
       Jurnal->QuickRep1->Preview();
        }
if (RadioGroup2->ItemIndex==1){
       Balanta->QuickRep1->Preview();
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup3Click(TObject *Sender)
{
if (RadioGroup3->ItemIndex==1) Button11->Enabled=true;
else Button11->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
if (!DataModule1->Table6->Active) DataModule1->Table6->Active=true;
Rulaj_cumulat->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
DataModule1->Table7->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
DataModule1->Table7->Next();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
DBEdit6->ReadOnly=false;
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
DBMemo1->ReadOnly=false;


DataModule1->Table7->Append();
FocusControl(DBEdit7);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        DataModule1->Table7->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
DataModule1->Table7->Edit();
DataModule1->Table7->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
if (Button15->Caption=="Modifica") {
DBEdit6->ReadOnly=false;
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
DBMemo1->ReadOnly=false;
Button15->Caption="Protejeaza";
}
if (Button15->Caption=="Protejeaza") {
DBEdit6->ReadOnly=true;
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
DBMemo1->ReadOnly=true;
Button15->Caption="Modifica";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
DataModule1->Table7->Close();
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
DataModule1->Table1->TableName=StringReplace (DBEdit6->Text," ","z",Flags);
DataModule1->Table1->Active=true;
TabSheet9->TabVisible=false;
TabSheet1->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
if (MessageDlg("Chiar creez baza de date?", mtConfirmation, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes) {
DataModule1->Table1->TableName=StringReplace(DBEdit6->Text," ","z",Flags);
DataModule1->Table1->CreateTable();
}
}
//---------------------------------------------------------------------------

