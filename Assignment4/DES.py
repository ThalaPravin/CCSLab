
from Crypto.Cipher import DES
from secrets import token_bytes
key = token_bytes(8)
cipher = DES.new(key, DES.MODE_EAX)
data = (input("Enter msg :-")).encode()
nonce = cipher.nonce
ciphertext = cipher.encrypt(data)
print("Cipher text of given msg:-",ciphertext)
cipher = DES.new(key, DES.MODE_EAX,nonce=nonce)
plaintext = cipher.decrypt(ciphertext)
print("Plaintext:-",plaintext)
