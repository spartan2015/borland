//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tfirme : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label2;
        TComboBox *ComboBox1;
        TLabel *Label3;
        TEdit *Edit1;
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfirme(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfirme *firme;
//---------------------------------------------------------------------------
#endif
