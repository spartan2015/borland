//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSold_initial *Sold_initial;
//---------------------------------------------------------------------------
__fastcall TSold_initial::TSold_initial(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button5Click(TObject *Sender)
{
DataModule1->Table5->Append();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::FormActivate(TObject *Sender)
{
if (!DataModule1->Table5->Active) DataModule1->Table5->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button4Click(TObject *Sender)
{
Hide();
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi toate inregistrarile?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo, 0)==mrYes) {
        DataModule1->Table5->Close();
        DataModule1->Table5->EmptyTable();
if  (!DataModule1->Table5->Active) DataModule1->Table5->Active=true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button2Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi inregistrarea?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo, 0)==mrYes)
        DataModule1->Table5->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button1Click(TObject *Sender)
{
Set <TLocateOption,0,1> flags;
flags <<loCaseInsensitive;
DataModule1->Table5->Edit();
DataModule1->Table5->Post();
DataModule1->Table5->First();
DataModule1->Table4->Open();
for (int i=1; i<DataModule1->Table5->RecordCount+1; i++) {
        DataModule1->Table4->Locate("Simbol",DataModule1->Table5Cont->AsString, flags);
        DataModule1->Table5->Edit();
        DataModule1->Table5Denumire->AsString=DataModule1->Table4Denumire->AsString;
        DataModule1->Table5->Post();
        DataModule1->Table5->Next();
        }
DataModule1->Table4->Close();
}
//---------------------------------------------------------------------------

