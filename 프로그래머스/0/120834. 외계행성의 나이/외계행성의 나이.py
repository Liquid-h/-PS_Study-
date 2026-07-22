def solution(age):
    mapping = {}

    for i in range(10):
        mapping[str(i)] = chr(ord('a') + i)
    result = ''
    for digit in str(age):
        result += mapping[digit]   
    return result