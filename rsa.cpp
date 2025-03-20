// ASSIGNMENT NO. 2
// Title: Implement RSA algorithm using C++.
// Pravin Somnath Avhad
// Roll No: 08
// Batch: T1
// PRN No. : UIT22M1008

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long long p = 7; 
    long long q = 11;
    long long n = p * q;
    long long phi = (p - 1) * (q - 1);

    long long e = 3;
    while (gcd(e, phi) != 1) {
        e += 2;
    }

    long long d = 1;
    while ((e * d) % phi != 1) {
        d++;
    }

    cout <<endl<< "Public Key: (" << e << ", " << n << ")" << endl;
    cout << "Private Key: (" << d << ", " << n << ")" << endl;

    long long message = 9;
    cout << "Original Message: " << message << endl;

    long long encrypted = modExp(message, e, n);
    cout << "Encrypted Message: " << encrypted << endl;

    long long decrypted = modExp(encrypted, d, n);
    cout << "Decrypted Message: " << decrypted << endl;
    cout  << endl;

    return 0;
}


// Output:
// Public Key: (7, 77)
// Private Key: (43, 77)
// Original Message: 9
// Encrypted Message: 37
// Decrypted Message: 9