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
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TStatusBar *StatusBar1;
        TTabSheet *TabSheet1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TLabel *Label1;
        TLabel *Label2;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TComboBox *ComboBox1;
        TComboBox *ComboBox2;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TDBGrid *DBGrid2;
        TDBNavigator *DBNavigator2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label9;
        TLabel *Label10;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TDBGrid *DBGrid3;
        TDBNavigator *DBNavigator3;
        TButton *Button8;
        TButton *Button9;
        TTabSheet *TabSheet4;
        TTabSheet *TabSheet5;
        TTabSheet *TabSheet6;
        TTabSheet *TabSheet7;
        TDBGrid *DBGrid4;
        TDBGrid *DBGrid5;
        TDBGrid *DBGrid6;
        TDBGrid *DBGrid7;
        TDBNavigator *DBNavigator4;
        TDBNavigator *DBNavigator5;
        TDBNavigator *DBNavigator6;
        TDBNavigator *DBNavigator7;
        TGroupBox *GroupBox1;
        TButton *Button10;
        TRadioGroup *RadioGroup1;
        TLabel *Label7;
        TLabel *Label8;
        TComboBox *ComboBox3;
        TMaskEdit *MaskEdit1;
        TGroupBox *GroupBox2;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TTabSheet *TabSheet8;
        TRadioGroup *RadioGroup2;
        TGroupBox *GroupBox3;
        TRadioGroup *RadioGroup3;
        TButton *Button11;
        TTabSheet *TabSheet9;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label134;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label135;
        TLabel *Label21;
        TLabel *Label136;
        TLabel *Label137;
        TLabel *Label138;
        TLabel *Label140;
        TLabel *Label139;
        TLabel *Label141;
        TLabel *Label22;
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
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TLabel *Label38;
        TBevel *Bevel1;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit11;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBEdit *DBEdit15;
        TDBEdit *DBEdit16;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit17;
        TDBEdit *DBEdit18;
        TDBEdit *DBEdit19;
        TBevel *Bevel2;
        TSpeedButton *SpeedButton9;
        TSpeedButton *SpeedButton10;
        TButton *Button12;
        TButton *Button13;
        TButton *Button14;
        TButton *Button15;
        TButton *Button16;
        TButton *Button17;
        TButton *Button18;
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall TabSheet1Show(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall RadioGroup2Click(TObject *Sender);
        void __fastcall RadioGroup3Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
        void __fastcall SpeedButton10Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
private:	// User declarations
public:
bool datas;	// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
