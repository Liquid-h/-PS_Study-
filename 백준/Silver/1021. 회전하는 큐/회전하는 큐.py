import sys
from collections import deque

input = sys.stdin.readline

n, m = map(int, input().split())
q = list(map(int, input().split()))

rotate = deque(range(1, n + 1))
Good_bye_Boj= 0

for k in q:
    while True:
        if rotate[0] == k:
            rotate.popleft()
            break
        else:
            if rotate.index(k) <= len(rotate) // 2:
                rotate.rotate(-1)
                Good_bye_Boj += 1
            else:
                rotate.rotate(1)
                Good_bye_Boj += 1

print(Good_bye_Boj)