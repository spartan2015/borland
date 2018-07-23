//---------------------------------------------------------------------------

#ifndef Unit19H
#define Unit19H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CGAUGES.h"
//---------------------------------------------------------------------------
class Tmeter : public TForm
{
__published:	// IDE-managed Components
        TCGauge *cc1;
        TCGauge *cc2;
        TLabel *Label1;
private:	// User declarations
public:		// User declarations
        __fastcall Tmeter(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmeter *meter;
//---------------------------------------------------------------------------
#endif
