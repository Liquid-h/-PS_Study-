import sys
input = sys.stdin.readline

def worm(x, y):
    farm[y][x] = 0

    for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
        nx, ny = x + dx, y + dy

        if 0 <= nx < m and 0 <= ny < n and farm[ny][nx] == 1:
            worm(nx, ny)

t = int(input())

for _ in range(t):
    m, n, k = map(int, input().split())
    farm = [[0] * m for _ in range(n)]

    for _ in range(k):
        x, y = map(int, input().split())
        farm[y][x] = 1

    worm_count = 0
    for y in range(n):
        for x in range(m):
            if farm[y][x] == 1:
                worm(x, y)
                worm_count += 1

    print(worm_count)