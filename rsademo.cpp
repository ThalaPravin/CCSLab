#include <iostream>
#include <tuple>

using namespace std;

long long modInverse(long long e, long long phi) {
    long long t = 0, newT = 1;
    long long r = phi, newR = e;
    while (newR != 0) {
        long long quotient = r / newR;
        tie(t, newT) = make_tuple(newT, t - quotient * newT);
        tie(r, newR) = make_tuple(newR, r - quotient * newR);
    }
    if (r > 1) return -1;
    if (t < 0) t += phi;
    return t;
}

int main() {
    long long e = 3;
    long long phi = 11;
    long long inverse = modInverse(e, phi);
    if (inverse == -1) {
        cout << "Modular inverse does not exist." << endl;
    } else {
        cout << "Modular inverse is " << inverse << endl;
    }
    return 0;
}