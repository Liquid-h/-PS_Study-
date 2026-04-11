import sys
input = sys.stdin.readline

# m = n + a + b + c

n = int(input())

if n > 7:
    n = n % 7
if n == 2:
    print(1)
else:
    print(0)