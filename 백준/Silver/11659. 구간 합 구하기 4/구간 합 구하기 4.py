import sys
input = sys.stdin.readline

n , m = map(int, input().split())
arr = list(map(int, input().split()))
total_sum = [0] * (n + 1)

for i in range(len(arr)):
    total_sum[i + 1] = total_sum[i] + arr[i]

for i in range(m):
    a, b = map(int, input().split())
    print(total_sum[b] - total_sum[a - 1])

