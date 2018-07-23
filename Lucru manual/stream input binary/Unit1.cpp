//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>
#include <fstream.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
if (argc!=2){ cout << "Use like: [ program.exe <numefisier> ]";
            return 1;
            }
ifstream in(argv[1], ios::in | ios::binary);
if (!in) {cout << "Eroare la deschidere!"; return 1;}
char ch;
while (in) {
        in.get(ch);
        cout << ch;
        }
getchar();
return 0;
}
//---------------------------------------------------------------------------
 