//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ActnList.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <StdActns.hpp>
//---------------------------------------------------------------------------
class TMain : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TBevel *Bevel2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label134;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label135;
        TLabel *Label5;
        TLabel *Label136;
        TLabel *Label137;
        TLabel *Label138;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label141;
        TLabel *Label139;
        TLabel *Label140;
        TLabel *Label8;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TSpeedButton *SpeedButton9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit11;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBNavigator *DBNavigator1;
        TStatusBar *StatusBar1;
        TDBEdit *DBEdit15;
        TMainMenu *MainMenu1;
        TMenuItem *File;
        TMenuItem *Insert1;
        TMenuItem *Delete3;
        TMenuItem *Acces1;
        TMenuItem *Creaza1;
        TMenuItem *Inchide1;
        TMenuItem *Edit1;
        TMenuItem *Copy2;
        TMenuItem *Cut2;
        TMenuItem *Delete2;
        TMenuItem *Paste2;
        TMenuItem *SelectAll2;
        TMenuItem *Undo2;
        TPopupMenu *PopupMenu1;
        TMenuItem *Copy1;
        TMenuItem *Cut1;
        TMenuItem *Delete1;
        TMenuItem *Paste1;
        TMenuItem *SelectAll1;
        TMenuItem *Undo1;
        TActionList *ActionList1;
        TEditCopy *EditCopy1;
        TEditCut *EditCut1;
        TEditDelete *EditDelete1;
        TEditPaste *EditPaste1;
        TEditSelectAll *EditSelectAll1;
        TEditUndo *EditUndo1;
        TAction *Inchide;
        TAction *Insert;
        TAction *Delete;
        TAction *Save;
        TAction *Modifica;
        TAction *Acces;
        TAction *Creaza;
        void __fastcall InchideExecute(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
        void __fastcall InsertExecute(TObject *Sender);
        void __fastcall DeleteExecute(TObject *Sender);
        void __fastcall SaveExecute(TObject *Sender);
        void __fastcall AccesExecute(TObject *Sender);
        void __fastcall CreazaExecute(TObject *Sender);
        void __fastcall ModificaExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain *Main;
//---------------------------------------------------------------------------
#endif
