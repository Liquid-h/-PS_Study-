import sys
input = sys.stdin.readline

n = input()

li1 = set(map(int, input().split()))

m = input()

li2 = set(map(int, input().split()))

result = []

for i in li2:
    if i in li1:
        result.append(1)
    else:
        result.append(0)

print(" ".join(map(str, result)))
