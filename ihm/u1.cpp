//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cstdlib> 
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "u1.h"
#include "unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Unit1"
#pragma resource "*.dfm"
TForm1 *Form1;

using namespace std;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

