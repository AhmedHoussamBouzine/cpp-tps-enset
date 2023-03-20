#include <iostream>
#include <conio.h>

using namespace std;
class Note {
private:
    float value;
public:
    void input();
    void print();
    void set(float);
    float get();
    string apprecier();
};

void Note::input() {
    do {
        cout << "Entrez une valeur entre 0 et 20 : ";
        cin >> value;
    } while (value < 0 || value > 20);
}

void Note::print() {
    cout << "La note est : " << value << endl;
}

void Note::set(float _value) {
    value = _value;
}

float Note::get() {
        return value;
}

string Note::apprecier() {
    if (value < 10)
        return "faible";
    else if (value < 12 && value >= 10)
        return "Passable";
    else if (value < 14 && value >= 12)
        return "Assez bien";
    else if (value < 16 && value >= 14)
        return "bien";
    else if (value < 18 && value >= 16)
        return "Tres bien";
    else
        return "Excellent";
}

void Harmonise(Note& note) {
    if (note.get() < 8)
        note.set(0);
    else
        note.set(8);
}

float Moyenne(Note* notes, int nbr) {
    float sum = 0;
    for (int i = 0; i < nbr; i++) {
        sum += notes[i].get();
    }
    float moy = sum / nbr;
    return moy ;
}

void Appreciation(Note* notes, int nbr) {
	cout << "------------------------------------------------";
    for (int i = 0; i < nbr; i++) {
        cout << "\nLa note  " << i+1 << "  est : " << notes[i].get() << endl ;
		cout << "L'appreciation est : " << notes[i].apprecier() << endl;
		cout << "------------------------------------------------";
    }
}


int main() {
    int n;
    cout << "\nSaisir le nombre des eleves: ";
    cin >> n;
    Note* notes = new Note[n];

    for (int i = 0; i < n; i++) {
        notes[i].input();
    }

    cout << "\nLa liste des notes : " << endl;
    
    Appreciation(notes, n);

    cout << "\nLa moyenne de la classe : " << Moyenne(notes, n) << endl;

    for (int i = 0; i < n; i++) {
        if (notes[i].get() < 15)
            Harmonise(notes[i]);
    }

    cout << "\nLa moyenne de la classe apres harmonisation : " << Moyenne(notes, n) << endl;

    getch();
}



