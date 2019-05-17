//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "u1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Unit1"
#pragma resource "*.dfm"
TBox_Pricipale *Box_Pricipale;

using namespace std;
               /*
//#define debug_socket
#define NB_MAX 500

SOCKET h_socket;
SOCKADDR_IN process_distant;
SOCKADDR_IN process_local;

char l_data[NB_MAX];
char pseudo_envoi[NB_MAX];
char pseudo[NB_MAX];
char ajout[10] = " : ";
char info_pseudo[NB_MAX];


void init_DLL() {
    WSADATA l_info_dll; //fabrication d'une variable de type structure WSADATA
    if ((WSAStartup(MAKEWORD(2, 0), &l_info_dll)) != 0) {
        exit;
    }
#ifdef debug_socket
    cout << "Version : " << l_info_dll.wVersion << endl << "Description : " << l_info_dll.szDescription << endl;
#endif
}

void affiche_erreur() {
    DWORD l_code_erreur = GetLastError();
    char l_message[512];
    FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, l_code_erreur, 0, l_message, 512, NULL);
     //formatmessage(origine du message (vien du systeme d'exploitation ,
     // lien avec le premier , code de l'erreur ,  , adresse du message ,
     //taille max du message , on peut ajouter autre chose)
}

void creation_socket() {
    h_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (h_socket == INVALID_SOCKET) {
        affiche_erreur();
    }
#ifdef debug_socket
    cout << "Valeur du socket: " << h_socket << endl;
#endif
}

void fin_DLL() {
    int l_ok = WSACleanup();
#ifdef debug_socket
    if (l_ok == 0) cout << "Fermeture correcte" << endl;
    else cout << "Probleme lors de la fermeture" << endl;
#endif
}

void creation_info_envoi(const char* P_Adresse, int P_port) {

    process_distant.sin_family = AF_INET;
    process_distant.sin_port = htons(P_port);
    process_distant.sin_addr.S_un.S_addr = inet_addr(P_Adresse);
}


void emission(const void * p_data, int p_taille) {
    int l_taille = sendto(h_socket, (char*) p_data, p_taille, 0,
    (sockaddr*) & process_distant, sizeof (process_distant));
    
    if (l_taille == SOCKET_ERROR) affiche_erreur();
#ifdef debug_socket
    cout << "Taille de l'envoi: " << l_taille << endl;
#endif
}

int test_emmission_message() {
    char texte[500], message[500], pseudo_fin[50];
    int index, i = 0;
    cout << "Message a envoyer (ecrire fin pour arreter) :";
    gets(message);
    if (message[0] == 'f' && message[1] == 'i' && message[2] == 'n') {
        cout << "Fermeture de la discussion ";
        pseudo_fin[0] = '*';
        strcat(pseudo_fin, pseudo);
        sendto(h_socket, pseudo_fin, strlen(pseudo_fin), 0, (sockaddr*) & process_distant, sizeof (process_distant));
        return true;
    }
    if (message[0] == '/' && message[1] == 't') {
        for (index = 0; index <= strlen(pseudo_envoi); index++) {
            texte[index] = pseudo_envoi[index];
        }

        for (index = strlen(pseudo_envoi); index <= (strlen(pseudo_envoi) + strlen(message)); index++) {
            texte[index] = message[i];
            i++;
        }
        //        for (int index=0)//*************************************ICI*******************
        cout << texte << endl;
        sendto(h_socket, texte, strlen(texte), 0, (sockaddr*) & process_distant, sizeof (process_distant));
        
        return false;
    }
    for (index = 0; index <= strlen(pseudo_envoi); index++) {
        texte[index] = pseudo_envoi[index];
    }

    for (index = strlen(pseudo_envoi); index <= (strlen(pseudo_envoi) + strlen(message)); index++) {
        texte[index] = message[i];
        i++;
    }
    //    int cle = 2;
    //        char crypte[500];
    //    for (int l_index = 0; l_index < strlen(texte); l_index++) {
    //        crypte[l_index]=texte[l_index]+cle;
    //        cout<<crypte[l_index];
    //    }
    //    
    //    cout<<endl<<crypte;
#ifdef debug_socket
    cout << "Message crypte envoyer: " << crypte;
#endif

    int l_taille = sendto(h_socket, texte, strlen(texte), 0, (sockaddr*) & process_distant, sizeof (process_distant)); //sendto(le socket, ce quon doit marquer,longueur du table,obsolete,pointeur sur la fonction en général sock_addr (ou sock_addr_in ou autre)elle est général, taille de la structure du process_distant) 


    if (l_taille == SOCKET_ERROR) affiche_erreur();
#ifdef debug_socket
    cout << "Taille de l'envoi: " << l_taille << endl;
#endif
    return false;
}

int Identification() {
    cout << "Entrer votre pseudo : ";
    gets(pseudo_envoi);
    strcpy(pseudo, pseudo_envoi);
}

void creation_msg_avant_texte() {
    strcat(pseudo_envoi, ajout);
}

void envoi_info_connection() {
    info_pseudo[0] = '&';
    strcat(info_pseudo, pseudo_envoi);
    int l_taille = sendto(h_socket, info_pseudo, strlen(info_pseudo), 0, (sockaddr*) & process_distant, sizeof (process_distant)); //sendto(le socket, ce quon doit marquer,longueur du table,obsolete,pointeur sur la fonction en général sock_addr (ou sock_addr_in ou autre)elle est général, taille de la structure du process_distant)
    //   pseudo[strlen(pseudo) - strlen(tableau)] = '\0';
    if (l_taille == SOCKET_ERROR) affiche_erreur();

#ifdef debug_socket
    cout << "Taille de l'envoi de l'info connexion: " << l_taille << endl;
#endif
}

void creation_info_adressage() {
    process_local.sin_family = AF_INET;
    process_local.sin_port = htons(9999);
    process_local.sin_addr.S_un.S_addr = INADDR_ANY; //c'est n'importe quel carte 
}

void reception() {
    sockaddr_in l_info_distant;
    int l_taille_info = sizeof (l_info_distant);
    int l_taille = recvfrom(h_socket, (char*) l_data, sizeof (l_data) - 1, 0, (sockaddr*) & l_info_distant, &l_taille_info);
    cout << l_data << endl << "A";
    if (l_taille == SOCKET_ERROR) affiche_erreur();
    else {
        l_data[l_taille] = 0;

        //   decryptage();
#ifdef debug_socket
        cout << "Message crypter recu : " << l_data << endl << "Message decrypter recu : ";
#endif
    }
}


          */

           

//---------------------------------------------------------------------------
__fastcall TBox_Pricipale::TBox_Pricipale(TComponent* Owner):TForm(Owner)

{

}


//---------------------------------------------------------------------------
void __fastcall TBox_Pricipale::QuitterClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------



void __fastcall TBox_Pricipale::New_wordClick(TObject *Sender)
{
        IP_Destinataire -> Show();

}
//---------------------------------------------------------------------------



void __fastcall TBox_Pricipale::ValiderOnClick(TObject *Sender)
{

       Input_box_user->Text="";
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------











