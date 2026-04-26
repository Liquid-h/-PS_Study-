import sys
input = sys.stdin.readline

n = int(input())

set1 = set(map(int, input().split()))

m = int(input())

li = list(map(int, input().split()))

for num in li:
    if num in set1:
        print("1")
    else:
        print("0")

