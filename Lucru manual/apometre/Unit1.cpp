//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
#include <iomanip.h>
#include <conio.h>

#pragma hdrstop

class rec {
int an, index;
char luna[10];
public:
        rec();
        ~rec();
       void afiseaza();
       void init(int q, char* b, int in) {
       an=q;
       strcpy(luna,b);
       index=in;
       }
friend ostream &operator<<(ostream &stream, rec r);
friend istream &operator>>(istream &stream, rec &r);
};
class stiva {
rec s[10];
int vis;
public:
stiva() {
        vis=0;
        cout << "Initializare stiva" << endl;
        }
~stiva() {cout << "Stiva distrusa" << endl;}
void pune(rec o) {
        s[vis]=o;
        vis++;
        }
int stare() { return vis;
        }
rec scoate(){
        if (vis!=0) {
        vis--;
        return s[vis+1];
                 }
        }
} st;
//--------------------------------------------------
void vizualizare(int an);
void adaugare();
void sterge();
ostream &sd(ostream &stream);
ostream &ss(ostream &stream);
istream &clopotel(istream &stream);
#pragma argsused
int main(int argc, char* argv[])
{
cout << sd <<"Optiuni:" << ss << endl;
cout << sd << "1. Vizualizeaza an." <<endl;
cout << sd << "2. Adauga inregistrare." <<endl;
cout << sd << "3. Sterge inregistrare." <<endl;
cout << sd << "4. Iesire." <<endl;
char a;
        for (;;) {
cout << sd <<"Optiune: ";
cin >> a;
switch (a) {
case '1':{
        clrscr();
        cout << "Vizualizare" << endl;
        cout << "Anul: ";
        int d;
        cin >> d;
        vizualizare(d);
        } break;
case '2':{
        clrscr();
        cout << "Adaugare" << endl;
        adaugare();
        } break;
case '3':
        clrscr();
        sterge();
        break;
case '4':exit(1); break;
case 'n':
        cout << sd << "1. Vizualizeaza an." <<endl;
        cout << sd << "2. Adauga inregistrare." <<endl;
        cout << sd << "3. Sterge inregistrare." <<endl;
        cout << sd << "4. Iesire." <<endl;
break;
default:
cout << "Press 'n' for options" << endl;
        }
}
}
//---------------------------------------------
rec::rec() {
cout << "Constructor rec" << endl;
}
//---------------------------------------------
rec::~rec() {
cout << "Destructor rec" << endl;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
istream &operator>>(istream &stream,rec &r){
cout << "An: ";
stream >> r.an;
cout << "Luna: ";
stream >> r.luna;
cout << "Index: ";
stream >> r.index;
        return stream;
}
//---------------------------------------------
ostream &operator<<(ostream &stream,rec r){
stream << r.an <<" "<< r.luna <<" " << r.index;
        return stream;
}
//---------------------------------------------
void rec::afiseaza() {
cout << "an: " << an << "  luna: " << luna << "  Index: " << index;
}
//---------------------------------------------
void vizualizare(int an){
ifstream input("apa.txt");
if (!input) {cout << "Eroare la deschidere fisier" <<endl;
             return;
            }
int an1, index;
char luna[15];
int once=0;
while (!input.eof()) {
        input >> an1 >> luna >> index;
       if (an1==an) {
           if (once!=1) cout << "   Luna:    Index: " << endl;
                once=1;
                cout <<setw(10) << luna << "->" << setw(6) << index <<endl;
                }
        }
input.close();
}
//---------------------------------------------
void adaugare(){
rec temp;
cin >> temp;
ofstream out("apa.txt",ios::binary || ios::app);
if (!out) {
        cout << "Error  to output file !!!" << endl;
        return;
        }
out.seekp(ios::end);
out << endl << temp;
out.close();
}
//---------------------------------------------
ostream &sd(ostream &stream){
stream << "----->";
        return stream;
}
//---------------------------------------------
ostream &ss(ostream &stream){
stream << "<-----";
        return stream;
}
//---------------------------------------------
istream &clopotel(istream &stream){
cout << '\a';
        return stream;
}
//---------------------------------------------
void sterge(){
cout << " Atentie stergere !!!" << endl;
cout << "1.Continuare" <<endl;
cout << "2.Inapoi meniu" <<endl;
char p;
        for (;;){
cout << sd <<"Stergere: ";
cin >>p;
        switch (p) {
case '1': {clrscr();
int a;
char l[10];
cout << "An: ";
cin >> a;
cout << "Luna: ";
cin >> l;
ifstream start("apa.txt");
if (!start) {
        cout << "Eroare deschidere fisier!" <<endl;
        return;
        }
stiva *point;
int a2,i2;
char l2[14];
rec ob;
while (!start.eof()) {
        start >> a2 >> l2 >> i2;
  //erooooooooooooooooooooooaaaaaaaaaaaaaaaaaaaaaare
        if (a2!=a & strcmp(l2,l)!=0){ob.init(a2,l2,i2);st.pune(ob);}
        }
        cout << st.stare();
//start.close();
//ofstream rebuild("apa.txt",ios::trunc);
//for (int i=1; i<st.stare()+1; i++) rebuild << st.scoate() <<endl;
//rebuild.close();
        }break;
case '2': clrscr(); return;
case 'n':cout << "1.Continuare" <<endl;
         cout << "2.Inapoi meniu" <<endl;break;
default: cout << "Press 'n' for options" <<endl;
        break;
                }
        }
}
//---------------------------------------------
