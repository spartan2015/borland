//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include "Trayicon.h"
#include <ScktComp.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTrayIcon *TrayIcon1;
        TClientSocket *client;
        TServerSocket *server;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TMemo *Memo1;
        TListBox *ListBox1;
        TEdit *Edit1;
        TImageList *ImageList1;
        TMainMenu *MainMenu1;
        TMenuItem *Options1;
        TMenuItem *OpenServer1;
        TMenuItem *CloseServer1;
        TMenuItem *ConnectServer1;
        TMenuItem *Disconnect1;
        TMenuItem *Exit1;
        TMenuItem *Setari1;
        TMenuItem *Help1;
        TMenuItem *Setup1;
        TMenuItem *About1;
        TButton *Button1;
        TStatusBar *StatusBar1;
        void __fastcall FormResize(TObject *Sender);
        void __fastcall OpenServer1Click(TObject *Sender);
        void __fastcall CloseServer1Click(TObject *Sender);
        void __fastcall ConnectServer1Click(TObject *Sender);
        void __fastcall clientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall serverClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall serverClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall clientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall clientWrite(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall Disconnect1Click(TObject *Sender);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Setup1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);

private:	// User declarations
public:
AnsiString ipeul,nameul,portul,nickul;
AnsiString color1,font11,font12,font13,font14,font15,font16;
TFontStyles font17;
	// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
