//
// Created by xparh on 11/29/2021.
//

#include "Duz.h"
#include <cmath>

void Duz::pisi(ostream &it) const {
    Linija::pisi(it);
    it << "[duz: A" << this->A << ", B" << this->B << ']';
}

double Duz::duzina() const {
    return sqrt(pow(A.aps() - B.aps(), 2) + pow(A.ord() - B.ord(), 2));
}

Duz *Duz::kopija() const {
    return new Duz(*this);
}
