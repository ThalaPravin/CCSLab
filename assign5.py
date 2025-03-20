import hashlib as hsh

string = input("Enter a String For Hashing : ")
md5_hash = hsh.md5(string.encode()).hexdigest()
sha256_hash = hsh.sha256(string.encode()).hexdigest()

print("MD5:", md5_hash)
print("SHA256:", sha256_hash)




