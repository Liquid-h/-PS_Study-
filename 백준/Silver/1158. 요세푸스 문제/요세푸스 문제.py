import sys
input = sys.stdin.readline

n,k = map(int, input().split())
arr = []
result = []
count = 0

for i in range(1, n+1):

    arr.append(i)

while arr:

    count = (count + k - 1) % len(arr)
    result.append(arr.pop(count))

print('<' + ', '.join(map(str, result)) + '>')