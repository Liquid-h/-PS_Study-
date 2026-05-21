def solution(a, b):
    min_value = min(a, b)
    max_value = max(a, b)
    result = 0
    while min_value != max_value + 1:
        result += min_value
        min_value += 1
    return result
