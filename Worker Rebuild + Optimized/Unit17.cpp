//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
#include "Unit1.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TPasswordDlg *PasswordDlg;
//---------------------------------------------------------------------
__fastcall TPasswordDlg::TPasswordDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TPasswordDlg::CancelBtnClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::OKBtnClick(TObject *Sender)
{
if (Password->Text=="admin")
        {MainFrame->Button4->Enabled=true;
        MainFrame->Button14->Enabled=true;
        Password->Clear();
        MainFrame->Admin->Checked=true;
        }
else    {ShowMessage("Parola incorecta");
        Password->Clear();
        Close();
        }
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::PasswordKeyPress(TObject *Sender, char &Key)
{
if (Key==VK_RETURN) {
if (Password->Text=="admin")
        {MainFrame->Button4->Enabled=true;
        MainFrame->Button14->Enabled=true;
        Password->Clear();
        MainFrame->Admin->Checked=true;
        }
else    {ShowMessage("Parola incorecta");
        Password->Clear();
        Close();
        }



                        }
}
//---------------------------------------------------------------------------

