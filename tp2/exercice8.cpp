#include <iostream>
#include <math.h>
using namespace std;

class Complexe
{
private:
	double pr, pi;

public:

void initialiser(double _pr, double _pi)
{
	this->pr = _pr;
	this->pi = _pi;
}

double calculerModule()
{
	return sqrt(pr * pr + pi * pi);
}

void afficher()
{
	cout << "\tLe nombre : " << pr << " + " << "i" << pi  << endl;
}
Complexe(double _pr, double _pi)
{
	this->pr = _pr;
	this->pi = _pi;
}

Complexe()
{
}

Complexe(double _pr)
{
	this->pr = _pr;
	this->pi = 0;
}
};


int main()
{

	Complexe nbr1;
	Complexe nbr2(3.4);
	Complexe nbr3(1.3, 2.3);

	cout << "1ere nombre complexe : " << endl;
	nbr1.initialiser(2, 3);
	double module1 = nbr1.calculerModule();

	cout << "2eme nombre complexe : " << endl;
	double module2 = nbr2.calculerModule();

	cout << "3eme nombre complexe : " << endl;
	double module3 = nbr3.calculerModule();

	cout << "\nnbr1 =" ;
	nbr1.afficher() ;
	cout << " son module = " << module1 << endl;
	cout << "\nnbr2 =" ;
	nbr2.afficher();
	cout  << " son module = " << module2 << endl;
	cout << "\nnbr3 =" ;
    nbr3.afficher() ;
	cout << " son module = " << module3 << endl;


}

