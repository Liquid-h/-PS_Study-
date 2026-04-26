a = [[0 for _ in range(9)]for _ in range(9)]
max = 0
x = 0
y = 0

for i in range(9):
    a[i] = list(map(int, input().split()))

for i in range(9):
    for j in range(9):
        if max <= a[i][j]:
            max = a[i][j]
            x = i+1
            y = j+1
print(max)
print(x, y)