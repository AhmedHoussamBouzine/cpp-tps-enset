#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

class hasard
{
private:
	int *val;
	int size;

public:
	hasard(int _max, int _size)
	{
		this->size = _size;
		val = new int[_size];
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
			val[i] = rand() % _max;
	}

	void afficher()
	{
		cout << " Les valeurs sont: ";
		for (int i = 0; i < size; i++)
		{
			cout << val[i] << "\t";
		}
		cout << endl;
	}
};

int main()
{
	int _max, _size;
	cout << "Saisir max =  ";
	cin >> _max;
	cout << "Saisir size =  ";
	cin >> _size;
	hasard hasard(_max, _size);
	hasard.afficher();
}

