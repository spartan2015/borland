//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class Tstat_plata_grupat : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRLabel *QRLabel1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRDBText *QRDBText4;
        TQRLabel *QRLabel5;
        TQRDBText *QRDBText5;
        TQRDBText *QRDBText6;
        TQRDBText *QRDBText7;
        TQRBand *QRBand2;
        TQRLabel *QRLabel8;
        TQRLabel *QRLabel9;
        TQRLabel *QRLabel10;
        TQRLabel *QRLabel11;
        TQRLabel *QRLabel12;
        TQRLabel *QRLabel13;
        TQRLabel *QRLabel14;
        TQRLabel *QRLabel15;
        TQRLabel *QRLabel16;
        TQRLabel *QRLabel17;
        TQRLabel *QRLabel18;
        TQRGroup *QRGroup1;
        TQRExpr *QRExpr1;
        TQRBand *QRBand3;
        TQRDBText *QRDBText8;
        TQRDBText *QRDBText9;
        TQRDBText *QRDBText10;
        TQRDBText *QRDBText11;
        TQRDBText *QRDBText12;
        TQRDBText *QRDBText13;
        TQRDBText *QRDBText14;
        TQRDBText *QRDBText15;
        TQRDBText *QRDBText16;
        TQRDBText *QRDBText17;
        TQRDBText *QRDBText18;
        TQRBand *QRBand4;
        TQRSysData *QRSysData3;
        TQRBand *QRBand5;
        TQRLabel *QRLabel25;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel24;
        TQRLabel *QRLabel26;
        TQRLabel *QRLabel33;
        TQRExpr *QRExpr11;
        TQRExpr *QRExpr10;
        TQRExpr *QRExpr9;
        TQRExpr *QRExpr2;
        TQRExpr *QRExpr3;
        TQRExpr *QRExpr4;
        TQRExpr *QRExpr5;
        TQRExpr *QRExpr6;
        TQRExpr *QRExpr7;
        TQRExpr *QRExpr8;
        TQRExpr *QRExpr13;
        TQRLabel *QRLabel32;
        TQRLabel *QRLabel35;
        TQRExpr *QRExpr12;
        TQRExpr *QRExpr14;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel19;
        TQRLabel *QRLabel20;
        TQRExpr *QRExpr15;
        TTable *Table1;
        TFloatField *Table1cas;
        TFloatField *Table1cas_firma;
        TFloatField *Table1somaj;
        TFloatField *Table1somaj_firma;
        TFloatField *Table1sanatate;
        TFloatField *Table1sanatate_firma;
        TFloatField *Table1cheltuieli_profesionale;
        TFloatField *Table1cas_d;
        TFloatField *Table1cas_s;
        TFloatField *Table1fond_accidente;
        TFloatField *Table1comision_cm;
private:	// User declarations
public:		// User declarations
        __fastcall Tstat_plata_grupat(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tstat_plata_grupat *stat_plata_grupat;
//---------------------------------------------------------------------------
#endif
