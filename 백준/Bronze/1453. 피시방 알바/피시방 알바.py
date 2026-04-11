import sys
input = sys.stdin.readline

n = int(input())
arr = [0] * 101
count = 0

num = list(map(int, input().split()))

for i in num:
    if arr[i]==0:
        arr[i] = 1
        count += 1

print(n -count)

