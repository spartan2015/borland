//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class Tdm : public TDataModule
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TTable *firme;
        TStringField *firmeNume_firma;
        TFloatField *firmeFisc;
        TStringField *firmeJ;
        TStringField *firmeBanca_1;
        TStringField *firmeFiliala_1;
        TStringField *firmeCont_banca_1;
        TStringField *firmeBanca_2;
        TStringField *firmeFiliala_2;
        TStringField *firmeCont_banca_2;
        TFloatField *firmeTelefon_firma;
        TMemoField *firmeAdresa_firma;
        TStringField *firmee_mail_firma;
        TStringField *firmeFunctia_pers_raport;
        TStringField *firmeNume_pers_raport;
        TFloatField *firmeCnp_angajator;
        TFloatField *firmecapital_social;
        TDataSource *DataSource2;
        TDataSource *DataSource3;
        TDataSource *DataSource4;
        TTable *central;
        TStringField *centralnume;
        TIntegerField *centralmarca;
        TStringField *centralsectia;
        TStringField *centralfunctie;
        TStringField *centralbuletin_identitate;
        TFloatField *centraldobanda_incasata;
        TFloatField *centraldobanda_sold;
        TFloatField *centralimprumut_debit;
        TFloatField *centralimprumut_credit;
        TFloatField *centralimprumut_sold;
        TFloatField *centralfs_debit;
        TFloatField *centralfs_credit;
        TFloatField *centralfs_sold;
        TTable *Table1;
        TFloatField *Table1SDOB;
        TFloatField *Table1SIMPR;
        TFloatField *Table1SFDS;
        TTable *fise;
        TStringField *fisetrick;
        TIntegerField *fisemarca;
        TIntegerField *fisenr_doc;
        TStringField *fiseexplicatii;
        TDateField *fisedata;
        TFloatField *fisedobanda_calculata;
        TFloatField *fisedobanda_incasata;
        TFloatField *fisedobanda_sold;
        TFloatField *fiseimprumut_debit;
        TFloatField *fiseimprumut_credit;
        TFloatField *fiseimprumut_sold;
        TFloatField *fisefs_debit;
        TFloatField *fisefs_credit;
        TFloatField *fisefs_sold;
        TBooleanField *fisesoldbool;
        TBooleanField *fisechecker;
        TStringField *Table1NUM;
        TTable *ang;
        TIntegerField *angmarca;
        TStringField *angnume;
        TStringField *angsectia;
        TStringField *angfunctie;
        TStringField *angadresa;
        TStringField *angbuletin_identitate;
        TDateField *angdata_nastere;
        TDateField *angdata_inscriere;
        TFloatField *angtaxa_inscriere;
        TIntegerField *angtelefon;
private:	// User declarations
public:		// User declarations
        __fastcall Tdm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tdm *dm;
//---------------------------------------------------------------------------
#endif
