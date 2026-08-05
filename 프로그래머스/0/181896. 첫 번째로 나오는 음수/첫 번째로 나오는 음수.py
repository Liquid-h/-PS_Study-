def solution(num_list):
    answer = 0
    for num in num_list:
        answer += 1
        if num < 0:
            return answer - 1
    if num_list[-1] > 0:
        answer = -1
        return answer
