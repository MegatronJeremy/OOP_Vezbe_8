//
// Created by xparh on 11/29/2021.
//

#ifndef OOP_VEZBE_8_LINIJA_H
#define OOP_VEZBE_8_LINIJA_H

#include <iostream>
using namespace std;

class Linija {
public:
    Linija() = default;
    Linija(const Linija&) {};
    Linija &operator=(const Linija&) {
        return *this;
    }

    virtual ~Linija() {};

    virtual double duzina() const = 0;
    virtual Linija *kopija() const = 0;

    friend ostream &operator<<(ostream &it, const Linija &l);

protected:
    virtual void pisi(ostream &it) const;

private:
    static int posl_id;
    int id = ++posl_id;
};

#endif //OOP_VEZBE_8_LINIJA_H
