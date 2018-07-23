//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <iostream.h>

//---------------------------------------------------------------------------

#pragma argsused
class cladire {
        int etaje, camere;
public:
        void ia_etaje();
        void afiseaza();
        cladire();
        ~cladire();
};
//--------------------------------------------------------------------------
int main(int argc, char* argv[])
{
cladire cladirea1;

cladirea1.ia_etaje();
cladirea1.afiseaza();
getchar();

        return 0;
}
//---------------------------------------------------------------------------
cladire::cladire()
{
cout << "Constructor initializat!!! \n";
}
//---------------------------------------------------------------------------
cladire::~cladire()
{
cout <<"Destructor obiect\n";
}
//---------------------------------------------------------------------------
void cladire::ia_etaje()
{
cout <<"Da numarul etajelor: ";
cin >> etaje;
}
//---------------------------------------------------------------------------
void cladire::afiseaza()
{
cout << "\nNumarul etajelor sunt: " <<etaje;
}
//---------------------------------------------------------------------------
