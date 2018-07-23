//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tfactura : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit8;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit11;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label19;
        TLabel *Label20;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBEdit *DBEdit15;
        TDBEdit *DBEdit16;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TDBEdit *DBEdit17;
        TDBEdit *DBEdit18;
        TDBEdit *DBEdit19;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNav;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TDBEdit *DBEdit20;
        TDBEdit *DBEdit21;
        TDBEdit *DBEdit22;
        TLabel *Label29;
        TDBEdit *DBEdit23;
        TBevel *Bevel1;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TLabel *Label30;
        TDBEdit *DBEdit24;
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfactura(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfactura *factura;
//---------------------------------------------------------------------------
#endif
