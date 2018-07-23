//---------------------------------------------------------------------------

#ifndef Unit27H
#define Unit27H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ActnList.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <StdActns.hpp>
//---------------------------------------------------------------------------
class Tbiosvaluta : public TForm
{
__published:	// IDE-managed Components
        TActionList *ActionList1;
        TMainMenu *MainMenu1;
        TPopupMenu *PopupMenu1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TMenuItem *File1;
        TMenuItem *Optiuni1;
        TMenuItem *Copy1;
        TMenuItem *Paste1;
        TMenuItem *Cut1;
        TEditCopy *EditCopy1;
        TEditCut *EditCut1;
        TEditDelete *EditDelete1;
        TEditPaste *EditPaste1;
        TEditSelectAll *EditSelectAll1;
        TEditUndo *EditUndo1;
        TMenuItem *Delete;
        TMenuItem *Undo1;
        TSpeedButton *SpeedButton7;
        TLabel *Label1;
        TAction *Nou;
        TAction *Detalii;
        TAction *Print;
        TAction *Sterge;
        TAction *Exit;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TEdit *Edit1;
        TEdit *Edit2;
        TCheckBox *CheckBox1;
        TRadioGroup *RadioGroup1;
        TGroupBox *GroupBox1;
        TDBGrid *DBGrid2;
        TDBCheckBox *DBCheckBox1;
        TCheckBox *CheckBox2;
        TComboBox *ComboBox1;
        TGroupBox *GroupBox2;
        TSpeedButton *SpeedButton8;
        TSpeedButton *SpeedButton9;
        TListBox *List1;
        TSpeedButton *SpeedButton10;
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall ExitExecute(TObject *Sender);
        void __fastcall NouExecute(TObject *Sender);
        void __fastcall DetaliiExecute(TObject *Sender);
        void __fastcall StergeExecute(TObject *Sender);
        void __fastcall PrintExecute(TObject *Sender);
        void __fastcall SpeedButton10Click(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tbiosvaluta(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tbiosvaluta *biosvaluta;
//---------------------------------------------------------------------------
#endif
