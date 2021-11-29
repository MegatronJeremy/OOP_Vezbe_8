//
// Created by xparh on 11/29/2021.
//

#include "Poligon.h"
#include "Duz.h"

double Poligon::duzina() const {
    return Izlomljena::duzina() + Duz(tem[0], tem[n-1]).duzina();
}

Poligon *Poligon::kopija() const {
    return new Poligon(*this);
}

void Poligon::pisi(ostream &it) const {
    Linija::pisi(it);
    it << "[poligon: ";
    Tacka::pisiNiz(it, tem, n);
    it << ']';
}
