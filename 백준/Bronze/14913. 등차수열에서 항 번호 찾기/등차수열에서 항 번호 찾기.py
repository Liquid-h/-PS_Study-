import sys
input = sys.stdin.readline

a,d,k = map(int, input().split()) # k = a + (n-1)*d, n = (k-a)/d + 1
if d == 0:
    if a == k:
        print(1)
    else:
        print("X")
else:
    n = (k - a) // d + 1
    if (k - a) % d == 0 and n > 0:
        print(n)
    else:
        print("X")  

