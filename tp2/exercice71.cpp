#include <iostream>
#include <time.h>
#include<cstdlib>
using namespace std;

class hasard{
	private:
		int val[10];
	public:
	hasard(int _max){
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
		val[i] = rand()%_max;
}

void afficher(){
	cout <<" Les valeurs sont: ";
	for(int i = 0; i < 10; i++){
		cout <<val[i] <<"\t";
	}
	cout <<endl;
}
};



int main(){
	int _max;
	cout << "Saisir max =  ";
	cin >> _max;	
	hasard hasard(_max);
	hasard.afficher();
}

