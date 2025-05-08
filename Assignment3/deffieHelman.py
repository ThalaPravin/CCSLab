p=int(input("Enter prime No:"))
proot=int(input("Enter primitive root:"))
Akey=int(input("Enter private key A:"))#private key as input
Bkey=int(input("Enter private key B:"))

if(p>Akey):
    Apublic=pow(proot,Akey,p)#calculating public key
    Bpublic=pow(proot,Bkey,p)
    
    print("Public key for A",Apublic)
    print("Public key for B",Bpublic)
    
    SharedkeyB=pow(Apublic,Bkey,p) 
    SharedkeyA=pow(Bpublic,Akey,p) 
else:
    print("Wrong Input Recheck")
    
    
print("Shared Session key of A",SharedkeyA)

print("Shared Session key of B",SharedkeyB)