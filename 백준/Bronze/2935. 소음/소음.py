import sys
input = sys.stdin.readline

a = int(input())
um = input().strip()
b = int(input())

if um == "+":
    print(a + b)
else:
    print(a * b)