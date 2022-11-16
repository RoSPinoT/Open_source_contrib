k=int(input())
for i in range(k):
    print(" "*(k-i),"X"*(i*2+1))
for i in range(k-2,-1,-1):
    print(" "*(k-i),"X"*(2*i+1))
