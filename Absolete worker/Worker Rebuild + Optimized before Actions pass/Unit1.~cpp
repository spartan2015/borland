//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainFrame *MainFrame;
//---------------------------------------------------------------------------
__fastcall TMainFrame::TMainFrame(TComponent* Owner)
        : TForm(Owner)
{
//D1->Table1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button1Click(TObject *Sender)
{
D1->Table1->Prior();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button2Click(TObject *Sender)
{
D1->Table1->Next();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button5Click(TObject *Sender)
{
D1->Table1->Edit();
D1->Table1->Post();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button4Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?", mtWarning, TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
        D1->Table1->Delete();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button3Click(TObject *Sender)
{
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBMemo1->ReadOnly=false;

Button6->Caption="Protejeaza";
D1->Table1->Append();
FocusControl(DBEdit1);
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button6Click(TObject *Sender)
{
if (Button6->Caption=="Modifica") {
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBMemo1->ReadOnly=false;

Button6->Caption="Protejeaza";
D1->Table1->Edit();
}
else {
DBEdit1->ReadOnly=true;
DBEdit2->ReadOnly=true;
DBEdit3->ReadOnly=true;
DBEdit4->ReadOnly=true;
DBEdit5->ReadOnly=true;
DBEdit6->ReadOnly=true;
DBEdit7->ReadOnly=true;
DBEdit8->ReadOnly=true;
DBEdit9->ReadOnly=true;
DBEdit10->ReadOnly=true;
DBEdit11->ReadOnly=true;
DBEdit12->ReadOnly=true;
DBEdit13->ReadOnly=true;
DBEdit14->ReadOnly=true;
DBMemo1->ReadOnly=true;

Button6->Caption="Modifica";
        }
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button7Click(TObject *Sender)
{
TabSheet1->Visible=false;
TabSheet1->TabVisible=false;

TReplaceFlags Flags;
Flags <<rfReplaceAll;

TabSheet2->TabVisible=true;
TabSheet2->Visible=true;

Rapoarte1->Visible=true;

if (!D1->Table2->Active){
D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
D1->Table2->Active=true; }
else    {
    D1->Table2->Active=false;
    D1->Table2->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags);
    D1->Table2->Active=true; }

}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button8Click(TObject *Sender)
{
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
TReplaceFlags Flags;
Flags <<rfReplaceAll;
D1->Table2->TableName=StringReplace(DBEdit1->Field->AsString," ","z", Flags);
CreateDir("data\\"+StringReplace(DBEdit1->Field->AsString," ","z", Flags));
D1->Table2->CreateTable();
  }
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button9Click(TObject *Sender)
{
if (Button9->Caption=="Admin enabled") {
        Button9->Caption="Administrator";
        Button4->Enabled=false; }
else     {
        Edit1->Visible=true;
        FocusControl(Edit1);
         }
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button10Click(TObject *Sender)
{
D1->Table1->Close();
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN)   {
if (Edit1->Text=="admin")
        {ShowMessage("Parola acceptata");
        Button4->Enabled=true;
        Button9->Caption="Admin enabled";
        Edit1->Text="";
        Edit1->Visible=false;
        }

        else {
        Edit1->Text="";
        Edit1->Visible=false;
        ShowMessage("Parola incorecta!");
                }
        }
        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button11Click(TObject *Sender)
{
D1->Table2->Prior();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button12Click(TObject *Sender)
{
D1->Table2->Next();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button13Click(TObject *Sender)
{
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBEdit16->ReadOnly=false;
DBEdit17->ReadOnly=false;
DBEdit18->ReadOnly=false;
DBEdit19->ReadOnly=false;
DBEdit20->ReadOnly=false;
DBEdit21->ReadOnly=false;
DBEdit22->ReadOnly=false;
DBEdit23->ReadOnly=false;
DBEdit24->ReadOnly=false;
DBEdit25->ReadOnly=false;
DBEdit26->ReadOnly=false;
DBEdit28->ReadOnly=false;
DBEdit29->ReadOnly=false;
DBEdit30->ReadOnly=false;
DBEdit31->ReadOnly=false;
DBEdit32->ReadOnly=false;
DBEdit33->ReadOnly=false;
DBEdit34->ReadOnly=false;
DBCheckBox1->ReadOnly=false;
DBCheckBox2->ReadOnly=false;
DBCheckBox3->ReadOnly=false;
DBCheckBox4->ReadOnly=false;
DBCheckBox5->ReadOnly=false;
DBCheckBox6->ReadOnly=false;
DBCheckBox7->ReadOnly=false;
DBMemo2->ReadOnly=false;
DBMemo3->ReadOnly=false;
DBMemo4->ReadOnly=false;


Button16->Caption="Protejeaza";
D1->Table2->Append();
FocusControl(DBEdit15);
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button16Click(TObject *Sender)
{
if (Button16->Caption=="Modifica") {
DBEdit1->ReadOnly=false;
DBEdit2->ReadOnly=false;
DBEdit3->ReadOnly=false;
DBEdit4->ReadOnly=false;
DBEdit5->ReadOnly=false;
DBEdit6->ReadOnly=false;
DBEdit7->ReadOnly=false;
DBEdit8->ReadOnly=false;
DBEdit9->ReadOnly=false;
DBEdit10->ReadOnly=false;
DBEdit11->ReadOnly=false;
DBEdit12->ReadOnly=false;
DBEdit13->ReadOnly=false;
DBEdit14->ReadOnly=false;
DBEdit15->ReadOnly=false;
DBEdit16->ReadOnly=false;
DBEdit17->ReadOnly=false;
DBEdit18->ReadOnly=false;
DBEdit19->ReadOnly=false;
DBEdit20->ReadOnly=false;
DBEdit21->ReadOnly=false;
DBEdit22->ReadOnly=false;
DBEdit23->ReadOnly=false;
DBEdit24->ReadOnly=false;
DBEdit25->ReadOnly=false;
DBEdit26->ReadOnly=false;
DBEdit28->ReadOnly=false;
DBEdit29->ReadOnly=false;
DBEdit30->ReadOnly=false;
DBEdit31->ReadOnly=false;
DBEdit32->ReadOnly=false;
DBEdit33->ReadOnly=false;
DBEdit34->ReadOnly=false;
DBCheckBox1->ReadOnly=false;
DBCheckBox2->ReadOnly=false;
DBCheckBox3->ReadOnly=false;
DBCheckBox4->ReadOnly=false;
DBCheckBox5->ReadOnly=false;
DBCheckBox6->ReadOnly=false;
DBCheckBox7->ReadOnly=false;
DBMemo2->ReadOnly=false;
DBMemo3->ReadOnly=false;
DBMemo4->ReadOnly=false;

D1->Table2->Edit();
Button16->Caption="Protejeaza";
        }
else {
DBEdit1->ReadOnly=true;
DBEdit2->ReadOnly=true;
DBEdit3->ReadOnly=true;
DBEdit4->ReadOnly=true;
DBEdit5->ReadOnly=true;
DBEdit6->ReadOnly=true;
DBEdit7->ReadOnly=true;
DBEdit8->ReadOnly=true;
DBEdit9->ReadOnly=true;
DBEdit10->ReadOnly=true;
DBEdit11->ReadOnly=true;
DBEdit12->ReadOnly=true;
DBEdit13->ReadOnly=true;
DBEdit14->ReadOnly=true;
DBEdit15->ReadOnly=true;
DBEdit16->ReadOnly=true;
DBEdit17->ReadOnly=true;
DBEdit18->ReadOnly=true;
DBEdit19->ReadOnly=true;
DBEdit20->ReadOnly=true;
DBEdit21->ReadOnly=true;
DBEdit22->ReadOnly=true;
DBEdit23->ReadOnly=true;
DBEdit24->ReadOnly=true;
DBEdit25->ReadOnly=true;
DBEdit26->ReadOnly=true;
DBEdit28->ReadOnly=true;
DBEdit29->ReadOnly=true;
DBEdit30->ReadOnly=true;
DBEdit31->ReadOnly=true;
DBEdit32->ReadOnly=true;
DBEdit33->ReadOnly=true;
DBEdit34->ReadOnly=true;
DBCheckBox1->ReadOnly=true;
DBCheckBox2->ReadOnly=true;
DBCheckBox3->ReadOnly=true;
DBCheckBox4->ReadOnly=true;
DBCheckBox5->ReadOnly=true;
DBCheckBox6->ReadOnly=true;
DBCheckBox7->ReadOnly=true;
DBMemo2->ReadOnly=true;
DBMemo3->ReadOnly=true;
DBMemo4->ReadOnly=true;

Button16->Caption="Modifica";
        }

}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button14Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stegi baza de date?",mtWarning,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes )
D1->Table2->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button15Click(TObject *Sender)
{
D1->Table2->Edit();
D1->Table2->Post();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button34Click(TObject *Sender)
{
TabSheet2->TabVisible=false;
TabSheet1->TabVisible=true;
Rapoarte1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button19Click(TObject *Sender)
{
if (Button19->Caption=="Admin enabled") {
        Button19->Caption="Administrator";
        Button14->Enabled=false; }
else     {
        Edit2->Visible=true;
        FocusControl(Edit2);
         }        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Edit2KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN)   {
if (Edit2->Text=="admin")
        {ShowMessage("Parola acceptata!");
        Button14->Enabled=true;
        Button19->Caption="Admin enabled";
        Edit2->Text="";
        Edit2->Visible=false;
        }

        else {
        Edit2->Text="";
        Edit2->Visible=false;
        ShowMessage("Parola incorecta!");
                }
        }        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button20Click(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive;

D1->Table2->Locate(ComboBox1->Text,Edit4->Text, flags);
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button17Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
if (!D1->Table3->Active) {
        D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+D1->Table2Cod->AsString;
        D1->Table3->Active=true;
        }
else {
        D1->Table3->Close();
        D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+D1->Table2Cod->AsString;
        D1->Table3->Active=true;
}
statplata->Label38->Caption=D1->Table1Nume_firma->AsString;
statplata->Label39->Caption=D1->Table2Nume->AsString;
statplata->Label40->Caption=D1->Table2Prenume->AsString;
statplata->Label41->Caption=D1->Table2Functie->AsString;
statplata->Label42->Caption=D1->Table2Salar_tarifar->AsString;
statplata->Label75->Caption=D1->Table2Nume->AsString;
statplata->Label76->Caption=D1->Table2Prenume->AsString;

MainFrame->Hide();
statplata->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Button18Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags << rfReplaceAll;
if (MessageDlg("Creez baza de date?",mtConfirmation,
 TMsgDlgButtons() <<mbYes <<mbNo, 0)== mrYes ) {
if (!D1->Table3->Active){
D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+DBEdit15->Field->AsString;
D1->Table3->CreateTable();
}
else {
D1->Table3->Active=false;
D1->Table3->TableName=StringReplace(D1->Table1Nume_firma->AsString," ","z",Flags)+"\\"+DBEdit15->Field->AsString;
D1->Table3->CreateTable();
        }
}
}
//---------------------------------------------------------------------------


void __fastcall TMainFrame::Setari1Click(TObject *Sender)
{
D1->Table5->Active=true;
D1->Table6->Active=true;
D1->Table7->Active=true;
D1->Table8->Active=true;
D1->Table9->Active=true;
MainFrame->Hide();
setup->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::Rapoarte2Click(TObject *Sender)
{
MainFrame->Hide();
Rapoarte->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::DeclaratiiSomaj1Click(TObject *Sender)
{
MainFrame->Hide();
Declaratii_somaj->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainFrame::DeclaratiiCAS1Click(TObject *Sender)
{
MainFrame->Hide();
Declaratii_cas->Show();
}
//---------------------------------------------------------------------------


