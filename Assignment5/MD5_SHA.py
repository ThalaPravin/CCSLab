import hashlib

data = "Hello"

result = hashlib.md5(data.encode())
print("Result for hashlib.md5():", result)

print("MD5 Hex Digest:", result.hexdigest())


SHA = hashlib.sha1(data.encode())
print("Result for hashlib.sha1():", SHA)
print("SHA-1 Hex Digest:", SHA.hexdigest())