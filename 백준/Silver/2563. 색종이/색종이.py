a = [[0 for _ in range(100)]for _ in range(100)]

t = int(input())

count = 0

for _ in range(t):
    x, y = map(int, input().split())
    for i in range(x, x+10):
        for j in range(y, y+10):
            a[i][j] = 1

for i in range(100):
    for j in range(100):
        if a[i][j] == 1:
            count += 1
            
print(count)