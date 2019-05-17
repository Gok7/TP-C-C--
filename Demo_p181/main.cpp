/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 2 novembre 2013, 12:00
 */

#include <cstdlib>
#include <iostream>
#include <typeinfo>
using namespace std;

void Fonction_Test_1() {
    cout << __PRETTY_FUNCTION__ << endl;
}

template<typename TYPE_GENE> void Fonction_Test_2() {

    cout << __PRETTY_FUNCTION__ << endl;
    cout << "---> Le parametre generique est : " << typeid (TYPE_GENE).name() << endl;
}

template<> void Fonction_Test_2<double>() {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "Traitement specifique dans le cas ou le "
            "parametre generique est un double" << endl;
}

int main(int argc, char** argv) {

    cout << "Adresse de la fonction Fonction_Test_1() : "
            << hex << (void*) Fonction_Test_1 << endl << endl;
    cout << "Adresse de la fonction Fonction_Test_2<int> : "
            << hex << (void*) Fonction_Test_2<int> << endl << endl;
    cout << "Adresse de la fonction Fonction_Test_2<float> : "
            << hex << (void*) Fonction_Test_2<float> << endl << endl;
    cout << "Adresse de la fonction Fonction_Test_1<double> : "
            << hex << (void*) Fonction_Test_2<double> << endl << endl;

    Fonction_Test_1();
    Fonction_Test_2<int>();
    Fonction_Test_2<char*>();
    Fonction_Test_2<double>();
    return 0;
}

