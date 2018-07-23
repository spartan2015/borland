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
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTable *Table1;
        TTable *Table2;
        TButton *Button1;
        TStringField *Table1Cont;
        TStringField *Table1Denumire;
        TFloatField *Table1Debit;
        TFloatField *Table1Credit;
        TFloatField *Table1sold_initial_debit;
        TFloatField *Table1sold_initial_credit;
        TFloatField *Table1rulaj_cumulat_debit;
        TFloatField *Table1rulaj_cumulat_credit;
        TFloatField *Table1total_sume_debit;
        TFloatField *Table1total_sume_credit;
        TFloatField *Table1sold_final_debit;
        TFloatField *Table1sold_final_credit;
        TStringField *Table2Cont;
        TStringField *Table2Denumire;
        TFloatField *Table2Debit;
        TFloatField *Table2Credit;
        TFloatField *Table2sold_initial_debit;
        TFloatField *Table2sold_initial_credit;
        TFloatField *Table2rulaj_cumulat_debit;
        TFloatField *Table2rulaj_cumulat_credit;
        TFloatField *Table2total_sume_debit;
        TFloatField *Table2total_sume_credit;
        TFloatField *Table2sold_final_debit;
        TFloatField *Table2sold_final_credit;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
