//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMasterDetail *MasterDetail;
//---------------------------------------------------------------------------
__fastcall TMasterDetail::TMasterDetail(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
