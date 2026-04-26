import sys
input = sys.stdin.readline

n = int(input())

def finger(n):

    if n % 8 == 1:
        return 1
    elif n % 8 == 2:
        return 2
    elif n % 8 == 3:
        return 3
    elif n % 8 == 4:
        return 4
    elif n % 8 == 5:
        return 5
    elif n % 8 == 6:
        return 4
    elif n % 8 == 7:
        return 3
    elif n % 8 == 0:
        return 2

print(finger(n))



