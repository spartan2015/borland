//---------------------------------------------------------------------------

#ifndef Unit23H
#define Unit23H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TForm23 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand2;
        TQRBand *QRBand4;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRGroup *QRGroup1;
private:	// User declarations
public:		// User declarations
        __fastcall TForm23(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm23 *Form23;
//---------------------------------------------------------------------------
#endif