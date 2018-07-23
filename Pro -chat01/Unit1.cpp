//---------------------------------------------------------------------------

#include <vcl.h>
#include <dos.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Trayicon"
#pragma resource "*.dfm"
TForm1 *Form1,*Form2,*Form3;
bool servu=false;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormResize(TObject *Sender)
{
PageControl1->Width=(Form1->Width)*0.99;
Memo1->Width=0.85*(Form1->Width);
ListBox1->Left=(Form1->Width)*0.85;
ListBox1->Width=(Form1->Width)*0.15;
Memo1->Height=0.70*(Form1->Height);
ListBox1->Height=(Form1->Height)*0.70;
PageControl1->Height=(Form1->Height)*0.86+8;
Edit1->Top=(PageControl1->Height)*0.85+5;
Edit1->Width=PageControl1->Width;
Button1->Width=Edit1->Width;
Button1->Top=(PageControl1->Height)*0.85+25;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OpenServer1Click(TObject *Sender)
{
servu=true;
server->Port=portul.ToInt();
server->Active=true;
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |Server open on port: "+portul);
StatusBar1->SimpleText=time+" |Server open";
ListBox1->Items->Add(nickul);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CloseServer1Click(TObject *Sender)
{
servu=false;
server->Active=false;
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |Server closed");
StatusBar1->SimpleText=time+" |Server closed";
ListBox1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConnectServer1Click(TObject *Sender)
{
client->Address=ipeul;
client->Port=portul.ToInt();
client->Host=nameul;
client->Active=true;
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |Trying to connect to "+(client->Address));
StatusBar1->SimpleText=time+" |Trying to connect to "+(client->Address);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::clientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |Connected to server: "+(client->Address));
Memo1->Lines->Add(time+" |Host: "+(client->Socket->RemoteHost));
StatusBar1->SimpleText=time+" |Connected to server: "+(client->Address);
client->Socket->SendText("NICK "+nickul);
if (ListBox1->Items->Count==0){
        AnsiString recv=client->Socket->ReceiveText();
        recv=recv.Delete(1,5);
        ListBox1->Items->Add(recv);
        }
        ListBox1->Items->Add(nickul);
        }
//---------------------------------------------------------------------------

void __fastcall TForm1::serverClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString time=TimeToStr(Time());
AnsiString recv=server->Socket->Connections[0]->ReceiveText();
recv=recv.Delete(1,5);
ListBox1->Items->Add(recv);
server->Socket->Connections[0]->SendText("NICK "+nickul);
Memo1->Lines->Add(time+" |Client connected: "+(server->Socket->Connections[0]->RemoteHost)+
" IP: "+(server->Socket->Connections[0]->RemoteAddress)+
" on Port: "+(server->Socket->Connections[0]->RemotePort));
}

//---------------------------------------------------------------------------
void __fastcall TForm1::serverClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |"+server->Socket->Connections[0]->ReceiveText());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::clientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |"+client->Socket->ReceiveText());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN)
  { if (servu)
{ AnsiString time=TimeToStr(Time());
  Memo1->Lines->Add(time+" |"+nickul+": "+(Edit1->Text));
  server->Socket->Connections[0]->SendText(nickul+" :"+(Edit1->Text));
  Edit1->Clear();
  }
  else
{       AnsiString time=TimeToStr(Time());
        Memo1->Lines->Add(time+" |"+nickul+" :"+(Edit1->Text));
        client->Socket->SendText(nickul+" :"+(Edit1->Text));
        Edit1->Clear();
   }
}
   }
//---------------------------------------------------------------------------

void __fastcall TForm1::clientWrite(TObject *Sender,
      TCustomWinSocket *Socket)
{
//Memo1->Lines->Add("Server is trying to write, responding alike...");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Disconnect1Click(TObject *Sender)
{
AnsiString time=TimeToStr(Time());
Memo1->Lines->Add(time+" |Diconnected");
StatusBar1->SimpleText=time+" |Disconnected";
client->Active=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Exit1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::About1Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Setup1Click(TObject *Sender)
{
Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
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
AnsiString sir1=sir;
        ipeul=sir.Delete(index,sir.Length()-index+1);
        sir1=sir1.Delete(1,index);
        index=sir1.Pos(";");
                AnsiString sir2=sir1;
                int count1=(sir1.Length()-index+1);
                sir2=sir1;
                nameul=sir1.Delete(index,count1);
                sir2=sir2.Delete(1,index);
                index=sir2.Pos(";");
                count1=(sir2.Length())-index+1;
                sir1=sir2;
                portul=sir2.Delete(index,count1);
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
                sir1=sir1.Delete(1,index);
      //  font17=TFontStyle(sir2.Delete(index,count1));
        //        sir1=sir1.Delete(1,index); //end font17
Memo1->Color=color1.ToInt();
Memo1->Font->Charset=font11.ToInt();
Memo1->Font->Color=font12.ToInt();
Memo1->Font->Height=font13.ToInt();
Memo1->Font->Name=font14;
Memo1->Font->Pitch=font15.ToInt();
Memo1->Font->Size=font16.ToInt();
//Memo1->Font->Style=font17;

ListBox1->Color=color1.ToInt();
ListBox1->Font->Charset=font11.ToInt();
ListBox1->Font->Color=font12.ToInt();
ListBox1->Font->Height=font13.ToInt();
ListBox1->Font->Name=font14;
ListBox1->Font->Pitch=font15.ToInt();
ListBox1->Font->Size=font16.ToInt();
//ListBox1->Font->Style=font17;

Edit1->Color=color1.ToInt();
Edit1->Font->Charset=font11.ToInt();
Edit1->Font->Color=font12.ToInt();
Edit1->Font->Height=font13.ToInt();
Edit1->Font->Name=font14;
Edit1->Font->Pitch=font15.ToInt();
Edit1->Font->Size=font16.ToInt();
//Edit1->Font->Style=font17;


                }
//---------------------------------------------------------------------------

