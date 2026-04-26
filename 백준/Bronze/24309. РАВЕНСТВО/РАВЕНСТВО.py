import sys
input = sys.stdin.readline

li =[]

for _ in range(3):
    li.append(int(input()))

x = (li[1] - li[2]) // li[0]

print(x)