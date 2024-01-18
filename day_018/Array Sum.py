# your code goes here
n = int(input())
list1 = list(map(int,input().split()))
sum = 0
for i in range(len(list1)):
    sum = sum + list1[i]
print(sum)