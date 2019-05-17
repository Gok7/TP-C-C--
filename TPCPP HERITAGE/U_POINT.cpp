

class C_POINT {
private:
    char Nom;
public:
    C_POINT(int,int,char);
    void Affiche(); //utiliser cout
};

C_POINT::C_POINT(int x, int y, char Nom):C_POINT(x,y) {
    
    this->Nom=Nom;
}
