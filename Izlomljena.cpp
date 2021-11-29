//
// Created by xparh on 11/29/2021.
//

#include "Izlomljena.h"
#include "Duz.h"

void Izlomljena::brisi() {
    delete[] tem;
    tem = nullptr;
    n = 0;
}

void Izlomljena::premesti(Izlomljena &i) {
    this->tem = i.tem;
    i.tem = nullptr;
    this->n = i.n;
}

void Izlomljena::kopiraj(const Tacka *niz, int k) {
    this->tem = new Tacka[this->n = k];
    for (int i = 0; i < n; i++) {
        this->tem[i] = niz[i];
    }
}

Izlomljena::Izlomljena(const Izlomljena &i) {
    kopiraj(i.tem, i.n);
}

Izlomljena::Izlomljena(Izlomljena &&i){
    premesti(i);
}

Izlomljena::~Izlomljena() {
    brisi();
}

Izlomljena &Izlomljena::operator=(const Izlomljena &i) {
    if (this != &i) {
        brisi();
        kopiraj(i.tem, i.n);
    }
    return *this;
}

Izlomljena &Izlomljena::operator=(Izlomljena &&i) {
    if (this != &i) {
        brisi();
        premesti(i);
    }
    return *this;
}

Izlomljena::Izlomljena(const Tacka *niz, int k) {
    kopiraj(niz, k);
}

double Izlomljena::duzina() const {
    double d = 0;
    for (int i = 0; i < n - 1; i++) {
        d += Duz(tem[i], tem[i+1]).duzina();
    }
    return d;
}

Izlomljena *Izlomljena::kopija() const {
    return new Izlomljena(*this);
}

void Izlomljena::pisi(ostream &it) const {
    Linija::pisi(it);
    it << "[izlomljena: ";
    Tacka::pisiNiz(it, tem, n);
    it << ']';
}
