#include <iostream>
#include <conio.h>
#include<malloc.h>
using namespace std;

struct essai
{
int n;
float x;
};

void Remise_a_zero(struct essai *essai){	
  essai->n = 0 ;
  essai->x = 0.0;
}

void Remise_a_zero1(struct essai &essai){	
  essai.n = 0 ;
  essai.x = 0.0;
}

main()
{
  struct essai *ess;
  ess= (essai*)malloc(sizeof(essai));
  struct essai essai1;
  Remise_a_zero(ess);
  Remise_a_zero1(essai1);
  cout << "valeurs apres remise a zero en utilisant le passage par adresse sont : " << ess->n << " " << ess->x << endl; 
  cout << "valeurs apres remise a zero en utilisant le passage par reference sont : " << essai1.n << " " << essai1.x << endl; 

}
