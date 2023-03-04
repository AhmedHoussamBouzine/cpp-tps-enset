#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
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
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        cout << "*";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }

    void effacer()
    {
        x = 0;
        y = 0;
    }
    ~Point(){
    	cout << "\nle point est detruit" << endl;
	}

};
    void scene()
    {
        Point u(5,6);
        u.afficher();
        cout << "\nle point apres deplacement :" << endl;
        u.deplacer(2, 9);
        u.afficher();
    }
int main()
{
   scene();
   getch();
}

