import sys
input = sys.stdin.readline
from collections import Counter


t = int(input())

for _ in range(t):
    word = input().rstrip().replace(" ", "")

    counts = Counter(word)

    most_frequent = counts.most_common(2)
    if len(most_frequent) > 1 and most_frequent[0][1] == most_frequent[1][1]:
        print("?")
    else:
        print(most_frequent[0][0])

