//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TDepozit : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TComboBox *ComboBox1;
        TLabel *Label2;
        TComboBox *ComboBox2;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton3;
        TGroupBox *GroupBox2;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TButton *Button2;
        TPanel *Panel1;
        TSpeedButton *SpeedButton5;
        TButton *Button1;
        TCheckBox *check1;
        TLabel *Label3;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall DBGrid1CellClick(TColumn *Column);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDepozit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDepozit *Depozit;
//---------------------------------------------------------------------------
#endif
