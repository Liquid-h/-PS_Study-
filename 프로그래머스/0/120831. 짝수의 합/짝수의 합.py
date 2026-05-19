def solution(n):
    answer = 0
    k = 2
    while k <= n:
        answer += k
        k += 2
    return answer