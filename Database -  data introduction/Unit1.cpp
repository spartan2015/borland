//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tplanconturi *planconturi;
//---------------------------------------------------------------------------
__fastcall Tplanconturi::Tplanconturi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::Button1Click(TObject *Sender)
{
Table1->Post();
Table1->Next();
AnsiString dat=(Table1Simbol->AsString);
int dat1;
dat1=dat.Length();
while (dat1!=3) {
        Table1->Next();
        dat=(Table1Simbol->AsString);
        dat1=dat.Length();   }
FocusControl(DBMemo1);
}
//---------------------------------------------------------------------------
void __fastcall Tplanconturi::Button2Click(TObject *Sender)
{
Table1->Post();
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::FormClose(TObject *Sender, TCloseAction &Action)
{
Table1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::Button3Click(TObject *Sender)
{
Table1->Close();
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::FormCreate(TObject *Sender)
{
Table1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall Tplanconturi::Edit1Change(TObject *Sender)
{
Set < TLocateOption,0,1 > flags;
flags << loCaseInsensitive <<loPartialKey;
Table1->Locate(ComboBox1->Text,Edit1->Text,flags);
}
//---------------------------------------------------------------------------

