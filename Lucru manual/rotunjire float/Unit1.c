//---------------------------------------------------------------------------

#pragma hdrstop
#include "conio.h"

//---------------------------------------------------------------------------

#pragma argsused
int f(float e);
int main(int argc, char* argv[])
{
float a;
printf("\nIntrodu numarul: ");
scanf("%f",&a);
printf("\n%d",f(a));
        return 0;
}
//******************definesc functiie*******************************
f(float e)
{
float z1,z2;
int mare,mic;
mare= (int) e+1;
mic= (int) e;
z1=mare-e;
z2=e-mic;
e = z1>z2 ? mic : mare ;
return e;
}
//---------------------------------------------------------------------------
