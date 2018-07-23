//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsetup *setup;
//---------------------------------------------------------------------------
__fastcall Tsetup::Tsetup(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsetup::Button28Click(TObject *Sender)
{
D1->Table5->Edit();
D1->Table5->Post();
D1->Table6->Edit();
D1->Table6->Post();
D1->Table7->Edit();
D1->Table7->Post();
D1->Table8->Edit();
D1->Table8->Post();
D1->Table9->Edit();
D1->Table9->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tsetup::Button29Click(TObject *Sender)
{
MainFrame->Show();
Close();
}
//---------------------------------------------------------------------------
