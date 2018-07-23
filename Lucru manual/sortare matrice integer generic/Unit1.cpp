//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <iostream.h>
#include <stdio.h>

#define SIZE 10
template<class X> class matrice {
X m[SIZE];
public:
        matrice();
        ~matrice();
void sortare();
void arata() {for (int i=0; i<SIZE; i++) cout <<"Matrice de indice " << i <<" este: " <<m[i] <<endl; };
friend istream &operator>>(istream &stream,X *x);
};
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
matrice<int> ob;
ob.sortare();
cout <<"   Matricea sortata:\n";
ob.arata();
        return 0;
}
//---------------------------------------------------------------------------
template<class X> void matrice<X>::sortare()
{
X temp=0;
for (int j=0 ;j<SIZE ;j++ ){
        temp=m[j];
        for(int i=j+1;i<SIZE ;i++ )
        if (m[j]<m[i]) { temp=m[j]; m[j]=m[i]; m[i]=temp;}
        }
}
//---------------------------------------------------------------------------
template<class X> matrice<X>::matrice()
{
cout <<"Constructor!\n";
cin >> m;
}
//---------------------------------------------------------------------------
template<class X> matrice<X>::~matrice()
{
cout << "Obiect distrus!";
}
//---------------------------------------------------------------------------
istream &operator>>(istream &stream,int *x)
{
for (int j=0; j<SIZE; j++) {
cout <<"Da elementul numarul " <<j <<": ";
cin >>x[j];
        }
return stream;
}
//---------------------------------------------------------------------------









