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
#include <DB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TTable *Table1;
        TDataSource *DataSource2;
        TButton *Button1;
        TBatchMove *BatchMove1;
        TButton *Button2;
        TTable *ang;
        TStringField *angnume;
        TIntegerField *angmarca;
        TStringField *angsectia;
        TStringField *angfunctie;
        TStringField *angadresa;
        TStringField *angbuletin_identitate;
        TDateField *angdata_nastere;
        TDateField *angdata_inscriere;
        TFloatField *angtaxa_inscriere;
        TIntegerField *angtelefon;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
