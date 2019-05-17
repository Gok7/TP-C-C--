
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class C_cercle {
private:
    float x, y, rayon;
public:
    C_cercle(float,float,float);
    void Init(float, float, float);
    void Deplace(float, float);
    void Affiche(C_cercle);
    int Compare(C_cercle, C_cercle);
    float Surface(C_cercle);
};

C_cercle::C_cercle(float P_x,float P_y,float P_rayon){//constructeur
    x=P_x;
    y=P_y;
    rayon=P_rayon;
}

/*
void C_cercle::Init(float abs, float ordonne, float P_rayon) {
    x = abs;
    y = ordonne;
    rayon = P_rayon;
}
*/
float C_cercle::Surface(C_cercle P_cercle){
    return(M_PI*(P_cercle.rayon*P_cercle.rayon));
}

int C_cercle::Compare(C_cercle P_cercle1, C_cercle P_cercle2) {
    if (P_cercle1.rayon > P_cercle2.rayon) return 1;
    else return 0;
}
void C_cercle::Deplace(float delta_x, float delta_y) {
    x += delta_x;
    y += delta_y;
}

void C_cercle::Affiche(C_cercle P_cercle) {
    cout << "x : " << P_cercle.x << "  y : " << P_cercle.y << "  rayon : " 
            << P_cercle.rayon <<endl;
}

int main(int argc, char** argv) {
    bool resultat = 0;
    float Surface=0;
    C_cercle cercle1(10,20,30);
    C_cercle cercle2(20,40,60);
    
    //cercle1.Init(10, 20, 30); pas besoin (constructeur voir precedemment)
    cercle1.Deplace(2, 2);
    cercle1.Affiche(cercle1);
    cercle2.Affiche(cercle2);
    Surface=cercle1.Surface(cercle1);
    resultat=cercle1.Compare(cercle2,cercle1);
            //retourne 1 si le 1er argument est superieur
    cout<<"surface cercle 1: "<<Surface<<" resultat comparaison : "<<resultat<<
            endl;
    return 0;
}

