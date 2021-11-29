//
// Created by xparh on 11/29/2021.
//

#include "Linija.h"

int Linija::posl_id;

void Linija::pisi(ostream &it) const {
    it << id;
}

ostream &operator<<(ostream &it, const Linija &l) {
    l.pisi(it);
    return it;
}
