def solution(a, b):
    um = str(a) + str(b)
    if int(um) >= 2*a*b:
        return int(um)
    else:
        return 2*a*b
