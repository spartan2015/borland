//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
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
class Tdelegati : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TButton *Button1;
        TButton *Button2;
        TGroupBox *GroupBox1;
        TLabel *Label2;
        TEdit *Edit1;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tdelegati(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tdelegati *delegati;
//---------------------------------------------------------------------------
#endif
