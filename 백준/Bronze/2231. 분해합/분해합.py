import sys
input = sys.stdin.readline

# m = n + a + b + c

n = int(input())
digits = len(str(n))

for i in range(max(1 , n - 9 * digits), n ):#자릿수 찾기

    if sum(map(int, str(i))) + i == n:
        print(i)
        break
else:
    print(0)