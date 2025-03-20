#include <iostream>
#include <cmath>
using namespace std;

long long power(long long a, long long b, long long P) {
    if (b == 1)
        return a;
    else
        return (((long long)pow(a, b)) % P);
}

int main() {
    long long P, G, x, a, y, b, ka, kb;

    P = 23;
    cout << "The value of P : " << P << endl;

    G = 9;
    cout << "The value of G : " << G << endl;

    a = 4;
    cout << "The private key a for Sahil : " << a << endl;

    b = 3;
    cout << "The private key b for Pravin : " << b << endl;

    x = power(G, a, P);
    cout << "The public key x for Sahil : " << x << endl;

    y = power(G, b, P);
    cout << "The public key y for Pravin : " << y << endl;

    ka = power(y, a, P);
    kb = power(x, b, P);

    cout << "Secret key for Sahil is : " << ka << endl;
    cout << "Secret key for Pravin is : " << kb << endl;

    return 0;
}
