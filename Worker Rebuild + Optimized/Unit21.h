//---------------------------------------------------------------------------

#ifndef Unit21H
#define Unit21H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tsarbatorilegale : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TSpeedButton *SpeedButton1;
        TDBGrid *DBGrid1;
        TSpeedButton *SpeedButton2;
        TLabel *Label1;
        TLabel *Label2;
        TSpeedButton *SpeedButton3;
        TBevel *Bevel1;
        TCheckBox *CheckBox1;
        TEdit *Edit3;
        TComboBox *ComboBox1;
        TLabel *Label3;
        void __fastcall Edit2KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsarbatorilegale(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsarbatorilegale *sarbatorilegale;
//---------------------------------------------------------------------------
#endif
