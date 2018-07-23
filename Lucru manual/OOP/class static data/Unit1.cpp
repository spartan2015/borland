//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>

class imprimanta {
static int resursa;
public:
        void ia_resursa();
        void resursa_libera() {resursa=0;}
};

//---------------------------------------------------------------------------
int imprimanta::resursa=1; //initializare static
#pragma argsused
int main(int argc, char* argv[])
{
imprimanta k;
k.ia_resursa();
k.resursa_libera();
k.ia_resursa();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
void imprimanta::ia_resursa()
{
if (resursa) cout << "Imprimanta este in folosinta\n";
else cout <<"Liber\n";
}
