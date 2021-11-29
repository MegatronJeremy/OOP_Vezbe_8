//
// Created by xparh on 11/29/2021.
//

#ifndef OOP_VEZBE_8_TACKA_H
#define OOP_VEZBE_8_TACKA_H

#include <iostream>
using namespace std;

class Tacka {
public:
    Tacka(double xx = 0, double yy = 0) : x(xx), y(yy) {}

    double aps() const { return x; }
    double ord() const { return y; }

    friend ostream &operator<<(ostream &it, const Tacka &t);
    static void pisiNiz(ostream &it, const Tacka *niz, int duz);

private:
    double x, y;
};


#endif //OOP_VEZBE_8_TACKA_H
