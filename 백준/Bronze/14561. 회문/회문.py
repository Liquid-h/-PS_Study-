import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    li = []
    a , n = map(int, input().split())
    while a > 0:
        li.append(a%n)
        a //= n
    if li == li[::-1]:
        print("1")
    else:        
        print("0")



