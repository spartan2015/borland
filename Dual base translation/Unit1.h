//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTable *Table4;
        TTable *Table3;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TFloatField *Table4An;
        TIntegerField *Table4Ln;
        TFloatField *Table4Cf;
        TFloatField *Table4Cn;
        TStringField *Table4Nume;
        TFloatField *Table4Cnp;
        TIntegerField *Table4Rm;
        TIntegerField *Table4Cv;
        TFloatField *Table4Sbl;
        TFloatField *Table4Cid;
        TFloatField *Table4Civ;
        TFloatField *Table4Cin;
        TButton *Button1;
        TEdit *Edit1;
        TButton *Button2;
        TDBGrid *DBGrid2;
        TDataSource *DataSource2;
        TBatchMove *BatchMove1;
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
