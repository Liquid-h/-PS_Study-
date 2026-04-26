t = int(input())

li = []

for i in range(t):

    a, b, c = map(int, input().split())

    c1 = (a + b )**2 + c**2
    c2 = (b + c )**2 + a**2
    c3 = (c + a )**2 + b**2

    li.append((c1, c2, c3))

    print(min(li[0]))

    li.clear()

