//---------------------------------------------------------------------------

#ifndef Unit15splashH
#define Unit15splashH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class Tsplash : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
private:	// User declarations
public:		// User declarations
        __fastcall Tsplash(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsplash *splash;
//---------------------------------------------------------------------------
#endif
