def solution(arr):
    removed_num = min(arr)
    arr.remove(removed_num)
    if arr == []:
        return [-1]
    return arr