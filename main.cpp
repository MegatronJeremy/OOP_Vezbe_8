#include "Tacka.h"
#include "Linija.h"
#include "Duz.h"
#include "Izlomljena.h"
#include "Poligon.h"
#include <iostream>

using namespace std;

Linija *citaj() {
    cout << "Vrsta (D, I, P)?: ";
    char vrs;
    cin >> vrs;
    Tacka *niz = nullptr;
    Linija *lin = nullptr;
    switch(vrs) {
    case 'd' : case 'D' :
        cout << "A? ";
        double xA, yA;
        cin >> xA >> yA;
        cout << "B? ";
        double xB, yB;
        cin >> xB >> yB;
        return new Duz(Tacka(xA, yA), Tacka(xB, yB));
    case 'i' : case 'I' : case 'p' : case 'P' :
        cout << "Broj temena? ";
        int n;
        cin >> n;
        niz = new Tacka[n];
        for (int i = 0; i < n; i++) {
            cout << i+1 << ". teme? ";
            double x, y;
            cin >> x >> y;
            niz[i] = Tacka(x, y);
        }
        lin = nullptr;
        if (vrs == 'i' || vrs == 'I') lin = new Izlomljena(niz, n);
        if (vrs == 'p' || vrs == 'P') lin = new Poligon(niz, n);
        delete[] niz;
        return lin;
    default:
        return nullptr;
    }
}

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    if (n <= 0) return -1;

    Linija **niz = new Linija *[n];

    for (int i = 0; i < n;) {
        if (Linija *lin = citaj()) niz[i++] = lin;
        else cout << "*** Nepoznata vrsta linije! ***" << endl;
    }

    cout << endl << "Procitano:" << endl;

    double max = niz[0]->duzina();
    int imax = 0;

    for (int i = 0; i < n; i++) {
        double d = niz[i]->duzina();
        cout << *niz[i] << " d = " << niz[i]->duzina() << endl;
        if (d > max) {
            max = d;
            imax = i;
        }
    }

    cout << "Najduza linija: " << *niz[imax] << endl;

    for (int i = 0; i < n; delete niz[i++]);
    delete[] niz;

    return 0;
}
