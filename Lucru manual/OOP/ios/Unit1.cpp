//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "iostream.h"
#include "stdio.h"

//---------------------------------------------------------------------------

void showflags();
#pragma argsused
int main(int argc, char* argv[])
{
/* Program care afiseaza stare indicatorilor
   din ios conform ANSI X3J16/ISO WG21 Joint C++ Committee
   Mai multe date: citit help-ul C++Builder 5.0
*/
cout.setf(ios::skipws);
showflags();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
void showflags()
{
long f,i;
int j;

char indic[15][12] = {
                    "boolalpha"   ,
                    "dec "        ,
                    "fixed"       ,
                    "hex"         ,
                    "internal"    ,
                    "left"        ,
                    "oct"         ,
                    "right"       ,
                    "scientific"  ,
                    "showbase"    ,
                    "showpoint"   ,
                    "showpos"     ,
                    "skipws"      ,
                    "unitbuf"     ,
                    "uppercase"   ,

        };
f = cout.flags();
        for(i=0x0001, j=0; i<=0x4000; i=i<<1, j++)   {
        if (i & f) cout <<indic[j] << " este activat\n";
        else cout << indic[j] << " este dezactivat\n";
        }
        cout << "\n";
}
