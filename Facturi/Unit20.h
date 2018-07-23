//---------------------------------------------------------------------------

#ifndef Unit20H
#define Unit20H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class Tmoneda : public TForm
{
__published:	// IDE-managed Components
        TRadioGroup *radio;
        TLabel *Label1;
        TDBGrid *DBGrid1;
        TButton *Button1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TBevel *Bevel1;
        TDBNavigator *DBNavigator1;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TEdit *Edit1;
        void __fastcall radioClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmoneda(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmoneda *moneda;
//---------------------------------------------------------------------------
#endif
