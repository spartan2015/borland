//---------------------------------------------------------------------------

#pragma hdrstop
#include "conio.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
clrscr();
if (argc<2)   {
        printf("Nici un nume introdus\n");
        exit(1); }

        printf("Salut %s", argv[1]);
        return 0;
}
//---------------------------------------------------------------------------
