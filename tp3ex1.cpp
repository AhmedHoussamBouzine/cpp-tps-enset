#include <iostream>

using namespace std;
class Compteur {
   	
public:
	static int counter;
    Compteur();
    ~Compteur();
};
   int Compteur::counter = 0;
   
   
    Compteur::Compteur() {
        ++counter;
    
    }
    
    Compteur::~Compteur() {
        --counter;
    }

void essai(){
    Compteur u;
    Compteur v;
}


int main() {
    Compteur a;
    essai();
    Compteur b;
    cout << "Le nombre d'objets est n = " << Compteur::counter << endl;
    return 0;
}


