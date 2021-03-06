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
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {

TTable *NewTable = new TTable(Form1);
NewTable->Active = false;
NewTable->DatabaseName = "BCDEMOS";
NewTable->TableName ="rulaj_cumulat";
NewTable->TableType = ttDefault;
NewTable->FieldDefs->Clear();

TFieldDef *NewField = NewTable->FieldDefs->AddFieldDef();
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

NewTable->IndexDefs->Clear();
TIndexDef *NewIndex = NewTable->IndexDefs->AddIndexDef(); // add an index
NewIndex->Name = "PrimaryIndex";
NewIndex->Fields = "Cont";
NewIndex->Options << ixPrimary;

// Now check for prior existence of this table
bool CreateIt = (!NewTable->Exists);
if (!CreateIt)
   if (Application->MessageBox((AnsiString("Overwrite table ") +
                               AnsiString("?")).c_str(),

                               "Table Exists", MB_YESNO) == IDYES)
    CreateIt = true;
if(CreateIt)
  NewTable->CreateTable(); // create the table
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
BatchMove1->Execute();        
}
//---------------------------------------------------------------------------

