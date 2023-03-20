#include <iostream>
#include <string>
using namespace std;
class Point {
	
private:
    int x,y;
public:
    Point();
    Point(int);
    Point(int , int);
    void affiche()const;
    void affiche(const char*)const;
};

    Point::Point(){
	}
    Point::Point(int _x){
    	x=_x;
    	y=_x;
	}
    Point::Point(int _x, int _y){
    	x=_x;
    	y=_y;
	}
	
	
	
    void Point::affiche()const{
        cout << "Les coordonnees du point sont: " <<"(" << x << "," << y << ")" << endl;
    }

    void Point::affiche(const char* chaine)const{
        cout << chaine << " : ";
        affiche();
    }



int main() {
    Point point1;
    Point point2(4);
    Point point3(10, 4);

    point1.affiche(); 
    point2.affiche("p2"); 
    point3.affiche("p3");

    return 0;
}








