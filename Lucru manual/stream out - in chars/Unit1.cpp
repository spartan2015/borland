//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>
#include <fstream.h>
void afiseaza(ifstream &stream);
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
if (argc!=2) { cout << "Use like: [ program.exe <numefisier> ]"; return 1;}
ofstream out(argv[1], ios::binary | ios::out);
if (!out) {cout << "Eroare la deschidere"; return 1;}
for (int i=1; i!=255; i++) out.put((char) i);
out.close();
char l;
cout << "Afisam? (y/n): ";
cin >> l;
if (l=='y') {
        ifstream in(argv[1], ios::binary);
        afiseaza(in);
        }
 return 0;
}
//---------------------------------------------------------------------------
void afiseaza(ifstream &stream)
{
char ch;
while (stream.get(ch)) cout << ch << " ";
}
//---------------------------------------------------------------------------
