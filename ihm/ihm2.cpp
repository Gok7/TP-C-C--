//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "ihm2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        Edit1->Text=0;
        Edit2->Text=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::QUITTERClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OUVRIRE_FENETREClick(TObject *Sender)
{
Form2 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::VALIDERClick(TObject *Sender)
{
        val1=Edit1->Text.ToInt();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AFFICHERClick(TObject *Sender)
{
        val3= val1+val2;
        Edit2->Text=val3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VALIDER_FENETREClick(TObject *Sender)
{
val2=Form1->Edit1->Text.ToInt();        
}
//---------------------------------------------------------------------------

