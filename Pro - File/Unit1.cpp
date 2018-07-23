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
        char *buf;
        AnsiString sir="";
        TFileStream *f;
        f= new TFileStream("setari.dat",fmOpenReadWrite);
        int count=f->Size;
        buf=new char[count];
        f->Read(buf,count);
        sir=buf;
        Memo1->Lines->Add(sir); //bah,cel mai ciudat tip de initializare pointeri, ce pana mea, asta e chiar ciudat...
        delete f;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_RETURN){
        AnsiString buf;
        TFileStream *f;
        f= new TFileStream("setari.dat",fmOpenReadWrite);
        buf=(Edit1->Text);
        f->Write(buf.c_str(),buf.Length());
        Memo1->Lines->Add(Edit1->Text);
        delete f;
        Edit1->Clear();
        }
}
//---------------------------------------------------------------------------

