import sys
input = sys.stdin.readline

result = set()
count = 0

while True:
    n,m = map(int, input().split())
    if n == 0 and m == 0:
        break
    for i in range(n):
        result.add(input().rstrip())
    for i in range(m):
        if input().rstrip() in result:
            count += 1
    print(count)
    result.clear()
    count = 0

