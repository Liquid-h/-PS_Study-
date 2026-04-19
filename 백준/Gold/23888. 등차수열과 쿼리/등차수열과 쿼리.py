import sys
import math
input = sys.stdin.readline

def gcd(x, y):
    while y:
        x, y = y, x % y
    return x

a, d = map(int, input().split())
t = int(input())

for _ in range(t):
    query = list(map(int, input().split()))
    q = query[0]
    l = query[1]
    r = query[2]
    
    # 구간의 시작 항 구하기
    al = a + (l - 1) * d
    
    if q == 1:
        n = r - l + 1
        ar = a + (r - 1) * d
        sum_sequence = n * (al + ar) // 2
        print(sum_sequence)
        
    elif q == 2:
        if l == r:
            print(al)
        else:
            gcd_value = gcd(al, d)
            print(gcd_value)