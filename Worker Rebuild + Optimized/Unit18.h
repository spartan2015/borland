//---------------------------------------------------------------------------

#ifndef Unit18H
#define Unit18H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tautomatizare : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TStatusBar *StatusBar1;
        TLabel *Label3;
        TButton *Button1;
        TButton *Button2;
        TComboBox *ComboBox1;
        TComboBox *ComboBox2;
        TTimer *Timer1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        float __fastcall rotunjire(float e);
private:	// User declarations
public:		// User declarations
        __fastcall Tautomatizare(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tautomatizare *automatizare;
//---------------------------------------------------------------------------
#endif
