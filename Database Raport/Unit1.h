//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TDataSource *DataSource1;
        TTable *Table1;
        TStringField *Table1Luna;
        TStringField *Table1Nume_firma;
        TStringField *Table1Fisc;
        TStringField *Table1J;
        TIntegerField *Table1Banca;
        TIntegerField *Table1Telefon_firma;
        TMemoField *Table1Adresa_firma;
        TStringField *Table1Cod;
        TStringField *Table1Nume;
        TStringField *Table1Prenume;
        TFloatField *Table1CNP;
        TStringField *Table1Functia;
        TStringField *Table1Cod_functie;
        TStringField *Table1Sectia;
        TStringField *Table1Marca;
        TBooleanField *Table1Sp_vechi;
        TBooleanField *Table1Regie;
        TIntegerField *Table1An;
        TFloatField *Table1Salar_tarifar;
        TIntegerField *Table1Salar_ora;
        TIntegerField *Table1Lucrate;
        TIntegerField *Table1Nelucrate;
        TIntegerField *Table1Sup_15;
        TIntegerField *Table1Sup_2;
        TIntegerField *Table1Sarb;
        TIntegerField *Table1Ore_noapte;
        TIntegerField *Table1Ore_nemotivate;
        TIntegerField *Table1Cfs;
        TIntegerField *Table1Ore_acord;
        TFloatField *Table1Premiu;
        TFloatField *Table1Altele;
        TFloatField *Table1Dif_diurna;
        TFloatField *Table1Regularizare;
        TFloatField *Table1Salar_realizat;
        TFloatField *Table1Supl_15;
        TFloatField *Table1Supl_20;
        TFloatField *Table1Sarbatori;
        TFloatField *Table1Noapte;
        TFloatField *Table1V_acord;
        TFloatField *Table1Total_s;
        TIntegerField *Table1Co_z;
        TFloatField *Table1Co_v;
        TIntegerField *Table1Cm_z;
        TFloatField *Table1Cm_v;
        TBooleanField *Table1Preaviz;
        TFloatField *Table1Bccas;
        TFloatField *Table1Asig;
        TFloatField *Table1Somaj;
        TFloatField *Table1Asig_s;
        TFloatField *Table1C_pro;
        TFloatField *Table1V_net;
        TFloatField *Table1Dedp_b;
        TFloatField *Table1Ded_sup;
        TFloatField *Table1Bcal_imp;
        TFloatField *Table1Bcalc_impco;
        TFloatField *Table1Impozit_cr;
        TFloatField *Table1Imp_co;
        TFloatField *Table1Ajutor_n;
        TFloatField *Table1Avans;
        TFloatField *Table1Indem;
        TFloatField *Table1Popriri;
        TFloatField *Table1Alte_r;
        TFloatField *Table1Gara_m;
        TFloatField *Table1Rest;
        TFloatField *Table1Dif_imp;
        TFloatField *Table1Total_p;
        TFloatField *Table1Salar_net;
        TFloatField *Table1Co_ramas;
        TFloatField *Table1Zile_luna;
        TQRBand *QRBand1;
        TQRBand *QRBand2;
        TQRLabel *QRLabel1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRBand *QRBand5;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRDBText *QRDBText1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel8;
        TQRLabel *QRLabel9;
        TQRDBText *QRDBText4;
        TQRDBText *QRDBText5;
        TQRDBText *QRDBText6;
        TQRDBText *QRDBText7;
        TQRDBText *QRDBText8;
        TQRLabel *QRLabel10;
        TQRLabel *QRLabel11;
        TQRDBText *QRDBText9;
        TQRDBText *QRDBText10;
        TQRLabel *QRLabel12;
        TQRLabel *QRLabel13;
        TQRLabel *QRLabel14;
        TQRLabel *QRLabel15;
        TQRLabel *QRLabel16;
        TQRLabel *QRLabel17;
        TQRLabel *QRLabel18;
        TQRLabel *QRLabel19;
        TQRLabel *QRLabel20;
        TQRLabel *QRLabel21;
        TQRLabel *QRLabel22;
        TQRLabel *QRLabel23;
        TQRLabel *QRLabel24;
        TQRDBText *QRDBText11;
        TQRDBText *QRDBText12;
        TQRDBText *QRDBText13;
        TQRDBText *QRDBText14;
        TQRDBText *QRDBText15;
        TQRDBText *QRDBText16;
        TQRDBText *QRDBText17;
        TQRDBText *QRDBText18;
        TQRDBText *QRDBText19;
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
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
