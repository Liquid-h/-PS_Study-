def solution(n):
    n = list(map(int, str(n)))
    n.sort(reverse=True)
    result =(''.join(map(str, n)))
    return int(result)


