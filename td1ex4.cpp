#include <iostream>
using namespace std;

float puissance(float x,int n)
{
float puissance = 1;
for(int i=1;i<=n;i++)
puissance = puissance * x;
return puissance;
}

int main()
{
int nbr_entier;
float nbr_flottant;
char charactere;
long nbr_entier_long; 
unsigned int nbr_entier_non_signe;
float p1,p2,p3,p4,p5;

cout << "saisir un nombre entier" << endl;
cin >> nbr_entier;
p1 = puissance(nbr_entier,4);
cout << "saisir un nombre flottant" << endl;
cin >> nbr_flottant ;
p2 = puissance(nbr_flottant,4);
cout << "saisir un nombre entier long" << endl;
cin >> nbr_entier_long ;
p3 = puissance(nbr_entier_long,4);
cout << "saisir un nombre entier non signe" << endl;
cin >> nbr_entier_non_signe ;
p4 = puissance(nbr_entier_non_signe,4);
cout << "saisir un charactere" << endl;
cin >> charactere ;
p5 = puissance(charactere,4);
cout << "p1 = " <<p1<<endl;
cout << "p2 = " <<p2<<endl;
cout << "p3 = " <<p3<<endl;
cout << "p4 = " <<p4<<endl;
cout << "p5 = " <<p5<<endl;
}
