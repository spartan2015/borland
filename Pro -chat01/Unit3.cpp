//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
AnsiString *bufer;
AnsiString color1,font11,font12,font13,font14,font15,font16;
TFontStyles font17;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormActivate(TObject *Sender)
{
char *buf;
TFileStream *f;
f=new TFileStream("setari.dat",fmOpenReadWrite);
int count=f->Size;
buf=new char[count];
f->Read(buf,count);
       delete f;
AnsiString sir=buf;
int index=sir.Pos(";");
int count1=(sir.Length())-index+1;
AnsiString sir1=sir;
MaskEdit1->Text=AnsiString(sir.Delete(index,count1));
        ipeul=sir.Delete(index,sir.Length()-index+1);
        sir1=sir1.Delete(1,index);
        index=sir1.Pos(";");
        count1=(sir1.Length())-index+1;
                AnsiString sir2=sir1;
                count1=(sir1.Length()-index+1);
                sir2=sir1;
                nameul=sir1.Delete(index,count1);
                Edit1->Text=sir1;
                sir2=sir2.Delete(1,index);
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                portul=sir2.Delete(index,count1);
                MaskEdit2->Text=sir2;
                sir1=sir1.Delete(1,index); //01
                index=sir1.Pos(";");
                count1=(sir1.Length())-index+1;
                sir2=sir1;
                color1=sir1.Delete(index,count1);
                sir2=sir2.Delete(1,index);     //01 end;
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                font11=sir2.Delete(index,count1);
                sir1=sir1.Delete(1,index);      //end font11
                index=sir1.Pos(";");
                count1=(sir1.Length())-index+1;
                sir2=sir1;
                font12=sir1.Delete(index,count1);
                sir2=sir2.Delete(1,index);      //end font12
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                font13=sir2.Delete(index,count1);
                sir1=sir1.Delete(1,index); //end font13
                index=sir1.Pos(";");
                count1=(sir1.Length())-index+1;
                sir2=sir1;
                font14=sir1.Delete(index,count1);
                sir2=sir2.Delete(1,index); //end font14
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                font15=sir2.Delete(index,count1);
                sir1=sir1.Delete(1,index); //end font15
                index=sir1.Pos(";");
                count1=(sir1.Length())-index+1;
                sir2=sir1;
                font16=sir1.Delete(index,count1);
                sir2=sir2.Delete(1,index); //end font16
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                nickul=sir2.Delete(index,count1);
                Edit2->Text=nickul;
                sir1=sir1.Delete(1,index);
      //          font17=TFontStyle(sir2.Delete(index,count1));
        //        sir1=sir1.Delete(1,index); //end font17


}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button2Click(TObject *Sender)
{
Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
AnsiString buf;
TFileStream *f;
f=new TFileStream("setari.dat",fmCreate);
buf=(MaskEdit1->Text)+";"+(Edit1->Text)+";"+(MaskEdit2->Text)+";"+color1+";"+font11+";"+font12+";"+font13+";"+font14+";"+font15+";"+font16+";"+nickul;//+";"+font17;
ipeul=MaskEdit1->Text;
nameul=Edit1->Text;
portul=MaskEdit2->Text;
f->Write(buf.c_str(),buf.Length());
delete f;
Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
ColorDialog1->Execute();
color1=ColorDialog1->Color;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton2Click(TObject *Sender)
{
FontDialog1->Execute();
font11=FontDialog1->Font->Charset;
font12=FontDialog1->Font->Color;
font13=FontDialog1->Font->Height;
font14=FontDialog1->Font->Name;
font15=FontDialog1->Font->Pitch;
font16=FontDialog1->Font->Size;
font17=FontDialog1->Font->Style;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
Hide();
}
//---------------------------------------------------------------------------

