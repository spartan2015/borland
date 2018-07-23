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
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TActionList *ActionList1;
        TAction *vede;
        TButton *Button5;
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
        TButton *Button6;
        TAction *Print;
        TLabel *Label2;
        TCheckBox *CheckBox1;
        TEdit *Edit1;
        TLabel *Label3;
        TComboBox *ComboBox1;
        TLabel *Label4;
        TEdit *Edit2;
        TButton *Button7;
        TAction *mag;
        TAction *Inapoi2;
        TAction *Dublu;
        TListBox *List1;
        TAction *Dublulist;
        TButton *Button8;
        TButton *Button9;
        TLabel *Label5;
        TRadioGroup *radio;
        TButton *Button10;
        TGroupBox *GroupBox1;
        TDBCheckBox *DBCheckBox1;
        TDBCheckBox *DBCheckBox2;
        TLabel *Label6;
        TDBEdit *DBEdit1;
        TCheckBox *CheckBox2;
        TDBGrid *DBGrid2;
        TButton *Button11;
        TDBNavigator *DBNavigator1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
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
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tbios(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tbios *bios;
//---------------------------------------------------------------------------
#endif
