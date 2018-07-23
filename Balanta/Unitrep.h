//---------------------------------------------------------------------------

#ifndef UnitrepH
#define UnitrepH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class Traport_plan_conturi : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand2;
        TQRBand *QRBand3;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel8;
        TQRBand *QRBand4;
        TQRSysData *QRSysData1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText4;
        TQRDBText *QRDBText5;
private:	// User declarations
public:		// User declarations
        __fastcall Traport_plan_conturi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Traport_plan_conturi *raport_plan_conturi;
//---------------------------------------------------------------------------
#endif
