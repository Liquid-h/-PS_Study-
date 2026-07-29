def solution(n, control):
    for word in control:
        if word == 'w':
            n += 1
        elif word == 's':
            n -= 1
        elif word == 'd':
            n += 10
        elif word == 'a':
            n -= 10
    return n

def function(n, control):
    answer = 0
    for c in control:
        if c == 'w':
            n += 1
        elif c == 's':
            n -= 1
        elif c == 'd':
            n += 10
        elif c == 'a':
            n -= 10
    return n