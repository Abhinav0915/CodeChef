# import math
tcase = int(input())

def map_int(arr):
    for i in range(len(arr)):
        arr[i] = int(arr[i])
    return arr

def gcd(x,y):
    # r = x % y
    if x % y==0 :
        
        return y
    
    else:
    
        return gcd(y, x % y)
    

for i in range(tcase):
    l_arr = int(input())
    arr = map_int(input().split())
    temp = dict()
    ans = 0
    for i in arr:
        if i not in temp:
            temp[i] = 1
        else:
            temp[i] += 1
    
    for i in temp:
        if temp[i] == 2:
            ans += 1
        elif temp[i] > 2:
            t = temp[i]
            ans += int((t * (t - 1)) / 2) 
    print(ans)     
