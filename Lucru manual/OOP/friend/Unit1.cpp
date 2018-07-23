//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>

class cladire{
        int etaje;
        int apartamente;
public:
        cladire();
        ~cladire();
        friend void afiseaza(cladire x);
        void da();
};
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
cladire bloc;
bloc.da();
afiseaza(bloc);
getchar();
        return 0;
}
//---------------------------------------------------------------------------
void cladire::da()
{
cout <<"Da numarul de etaje: ";
cin >>etaje;
cout << "Da nr. de apartamente: ";
cin >> apartamente;
}
//---------------------------------------------------------------------------
void afiseaza(cladire x)
{
cout <<"\nEtaje: " << x.etaje <<"\n";
cout <<"Apartamente: " << x.apartamente <<"\n";;
}
//---------------------------------------------------------------------------
cladire::cladire()
{
cout <<"Construnctor\n";
}
//---------------------------------------------------------------------------
cladire::~cladire()
{
cout <<"\nDestructor";
}
//---------------------------------------------------------------------------
