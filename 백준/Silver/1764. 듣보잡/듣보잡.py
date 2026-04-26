import sys
import collections # 라이브러리 Goat
input = sys.stdin.readline

n,m = map(int, input().split())

a = [ input().rstrip() for _ in range(n) ]
b = [ input().rstrip() for _ in range(m) ]

intersection = [collections.Counter(a) & collections.Counter(b)]

result = list(intersection[0].elements())
result.sort()

print(len(result))
for i in result:
    print(i)
