//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#pragma argsused

#include <iostream.h>
#include <stdio.h>

#define SIZE 10
//---------------------------------------------------------------------------
void sortare(int* x);
int main(int argc, char* argv[])
{
int v[SIZE];
for (int i=0; i<SIZE; i++) {
        cout << "Da numarul " <<i <<": ";
        cin >>v[i];
        }
cout << " Sirul sortat este:\n";
        sortare(v);
for (int i=0; i<SIZE; i++)
        cout << "Numarul " <<i <<": "<<v[i] <<endl;
getchar();
        return 0;
}
//---------------------------------------------------------------------------
void sortare(int* x)
{
int temp=0;
for (int j=0 ;j<SIZE ;j++ ){
        temp=x[j];
        for(int i=j+1;i<SIZE ;i++ )
        if (x[j]<x[i]) { temp=x[j]; x[j]=x[i]; x[i]=temp;}
        }
}
