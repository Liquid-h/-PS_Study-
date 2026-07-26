def solution(num_list):
    num1 = 0
    num2 = 1
    for num in num_list:
        num1 += num
    for num in num_list:
        num2 *= num
    if num1**2 > num2:
        return 1
    else:
        return 0