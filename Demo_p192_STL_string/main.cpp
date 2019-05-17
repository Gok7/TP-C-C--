/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 3 octobre 2013, 08:29
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    string Chaine_1;
    cout<<Chaine_1<<endl;
    
    string Chaine_2="chaine no 2";
    cout<<Chaine_2<<endl;
    
    string Chaine_3="chaine no 3";
    cout<<Chaine_3<<endl;
    
    Chaine_1=string("La ")+Chaine_2+" est copiee dans chaine 1";
    cout<<Chaine_1<<endl;
    
    cout<<"Saisir une chaine : ";
    cin>>Chaine_1;
    cout<<Chaine_1<<endl<<endl;
    
    cout<<"La chaine saisie fait : " <<Chaine_1.size()<<" caracteres\n";
    
    Chaine_2.clear();
    for(int L_index=0;L_index<Chaine_1.size();++L_index){
        Chaine_2+=Chaine_1[L_index];
        Chaine_2+=',';
    }
    
    Chaine_2+="FIN";
    cout<<"Chaine 2"<<Chaine_2<<endl<<endl;
    
    const char* L_Message=Chaine_2.c_str();
    cout<<"Au format c_str : "<<L_Message<<endl<<endl;
    
    Chaine_3="1234";
    //cout<<"La valeur est : "<<std::stoi(Chaine_3)<<endl<<endl;
    
    Chaine_2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    Chaine_2.erase(2,3);
    cout<<Chaine_2<<endl;
    Chaine_1=Chaine_2.substr(0,10);
    
    cout<<Chaine_1<<endl;
    
    

    return 0;
}

