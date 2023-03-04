#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<string.h>
using namespace std;

class Point {
private:
    int x, y;
	char couleur;
public:
    void initialiser(int x = 0, int y = 0, char couleur = 'F' ) {
        this->x = x;
        this->y = y;
        this->couleur = couleur;
    }

    void deplacer(int dx, int dy) {
        x = dx;
        y = dy;
    }

    void afficher();

    void effacer() {
    }
};

void gotoxy(int x, int y)
{
  static HANDLE handle = NULL;  
  if(!handle)
  handle = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD point = { x, y };  
  SetConsoleCursorPosition(handle,point);
}

void Point::afficher(){
        gotoxy(x,y);
        cout << "*";
    }

int main() {
    Point p;
    p.initialiser(0,0,3); 
    p.afficher(); 

    p.deplacer(3, 4);
    p.afficher();  

}

