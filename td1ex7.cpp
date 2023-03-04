#include <iostream>
#include <conio.h>
using namespace std;

void affiche(float x, int n = 0)
{
  if (n = 0)
  {
    cout << " resultat =  1" << endl;
  }

  float puissance = 1;
  for (int i = 1; i <= n; i++)
  {
    puissance = puissance * x;
  }
  cout << "Le resultat  puissance = " << puissance << endl;
}

void affiche(int n, float x = 0)
{
    if (x = 0)
  {
    cout << "Le resultat =  0" << endl;
  }
  else{	
  float puissance = 1;
  for (int i = 1; i <= n; i++)
  {
    puissance = puissance * x;
  }
  cout << "Le resultat  puissance = " << puissance << endl;
  }

}

main()
{
  int n, n1 = 0;
  float base, m = 0;
  cout << "saisir la base x comme nombre flottant" << endl;
  cin >> base;
  cout << "saisir la puissance n" << endl;
  cin >> n;
  cout << "le resultat de cet appel affiche(x) avec x est un nombre flottant est : " << endl;
  affiche(base);
  cout << "le resultat de cet appel affiche(x) avec x est un nombre entier est :  " << endl;
  affiche(n) ;
  cout << "le resultat de cet appel affiche(x,n) est :  " << endl;
  affiche(base,n);
  cout << "le resultat de cet appel affiche(n,x) est :  "<< endl;
  affiche(n,base);
  getch();
}
