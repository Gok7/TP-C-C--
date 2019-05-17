//---------------------------------------------------------------------------

#ifndef ihm2H
#define ihm2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
        TEdit *Edit1;
        TButton *VALIDER;
        TButton *OUVRIRE_FENETRE;
        TButton *VALIDER_FENETRE;
        TButton *AFFICHER;
        TEdit *Edit2;
        TButton *QUITTER;
        void __fastcall QUITTERClick(TObject *Sender);
        void __fastcall OUVRIRE_FENETREClick(TObject *Sender);
        void __fastcall VALIDERClick(TObject *Sender);
        void __fastcall AFFICHERClick(TObject *Sender);
        void __fastcall VALIDER_FENETREClick(TObject *Sender);
private:	// Déclarations de l'utilisateur

public:		// Déclarations de l'utilisateur
        __fastcall TForm1(TComponent* Owner);
        int val1;
int val2;
int val3;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
