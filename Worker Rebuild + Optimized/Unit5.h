//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tsetup : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label115;
        TLabel *Label100;
        TLabel *Label116;
        TLabel *Label101;
        TLabel *Label102;
        TLabel *Label109;
        TLabel *Label103;
        TLabel *Label104;
        TLabel *Label105;
        TLabel *Label106;
        TLabel *Label107;
        TLabel *Label108;
        TLabel *Label110;
        TLabel *Label111;
        TLabel *Label112;
        TLabel *Label113;
        TLabel *Label114;
        TLabel *Label126;
        TLabel *Label127;
        TLabel *Label132;
        TLabel *Label165;
        TLabel *Label166;
        TLabel *Label128;
        TLabel *Label129;
        TLabel *Label130;
        TLabel *Label131;
        TDBGrid *DBGrid1;
        TDBEdit *DBEdit85;
        TDBEdit *DBEdit86;
        TDBGrid *DBGrid3;
        TDBGrid *DBGrid4;
        TDBEdit *DBEdit78;
        TDBEdit *DBEdit77;
        TDBEdit *DBEdit76;
        TDBEdit *DBEdit99;
        TDBEdit *DBEdit98;
        TDBEdit *DBEdit80;
        TDBEdit *DBEdit79;
        TDBEdit *DBEdit81;
        TDBEdit *DBEdit82;
        TButton *Button28;
        TButton *Button29;
        TLabel *Label1;
        TLabel *Label2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TLabel *Label3;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TBevel *Bevel4;
        void __fastcall Button28Click(TObject *Sender);
        void __fastcall Button29Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsetup(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsetup *setup;
//---------------------------------------------------------------------------
#endif
