def solution(numer1, denom1, numer2, denom2):
    answer = []
    a = numer1 * denom2 + numer2 * denom1
    b = denom1 * denom2
    for i in range(min(a, b), 0, -1):
        if a % i == 0 and b % i == 0:
            a //= i
            b //= i
    answer.append(a)
    answer.append(b)
    return answer