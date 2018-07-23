//---------------------------------------------------------------------------
//************Neo absolete file ************************** 
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
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
TFileStream *creator;
creator=new TFileStream(Edit2->Text+ExtractFileName(Edit1->Text),fmCreate);
delete creator;
source(Edit1->Text,Edit2->Text+ExtractFileName(Edit1->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::destiny(char buffer,AnsiString destination,int count)
{
TFileStream *dest;
AnsiString sir=buffer;
dest=new TFileStream(destination, fmOpenWrite);
dest->Position=dest->Size;
dest->Write(sir.c_str(),count);
delete dest;

}
//---------------------------------------------------------------------------
AnsiString destination1;
void __fastcall TForm1::source(AnsiString sursa,AnsiString destination)
{
TFileStream *source;
char *buffer,bingo;
source=new TFileStream(sursa, fmOpenRead);
buffer=&bingo;
cat->MaxValue=source->Size;
int count=3;
destination1=destination;
while(source->Position!=source->Size) {
     if ((source->Size)-(source->Position)>=count){
        source->Read(buffer,count);
        extern AnsiString destination1;
        destiny(bingo,destination1,count); }
      else {
        count=(source->Size)-(source->Position);
        source->Read(buffer,count);
        extern AnsiString destination1;
        destiny(bingo,destination1,count); }
        cat->Progress+=1;
      }
delete source;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
dialog1->Execute();
Edit1->Text=dialog1->FileName;
}
//---------------------------------------------------------------------------

