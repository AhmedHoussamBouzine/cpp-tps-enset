#include <iostream>
#include <string>
using namespace std;

class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    vecteur homotethie(float);
    vecteur* homotethie_adresse(float);
    vecteur& homotethie_reference(float);
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
vecteur vecteur::homotethie(float val)
{
    x = x * val;
    y = y * val;
    return {x,y};
}

vecteur* vecteur::homotethie_adresse(float val)
{
    x = x * val;
    y = y * val;
    return this;
}

vecteur& vecteur::homotethie_reference(float val)
{
    x = x * val;
    y = y * val;
    return *this;
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





