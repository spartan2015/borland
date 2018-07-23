//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
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
class TListForm1 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRLabel *QRLabel1;
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
        TDataSource *DataSource1;
        TTable *Table1;
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
        TDataSource *DataSource2;
        TTable *Table2;
        TDataSource *DataSource3;
        TTable *Table3;
        TQRLabel *QRLabel17;
        TQRLabel *QRLabel24;
        TIntegerField *Table2An;
        TStringField *Table2Luna;
        TFloatField *Table2Salar_ora;
        TIntegerField *Table2Zile_lucrate;
        TIntegerField *Table2Zile_nelucrate;
        TIntegerField *Table2Ore_suplimentare_15;
        TIntegerField *Table2Ore_suplimentare_2;
        TIntegerField *Table2Ore_in_sarbatori;
        TIntegerField *Table2Ore_noapte;
        TIntegerField *Table2Ore_nemotivate;
        TIntegerField *Table2Cfs;
        TIntegerField *Table2Ore_in_acord;
        TFloatField *Table2Premiu;
        TFloatField *Table2Alti_bani;
        TFloatField *Table2Diferenta_diurna;
        TFloatField *Table2Regularizare;
        TFloatField *Table2Salar_realizat;
        TFloatField *Table2Suplimentar_15;
        TFloatField *Table2Suplimentar_2;
        TFloatField *Table2Sarbatori;
        TFloatField *Table2Noapte;
        TFloatField *Table2Spor_vechime_val;
        TFloatField *Table2Valoare_acord;
        TFloatField *Table2Salar_brut;
        TIntegerField *Table2Zile_concediu_O;
        TFloatField *Table2Valoare_concediu_O;
        TIntegerField *Table2Zile_concediu_M;
        TFloatField *Table2Valoare_concediu_M;
        TBooleanField *Table2Preaviz;
        TFloatField *Table2Baza_calcul_CAS;
        TFloatField *Table2Cas;
        TFloatField *Table2Cas_firma;
        TFloatField *Table2Somaj;
        TFloatField *Table2Somaj_firma;
        TFloatField *Table2Sanatate;
        TFloatField *Table2Sanatate_firma;
        TFloatField *Table2Cheltuieli_profesionale;
        TFloatField *Table2Venit_net;
        TFloatField *Table2Deducere_pers_de_baza;
        TFloatField *Table2Deducere_suplimentara;
        TFloatField *Table2Baza_calcul_impozit;
        TFloatField *Table2Baza_calcul_impozit_CO;
        TFloatField *Table2Impozit;
        TFloatField *Table2Impozit_concediu_O;
        TFloatField *Table2Ajutor_nastere;
        TFloatField *Table2Avans;
        TFloatField *Table2Indemnizatii;
        TFloatField *Table2Popriri;
        TFloatField *Table2Alte_rate;
        TFloatField *Table2Garantii_materiale;
        TFloatField *Table2Rest_plata;
        TFloatField *Table2Diferenta_impozit;
        TFloatField *Table2Salar_net;
        TFloatField *Table2Total_plata;
        TIntegerField *Table2Concediu_ramas;
        TIntegerField *Table2Zile_luna;
        TStringField *Table3Nume_firma;
        TStringField *Table3Fisc;
        TStringField *Table3J;
        TStringField *Table3Banca;
        TStringField *Table3Cod_banca;
        TFloatField *Table3Telefon_firma;
        TMemoField *Table3Adresa_firma;
        TQRLabel *QRLabel25;
        TQRDBText *QRDBText9;
        TQRLabel *QRLabel26;
        TQRLabel *QRLabel27;
        TQRDBText *QRDBText10;
        TQRDBText *QRDBText20;
        TStringField *Table1Nume;
        TStringField *Table1Prenume;
        TStringField *Table1Cod;
        TFloatField *Table1Cnp;
        TStringField *Table1Functie;
        TStringField *Table1Cod_functie;
        TStringField *Table1Sectia;
        TStringField *Table1Marca;
        TDateField *Table1Data_angajare;
        TFloatField *Table1Salar_tarifar;
        TFloatField *Table1Prima;
        TDateField *Table1Data_prima_angajare;
        TIntegerField *Table1Vechime;
        TBooleanField *Table1Spor_vechime;
        TBooleanField *Table1Regie;
        TStringField *Table1Sex;
        TStringField *Table1Stare_civila;
        TFloatField *Table1Telefon;
        TMemoField *Table1Adresa;
        TDateField *Table1Data_nastere;
        TBooleanField *Table1Stagiu_militar;
        TStringField *Table1Livret_militar;
        TMemoField *Table1Studii;
        TIntegerField *Table1Numar_copii;
        TMemoField *Table1Date_copii;
        TBooleanField *Table1Pers_handicapate_grI;
        TBooleanField *Table1Pers_handicapate_grII;
        TBooleanField *Table1Sotie_in_intretinere;
        TIntegerField *Table1Concediu_pe_an;
        TQRSysData *QRSysData1;
        TQRSysData *QRSysData2;
        TQRSysData *QRSysData3;
private:	// User declarations
public:		// User declarations
        __fastcall TListForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TListForm1 *ListForm1;
//---------------------------------------------------------------------------
#endif
