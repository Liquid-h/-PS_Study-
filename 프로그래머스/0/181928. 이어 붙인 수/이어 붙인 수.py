def solution(num_list):
    num1 = ""
    num2 = ""
    for i in range(len(num_list)):
        if num_list[i] % 2 == 0:
            num1 += str(num_list[i])
        else:
            num2 += str(num_list[i])
    return int(num1)+int(num2)