#include <iostream>
using namespace std;

class SuiteAr
{
private:
	int nbr_de_termes;
	int *Val;

public:
SuiteAr(int nb, int Nul)
	{
	    nbr_de_termes = nb;
		Val = new int[nbr_de_termes];

		for (int i = 0; i < nbr_de_termes; i++)
			Val[i] = i * Nul;
	}

~SuiteAr()
	{
		delete[] Val;
	}

	void afficher()
	{
		cout << "Les " << nbr_de_termes << " premiers termes de la suite sont : ";
		for (int i = 0; i < nbr_de_termes; i++)
		{
			cout << Val[i] << "\t";
		}
		cout << endl;
	}
};

int main()
{
	int nbr_de_termes, raison;

	cout << "Saisir la raison : ";
	cin >> raison;
	cout << "Saisir nbr de termes : ";
	cin >> nbr_de_termes;
	SuiteAr suite(nbr_de_termes, raison);
	suite.afficher();
}

