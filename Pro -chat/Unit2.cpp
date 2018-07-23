//---------------------------------------------------------------------------

#include <vcl.h>
#include <dstring.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#pragma link "ScktComp"
//--------------------------------------------

TForm1 *Form1;
int i;
bool servertype;
AnsiString(nickul);

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
servertype=true;

ServerSocket1->Port=Edit1->Text.ToInt();
ServerSocket1->Active=true;
Edit2->Text=(Edit5->Text)+" Server activated";
Memo1->Lines->Add((Edit5->Text)+" Server activated");
ListBox1->Items->Add("@"+Edit5->Text);
Button1->Enabled=false;
Button3->Enabled=false;
Button4->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ServerSocket1->Active=false;
Edit2->Text="Server down"  ;
Memo1->Lines->Add("Server down");
ListBox1->Clear();
Button1->Enabled=true;
Button3->Enabled=true;
Button4->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
servertype=false;
ClientSocket1->Port=Edit1->Text.ToInt();
ClientSocket1->Address=Edit3->Text ;
ClientSocket1->Active=true;
Edit2->Text="trying to connect..." ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
ClientSocket1->Active=false;
Edit2->Text="Connection down";
Memo1->Lines->Add("Connection down") ;
ListBox1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
ListBox1->Items->Add(Socket->ReceiveText().Delete(1,6));
int j=ListBox1->Items->Count;
Memo1->Lines->Add("Client connected: "+ListBox1->Items->Strings[j-1]);
ServerSocket1->Socket->Connections[j-2]->SendText(ListBox1->Items->Strings[0]);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add("Client disconnected");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Connect(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add("Connected");
Edit2->Text="Connected to server.";
ClientSocket1->Socket->SendText("Nick: "+Edit5->Text);
Button1->Enabled=false;
Button2->Enabled=false;
Button3->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Connecting(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add("connecting...");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Disconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
Edit2->Text="Disconnected from server.";
Memo1->Lines->Add("Disconnected");
Button1->Enabled=true;
Button2->Enabled=true;
Button3->Enabled=true;
ListBox1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN)
  {
if (servertype) {
Memo1->Lines->Add(Edit4->Text.Insert(Edit5->Text+": ",1));
ShowMessage(ListBox1->Items->Count);
if (ListBox1->Items->Count>1){
for (int j=0; j<ListBox1->Items->Count-1; j++) {
ServerSocket1->Socket->Connections[j]->SendText(Edit4->Text.Insert(Edit5->Text+": ",1));
        }
}
if (ListBox1->Items->Count==1) ShowMessage("No connections");
Edit4->Clear();
 }
if (!servertype) {
  Memo1->Lines->Add(Edit4->Text.Insert(Edit5->Text+": ",1));
  ClientSocket1->Socket->SendText(Edit4->Text.Insert(Edit5->Text+": ",1));
  Edit4->Clear();
        }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add(Socket->ReceiveText());
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Read(TObject *Sender,
      TCustomWinSocket *Socket)
{
if (ListBox1->Items->Count==0) ListBox1->Items->Add(Socket->ReceiveText());
ListBox1->Items->Add(Edit5->Text);
Memo1->Lines->Add(Socket->ReceiveText());
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
Memo1->Clear();
}
//---------------------------------------------------------------------------




