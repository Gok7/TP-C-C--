//---------------------------------------------------------------------------


#ifndef testH
#define testH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TFrame1 : public TFrame
{
__published:	// Composants g�r�s par l'EDI
        TMainMenu *MainMenu1;
private:	// D�clarations de l'utilisateur
public:		// D�clarations de l'utilisateur
        __fastcall TFrame1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame1 *Frame1;
//---------------------------------------------------------------------------
#endif