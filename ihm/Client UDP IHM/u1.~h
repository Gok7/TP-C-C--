//---------------------------------------------------------------------------

#ifndef u1H
#define u1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>
#include <ComCtrls.hpp>
#include <QuickRpt.hpp>
#include "Unit1.h"
#include <Menus.hpp>
#include <winsock.h> //on utilise la librairie winsock (ne pas oublier de mettre winsock 32 dans le linker)
#include <iostream>
#include <cstdlib>
//#include <winsock2.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

//---------------------------------------------------------------------------
class TBox_Pricipale : public TForm
{
__published:	// Composants gérés par l'EDI
        TButton *Quitter;
        TStaticText *StaticText1;
        TButton *New_word;
        TEdit *Input_box_user;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Valider;
        TEdit *Aff_box_Emission;
        TEdit *Aff_box_Reception;
        void __fastcall QuitterClick(TObject *Sender);
        void __fastcall New_wordClick(TObject *Sender);
        void __fastcall ValiderOnClick(TObject *Sender);

private:	// Déclarations de l'utilisateur

public:		// Déclarations de l'utilisateur

        __fastcall TBox_Pricipale(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TBox_Pricipale *Box_Pricipale;
//---------------------------------------------------------------------------
#endif
