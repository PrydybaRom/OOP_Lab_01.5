#include "Rational.h"
using namespace std;
#include <iostream>

Rational makeRational(Pair fraction)
{
    Rational a;
    if (!a.Init(fraction)) {
        cout << "wrong argument to Init" << endl;
    }
    return a;
}


int main() {
    Pair p(10, 2);

    Rational r1;
    Rational r2;

    r1.Read();
    r2.Read();

    r1.Display();
    cout << endl;
    r2.Display();

    int num = p.getFirst();
    cout<< "Pair First number " << r1.numberToWords(num) << endl;

    if (r1 > r2) {
        cout << "r1 is greater than r2" << endl;
    }
    else {
        cout << "r1 is not greater than r2" << endl;
    }

    if (r1 < r2) {
        cout << "r1 is not greater than r2" << endl;
    }
    else {
        cout << "r1 is greater than r2" << endl;
    }

    return 0;
}