//---------------------------------------------------------------------------

#ifndef Unit22H
#define Unit22H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tregistrucasalei : public TForm
{
__published:	// IDE-managed Components
        TRadioGroup *RadioGroup1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tregistrucasalei(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tregistrucasalei *registrucasalei;
//---------------------------------------------------------------------------
#endif
