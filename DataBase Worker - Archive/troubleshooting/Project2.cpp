//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Project2.res");
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", ListForm);
USEFORM("Unit3.cpp", ListForm1);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit5.cpp", DM1); /* TDataModule: File Type */
USEFORM("Unit6.cpp", Dialog01);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TListForm), &ListForm);
                 Application->CreateForm(__classid(TListForm1), &ListForm1);
                 Application->CreateForm(__classid(TForm4), &Form4);
                 Application->CreateForm(__classid(TDM1), &DM1);
                 Application->CreateForm(__classid(TDialog01), &Dialog01);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
