#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
class Point
{
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0)
    {
        this->x = _x;
        this->y = _y;
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
        SetConsoleTextAttribute(handle, 3);
        cout << "*";
        SetConsoleTextAttribute(handle, 7);
    }
    void effacer()
    {
        x = 0;
        y = 0;
    }
    void deplacer(int dx, int dy)
    {
    	effacer();
        x = dx;
        y = dy;
    }

};
void scene()
{
    Point u(0.0);
    u.afficher();
    cout << "\nle point apres deplacement :" << endl;
    u.deplacer(8, 9);
    u.afficher();
}
int main()
{
   scene();
}

