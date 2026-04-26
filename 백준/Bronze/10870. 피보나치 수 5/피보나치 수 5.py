n = int(input())

a,b = 0,1
li =[]

for i in range(0, n+1):
    li.append(a)
    a,b = b, a+b

print(li[n])