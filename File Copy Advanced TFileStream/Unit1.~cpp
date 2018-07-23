//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "io.h"
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
dialog1->Execute();
Edit1->Text=dialog1->FileName;
int open=FileOpen(Edit1->Text,fmOpenRead);
long lungime=FileSeek(open,0,2);
FileClose(open);
        if (lungime/1024>0) Label3->Caption="Size: "+FloatToStr(lungime/1024)+" Kbytes";
        else Label3->Caption="Size: "+FloatToStr(lungime)+" bytes";
int attr=FileGetAttr(Edit1->Text);
if (attr & faArchive) CheckBox1->Checked=true;
if (attr & faReadOnly) CheckBox2->Checked=true;
if (attr & faHidden) CheckBox3->Checked=true;
if (attr & faSysFile) CheckBox4->Checked=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
char *buffer,bingo;
buffer=&bingo;
int open1=FileOpen(Edit1->Text,fmOpenRead);
int open2=FileCreate(Edit2->Text+ExtractFileName(Edit1->Text));
long lungime=FileSeek(open1,0,2);
FileSeek(open1,0,0);
int count=1024*10;
if (lungime-count<0) count=lungime;
cat->MaxValue=lungime;
for (;lungime;lungime-=count) {
        if (lungime-count<0) count=lungime;
        buffer=new char[count];
        FileRead(open1,buffer,count);
        scrie(open2,buffer,count);
        cat->Progress+=count;
                              }
FileClose(open1);
FileClose(open2);
cat->Progress=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::scrie(int file,char *buffer,int count)
{
FileSeek(file,0,2);
FileWrite(file, buffer, count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form2->ShowModal();
Edit2->Text=Form2->DirectoryListBox1->Directory;
}
//---------------------------------------------------------------------------
