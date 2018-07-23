//---------------------------------------------------------------------------

#ifndef Unit19H
#define Unit19H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class Tsolder : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TDBEdit *DBEdit1;
        TLabel *Label4;
        TLabel *Label5;
        TDBEdit *DBEdit2;
        TGroupBox *grup2;
        TGroupBox *grup1;
        TLabel *Label2;
        TDBEdit *DBEdit3;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsolder(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsolder *solder;
//---------------------------------------------------------------------------
#endif
