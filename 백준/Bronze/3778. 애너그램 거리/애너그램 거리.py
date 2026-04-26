import sys
import collections
input = sys.stdin.readline

def anagarm(word1, word2):
    counter1 = collections.Counter(word1)
    counter2 = collections.Counter(word2)

    anagarm_distance = 0

    for key in set(counter1.keys()) | set(counter2.keys()):
        anagarm_distance += abs(counter1[key] - counter2[key])

    return anagarm_distance

t = int(input())

for i in range(1, t + 1):
    word1 = input().rstrip()
    word2 = input().rstrip()

    anagarm_distance = anagarm(word1, word2)

    print(f'Case #{i}: {anagarm_distance}')

