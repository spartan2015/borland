//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Project2.res");
USEFORM("Unit2.cpp", Form1);
USELIB("Project2.lib");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------