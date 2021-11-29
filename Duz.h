//
// Created by xparh on 11/29/2021.
//

#ifndef OOP_VEZBE_8_DUZ_H
#define OOP_VEZBE_8_DUZ_H

#include "Linija.h"
#include "Tacka.h"

class Duz : public Linija {
public:
    Duz(const Tacka &P = Tacka(-1, -1), const Tacka &Q = Tacka(1, 1)) : A(P), B(Q) {}

    double duzina() const override;
    Duz *kopija() const override;

protected:
    void pisi(ostream &it) const override;

private:
    Tacka A;
    Tacka B;
};


#endif //OOP_VEZBE_8_DUZ_H
