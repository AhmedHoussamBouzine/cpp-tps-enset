#include <iostream>

using namespace std;

int main(int argc, char** argv){
int n;
float x;

 cout << "donnez un entier et un flottant\n"  << endl; // afficher un message a l'utilisateur pour saisir un nombre entier et un autre flottant
 
 cin >> n >> x; // la saisie des deux nombres ( l'entier et le flottant)
 
 cout << "le produit de "  << n  << " par " << x << endl << "est : " << x*n << endl; // affichage du produit des deux nombres 

}


