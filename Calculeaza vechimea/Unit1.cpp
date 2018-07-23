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
int index;
AnsiString dat1,dat=Edit1->Text;
index=dat.Pos("/");
dat1=dat;
Edit3->Text=dat.Delete(index,dat.Length());
dat1=dat1.Delete(1,index);
dat=dat1;
index=dat1.Pos("/");
Edit4->Text=dat1.Delete(index,dat1.Length());
dat=dat.Delete(1,index);
Edit5->Text=dat;

dat=Edit2->Text;
index=dat.Pos("/");
dat1=dat;
Edit6->Text=dat.Delete(index,dat.Length());
dat1=dat1.Delete(1,index);
dat=dat1;
index=dat1.Pos("/");
Edit7->Text=dat1.Delete(index,dat1.Length());
dat=dat.Delete(1,index);
Edit8->Text=dat;

index=((Edit5->Text.ToInt()-Edit8->Text.ToInt())*12+Edit4->Text.ToInt()-Edit7->Text.ToInt())/12;
Edit9->Text=IntToStr(index);
}
//---------------------------------------------------------------------------
 