//---------------------------------------------------------------------------

#ifndef Unit21H
#define Unit21H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ActnList.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class Tcasabancalei : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TBevel *Bevel1;
        TLabel *Label5;
        TLabel *Label14;
        TLabel *Label15;
        TButton *Button1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit7;
        TDBMemo *DBMemo1;
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TDBCheckBox *DBCheckBox1;
        TDBEdit *DBEdit8;
        TButton *Button5;
        TCheckBox *CheckBox1;
        TRadioGroup *RadioGroup1;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBComboBox *DBComboBox1;
        TButton *Button6;
        TButton *Button7;
        TActionList *ActionList1;
        TAction *Action1nou;
        TAction *Action2sterge;
        TAction *Action1salveaza;
        TAction *Action1inapoi;
        TAction *inapoi;
        TMainMenu *MainMenu1;
        TMenuItem *Optiuni;
        TMenuItem *Nou1;
        TMenuItem *Sterge1;
        TMenuItem *Salveaza1;
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall DBEdit9Exit(TObject *Sender);
        void __fastcall DBComboBox1Change(TObject *Sender);
        void __fastcall DBComboBox1Exit(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tcasabancalei(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tcasabancalei *casabancalei;
//---------------------------------------------------------------------------
#endif
