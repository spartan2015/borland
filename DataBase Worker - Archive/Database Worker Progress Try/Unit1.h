//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TStatusBar *StatusBar1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBMemo *DBMemo1;
        TDBNavigator *DBNavigator1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TDataSource *DataSource1;
        TTable *Table1;
        TButton *Button9;
        TButton *Button10;
        TEdit *Edit1;
        TDataSource *DataSource2;
        TTable *Table2;
        TPageControl *PageControl2;
        TTabSheet *TabSheet3;
        TTabSheet *TabSheet4;
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
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
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
        TDBEdit *DBEdit17;
        TDBEdit *DBEdit18;
        TDBEdit *DBEdit19;
        TDBCheckBox *DBCheckBox1;
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
        TDBComboBox *DBComboBox2;
        TDBComboBox *DBComboBox3;
        TDBEdit *DBEdit20;
        TDBMemo *DBMemo2;
        TDBEdit *DBEdit21;
        TDBCheckBox *DBCheckBox2;
        TDBEdit *DBEdit22;
        TDBMemo *DBMemo3;
        TDBEdit *DBEdit23;
        TDBMemo *DBMemo4;
        TPanel *Panel1;
        TLabel *Label33;
        TDBCheckBox *DBCheckBox3;
        TDBCheckBox *DBCheckBox4;
        TDBCheckBox *DBCheckBox5;
        TPanel *Panel2;
        TPanel *Panel3;
        TLabel *Label34;
        TDBNavigator *DBNavigator2;
        TButton *Button11;
        TButton *Button12;
        TButton *Button13;
        TButton *Button14;
        TButton *Button15;
        TButton *Button16;
        TButton *Button17;
        TButton *Button18;
        TButton *Button19;
        TEdit *Edit2;
        TDataSource *DataSource3;
        TTable *Table3;
        TDBCheckBox *DBCheckBox6;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TTabSheet *TabSheet5;
        TPageControl *PageControl3;
        TTabSheet *TabSheet6;
        TTabSheet *TabSheet7;
        TLabel *Label38;
        TLabel *Label39;
        TLabel *Label40;
        TLabel *Label41;
        TLabel *Label42;
        TPanel *Panel4;
        TPanel *Panel5;
        TLabel *Label43;
        TLabel *Label44;
        TLabel *Label45;
        TLabel *Label46;
        TLabel *Label47;
        TLabel *Label48;
        TLabel *Label49;
        TLabel *Label50;
        TLabel *Label51;
        TLabel *Label52;
        TLabel *Label53;
        TLabel *Label54;
        TLabel *Label55;
        TLabel *Label56;
        TLabel *Label57;
        TLabel *Label58;
        TLabel *Label59;
        TDBComboBox *DBComboBox1;
        TDBComboBox *DBComboBox4;
        TDBEdit *DBEdit24;
        TDBEdit *DBEdit25;
        TDBEdit *DBEdit26;
        TDBEdit *DBEdit27;
        TDBEdit *DBEdit28;
        TDBEdit *DBEdit29;
        TDBEdit *DBEdit30;
        TDBEdit *DBEdit31;
        TDBEdit *DBEdit32;
        TDBEdit *DBEdit33;
        TDBEdit *DBEdit34;
        TDBEdit *DBEdit35;
        TDBEdit *DBEdit36;
        TDBEdit *DBEdit37;
        TDBCheckBox *DBCheckBox7;
        TLabel *Label60;
        TLabel *Label61;
        TLabel *Label62;
        TLabel *Label63;
        TLabel *Label64;
        TLabel *Label65;
        TDBEdit *DBEdit38;
        TDBEdit *DBEdit39;
        TDBEdit *DBEdit40;
        TDBEdit *DBEdit41;
        TLabel *Label66;
        TLabel *Label67;
        TLabel *Label68;
        TLabel *Label69;
        TLabel *Label70;
        TLabel *Label71;
        TLabel *Label72;
        TLabel *Label73;
        TLabel *Label74;
        TDBEdit *DBEdit42;
        TDBEdit *DBEdit43;
        TDBEdit *DBEdit44;
        TDBEdit *DBEdit45;
        TDBEdit *DBEdit46;
        TDBEdit *DBEdit47;
        TDBEdit *DBEdit48;
        TDBEdit *DBEdit49;
        TDBNavigator *DBNavigator3;
        TButton *Button20;
        TButton *Button21;
        TButton *Button22;
        TButton *Button23;
        TButton *Button24;
        TButton *Button25;
        TButton *Button26;
        TButton *Button27;
        TLabel *Label75;
        TLabel *Label76;
        TPanel *Panel6;
        TLabel *Label77;
        TLabel *Label78;
        TLabel *Label79;
        TLabel *Label80;
        TLabel *Label81;
        TLabel *Label82;
        TLabel *Label83;
        TLabel *Label84;
        TLabel *Label85;
        TLabel *Label86;
        TLabel *Label87;
        TLabel *Label88;
        TLabel *Label89;
        TPanel *Panel7;
        TLabel *Label90;
        TLabel *Label91;
        TLabel *Label92;
        TLabel *Label93;
        TLabel *Label94;
        TLabel *Label95;
        TLabel *Label96;
        TLabel *Label97;
        TLabel *Label98;
        TDBEdit *DBEdit50;
        TDBEdit *DBEdit51;
        TDBEdit *DBEdit52;
        TDBEdit *DBEdit53;
        TDBEdit *DBEdit54;
        TDBEdit *DBEdit55;
        TDBEdit *DBEdit56;
        TDBEdit *DBEdit57;
        TDBEdit *DBEdit58;
        TDBEdit *DBEdit59;
        TDBEdit *DBEdit60;
        TDBEdit *DBEdit61;
        TDBEdit *DBEdit62;
        TDBEdit *DBEdit63;
        TDBEdit *DBEdit64;
        TDBEdit *DBEdit65;
        TDBEdit *DBEdit66;
        TDBEdit *DBEdit67;
        TDBEdit *DBEdit68;
        TDBEdit *DBEdit69;
        TDBEdit *DBEdit70;
        TDBEdit *DBEdit71;
        TEdit *Edit3;
        TLabel *Label99;
        TDBEdit *DBEdit72;
        TDataSource *DataSource4;
        TTable *Table4;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Options1;
        TMenuItem *Help1;
        TMenuItem *Listasporurivechime1;
        TTabSheet *TabSheet8;
        TLabel *Label100;
        TLabel *Label101;
        TLabel *Label102;
        TDataSource *DataSource5;
        TTable *Table5;
        TDataSource *DataSource6;
        TTable *Table6;
        TDataSource *DataSource7;
        TTable *Table7;
        TLabel *Label103;
        TLabel *Label104;
        TLabel *Label105;
        TLabel *Label106;
        TLabel *Label107;
        TLabel *Label108;
        TDBGrid *DBGrid3;
        TLabel *Label109;
        TLabel *Label110;
        TLabel *Label111;
        TLabel *Label112;
        TLabel *Label113;
        TLabel *Label114;
        TDBGrid *DBGrid4;
        TButton *Button28;
        TLabel *Label115;
        TLabel *Label116;
        TButton *Button29;
        TIntegerField *Table4v1;
        TIntegerField *Table4v2;
        TIntegerField *Table4val;
        TIntegerField *Table5D_baza;
        TIntegerField *Table5Cota_cas;
        TFloatField *Table6Cota1;
        TIntegerField *Table7V1;
        TIntegerField *Table7V2;
        TIntegerField *Table7Suma_fixa;
        TIntegerField *Table7Cota;
        TTimer *Timer1;
        TLabel *Label117;
        TLabel *Label118;
        TComboBox *ComboBox1;
        TEdit *Edit4;
        TButton *Button30;
        TLabel *Label119;
        TMenuItem *Raportcomplet1;
        TDataSource *DataSource8;
        TTable *Table8;
        TTabSheet *TabSheet9;
        TGroupBox *GroupBox1;
        TButton *Button31;
        TComboBox *ComboBox2;
        TComboBox *ComboBox3;
        TLabel *Label120;
        TLabel *Label121;
        TRadioGroup *RadioGroup1;
        TRadioGroup *RadioGroup2;
        TButton *Button32;
        TGroupBox *GroupBox2;
        TCheckBox *CheckBox1;
        TComboBox *ComboBox4;
        TLabel *Label122;
        TGroupBox *GroupBox3;
        TComboBox *ComboBox5;
        TButton *Button33;
        TDBEdit *DBEdit85;
        TDBEdit *DBEdit86;
        TDBGrid *DBGrid1;
        TButton *Button34;
        TStringField *Table1Nume_firma;
        TStringField *Table1Fisc;
        TStringField *Table1J;
        TStringField *Table1Banca;
        TStringField *Table1Cod_banca;
        TFloatField *Table1Telefon_firma;
        TMemoField *Table1Adresa_firma;
        TIntegerField *Table3An;
        TStringField *Table3Luna;
        TFloatField *Table3Salar_ora;
        TIntegerField *Table3Zile_lucrate;
        TIntegerField *Table3Zile_nelucrate;
        TIntegerField *Table3Ore_suplimentare_15;
        TIntegerField *Table3Ore_suplimentare_2;
        TIntegerField *Table3Ore_in_sarbatori;
        TIntegerField *Table3Ore_noapte;
        TIntegerField *Table3Ore_nemotivate;
        TIntegerField *Table3Cfs;
        TIntegerField *Table3Ore_in_acord;
        TFloatField *Table3Premiu;
        TFloatField *Table3Alti_bani;
        TFloatField *Table3Diferenta_diurna;
        TFloatField *Table3Regularizare;
        TFloatField *Table3Salar_realizat;
        TFloatField *Table3Suplimentar_15;
        TFloatField *Table3Suplimentar_2;
        TFloatField *Table3Sarbatori;
        TFloatField *Table3Noapte;
        TFloatField *Table3Spor_vechime_val;
        TFloatField *Table3Valoare_acord;
        TFloatField *Table3Salar_brut;
        TIntegerField *Table3Zile_concediu_O;
        TFloatField *Table3Valoare_concediu_O;
        TIntegerField *Table3Zile_concediu_M;
        TFloatField *Table3Valoare_concediu_M;
        TBooleanField *Table3Preaviz;
        TFloatField *Table3Baza_calcul_CAS;
        TFloatField *Table3Cas;
        TFloatField *Table3Cas_firma;
        TFloatField *Table3Somaj;
        TFloatField *Table3Somaj_firma;
        TFloatField *Table3Sanatate;
        TFloatField *Table3Sanatate_firma;
        TFloatField *Table3Cheltuieli_profesionale;
        TFloatField *Table3Venit_net;
        TFloatField *Table3Deducere_pers_de_baza;
        TFloatField *Table3Deducere_suplimentara;
        TFloatField *Table3Baza_calcul_impozit;
        TFloatField *Table3Baza_calcul_impozit_CO;
        TFloatField *Table3Impozit;
        TFloatField *Table3Impozit_concediu_O;
        TFloatField *Table3Ajutor_nastere;
        TFloatField *Table3Avans;
        TFloatField *Table3Indemnizatii;
        TFloatField *Table3Popriri;
        TFloatField *Table3Alte_rate;
        TFloatField *Table3Garantii_materiale;
        TFloatField *Table3Rest_plata;
        TFloatField *Table3Diferenta_impozit;
        TFloatField *Table3Salar_net;
        TFloatField *Table3Total_plata;
        TIntegerField *Table3Concediu_ramas;
        TIntegerField *Table3Zile_luna;
        TLabel *Label123;
        TLabel *Label124;
        TLabel *Label125;
        TDBEdit *DBEdit73;
        TDBEdit *DBEdit74;
        TDBEdit *DBEdit75;
        TDataSource *DataSource9;
        TTable *Table9;
        TFloatField *Table9cas;
        TFloatField *Table9cas_firma;
        TFloatField *Table9somaj;
        TFloatField *Table9somaj_firma;
        TFloatField *Table9sanatate;
        TFloatField *Table9sanatate_firma;
        TFloatField *Table9cheltuieli_profesionale;
        TLabel *Label126;
        TLabel *Label127;
        TLabel *Label128;
        TLabel *Label129;
        TLabel *Label130;
        TLabel *Label131;
        TLabel *Label132;
        TDBEdit *DBEdit76;
        TDBEdit *DBEdit77;
        TDBEdit *DBEdit78;
        TDBEdit *DBEdit79;
        TDBEdit *DBEdit80;
        TDBEdit *DBEdit81;
        TDBEdit *DBEdit82;
        TStringField *Table2Nume;
        TStringField *Table2Prenume;
        TStringField *Table2Cod;
        TFloatField *Table2Cnp;
        TStringField *Table2Functie;
        TStringField *Table2Cod_functie;
        TStringField *Table2Sectia;
        TStringField *Table2Marca;
        TDateField *Table2Data_angajare;
        TFloatField *Table2Salar_tarifar;
        TFloatField *Table2Prima;
        TDateField *Table2Data_prima_angajare;
        TIntegerField *Table2Vechime;
        TBooleanField *Table2Spor_vechime;
        TBooleanField *Table2Regie;
        TStringField *Table2Sex;
        TStringField *Table2Stare_civila;
        TFloatField *Table2Telefon;
        TMemoField *Table2Adresa;
        TDateField *Table2Data_nastere;
        TBooleanField *Table2Stagiu_militar;
        TStringField *Table2Livret_militar;
        TMemoField *Table2Studii;
        TIntegerField *Table2Numar_copii;
        TMemoField *Table2Date_copii;
        TBooleanField *Table2Pers_handicapate_grI;
        TBooleanField *Table2Pers_handicapate_grII;
        TBooleanField *Table2Sotie_in_intretinere;
        TIntegerField *Table2Concediu_pe_an;
        TStringField *Table8Nume_firma;
        TStringField *Table8Fisc;
        TStringField *Table8J;
        TStringField *Table8Banca;
        TStringField *Table8Cod_banca;
        TFloatField *Table8Telefon_firma;
        TMemoField *Table8Adresa_firma;
        TStringField *Table8Nume;
        TStringField *Table8Prenume;
        TStringField *Table8Cod;
        TFloatField *Table8Cnp;
        TStringField *Table8Functie;
        TStringField *Table8Cod_functie;
        TStringField *Table8Sectia;
        TStringField *Table8Marca;
        TDateField *Table8Data_angajare;
        TFloatField *Table8Salar_tarifar;
        TFloatField *Table8Prima;
        TDateField *Table8Data_prima_angajare;
        TIntegerField *Table8Vechime;
        TBooleanField *Table8Spor_vechime;
        TBooleanField *Table8Regie;
        TStringField *Table8Sex;
        TStringField *Table8Stare_civila;
        TFloatField *Table8Telefon;
        TMemoField *Table8Adresa;
        TDateField *Table8Data_nastere;
        TBooleanField *Table8Stagiu_militar;
        TStringField *Table8Livret_militar;
        TMemoField *Table8Studii;
        TIntegerField *Table8Numar_copii;
        TMemoField *Table8Date_copii;
        TBooleanField *Table8Pers_handicapate_grI;
        TBooleanField *Table8Pers_handicapate_grII;
        TBooleanField *Table8Sotie_in_intretinere;
        TIntegerField *Table8Concediu_pe_an;
        TIntegerField *Table8An;
        TStringField *Table8Luna;
        TFloatField *Table8Salar_ora;
        TIntegerField *Table8Zile_lucrate;
        TIntegerField *Table8Zile_nelucrate;
        TIntegerField *Table8Ore_suplimentare_15;
        TIntegerField *Table8Ore_suplimentare_2;
        TIntegerField *Table8Ore_in_sarbatori;
        TIntegerField *Table8Ore_noapte;
        TIntegerField *Table8Ore_nemotivate;
        TIntegerField *Table8Cfs;
        TIntegerField *Table8Ore_in_acord;
        TFloatField *Table8Premiu;
        TFloatField *Table8Alti_bani;
        TFloatField *Table8Diferenta_diurna;
        TFloatField *Table8Regularizare;
        TFloatField *Table8Salar_realizat;
        TFloatField *Table8Suplimentar_15;
        TFloatField *Table8Suplimentar_2;
        TFloatField *Table8Sarbatori;
        TFloatField *Table8Noapte;
        TFloatField *Table8Spor_vechime_val;
        TFloatField *Table8Valoare_acord;
        TFloatField *Table8Salar_brut;
        TIntegerField *Table8Zile_concediu_O;
        TFloatField *Table8Valoare_concediu_O;
        TIntegerField *Table8Zile_concediu_M;
        TFloatField *Table8Valoare_concediu_M;
        TBooleanField *Table8Preaviz;
        TFloatField *Table8Baza_calcul_CAS;
        TFloatField *Table8Cas;
        TFloatField *Table8Cas_firma;
        TFloatField *Table8Somaj;
        TFloatField *Table8Somaj_firma;
        TFloatField *Table8Sanatate;
        TFloatField *Table8Sanatate_firma;
        TFloatField *Table8Cheltuieli_profesionale;
        TFloatField *Table8Venit_net;
        TFloatField *Table8Deducere_pers_de_baza;
        TFloatField *Table8Deducere_suplimentara;
        TFloatField *Table8Baza_calcul_impozit;
        TFloatField *Table8Baza_calcul_impozit_CO;
        TFloatField *Table8Impozit;
        TFloatField *Table8Impozit_concediu_O;
        TFloatField *Table8Ajutor_nastere;
        TFloatField *Table8Avans;
        TFloatField *Table8Indemnizatii;
        TFloatField *Table8Popriri;
        TFloatField *Table8Alte_rate;
        TFloatField *Table8Garantii_materiale;
        TFloatField *Table8Rest_plata;
        TFloatField *Table8Diferenta_impozit;
        TFloatField *Table8Salar_net;
        TFloatField *Table8Total_plata;
        TIntegerField *Table8Concediu_ramas;
        TIntegerField *Table8Zile_luna;
        TLabel *Label133;
        TEdit *Edit5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall TabSheet2Show(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Edit2KeyPress(TObject *Sender, char &Key);
        void __fastcall Button19Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall TabSheet6Show(TObject *Sender);
        void __fastcall Button20Click(TObject *Sender);
        void __fastcall Button21Click(TObject *Sender);
        void __fastcall TabSheet7Show(TObject *Sender);
        void __fastcall TabSheet5Show(TObject *Sender);
        void __fastcall Button22Click(TObject *Sender);
        void __fastcall Button23Click(TObject *Sender);
        void __fastcall Button24Click(TObject *Sender);
        void __fastcall Button25Click(TObject *Sender);
        void __fastcall Button26Click(TObject *Sender);
        void __fastcall Edit3KeyPress(TObject *Sender, char &Key);
        void __fastcall Listasporurivechime1Click(TObject *Sender);
        void __fastcall Button29Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button27Click(TObject *Sender);
        void __fastcall DBEdit25Exit(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button30Click(TObject *Sender);
        void __fastcall Raportcomplet1Click(TObject *Sender);
        void __fastcall Button31Click(TObject *Sender);
        void __fastcall Button32Click(TObject *Sender);
        void __fastcall TabSheet9Show(TObject *Sender);
        void __fastcall TabSheet2Hide(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall Button33Click(TObject *Sender);
        void __fastcall Button34Click(TObject *Sender);
        void __fastcall Button28Click(TObject *Sender);
private:	// User declarations
public:
	// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif