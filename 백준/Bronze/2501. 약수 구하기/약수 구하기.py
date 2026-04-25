N, K = map(int, input().split())

Good_Bye_Boj = []
for i in range(1, N+1):
    if N % i == 0:
        Good_Bye_Boj.append(i)

if len(Good_Bye_Boj) >= K:
    print(Good_Bye_Boj[K-1])
else:
    print(0) # 잘가...BOJ....