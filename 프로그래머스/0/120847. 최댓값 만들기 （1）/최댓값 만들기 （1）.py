def solution(numbers):
    max_num = 0
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            product = numbers[i] * numbers[j]
            if product > max_num:
                max_num = product
    return max_num