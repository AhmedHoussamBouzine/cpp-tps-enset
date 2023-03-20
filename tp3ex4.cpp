#include <iostream>
#include <string>
using namespace std;
class Point {
	
private:
    int x,y;
public:
    Point(){
	}
    Point(int _x){
    	x=_x;
    	y=_x;
	}
    Point(int _x, int _y){
    	x=_x;
    	y=_y;
	}
	~Point(){
	}
	
    void affiche()const{
        cout << "Les coordonnees du point sont: " <<"(" << x << "," << y << ")" << endl;
    }

    void affiche(const char* chaine)const{
        cout << chaine << " : ";
        affiche();
    }
//        int coincidence(Point *point) const {
//         return (x == point->x && y == point->y);
//    }

    
//    int coincidence(Point point) const {
//         return (x == point.x && y == point.y);
//    }

    
   int coincidence(Point* point) const {
         return (x == point->x && y == point->y);
    }
};


int main() {
    Point point1;
    Point point2(4);
    Point point3(10, 4);

    point1.affiche(); 
    point2.affiche("p2"); 
    point3.affiche("p3");
if (point1.coincidence(&point2)) {
    std::cout << "Les points p1 et p2 sont coïncidents." << std::endl;
} else {
    std::cout << "Les points p1 et p2 ne sont pas coïncidents." << std::endl;
}
    return 0;
}








