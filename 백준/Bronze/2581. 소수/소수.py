import sys

M = int(sys.stdin.readline())
N = int(sys.stdin.readline())

def ㅠㅠ(x):
    if x < 2:
        return False
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            return False
    return True

Good_Bye_Boj = [i for i in range(M, N+1) if ㅠㅠ(i)]

if Good_Bye_Boj:
    print(sum(Good_Bye_Boj))
    print(min(Good_Bye_Boj))
else:
    print(-1)