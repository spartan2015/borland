//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCGrids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tcontactiv : public TForm
{
__published:	// IDE-managed Components
        TDBCtrlGrid *DBCtrlGrid1;
        TLabel *Label1;
        TLabel *Label2;
        TDBEdit *DBEdit1;
        TDBCheckBox *DBCheckBox1;
        TDBNavigator *DBNavigator1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tcontactiv(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tcontactiv *contactiv;
//---------------------------------------------------------------------------
#endif
