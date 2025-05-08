from math import gcd
p=int(input("Enter p:"))
q=int(input("Enter q:"))

def is_prime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True

if not (is_prime(p) and is_prime(q) and p != q):
    print("Numbers are not prime numbers.")
    exit()
    
n=p*q
msg=5
phi=(p - 1) * (q - 1)

e = next(i for i in range(2, phi) if gcd(i, phi) == 1)
d=gcd(e,phi)

C = pow(msg, e, n)  
M = pow(C, d, n)

print(f"\nPublic Key: ({e}, {n})")
print(f"Private Key: ({d}, {n})")
print(f"Encrypted: {C}\nDecrypted: {M}")