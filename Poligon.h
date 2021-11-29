//
// Created by xparh on 11/29/2021.
//

#ifndef OOP_VEZBE_8_POLIGON_H
#define OOP_VEZBE_8_POLIGON_H

#include "Izlomljena.h"

class Poligon : public Izlomljena {
public:
    Poligon(const Tacka *niz, int k) : Izlomljena(niz, k) {}

    double duzina() const override;
    Poligon *kopija() const override;

protected:
    void pisi(ostream &it) const override;

private:

};


#endif //OOP_VEZBE_8_POLIGON_H
