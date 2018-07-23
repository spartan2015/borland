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
class Tplanconturi : public TForm
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TTable *Table1;
        TDBMemo *DBMemo1;
        TDBMemo *DBMemo2;
        TDBNavigator *DBNavigator1;
        TDBGrid *DBGrid1;
        TStringField *Table1Simbol;
        TStringField *Table1Denumire;
        TStringField *Table1Tip;
        TStringField *Table1Analitic;
        TStringField *Table1Sintetic;
        TMemoField *Table1Conturi_debitoare;
        TMemoField *Table1Conturi_creditoare;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TBevel *Bevel1;
        TLabel *Label3;
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TLabel *Label4;
        TLabel *Label5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tplanconturi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tplanconturi *planconturi;
//---------------------------------------------------------------------------
#endif
