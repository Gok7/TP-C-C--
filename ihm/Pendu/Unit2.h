//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TIP_Destinataire : public TForm
{
__published:	// Composants g�r�s par l'EDI
                TLabel *Label1;
        TMaskEdit *Input_IP;
        TMaskEdit *Input_Port;
        void __fastcall OnKeyDown_IP_Destinataire(TObject *Sender, WORD &Key,
          TShiftState Shift);
        
       

private:	// D�clarations de l'utilisateur

public:		// D�clarations de l'utilisateur
        __fastcall TIP_Destinataire(TComponent* Owner);
        
};
//---------------------------------------------------------------------------
extern PACKAGE TIP_Destinataire *IP_Destinataire;
//---------------------------------------------------------------------------
#endif
