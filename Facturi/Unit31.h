//---------------------------------------------------------------------------

#ifndef Unit31H
#define Unit31H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tcnew : public TForm
{
__published:	// IDE-managed Components
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tcnew(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tcnew *cnew;
//---------------------------------------------------------------------------
#endif
