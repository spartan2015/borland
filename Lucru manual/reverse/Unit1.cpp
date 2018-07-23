//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>
#include <fstream.h>
#include <stdlib.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
if (argc<3) {cout << "Parameters input error\n" << "Example: [ program.exe <fisier> <lungime> ]"; return 1;}
fstream inout(argv[1], ios::in | ios::out | ios::binary);
if (!inout) { cout << "Error opening file!"; return 1; }
char c1,c2;
int i,j;
for (i=0,j=atol(argv[2]); i<j; i++,j--) {
        inout.seekg(i,ios::beg);
        inout.get(c1);
        inout.seekg(j,ios::beg);
        inout.get(c2);
        cout << i << ": " <<c1<< " & "<< c2 <<endl;

        inout.seekp(i,ios::beg);
        inout.put(c2);
        inout.seekp(j,ios::beg);
        inout.put(c1);
        }
      inout.close();
      return 0;
}
//---------------------------------------------------------------------------
