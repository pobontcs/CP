n=int(input("Total Heights: "))
pillars=[]
maxlenght=0
for i in range(n):
    x=0
    x=int(input())
    pillars+=[x]
    
    if i==0:
        pass
    else:
        if pillars[i-1]<x:
            maxlenght=x
print(maxlenght)