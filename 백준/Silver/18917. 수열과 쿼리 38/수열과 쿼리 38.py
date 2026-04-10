import sys
input = sys.stdin.readline

m = int(input())
query = []
counts = {}
query_sum = 0
query_xor = 0

for _ in range(m):
    cmd = list(map(int, input().split()))
    q = cmd[0]

    if q == 1:
        query_sum += cmd[1]
        query_xor ^= cmd[1]
        num = cmd[1]
        query.append(num)
        counts[num] = counts.get(num, 0) + 1

    elif q == 2:
        num = cmd[1]
        query_sum -= num
        query_xor ^= num
        counts[num] = counts.get(num, 0) - 1

    elif q == 3:
        print(query_sum)
    elif q == 4:
        print(query_xor)
