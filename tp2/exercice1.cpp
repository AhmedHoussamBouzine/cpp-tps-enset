#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Point
{
private:
    int x, y,couleur;

public:
    void initialiser(int _x = 0, int _y = 0, int _couleur = 3)
    {
        this->x = _x;
        this->y = _y;
        this->couleur = _couleur;
    }

    void afficher()
    {
        static HANDLE handle = NULL;
        COORD coords;
        coords.X = x;
        coords.Y = y;
        if (!handle)
        handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(handle, coords);
        SetConsoleTextAttribute(handle, couleur);
        cout << "*";
        SetConsoleTextAttribute(handle, 7);
    }

    void effacer()
    {
        x = 0;
        y = 0;
        couleur=0;
    }
    void deplacer(int dx, int dy)
    {
    	effacer();
        x = dx;
        y = dy;
        couleur=3;
    }

};

int main()
{
    Point point;
    point.initialiser(0, 0);
    point.afficher(); 
    point.deplacer(8, 6);
    cout << "\nle point apres deplacement :" << endl;
    point.afficher();
}
