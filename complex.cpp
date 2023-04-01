#include <iostream>
#include <cmath>
using namespace std;

class complex
{
private:
    double re, im; // partie reelle et imaginaire du nombre complexe
public:
    complex(double reel, double imaginaire = 0); // constructeur

    // complex manipulations
    double real(complex);  // retourne la partie réelle
    double imag(complex);  // retourne la partie imaginaire
    complex conj(complex); // the complex conjugate
    double norm(complex);  // the square of the magnitude
    double arg(complex);   // the angle in radians

    // Create a complex object given polar coordinates
    complex polar(double mag, double angle = 0);

    // Binary Operator Functions
    complex operator+(complex);

    friend complex operator+(double, complex); // donnent une signification aux deux
    friend complex operator+(complex, double); // notations « complex + double »
                                               // et «double + complex »
                                               // la notion de « fonction amie » sera étudiée lors du prochain chapitre

    complex operator-(complex);

    friend complex operator-(double, complex); // idem avec la soustraction
    friend complex operator-(complex, double);

    complex operator*(complex);

    friend complex operator*(complex, double); // idem avec la multiplication
    friend complex operator*(double, complex);

    complex operator/(complex);

    friend complex operator/(complex, double); // idem avec la division
    friend complex operator/(double, complex);

    int operator==(complex);          // retourne 1 si égalité
    int operator!=(complex, complex); // retourne 1 si non égalité
    complex operator-();              // oppose du vecteur
};

// Complex stream I/O
ostream operator<<(ostream, complex); // permet d’utiliser cout avec un complexe
istream operator>>(istream, complex); // permet d’utiliser cin avec un complexe

// implementations

complex::complex(double reel, double imaginaire = 0)
{
    this.re = reel;
    this.im = imaginaire;
}

double complex::real(complex _complex)
{
    return _complex.re;
}
double complex::imag(complex _complex)
{
    return _complex.im;
}
double complex::conj(complex _complex)
{
    complex conj = complex::complex(_complex.re, -(_complex.im));
    return conj;
}
double complex::norm(complex _complex)
{
    return (_complex.re * _complex.re) + (_complex.im * _complex.im);
}
double complex::arg(complex _complex)
{
    return atan(c.im, c.re);
}
complex complex::polar(double mag, double angle = 0)
{
    complex polar = complex(mag * cos(angle), mag * sin(angle));
    return polar;
}
complex complex::operator+(complex _complex)
{
    complex res;
    res.re = re + _complex.re;
    res.im = im + _complex.im;
    return res;
}
complex complex::operator+(double d, complex _complex)
{
    complex res;
    res.re = d + _complex.re;
    res.im = _complex.im;
    return res;
}
complex complex::operator+(complex _complex, double d)
{
    complex res;
    res.re = _complex.re + d;
    res.im = _complex.im;
    return res;
}

complex complex::operator-(complex _complex)
{
    complex res;
    res.re = re - _complex.re;
    res.im = im - (_complex.im);
    return res;
}
complex complex::operator-(double d, complex _complex)
{
    complex res;
    res.re = d - _complex.re;
    res.im = -(_complex.im);
    return res;
}
complex complex::operator-(complex _complex, double d)
{
    complex res;
    res.re = _complex.re - d;
    res.im = _complex.im;
    return res;
}

complex complex::operator*(complex _complex)
{
    complex res;
    res.re = re * _complex.re - im * _complex.im;
    res.im = re * _complex.im + im * _complex.re;
    return res;
}
complex complex::operator*(double d, complex _complex)
{
    complex res;
    res.re = d * _complex.re;
    res.im = d * _complex.im;
    return res;
}
complex complex::operator*(complex _complex, double d)
{
    complex res;
    res.re = _complex.re * d;
    res.im = _complex.im * d;
    return res;
}

complex complex::operator/(complex _complex)
{
    double norme = norm(_complex);
    complex res;
    res.re = (re * _complex.re + im * _complex.im) / norme;
    res.im = (im * _complex.re - re * _complex.im) / norme;
    return res;
}
complex complex::operator/(double d, complex _complex)
{
    complex res;
    res.re = d * _complex.re;
    res.im = d * _complex.im;
    return d * _complex.conj() / _complex.norm();
    ;
}
complex complex::operator/(complex _complex, double d)
{
    complex res;
    res.re = _complex.re / d;
    res.im = _complex.im / d;
    return res;
}

int complex::operator==(complex _complex)
{
    return (re == _complex.re && im == _complex.im);
}
int complex::operator!=(complex _complex, complex _complex2)
{
    return !operator==(_complex, _complex2);
}
complex complex::operator-()
{
    complex temp = complex(-re, -im);
    return temp;
}

std::ostream& operator<<(std::ostream& out, complex _complex) {
    out << _complex.re << (_complex.im >= 0 ? "+" : "") << "i" << _complex.im ;
    return os;
}

std::istream& operator>>(std::istream& in, complex& _complex) {
    in >> _complex.re >> _complex.im;
    return in;
}
