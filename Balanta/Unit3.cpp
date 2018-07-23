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
dm1->Table5->Append();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::FormActivate(TObject *Sender)
{
if (!dm1->Table5->Active) dm1->Table5->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button4Click(TObject *Sender)
{
dm1->Table5->Close();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button3Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi toate inregistrarile?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo, 0)==mrYes) {
        dm1->Table5->Close();
        dm1->Table5->EmptyTable();
if  (!dm1->Table5->Active) dm1->Table5->Active=true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button2Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi inregistrarea?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo, 0)==mrYes)
        dm1->Table5->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TSold_initial::Button1Click(TObject *Sender)
{
Set <TLocateOption,0,1> flags;
flags <<loCaseInsensitive;
TReplaceFlags Flags;
Flags << rfReplaceAll;
dm1->Table5->Edit();
dm1->Table5->Post();
dm1->Table5->First();
dm1->Table4->Open();
for (int i=1; i<dm1->Table5->RecordCount+1; i++) {
        dm1->Table4->First();
        bool seeker=dm1->Table4->Locate("Simbol",dm1->Table5Cont->AsString, flags);
        if (seeker){
        dm1->Table5->Edit();
        dm1->Table5Denumire->AsString=dm1->Table4Denumire->AsString;
        dm1->Table5io->AsBoolean=dm1->Table4io->AsBoolean;
        dm1->Table5->Post();
        }
        if(!seeker) {
        ShowMessage("Not found");
        dm1->Table5->Edit();
        dm1->Table5Denumire->AsString="Negasit in planul de conturi";
        dm1->Table5io->AsBoolean=false;
        dm1->Table5->Post();
        }
        dm1->Table5->Next();
        }
dm1->Table4->Close();
if (CheckBox1->State==cbChecked) {
        dm1->stcont->Open();
        dm1->Table5->First();
        for (int k=1; k<dm1->Table5->RecordCount+1; k++) {
         bool sek=dm1->stcont->Locate("cont", dm1->Table5Cont->AsString, flags);
         if (!sek) { dm1->stcont->Append();
                     dm1->stcontcont->AsString=dm1->Table5Cont->AsString;
                     dm1->stcontstare->AsBoolean=true;
                     dm1->stcont->Post();
                        }
        dm1->Table5->Next();
                        }
dm1->stcont->Active=false;
        }
}
//---------------------------------------------------------------------------

