def solution(array):
    big_number = max(array)
    index = array.index(big_number)
    li = []
    li.append(big_number)
    li.append(index)
    return li