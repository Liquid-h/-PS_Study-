import sys
input = sys.stdin.readline

# 꿍실냐옹~!

n, m = map(int, input().split())
good_bye_boj = [list(map(int, input().split())) for _ in range(n)]

summing = [[0] * (n + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, n + 1):
        summing[i][j] = summing[i-1][j] + summing[i][j-1] - summing[i-1][j-1] + good_bye_boj[i-1][j-1]

for _ in range(m):
    x1, y1, x2, y2 = map(int, input().split())
    print(summing[x2][y2] - summing[x1-1][y2] - summing[x2][y1-1] + summing[x1-1][y1-1])