
class C_POINT1{
    //privé par defaut
    int x;
    int y;
public:
    C_POINT1(int=0,int=0);
    friend void Affiche();
};

C_POINT1::C_POINT1(int abs,int ord){
    x=abs;
    y=ord;
}
