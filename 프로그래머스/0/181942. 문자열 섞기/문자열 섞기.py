def solution(str1, str2):
    result = []
    result.append(str1[0])
    while len(result) < len(str1) + len(str2):
        if len(result) % 2 == 0:
            result.append(str1[len(result) // 2])
        else:
            result.append(str2[len(result) // 2])
    return ''.join(result)
