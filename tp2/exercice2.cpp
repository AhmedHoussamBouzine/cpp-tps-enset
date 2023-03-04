#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Point
{
private:
    int x, y;
    int couleur;

public:
    void initialiser(int x = 0, int y = 0, int couleur = 3)
    {
        this->x = x;
        this->y = y;
        this->couleur = couleur;
    }

    void deplacer(int dx, int dy)
    {
        effacer();
        x = dx;
        y = dy;
    }

    void afficher()
    {
        static HANDLE h = NULL;
        COORD coords;
        coords.X = x;
        coords.Y = y;
        if (!h)
            h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(h, coords);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), couleur);
        cout << "*";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }

    void effacer()
    {
        x = 0;
        y = 0;
        int tmp = couleur;
        couleur = 0;
        couleur = tmp;
    }

};
    void scene()
    {
        Point u;
        u.initialiser(3, 4);
        u.afficher();
        cout << "\nle point apres deplacement :" << endl;
        u.deplacer(2, 9);
        u.afficher();
    }
int main()
{
   scene();
}

