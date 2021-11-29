//
// Created by xparh on 11/29/2021.
//

#ifndef OOP_VEZBE_8_IZLOMLJENA_H
#define OOP_VEZBE_8_IZLOMLJENA_H

#include "Linija.h"
#include "Tacka.h"

// Linija *l = new Izlomljena(...);
// delete l;    <-- sa virtuelnim destruktorom linije poziva destruktor Izlomljene

class Izlomljena : public Linija {
public:
    Izlomljena(const Tacka *niz, int k);

    Izlomljena(const Izlomljena &);
    Izlomljena(Izlomljena&&);
    ~Izlomljena();

    Izlomljena &operator=(const Izlomljena&);
    Izlomljena &operator=(Izlomljena &&);

    double duzina() const override;
    Izlomljena *kopija() const override;

protected:
    Tacka *tem;
    int n;

    void pisi(ostream &it) const override;

private:
    void brisi();
    void premesti(Izlomljena &);
    void kopiraj(const Tacka*, int);

};


#endif //OOP_VEZBE_8_IZLOMLJENA_H
