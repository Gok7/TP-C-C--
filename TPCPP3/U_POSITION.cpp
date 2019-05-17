
class C_POSITION {
protected:
    int x;
    int y;
public:
    C_POSITION(int = 0, int = 0);
    void Deplace(int, int);
    void Affiche(); //utiliser cout
    friend void fn();
};

void C_POSITION::Affiche(){
    cout<<" x :"<<x<<endl;
    cout<<" y :"<<y<<endl;
}

void C_POSITION::Deplace(int x, int y){
    this->x+=x;
    this->y+=y;
}

friend void C_POSITION::fn(C_POSITION){
    cout<<x<<endl;
}