n , m = map(int, input().split())

buket = []

def change(i, j):
    buket[i-1:j] = reversed(buket[i-1:j])


for i in range(n):
    buket.append(i+1)
for i in range(m):
    i, j = map(int, input().split())
    change(i, j)

print(*buket)