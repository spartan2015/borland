//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class Tsold_initial : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TLabel *Label5;
        TDBEdit *DBEdit4;
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsold_initial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsold_initial *sold_initial;
//---------------------------------------------------------------------------
#endif
