//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
#include "Unit2.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tseeker *seeker;
//---------------------------------------------------------------------------
__fastcall Tseeker::Tseeker(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::Edit1Change(TObject *Sender)
{
dm->firme->Filter=ComboBox1->Text+"='"+Edit1->Text+"'";        
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::Edit2Change(TObject *Sender)
{
TLocateOptions flags;
flags <<loCaseInsensitive <<loPartialKey;
dm->firme->Locate(ComboBox1->Text,Edit2->Text,flags);
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked) dm->firme->Filtered=true;
else dm->firme->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::Button1Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
Hide();
bios->Show();
bios->Label1->Caption="Facturi intrari";
bios->Caption="Facturi intrari: "+dm->Table1Nume_firma->AsString;
dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->magazie->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->stoc->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->io->TableName="intrari";
dm->io->Active=true;
dm->io->Filtered=true;
dm->io->Filter="nume_firma='"+dm->firmenume_firma->AsString+"'";
bios->List1->Visible=true;
bios->List1->Enabled=true;
bios->Button8->Enabled=true;
bios->Button8->Visible=true;
bios->Button4->Visible=false;
bios->Button9->Visible=true;
bios->Button10->Visible=true;
bios->Label5->Visible=true;
bios->Show();
if (!dm->plati->Active) dm->plati->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::Button2Click(TObject *Sender)
{
TReplaceFlags Flags;
Flags <<rfReplaceAll;
Hide();
bios->Show();
bios->Label1->Caption="Facturi iesiri";
bios->Caption="Facturi iesiri: "+dm->Table1Nume_firma->AsString;
dm->io->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->magazie->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->stoc->DatabaseName="data\\"+StringReplace(dm->Table1Nume_firma->AsString," ","z", Flags)+"\\"+dm->Table2an->AsString+dm->Table2luna->AsString;
dm->io->TableName="iesiri";
dm->io->Active=true;
dm->io->Filtered=true;
dm->io->Filter="nume_firma='"+dm->firmenume_firma->AsString+"'";
bios->List1->Visible=true;
bios->List1->Enabled=true;
bios->Button8->Enabled=true;
bios->Button8->Visible=true;
bios->Button4->Visible=false;
bios->Button9->Visible=true;
bios->Button10->Visible=true;
bios->Label5->Visible=true;
bios->Show();
if (!dm->plati->Active) dm->plati->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall Tseeker::Button4Click(TObject *Sender)
{
Close();
dm->firme->Close();
//de aci trimiterea...
}
//---------------------------------------------------------------------------

