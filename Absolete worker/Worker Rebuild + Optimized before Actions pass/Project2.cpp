//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Project2.res");
USEFORM("Unit1.cpp", MainFrame);
USEFORM("Unit2.cpp", D1); /* TDataModule: File Type */
USEFORM("Unit3.cpp", statplata);
USEFORM("Unit5.cpp", setup);
USEFORM("Unit4.cpp", Rapoarte);
USEFORM("Unit6.cpp", stat_plata);
USEFORM("Unit7.cpp", cod_judet);
USEFORM("Unit8.cpp", stat_plata_grupat);
USEFORM("Unit9.cpp", Dir_dialog);
USEFORM("Unit10.cpp", Declaratii_somaj);
USEFORM("Unit11.cpp", Declaratii_cas);
USEFORM("Unit12.cpp", a11);
USEFORM("Unit13.cpp", a12);
USEFORM("Unit14.cpp", a1);
USEFORM("Unit15.cpp", a2);
USEFORM("Unit16.cpp", a3);
USEFORM("Unit17.cpp", PasswordDlg);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "NEO Application - Quad series - Salarii";
                 Application->CreateForm(__classid(TMainFrame), &MainFrame);
                 Application->CreateForm(__classid(TD1), &D1);
                 Application->CreateForm(__classid(Tstatplata), &statplata);
                 Application->CreateForm(__classid(Tsetup), &setup);
                 Application->CreateForm(__classid(TRapoarte), &Rapoarte);
                 Application->CreateForm(__classid(Tstat_plata), &stat_plata);
                 Application->CreateForm(__classid(Tcod_judet), &cod_judet);
                 Application->CreateForm(__classid(Tstat_plata_grupat), &stat_plata_grupat);
                 Application->CreateForm(__classid(TDir_dialog), &Dir_dialog);
                 Application->CreateForm(__classid(TDeclaratii_somaj), &Declaratii_somaj);
                 Application->CreateForm(__classid(TDeclaratii_cas), &Declaratii_cas);
                 Application->CreateForm(__classid(Ta11), &a11);
                 Application->CreateForm(__classid(Ta12), &a12);
                 Application->CreateForm(__classid(Ta1), &a1);
                 Application->CreateForm(__classid(Ta2), &a2);
                 Application->CreateForm(__classid(Ta3), &a3);
                 Application->CreateForm(__classid(TPasswordDlg), &PasswordDlg);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
