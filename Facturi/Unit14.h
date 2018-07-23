//---------------------------------------------------------------------------

#ifndef Unit14H
#define Unit14H
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
#include <StdActns.hpp>
//---------------------------------------------------------------------------
class Tseeker : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TDBNavigator *DBNav;
        TLabel *Label2;
        TCheckBox *CheckBox1;
        TLabel *Label4;
        TComboBox *ComboBox1;
        TEdit *Edit2;
        TEdit *Edit1;
        TButton *Button4;
        TActionList *ActionList1;
        TAction *vede;
        TAction *DeleteTable;
        TAction *Inapoi;
        TAction *Salveaza;
        TAction *Nou;
        TEditCopy *EditCopy1;
        TEditCut *EditCut1;
        TEditDelete *EditDelete1;
        TEditPaste *EditPaste1;
        TEditSelectAll *EditSelectAll1;
        TEditUndo *EditUndo1;
        TAction *Print;
        TAction *mag;
        TLabel *Label3;
        TLabel *Label5;
        TGroupBox *GroupBox1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tseeker(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tseeker *seeker;
//---------------------------------------------------------------------------
#endif
