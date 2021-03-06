//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Project1.res");
USEFORM("Unit1.cpp", Main);
USEFORM("Unit2.cpp", dm1); /* TDataModule: File Type */
USEFORM("Unit3.cpp", Sold_initial);
USEFORM("Unit4.cpp", Jurnal);
USEFORM("Unit5.cpp", Balanta);
USEFORM("Unit6.cpp", Rulaj_cumulat);
USEFORM("Unit7.cpp", contactiv);
USEFORM("Unit8.cpp", fisasah);
USEFORM("Unit9.cpp", sah);
USEFORM("Unit10plan.cpp", planconturi);
USEFORM("Unitrep.cpp", raport_plan_conturi);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "NEO Applicationa - Quad Series - Balanta";
                 Application->CreateForm(__classid(TMain), &Main);
                 Application->CreateForm(__classid(Tdm1), &dm1);
                 Application->CreateForm(__classid(TSold_initial), &Sold_initial);
                 Application->CreateForm(__classid(TJurnal), &Jurnal);
                 Application->CreateForm(__classid(TBalanta), &Balanta);
                 Application->CreateForm(__classid(TRulaj_cumulat), &Rulaj_cumulat);
                 Application->CreateForm(__classid(Tcontactiv), &contactiv);
                 Application->CreateForm(__classid(Tfisasah), &fisasah);
                 Application->CreateForm(__classid(Tsah), &sah);
                 Application->CreateForm(__classid(Tplanconturi), &planconturi);
                 Application->CreateForm(__classid(Traport_plan_conturi), &raport_plan_conturi);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
