import sys
input = sys.stdin.readline

n,m = map(int, input().split())

li = [i for i in range(1, n+1)]

returned = list(map(int, input().split()))

for i in range(m):
    if returned[i] in li:
        li.remove(returned[i])

if len(li) == 0:
    print("*")
else:
    print(*li)


