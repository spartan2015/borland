//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ActnList.hpp>
#include <Menus.hpp>
#include <StdActns.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <DBActns.hpp>
//---------------------------------------------------------------------------
class Tbios : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNav;
        TActionList *ActionList1;
        TAction *vede;
        TAction *DeleteTable;
        TMainMenu *MainMenu1;
        TMenuItem *Options;
        TMenuItem *vede1;
        TMenuItem *Nou1;
        TAction *Inapoi;
        TAction *Salveaza;
        TAction *Nou;
        TMenuItem *DeleteTable1;
        TMenuItem *Salveaza1;
        TMenuItem *Inapoi1;
        TEditCopy *EditCopy1;
        TEditCut *EditCut1;
        TEditDelete *EditDelete1;
        TEditPaste *EditPaste1;
        TEditSelectAll *EditSelectAll1;
        TEditUndo *EditUndo1;
        TMenuItem *Edit;
        TMenuItem *Cut1;
        TMenuItem *Copy1;
        TMenuItem *Paste1;
        TMenuItem *Delete1;
        TMenuItem *Undo1;
        TMenuItem *SelectAll1;
        TAction *Print;
        TLabel *Label2;
        TCheckBox *CheckBox1;
        TEdit *Edit1;
        TLabel *Label3;
        TComboBox *ComboBox1;
        TLabel *Label4;
        TEdit *Edit2;
        TAction *mag;
        TAction *Inapoi2;
        TAction *Dublu;
        TAction *Dublulist;
        TRadioGroup *radio;
        TGroupBox *GroupBox1;
        TDBCheckBox *DBCheckBox1;
        TDBCheckBox *DBCheckBox2;
        TLabel *Label6;
        TDBEdit *DBEdit1;
        TCheckBox *CheckBox2;
        TDBGrid *DBGrid2;
        TDBNavigator *DBNavigator1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TGroupBox *GroupBox2;
        TButton *Button8;
        TButton *Button10;
        TListBox *List1;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TAction *Refresh_plati;
        TSpeedButton *SpeedButton9;
        TSpeedButton *SpeedButton10;
        TSpeedButton *SpeedButton11;
        void __fastcall vedeExecute(TObject *Sender);
        void __fastcall DeleteTableExecute(TObject *Sender);
        void __fastcall NouExecute(TObject *Sender);
        void __fastcall SalveazaExecute(TObject *Sender);
        void __fastcall InapoiExecute(TObject *Sender);
        void __fastcall PrintExecute(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall magExecute(TObject *Sender);
        void __fastcall Inpoi2Execute(TObject *Sender);
        void __fastcall DubluExecute(TObject *Sender);
        void __fastcall DublulistExecute(TObject *Sender);
        void __fastcall radioClick(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall Refresh_platiExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tbios(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tbios *bios;
//---------------------------------------------------------------------------
#endif
