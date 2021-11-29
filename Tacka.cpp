//
// Created by xparh on 11/29/2021.
//

#include "Tacka.h"

ostream &operator<<(ostream &it, const Tacka &t) {
    return it << "(" << t.x << ", " << t.y << ")";
}

void Tacka::pisiNiz(ostream &it, const Tacka *niz, int duz) {
    it << '(';
    for (int i = 0; i < duz; i++) {
        if (i) it << ',';
        it << niz[i];
    }
    it << ')';
}
