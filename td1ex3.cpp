#include <iostream>
#include <conio.h> 

using namespace std;
 main()
{
int n; // declaration d'un nombre entier
char tc[30],c; // declaration d'un tableau des entiers et un tableau des caracteres et un caractere c 
float x; // declaration d'un nombre flottant
cout<<"Saisir un entier:"; //  message pour saisir un nombre entier
cin>>n;  //saisie d'un nombre entier
cout<<"Saisir un réel:"; // message pour saisir un nombre flottant
cin>>x; // 
cout<<"Saisir une phrase:"; //message pour saisir une phrase
cin>>tc;  // copier de la phrase dans le tableau
cout<<"Saisir une lettre:"; // message pour saisir une lettre
cin>>c; //  saisie du caractere
cout<<"Affichage : "<<n<<" "<<x<<" "<<tc<<" "<<c<<"\n"; // affichage des informations saisies
getch() ;
} 
