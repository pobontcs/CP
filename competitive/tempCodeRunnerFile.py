

def solve():
    lis=list(map(int,input().split()))
    mx=sum(lis[1:])
    
    mn=sum(lis[:4])
    
    print(mn,mx)

solve()
