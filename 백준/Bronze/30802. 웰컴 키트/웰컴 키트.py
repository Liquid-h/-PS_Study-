import sys
input = sys.stdin.readline

n = int(input())

participants = list(map(int, input().split()))

t, p = map(int, input().split())

result_t = 0

for i in participants:
    result_t += i // t

    if i % t != 0:
        result_t += 1

print(result_t)
print(n//p , n %p)

