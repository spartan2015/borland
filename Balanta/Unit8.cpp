//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfisasah *fisasah;
//---------------------------------------------------------------------------
__fastcall Tfisasah::Tfisasah(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::Edit1Change(TObject *Sender)
{
if (Edit1->Text!="") {
        dm1->Table1->Filtered=true;
        dm1->Table1->Filter="an='"+Edit1->Text+"'";
        }
else dm1->Table1->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::adaugaExecute(TObject *Sender)
{
lista->Items->Add(dm1->Table1an->AsString+" "+dm1->Table1luna->AsString);
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::stergeExecute(TObject *Sender)
{
for (int i=0; i<lista->Items->Count; i++)
        if (lista->Selected[i])
            lista->Items->Delete(i);
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::exitExecute(TObject *Sender)
{
Main->Show();
Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::adaugatotExecute(TObject *Sender)
{
dm1->Table1->First();
for (int i=0;i<dm1->Table1->RecordCount; i++){
  lista->Items->Add(dm1->Table1an->AsString+" "+dm1->Table1luna->AsString);
  dm1->Table1->Next();
        }
}
//---------------------------------------------------------------------------
void __fastcall Tfisasah::stergetotExecute(TObject *Sender)
{
lista->Clear();
}
//---------------------------------------------------------------------------


void __fastcall Tfisasah::fisasahExecute(TObject *Sender)
{
TLocateOptions locate;
locate <<loCaseInsensitive;

TReplaceFlags Flags;
Flags <<rfReplaceAll;

int index;
AnsiString an,luna;

dm1->sah->Open();
dm1->Table2->DatabaseName="data\\"+StringReplace(dm1->Table7Nume_firma->AsString," ","z",Flags)+"\\";

if (Edit2->Text!="121"){
for (int i=0; i<lista->Items->Count; i++){
    index=lista->Items->Strings[i].Pos(" ");
    an=lista->Items->Strings[i].SubString(1,index-1);
    luna=lista->Items->Strings[i].SubString(index+1,lista->Items->Strings[i].Length());

    dm1->Table2->TableName="j"+an+luna;
    dm1->Table2->Open();
    dm1->Table2->Filtered=true;
    dm1->Table2->Filter="Simbol_credit='"+Edit2->Text+"'";
    if (dm1->Table2->RecordCount!=0){
              dm1->Table2->First();
         for (int c=0;c<dm1->Table2->RecordCount;c++){
              dm1->sah->Append();
              dm1->sahan->AsString=an;
              dm1->sahluna->AsString=luna;
              dm1->sahdb->AsString="debit";
              dm1->sahcont->AsString=dm1->Table2Simbol_debit->AsString;
              dm1->sahsuma->AsFloat=dm1->Table2Sume_debit->AsFloat;
              dm1->sah->Post();

              dm1->Table2->Next();
                }
                }
    dm1->Table2->Filter="Simbol_debit='"+Edit2->Text+"'";
    if (dm1->Table2->RecordCount!=0){
              dm1->Table2->First();
         for (int d=0; d<dm1->Table2->RecordCount; d++){
              dm1->sah->Append();
              dm1->sahan->AsString=an;
              dm1->sahluna->AsString=luna;
              dm1->sahdb->AsString="credit";
              dm1->sahcont->AsString=dm1->Table2Simbol_credit->AsString;
              dm1->sahsuma->AsFloat=dm1->Table2Sume_credit->AsFloat;
              dm1->sah->Post();

              dm1->Table2->Next();
                }
                }
    dm1->Table2->Close();
        }
    }
if (Edit2->Text=="121"){
for (int i=0; i<lista->Items->Count; i++){
    index=lista->Items->Strings[i].Pos(" ");
    an=lista->Items->Strings[i].SubString(1,index-1);
    luna=lista->Items->Strings[i].SubString(index+1,lista->Items->Strings[i].Length());

    dm1->Table2->TableName="j"+an+luna;
    dm1->Table2->Open();
    dm1->Table2->Filtered=true;
    dm1->Table2->Filter="Simbol_credit='7*'";
//    ShowMessage("simbol credit: "+IntToStr(dm1->Table2->RecordCount));
    if (dm1->Table2->RecordCount!=0){
              dm1->Table2->First();
         for (int c=0;c<dm1->Table2->RecordCount;c++){
              dm1->sah->Append();
              dm1->sahan->AsString=an;
              dm1->sahluna->AsString=luna;
              dm1->sahdb->AsString="debit";
              dm1->sahcont->AsString=dm1->Table2Simbol_credit->AsString;
              dm1->sahsuma->AsFloat=dm1->Table2Sume_credit->AsFloat;
              dm1->sah->Post();

              dm1->Table2->Next();
                }
                }
    dm1->Table2->Filter="Simbol_debit='6*'";
//    ShowMessage("simbol debit: "+IntToStr(dm1->Table2->RecordCount));
    if (dm1->Table2->RecordCount!=0){
              dm1->Table2->First();
         for (int d=0; d<dm1->Table2->RecordCount; d++){
              dm1->sah->Append();
              dm1->sahan->AsString=an;
              dm1->sahluna->AsString=luna;
              dm1->sahdb->AsString="credit";
              dm1->sahcont->AsString=dm1->Table2Simbol_debit->AsString;
              dm1->sahsuma->AsFloat=dm1->Table2Sume_debit->AsFloat;
              dm1->sah->Post();

              dm1->Table2->Next();
                }
                }
    dm1->Table2->Close();
        }
    }
sah->QRLabel3->Caption=Edit2->Text;
sah->QuickRep1->Preview();
dm1->sah->Close();
dm1->sah->Exclusive=true;
dm1->sah->Active=true;
dm1->sah->EmptyTable();
//====
dm1->Table2->Filtered=false;
}
//---------------------------------------------------------------------------

