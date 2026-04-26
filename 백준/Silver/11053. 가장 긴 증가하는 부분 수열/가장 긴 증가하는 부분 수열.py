import sys
import bisect
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

result = [a[0]]

for i in range(1, n):
    if a[i] > result[-1]:
        result.append(a[i])
    else:
        low_num = bisect.bisect_left(result, a[i])
        result[low_num] = a[i]
 
print(len(result)) # 1보다 2를 먼저 풀어벌임;;