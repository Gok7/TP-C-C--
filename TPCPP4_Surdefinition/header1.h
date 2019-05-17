#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class C_VECTEUR_3D{
protected:
    float x,y,z;
public:
    C_VECTEUR_3D(float c1=0.0,float c2=0.0,float c3=0.0);
    ~C_VECTEUR_3D();
    friend int operator==(const C_VECTEUR_3D&,const C_VECTEUR_3D&);
    void Affiche();
};

C_VECTEUR_3D::C_VECTEUR_3D(float c1,float c2,float c3){
    x=c1;
    y=c2;
    z=c3;
}
C_VECTEUR_3D::~C_VECTEUR_3D(){
    
}
void C_VECTEUR_3D::Affiche(){
    
   cout<<"Coord" << x << " " << y <<" " << z << endl;
}

int operator==(const C_VECTEUR_3D &a,const C_VECTEUR_3D &b){
    
    if((a.x==b.x)&&(a.y==b.y)&&(a.z==b.z)) return 1;
    else return 0;
   
}

