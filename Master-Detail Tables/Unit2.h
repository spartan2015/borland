//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Qrctrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TMasterDetail : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand3;
        TQRLabel *QRLabel1;
        TQRSubDetail *QRSubDetail1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRExpr *QRExpr1;
        TQRExpr *QRExpr2;
private:	// User declarations
public:		// User declarations
        __fastcall TMasterDetail(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMasterDetail *MasterDetail;
//---------------------------------------------------------------------------
#endif
