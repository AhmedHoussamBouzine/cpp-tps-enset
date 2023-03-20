#include <iostream>

using namespace std;

class complex{
double re,im; // partie reelle et imaginaire du nombre complexe 
complex(double reel, double imaginaire = 0); // constructeur 
// complex manipulations
double real(complex); // retourne la partie reelle
double imag(complex); // retourne la partie imaginaire 
complex conj(complex); // the complex conjugate 
double norm(complex); // the square of the magnitude
double arg(complex); // the angle in radians 
// Create a complex object given polar coordinates 
complex polar(double mag, double angle=0); 
// Binary Operator Functions 
complex operator+(complex); 
friend complex operator+(double, complex); // donnent une signification aux deux 
friend complex operator+(complex , double); // notations a complex + double // et adouble + complex a // la notion de a fonction amie a sera etudiee lore du prochain chapitre 

complex operator- (complex);
friend complex operator- (double, complex); // idem avec la soustraction
friend complex operator- (complex, double);
complex operator* (complex);
friend complex operator* (complex, double); // idem avec la multiplication friend complex operator* (double, complex);
complex operator/ (complex);
friend complex operator/ (complex, double); // idem avec la division friend complex operator/ (double, complex);
int operator= (complex); // retourne 1 si égalité
int operator!= (complex); //retourne 1 si non égalité complex operator-(); // oppose du vecteur

}; 

// Complex stream I/O
ostream operator<< (ostream , complex); // permet d'utiliser cout avec un complexe 
istream operator>>(istream,complex); // permet d'utiliser cin avec un complexe




