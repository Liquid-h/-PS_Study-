import sys
input = sys.stdin.readline

a,b,c = map(int, input().split())

um = abs(a) + abs(b)

if c - um>=0 and (c-um)%2==0:
    print("YES")
else:
    print("NO")




