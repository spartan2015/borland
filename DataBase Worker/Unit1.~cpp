//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
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
Table1->Insert();
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
Table1->Edit();
Button5->Enabled=true;
Button6->Caption="Protejeaza";
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

void __fastcall TForm1::Button8Click(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
TTable *NewTable = new TTable(Form1);

NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName =(DBEdit5->Field->AsString);
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

TFieldDef *NewField = NewTable->FieldDefs->AddFieldDef(); // define first field
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Nume";  // 1 ;

NewField = NewTable->FieldDefs->AddFieldDef(); // define second field
NewField->DataType = ftString;
NewField->Size = 15;
NewField->Name = "Cod"; // 2;

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size = 25;
NewField->Name = "Prenume"; // 3

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "CNP"; // 4

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=25;
NewField->Name = "Functia"; // 5

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=25;
NewField->Name = "Cod_functie"; // 6

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=25;
NewField->Name = "Sectia"; // 7

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=25;
NewField->Name = "Marca"; // 8

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftDate;
NewField->Name = "Data_angajare"; // 9

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftFloat;
NewField->Name = "Salar_total"; // 10

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftFloat;
NewField->Name = "Prima"; // 11

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftDate;
NewField->Name = "Data_1angajare"; // 12

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "Vechime"; // 13

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "Spor-vechime"; // 14

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "Regie"; // 15

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=1;
NewField->Name = "Sex"; // 16

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Name = "Stare_civila"; // 17

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftFloat;
NewField->Name = "Telefon"; // 18

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftMemo;
NewField->Name = "Adresa"; // 19

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftDate;
NewField->Name ="Datanastere"; // 20

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "Stagiu_militar"; // 21

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftString;
NewField->Size=25;
NewField->Name = "Livret_militar"; // 22

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftMemo;
NewField->Name = "Studii"; // 23

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftInteger;
NewField->Name = "Nr_copii"; // 24

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftMemo;
NewField->Name = "Copii"; // 25

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "pers_i"; // 26

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "pers_ii"; // 27

NewField = NewTable->FieldDefs->AddFieldDef();
NewField->DataType = ftBoolean;
NewField->Name = "sotie"; // 28

NewTable->IndexDefs->Clear();
TIndexDef *NewIndex = NewTable->IndexDefs->AddIndexDef(); // add an index
NewIndex->Name = "PrimaryIndex";
NewIndex->Fields = "Nume";
NewIndex->Options << ixPrimary << ixUnique;
// Now check for prior existence of this table
bool CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Rescrie baza de date ") + (DBEdit5->Field->AsString) +
                               AnsiString("?")).c_str(),

                               "Atentie, baza de date existenta!", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table
  }
}
//---------------------------------------------------------------------------

