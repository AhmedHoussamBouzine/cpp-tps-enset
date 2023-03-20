#include <iostream>
#include <string>
using namespace std;

class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    void homotethie(float);
    void affiche();
    float det(vecteur);
    float det_adresse(vecteur*);
    float det_reference(vecteur&);
};
vecteur::vecteur(float abs = 0., float ord = 0.)
{
    x = abs;
    y = ord;
}
void vecteur::homotethie(float val)
{
    x = x * val;
    y = y * val;
}
void vecteur::affiche()
{
    cout << "x = " << x << " y = " << y << "\n";
}


float vecteur::det(vecteur vt)
{
    return x * vt.y - y * vt.x;
}




float vecteur::det_adresse(vecteur *vt)
{
   return x * vt->y - y * vt->x;
}




float vecteur::det_reference(vecteur &vt)
{
   return x * vt.y - y * vt.x;
}


int main()
{
    vecteur u(5, 3);
    vecteur v(9, 7);
    
    cout << "Determinant : " << u.det(v) << "\n";
    

    cout << "Determinant (fonction adresse) : " << u.det_adresse(&v) << "\n";
    
    
    cout << "Determinant (fonction reference) : " << u.det_reference(v) << "\n";
    
    return 0;
}





