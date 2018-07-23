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
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TLabel *Label1;
        TButton *Button1;
        TDataSource *DataSource1;
        TTable *Table1;
        TStringField *Table1Nume;
        TStringField *Table1Cod;
        TStringField *Table1Prenume;
        TFloatField *Table1CNP;
        TStringField *Table1Functia;
        TStringField *Table1Cod_functie;
        TStringField *Table1Sectia;
        TStringField *Table1Marca;
        TDateField *Table1Data_angajare;
        TFloatField *Table1Salar_tarifar;
        TFloatField *Table1Prima;
        TDateField *Table1Data_1angajare;
        TIntegerField *Table1Vechime;
        TBooleanField *Table1Sporvechime;
        TBooleanField *Table1Regie;
        TStringField *Table1Sex;
        TStringField *Table1Stare_civila;
        TFloatField *Table1Telefon;
        TMemoField *Table1Adresa;
        TDateField *Table1Datanastere;
        TBooleanField *Table1Stagiu_militar;
        TStringField *Table1Livret_militar;
        TMemoField *Table1Studii;
        TIntegerField *Table1Nr_copii;
        TMemoField *Table1Copii;
        TBooleanField *Table1pers_i;
        TBooleanField *Table1pers_ii;
        TBooleanField *Table1sotie;
        TIntegerField *Table1Co_total;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
