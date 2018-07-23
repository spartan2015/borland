//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tmagazie : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TCheckBox *CheckBox1;
        TComboBox *ComboBox1;
        TEdit *Edit2;
        TEdit *Edit1;
        TRadioGroup *radio1;
        TButton *Button1;
        TButton *Button3;
        TRadioGroup *radio2;
        TButton *Button2;
        TDBGrid *DBGrid1;
        TDBGrid *DBGrid2;
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall radio1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmagazie(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmagazie *magazie;
//---------------------------------------------------------------------------
#endif
