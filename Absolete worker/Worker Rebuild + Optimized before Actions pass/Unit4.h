//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TRapoarte : public TForm
{
__published:	// IDE-managed Components
        TButton *Button33;
        TButton *Button31;
        TButton *Button32;
        TGroupBox *GroupBox3;
        TComboBox *ComboBox5;
        TRadioGroup *RadioGroup1;
        TRadioGroup *RadioGroup2;
        TGroupBox *GroupBox1;
        TLabel *Label120;
        TLabel *Label121;
        TComboBox *ComboBox2;
        TComboBox *ComboBox3;
        TStatusBar *StatusBar;
        void __fastcall Button32Click(TObject *Sender);
        void __fastcall Button33Click(TObject *Sender);
        void __fastcall Button31Click(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TRapoarte(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRapoarte *Rapoarte;
//---------------------------------------------------------------------------
#endif
