//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ActnList.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tfise : public TForm
{
__published:	// IDE-managed Components
        TDBText *DBText1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBGrid *DBGrid1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TGroupBox *GroupBox1;
        TStatusBar *StatusBar1;
        TGroupBox *GroupBox2;
        TLabel *Label7;
        TCheckBox *CheckBox1;
        TLabel *Label15;
        TComboBox *ComboBox1;
        TComboBox *ComboBox2;
        TEdit *Edit1;
        TEdit *Edit2;
        TActionList *ActionList1;
        TAction *nou;
        TAction *save;
        TAction *sterge;
        TAction *print;
        TAction *exit;
        TSpeedButton *SpeedButton6;
        TAction *si;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TSpeedButton *SpeedButton9;
        void __fastcall exitExecute(TObject *Sender);
        void __fastcall nouExecute(TObject *Sender);
        void __fastcall stergeExecute(TObject *Sender);
        void __fastcall printExecute(TObject *Sender);
        void __fastcall siExecute(TObject *Sender);
        void __fastcall saveExecute(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfise(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfise *fise;
//---------------------------------------------------------------------------
#endif
