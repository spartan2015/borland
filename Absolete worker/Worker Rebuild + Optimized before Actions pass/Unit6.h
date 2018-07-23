//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
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
class Tstat_plata : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRLabel *QRLabel1;
        TQRBand *QRBand2;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText11;
        TQRDBText *QRDBText12;
        TQRDBText *QRDBText13;
        TQRDBText *QRDBText14;
        TQRDBText *QRDBText15;
        TQRDBText *QRDBText16;
        TQRDBText *QRDBText17;
        TQRDBText *QRDBText18;
        TQRDBText *QRDBText19;
        TQRBand *QRBand5;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel12;
        TQRLabel *QRLabel13;
        TQRLabel *QRLabel14;
        TQRLabel *QRLabel15;
        TQRLabel *QRLabel16;
        TQRLabel *QRLabel18;
        TQRLabel *QRLabel19;
        TQRLabel *QRLabel20;
        TQRLabel *QRLabel21;
        TQRLabel *QRLabel22;
        TQRLabel *QRLabel23;
        TQRBand *QRBand3;
        TQRExpr *QRExpr1;
        TQRLabel *QRLabel25;
        TQRExpr *QRExpr2;
        TQRExpr *QRExpr3;
        TQRExpr *QRExpr4;
        TQRExpr *QRExpr5;
        TQRExpr *QRExpr6;
        TQRExpr *QRExpr7;
        TQRExpr *QRExpr8;
        TQRExpr *QRExpr9;
        TQRExpr *QRExpr10;
        TQRExpr *QRExpr11;
        TQRBand *QRBand4;
        TQRSysData *QRSysData2;
        TQRDBText *QRDBText1;
        TQRLabel *QRLabel5;
        TQRDBText *QRDBText5;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel2;
        TQRDBText *QRDBText4;
        TQRLabel *QRLabel28;
        TQRDBText *QRDBText24;
        TQRDBText *QRDBText23;
        TQRDBText *QRDBText6;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel27;
        TQRLabel *QRLabel29;
        TQRLabel *QRLabel30;
        TQRLabel *QRLabel31;
        TQRDBText *QRDBText27;
        TQRDBText *QRDBText26;
        TQRDBText *QRDBText25;
        TQRLabel *QRLabel9;
        TQRLabel *QRLabel8;
        TQRDBText *QRDBText7;
        TQRDBText *QRDBText8;
        TQRLabel *QRLabel11;
        TQRDBText *QRDBText10;
        TQRLabel *QRLabel10;
        TQRDBText *QRDBText9;
        TQRLabel *QRLabel32;
        TQRLabel *QRLabel17;
        TQRLabel *QRLabel24;
        TQRLabel *QRLabel26;
        TQRLabel *QRLabel33;
        TQRLabel *QRLabel34;
        TQRExpr *QRExpr12;
        TQRLabel *QRLabel35;
        TQRExpr *QRExpr13;
        TQRLabel *QRLabel36;
        TQRLabel *QRLabel37;
        TQRExpr *QRExpr14;
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
        __fastcall Tstat_plata(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tstat_plata *stat_plata;
//---------------------------------------------------------------------------
#endif
