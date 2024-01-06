def Divisior(n):
    l1 = []
    for i in range(1,n+1):
        if n%i==0:
            l1.append(i)
    print(l1)
    
x = int(input())
Divisior(x)