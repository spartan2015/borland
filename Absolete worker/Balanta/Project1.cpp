//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Project1.res");
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("Unit3.cpp", Sold_initial);
USEFORM("Unit4.cpp", Jurnal);
USEFORM("Unit5.cpp", Balanta);
USEFORM("Unit6.cpp", Rulaj_cumulat);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "NEO Applicationa - Quad Series - Bilant";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TDataModule1), &DataModule1);
                 Application->CreateForm(__classid(TSold_initial), &Sold_initial);
                 Application->CreateForm(__classid(TJurnal), &Jurnal);
                 Application->CreateForm(__classid(TBalanta), &Balanta);
                 Application->CreateForm(__classid(TRulaj_cumulat), &Rulaj_cumulat);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
