//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include <ActnList.hpp>
//---------------------------------------------------------------------------
class TMainFrame : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TLabel *Label138;
        TLabel *Label137;
        TLabel *Label136;
        TLabel *Label5;
        TLabel *Label135;
        TLabel *Label4;
        TLabel *Label3;
        TLabel *Label134;
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Label140;
        TLabel *Label139;
        TLabel *Label141;
        TLabel *Label7;
        TLabel *Label6;
        TDBNavigator *DBNavigator1;
        TButton *Button3;
        TButton *Button1;
        TButton *Button2;
        TButton *Button4;
        TButton *Button6;
        TButton *Button5;
        TButton *Button7;
        TButton *Button8;
        TTabSheet *TabSheet2;
        TPageControl *PageControl2;
        TTabSheet *TabSheet3;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label99;
        TLabel *Label142;
        TLabel *Label160;
        TLabel *Label167;
        TPanel *Panel2;
        TLabel *Label34;
        TLabel *Label117;
        TLabel *Label118;
        TLabel *Label119;
        TComboBox *ComboBox1;
        TEdit *Edit4;
        TPanel *Panel3;
        TDBNavigator *DBNavigator2;
        TButton *Button11;
        TButton *Button12;
        TButton *Button13;
        TButton *Button14;
        TButton *Button15;
        TButton *Button16;
        TButton *Button17;
        TButton *Button18;
        TButton *Button34;
        TTabSheet *TabSheet4;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TLabel *Label30;
        TLabel *Label31;
        TLabel *Label32;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TDBComboBox *DBComboBox2;
        TDBComboBox *DBComboBox3;
        TPanel *Panel1;
        TLabel *Label33;
        TDBCheckBox *DBCheckBox3;
        TDBCheckBox *DBCheckBox4;
        TDBCheckBox *DBCheckBox5;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit11;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBEdit *DBEdit15;
        TDBEdit *DBEdit16;
        TDBEdit *DBEdit17;
        TDBEdit *DBEdit18;
        TDBEdit *DBEdit19;
        TDBEdit *DBEdit20;
        TDBEdit *DBEdit21;
        TDBEdit *DBEdit22;
        TDBEdit *DBEdit23;
        TDBEdit *DBEdit24;
        TDBEdit *DBEdit25;
        TDBEdit *DBEdit26;
        TDBEdit *DBEdit28;
        TDBCheckBox *DBCheckBox1;
        TDBCheckBox *DBCheckBox2;
        TDBEdit *DBEdit29;
        TDBCheckBox *DBCheckBox6;
        TDBEdit *DBEdit30;
        TDBEdit *DBEdit31;
        TDBMemo *DBMemo2;
        TDBEdit *DBEdit32;
        TDBCheckBox *DBCheckBox7;
        TDBEdit *DBEdit33;
        TDBMemo *DBMemo3;
        TDBEdit *DBEdit34;
        TDBMemo *DBMemo4;
        TMainMenu *MainMenu1;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TButton *Button20;
        TMenuItem *File1;
        TMenuItem *Options1;
        TMenuItem *Rapoarte1;
        TMenuItem *Setari1;
        TMenuItem *Rapoarte2;
        TMenuItem *DeclaratiiSomaj1;
        TMenuItem *DeclaratiiCAS1;
        TLabel *Label20;
        TLabel *Label38;
        TDBEdit *DBEdit27;
        TDBCheckBox *DBCheckBox8;
        TDBCheckBox *DBCheckBox9;
        TMenuItem *Admin;
        TBitBtn *BitBtn1;
        TLabel *Label39;
        TBevel *Bevel3;
        TButton *Button9;
        TActionList *ActionList1;
        TAction *pontaj01;
        TMenuItem *Personal;
        TMenuItem *Pontaj1;
        TMenuItem *Automatizare1;
        TAction *automatizare01;
        TBitBtn *BitBtn2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button34Click(TObject *Sender);
        void __fastcall Button20Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall Setari1Click(TObject *Sender);
        void __fastcall Rapoarte2Click(TObject *Sender);
        void __fastcall DeclaratiiSomaj1Click(TObject *Sender);
        void __fastcall DeclaratiiCAS1Click(TObject *Sender);
        void __fastcall AdminClick(TObject *Sender);
        void __fastcall automatizare01Execute(TObject *Sender);
        void __fastcall pontaj01Execute(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainFrame *MainFrame;
//---------------------------------------------------------------------------
#endif
