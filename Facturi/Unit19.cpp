//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit19.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsolder *solder;
//---------------------------------------------------------------------------
__fastcall Tsolder::Tsolder(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsolder::Button1Click(TObject *Sender)
{
if (dm->casalei->Active){
DBEdit1->DataSource=dm->DataSource11;
DBEdit2->DataSource=dm->DataSource11;
dm->casalei->RecNo=1;
dm->casalei->Insert();
dm->casaleiexplicatia->AsString="Sold inceput luna!";
dm->casaleisoldbool->AsBoolean=true;
dm->casalei->Post();
Label1->Visible=false;
grup1->Visible=true;
}
else  {
DBEdit1->DataSource=dm->DataSource8;
DBEdit2->DataSource=dm->DataSource8;
DBEdit3->DataSource=dm->DataSource8;
dm->cb->RecNo=1;
dm->cb->Insert();
dm->cbexplicatia->AsString="Sold inceput luna!";
dm->cbsoldbool->AsBoolean=true;
dm->cb->Post();
Label1->Visible=false;
grup1->Visible=true;
grup2->Visible=true;
}

FocusControl(DBEdit1);
Button1->Visible=false;
Button2->Caption="OK";
}
//---------------------------------------------------------------------------
void __fastcall Tsolder::Button2Click(TObject *Sender)
{
if (dm->casalei->Active){
Label1->Visible=true;
grup1->Visible=false;
Button1->Visible=true;
}
else  {
Label1->Visible=true;
grup1->Visible=false;
grup2->Visible=false;
Button1->Visible=true;
}
Close();
}
//---------------------------------------------------------------------------
