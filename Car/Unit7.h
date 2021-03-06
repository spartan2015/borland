//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tfiltercon : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TLabel *Label1;
        TListBox *ListBox2;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *Edit1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        void __fastcall ListBox1DblClick(TObject *Sender);
        void __fastcall ListBox2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfiltercon(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfiltercon *filtercon;
//---------------------------------------------------------------------------
#endif
