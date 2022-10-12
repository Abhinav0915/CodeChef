# cook your dish here
for i in range(int(input())):
    w=int(input())
    l=list(map(int,input().split()[:w]))
    p,o,u,y=l[0],l[0],abs(l[0]),abs(l[0])
    for i in l:
        if i<p:
            p=i
        elif i>o:
            o=i
        u=min(u,abs(i))
        y=max(y,abs(i))
    print(min(p*o,u*u),y*y)