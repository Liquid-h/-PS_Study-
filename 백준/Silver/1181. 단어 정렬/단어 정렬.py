import sys
input = sys.stdin.readline

n = int(input())

k = []

for i in range(n):

    word = input().strip()
    k.append(word)

k = list(set(k))
k.sort(key=lambda x: (len(x), x))

for word in k:
    print(word)