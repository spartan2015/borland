//---------------------------------------------------------------------------

#ifndef Unit16H
#define Unit16H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tregistrucasa : public TForm
{
__published:	// IDE-managed Components
        TRadioGroup *RadioGroup1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tregistrucasa(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tregistrucasa *registrucasa;
//---------------------------------------------------------------------------
#endif
