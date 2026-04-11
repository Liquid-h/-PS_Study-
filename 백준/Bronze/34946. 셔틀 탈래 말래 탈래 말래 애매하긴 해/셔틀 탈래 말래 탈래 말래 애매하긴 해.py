import sys
input = sys.stdin.readline

# m = n + a + b + c

a,b,c,d = map(int, input().split())

shuttle = a + b 

if shuttle > d and c > d:
    print("T.T")
elif shuttle > d and c <= d:
    print("Walk")
elif shuttle <= d and c > d: # ㅠㅠ 대문자
    print("Shuttle")
else:
    print("~.~")