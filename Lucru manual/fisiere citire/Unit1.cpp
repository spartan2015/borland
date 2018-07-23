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
fstream inout("c:\\neo.txt", ios::in | ios::out | ios::binary);
if (!inout) {cout <<"Error opening file!"; return 1;}
char ch[10];
inout >> ch;

cout << ch;
inout.close();
getchar();
        return 0;
}
//---------------------------------------------------------------------------

