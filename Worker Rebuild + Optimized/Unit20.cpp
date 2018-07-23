//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit20.h"
#include <stdlib.h>
#include "Unit1.h"
#include "Unit2.h"
#include "Unit21.h"
#include "Unit22.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tpontaj *pontaj;
//---------------------------------------------------------------------------
__fastcall Tpontaj::Tpontaj(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tpontaj::FormActivate(TObject *Sender)
{
DateTimePicker1->Date=Date();
StatusBar1->SimpleText=UpperCase(FormatDateTime("dddd",Now())+" - "+FormatDateTime("d",Now())+" "+FormatDateTime("mmmmm  yyyy",Now()));
}
//---------------------------------------------------------------------------
void __fastcall Tpontaj::SpeedButton1Click(TObject *Sender)
{
D1->pontaj->Close();
Close();
MainFrame->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tpontaj::pontare01Execute(TObject *Sender)
{
TLocateOptions lo;
lo <<loCaseInsensitive;

TDateTime date;
Word an,luna,zi;
DecodeDate(DateTimePicker1->Date,an,luna,zi);
int y=D1->pontaj->RecordCount;
D1->pontaj->Append();
D1->pontajan->AsInteger=an;
D1->pontajluna->AsString=FormatDateTime("mmmm", DateTimePicker1->Date);
D1->pontajcod->AsString=D1->Table2Cod->AsString;
AnsiString idi=D1->pontajcod->AsString+IntToStr(y+1);
D1->pontajindex->AsString=idi;
//**
D1->sl->Open();
D1->sl->Filtered=true;
D1->sl->Filter="luna='"+FormatDateTime("mmmm", DateTimePicker1->Date)+"'";
//**
int r=0;
int zileluna=0;
div_t x=div(an,4);
if (luna==1) zileluna=31;
if (luna==2) {
        if (x.rem==0) zileluna=29;
        if (x.rem!=0) zileluna=28;
        }
if (luna==3) zileluna=31;
if (luna==4) zileluna=30;
if (luna==5) zileluna=31;
if (luna==6) zileluna=30;
if (luna==7) zileluna=31;
if (luna==8) zileluna=31;
if (luna==9) zileluna=30;
if (luna==10)zileluna=31;
if (luna==11)zileluna=30;
if (luna==12)zileluna=31;
//****
int z1[32];
for (int i=1;i<zileluna+1;i++) {
date=StrToDate(IntToStr(i)+"."+luna+"."+an);
z1[i]=DayOfWeek(date);
if (DayOfWeek(date)!=1 & DayOfWeek(date)!=7) r++;
        }
AnsiString z[31];
bool seek;
for (int l=1; l<zileluna+1; l++) {
seek=D1->sl->Locate("zi",l,lo);
if (z1[l]!=1 & z1[l]!=7) z[l]=D1->Table2ore_zi->AsInteger;
if (seek) {z[l]="X"; r--; }
if (z1[l]==1) z[l]="X";
if (z1[l]==7) z[l]="X";
        }
//****
D1->pontajStringField1->AsString=z[1];
D1->pontajStringField2->AsString=z[2];
D1->pontajStringField3->AsString=z[3];
D1->pontajStringField4->AsString=z[4];
D1->pontajStringField5->AsString=z[5];
D1->pontajStringField6->AsString=z[6];
D1->pontajStringField7->AsString=z[7];
D1->pontajStringField8->AsString=z[8];
D1->pontajStringField9->AsString=z[9];
D1->pontajStringField10->AsString=z[10];
D1->pontajStringField11->AsString=z[11];
D1->pontajStringField12->AsString=z[12];
D1->pontajStringField13->AsString=z[13];
D1->pontajStringField14->AsString=z[14];
D1->pontajStringField15->AsString=z[15];
D1->pontajStringField16->AsString=z[16];
D1->pontajStringField17->AsString=z[17];
D1->pontajStringField18->AsString=z[18];
D1->pontajStringField19->AsString=z[19];
D1->pontajStringField20->AsString=z[20];
D1->pontajStringField21->AsString=z[21];
D1->pontajStringField22->AsString=z[22];
D1->pontajStringField23->AsString=z[23];
D1->pontajStringField24->AsString=z[24];
D1->pontajStringField25->AsString=z[25];
D1->pontajStringField26->AsString=z[26];
D1->pontajStringField27->AsString=z[27];
D1->pontajStringField28->AsString=z[28];
if (zileluna>28) D1->pontajStringField29->AsString=z[29]; else D1->pontajStringField29->AsString="nn";
if (zileluna>29) D1->pontajStringField30->AsString=z[30]; else D1->pontajStringField30->AsString="nn";
if (zileluna>30) D1->pontajStringField31->AsString=z[31]; else D1->pontajStringField31->AsString="nn";

D1->pontajZL->AsInteger=r;
D1->pontaj->Post();
D1->sl->Close();
        }
//---------------------------------------------------------------------------
void __fastcall Tpontaj::DateTimePicker1Change(TObject *Sender)
{
TLocateOptions locate;
locate <<loCaseInsensitive;
D1->pontaj->Filter="an='"+FormatDateTime("yy",DateTimePicker1->Date)+"'"+" AND luna='"+FormatDateTime("mmmm",DateTimePicker1->Date)+"'";
D1->pontaj->Locate("luna",FormatDateTime("mmmm",DateTimePicker1->Date),locate);
}
//---------------------------------------------------------------------------
void __fastcall Tpontaj::BitBtn1Click(TObject *Sender)
{
if (MessageDlg("Chiar vrei sa stergi?",mtWarning,TMsgDlgButtons() <<mbYes <<mbNo,0)==mrYes)
D1->pontaj->Delete();
}
//---------------------------------------------------------------------------

void __fastcall Tpontaj::pontajauto(TObject *Sender)
{
TLocateOptions lo;
lo <<loCaseInsensitive;

TDateTime date;
Word an,luna,zi;
DecodeDate(DateTimePicker1->Date,an,luna,zi);
D1->Table2->First();
        for (int k=0;k<D1->Table2->RecordCount;k++) {
int y=D1->pontaj->RecordCount;
D1->pontaj->Append();
D1->pontajan->AsInteger=an;
D1->pontajluna->AsString=FormatDateTime("mmmm", DateTimePicker1->Date);
D1->pontajcod->AsString=D1->Table2Cod->AsString;
AnsiString idi=D1->pontajcod->AsString+IntToStr(y+1);
D1->pontajindex->AsString=idi;
//**
D1->sl->Open();
D1->sl->Filtered=true;
D1->sl->Filter="luna='"+FormatDateTime("mmmm", DateTimePicker1->Date)+"'";
//**
int r=0;
int zileluna=0;
div_t x=div(an,4);
if (luna==1) zileluna=31;
if (luna==2) {
        if (x.rem==0) zileluna=29;
        if (x.rem!=0) zileluna=28;
        }
if (luna==3) zileluna=31;
if (luna==4) zileluna=30;
if (luna==5) zileluna=31;
if (luna==6) zileluna=30;
if (luna==7) zileluna=31;
if (luna==8) zileluna=31;
if (luna==9) zileluna=30;
if (luna==10)zileluna=31;
if (luna==11)zileluna=30;
if (luna==12)zileluna=31;
//****
int z1[32];
for (int i=1;i<zileluna+1;i++) {
date=StrToDate(IntToStr(i)+"."+luna+"."+an);
z1[i]=DayOfWeek(date);
if (DayOfWeek(date)!=1 & DayOfWeek(date)!=7) r++;
        }
AnsiString z[31];
bool seek;
for (int l=1;l<zileluna+1;l++) {
seek=D1->sl->Locate("zi",l,lo);
if (z1[l]!=1 & z1[l]!=7) z[l]=D1->Table2ore_zi->AsInteger;
if (seek) { r--;z[l]="X"; }
if (z1[l]==1) z[l]="X";
if (z1[l]==7) z[l]="X";
        }
//****
D1->pontajStringField1->AsString=z[1];
D1->pontajStringField2->AsString=z[2];
D1->pontajStringField3->AsString=z[3];
D1->pontajStringField4->AsString=z[4];
D1->pontajStringField5->AsString=z[5];
D1->pontajStringField6->AsString=z[6];
D1->pontajStringField7->AsString=z[7];
D1->pontajStringField8->AsString=z[8];
D1->pontajStringField9->AsString=z[9];
D1->pontajStringField10->AsString=z[10];
D1->pontajStringField11->AsString=z[11];
D1->pontajStringField12->AsString=z[12];
D1->pontajStringField13->AsString=z[13];
D1->pontajStringField14->AsString=z[14];
D1->pontajStringField15->AsString=z[15];
D1->pontajStringField16->AsString=z[16];
D1->pontajStringField17->AsString=z[17];
D1->pontajStringField18->AsString=z[18];
D1->pontajStringField19->AsString=z[19];
D1->pontajStringField20->AsString=z[20];
D1->pontajStringField21->AsString=z[21];
D1->pontajStringField22->AsString=z[22];
D1->pontajStringField23->AsString=z[23];
D1->pontajStringField24->AsString=z[24];
D1->pontajStringField25->AsString=z[25];
D1->pontajStringField26->AsString=z[26];
D1->pontajStringField27->AsString=z[27];
D1->pontajStringField28->AsString=z[28];
if (zileluna>28) D1->pontajStringField29->AsString=z[29]; else D1->pontajStringField29->AsString="-";
if (zileluna>29) D1->pontajStringField30->AsString=z[30]; else D1->pontajStringField30->AsString="-";
if (zileluna>30) D1->pontajStringField31->AsString=z[31]; else D1->pontajStringField31->AsString="-";
D1->pontajZL->AsInteger=r;
D1->pontaj->Post();

D1->Table2->Next();
//ShowMessage("Terminat !");
        }
D1->sl->Open();
}
//---------------------------------------------------------------------------


void __fastcall Tpontaj::SpeedButton4Click(TObject *Sender)
{
D1->sl->Open();
sarbatorilegale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tpontaj::SpeedButton5Click(TObject *Sender)
{
D1->pontaj->Filtered=true;
Word an,luna,zi;
DecodeDate(DateTimePicker1->Date,an,luna,zi);
D1->pontaj->Filter="an='"+IntToStr(an)+"' AND luna='"+FormatDateTime("mmmm",DateTimePicker1->Date)+"'";
raport_pontaj->QuickRep1->Preview();
D1->pontaj->Filtered=false;
}
//---------------------------------------------------------------------------
