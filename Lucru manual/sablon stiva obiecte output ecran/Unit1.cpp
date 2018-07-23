//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <stdio.h>

template<class X> class stiva{
        int numar;
        X matrix[10];
public:
        stiva();
        ~stiva();
        void pune(X y);
        X scoate();
        int stare();
};
struct adr{
        char nume[15];
        char prenume[15];
        friend istream &operator>>(istream &stream, adr &x);
        friend ostream &operator<<(ostream &stream, adr &x);
} ;
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
stiva<adr> a;
adr adr1;
        cin >> adr1; //supraincarcat relativ la struct adr;
a.pune(adr1);
a.stare();
cout <<"Scoatere din stiva:\n";
adr1=a.scoate();
        cout << adr1; //supraincarcat relativ la struct adr;
a.stare();
getchar();
        return 0;
}
//---------------------------------------------------------------------------
template<class X> stiva<X>::stiva(){
numar=0;
cout <<"Constructor stiva!\n";
}
//---------------------------------------------------------------------------
template<class X> stiva<X>::~stiva(){
cout << "Destructor stiva!\n";
}
//---------------------------------------------------------------------------
template<class X> void stiva<X>::pune(X y){
matrix[numar]=y;
numar++;
}
//---------------------------------------------------------------------------
template<class X> X stiva<X>::scoate(){
numar--;
return matrix[numar];
}
//---------------------------------------------------------------------------
template<class X> int stiva<X>::stare()
{
cout <<"\nNume obiecte in stiva: " <<numar <<endl;
return numar;
}
//---------------------------------------------------------------------------
istream &operator>>(istream &stream, adr &x)
{
cout <<"Da numele: ";
stream >> x.nume;
cout << "Da prenume: ";
stream >> x.prenume;
return stream;
}
//---------------------------------------------------------------------------
ostream &operator<<(ostream &stream, adr &x)
{
stream <<"Nume: " <<x.nume <<endl <<"Prenume: " <<x.prenume <<endl;
return stream;
}
