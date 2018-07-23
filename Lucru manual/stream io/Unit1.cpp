//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>
#include <fstream.h>

char pune(ofstream &stream, char *s);
void scoate(ifstream &stream);
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
if (argc==2) cout << "argument tip 2: " << argv[1] <<endl;
ofstream fisier;
fisier.open(argv[1]);
char str[10];
cout << "Da stringul: ";
cin >> str;
pune(fisier, str);
fisier.close();

ifstream fisier1;
fisier1.open(argv[1]);
cout <<"Scoatere: \n";
scoate(fisier1);
fisier1.close();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
char pune(ofstream &stream,char *s)
{
stream << s << endl;
return 0;
}
//---------------------------------------------------------------------------
void scoate(ifstream &stream)
{
char str[10];
stream >> str;
cout << str;
}
//---------------------------------------------------------------------------
