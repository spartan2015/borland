//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TMaskEdit *MaskEdit1;
        TMaskEdit *MaskEdit2;
        TEdit *Edit1;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label4;
        TEdit *Edit2;
        TLabel *Label5;
        TLabel *Label6;
        TSpeedButton *SpeedButton1;
        TFontDialog *FontDialog1;
        TColorDialog *ColorDialog1;
        TSpeedButton *SpeedButton2;
        TButton *Button3;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:
AnsiString ipeul,nameul,portul,nickul;
AnsiString color1,font11,font12,font13,font14,font15,font16;
TFontStyles font17;
	// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
