//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>
#include <string.h>

#define IN 0
#define OUT 1

class carte {
        char titlu[40];
        char autor[40];
        int stare;
public:
        carte(char *n, char *t, int s);
        int ia_stare() {return stare;}
        void da_stare(int s) {stare=s;}
        void arata();
};
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
carte c1("Twain" ,"Tom Sawyer" , IN); //initializare cu parametri.
carte c2("Melville" ,"Moby Dick" ,OUT);
c1.arata();
c2.arata();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
carte::carte(char *n, char *t, int s)
{
strcpy(autor,n);
strcpy(titlu,t);
stare=s;
}
//---------------------------------------------------------------------------
void carte::arata()
{
cout <<titlu <<" de " << autor << " este ";
if (stare==IN) cout <<"aici\n";
else cout <<"data\n";
}
//---------------------------------------------------------------------------
