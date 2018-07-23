//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include "CGAUGES.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TButton *Button1;
        TEdit *Edit2;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button2;
        TOpenDialog *dialog1;
        TLabel *Label3;
        TCGauge *cat;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall destiny(char buffer, AnsiString destination, int count);
        void __fastcall source(AnsiString sursa,AnsiString destination);
        void __fastcall Button2Click(TObject *Sender);
        private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
