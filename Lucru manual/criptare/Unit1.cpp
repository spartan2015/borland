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
cout << "Criptare siruri !\n" << "Da charul: ";
char y[10],x[10];
cin >> y;
cout << "Sirul criptat este: \n";
for (int i=0; i<strlen(y); i++) {
        cout << (y[i] & 127) <<"\n";
        y[i]= y[i] & 127;
        cout << y[i];
        }
getchar();
        return 0;
}
//---------------------------------------------------------------------------

