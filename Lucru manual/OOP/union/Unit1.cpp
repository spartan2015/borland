//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <iostream.h>

union caracter {
caracter();
~caracter();
void da_octet();
void arata_cuvant();
void schimba();

unsigned u;
unsigned char c[2];
};

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
caracter cap;
cout << "Programul urmator inverseaza intre ei 2 octeti intregi\n";
cout <<"Union used, all variables use the same memory location, ok?\n";
cap.da_octet();
cap.schimba();
cap.arata_cuvant();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
caracter::caracter()
{
cout <<"Construnctor\n";
}
//---------------------------------------------------------------------------
caracter::~caracter()
{
cout <<"Destructor\n";
}
//---------------------------------------------------------------------------
void caracter::da_octet()
{
cout << "Da octetul: ";
cin >> u;
}
//---------------------------------------------------------------------------
void caracter::arata_cuvant()
{
cout <<"Cuvantul este: " << c;
}
//---------------------------------------------------------------------------
void caracter::schimba()
{
unsigned char t;
t=c[0];
c[0]=c[1];
c[1]=t;
}
//---------------------------------------------------------------------------
