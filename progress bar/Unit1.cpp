//---------------------------------------------------------------------------

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

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if (CGauge1->Progress!=100) {
CGauge1->Progress=(CGauge1->Progress)+1;
ProgressBar1->Position=(ProgressBar1->Position)+1;
TrackBar1->Position=(TrackBar1->Position)+1;
Animate1->Active=true;
Animate2->Active=true;
Animate3->Active=true;
}
}
//---------------------------------------------------------------------------

