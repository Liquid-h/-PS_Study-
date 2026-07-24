def solution(emergency):
    answer = []

    for index in emergency:
        high_num = 0

        for value in emergency:
            if value > index:
                high_num += 1

        rank = high_num + 1
        answer.append(rank)

    return answer