//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CSPIN.h"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TDeclaratii_somaj : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label154;
        TLabel *Label144;
        TLabel *Label143;
        TLabel *Label157;
        TLabel *Label153;
        TLabel *Label152;
        TLabel *Label151;
        TLabel *Label150;
        TLabel *Label149;
        TLabel *Label148;
        TLabel *Label147;
        TLabel *Label146;
        TLabel *Label145;
        TComboBox *ComboBox6;
        TComboBox *ComboBox7;
        TCSpinEdit *CSpinEdit1;
        TEdit *Edit12;
        TButton *Button37;
        TButton *Button36;
        TDateTimePicker *DateTimePicker2;
        TEdit *Edit11;
        TEdit *Edit10;
        TEdit *Edit9;
        TEdit *Edit8;
        TEdit *Edit7;
        TDateTimePicker *DateTimePicker1;
        TEdit *Edit6;
        TButton *Button35;
        TButton *Button38;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TStatusBar *StatusBar;
        TLabel *Label155;
        TLabel *Label1;
        TBevel *Bevel4;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TLabel *Label2;
        TDateTimePicker *DateTimePicker3;
        void __fastcall Button38Click(TObject *Sender);
        void __fastcall Button35Click(TObject *Sender);
        void __fastcall Button36Click(TObject *Sender);
        void __fastcall Button37Click(TObject *Sender);
        float __fastcall rotunjire(float e);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDeclaratii_somaj(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDeclaratii_somaj *Declaratii_somaj;
//---------------------------------------------------------------------------
#endif
