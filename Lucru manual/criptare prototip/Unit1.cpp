//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <conio.h>

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
clrscr();
gotoxy(10,2);
cout << "Criptare pe biti !\n" << "Da charul: ";
char i;
cin >> i;
cout <<"Criptat: " << (i & 127);
getchar();
        return 0;
}
//---------------------------------------------------------------------------
 