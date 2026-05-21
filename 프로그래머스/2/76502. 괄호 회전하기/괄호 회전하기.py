from collections import deque

def solution(s):
    n = len(s)
    attempts = 0
    for i in range(n):
        rotated = s[i:] + s[:i]
        stack = deque()
        map = {'(': ')', '{': '}', '[': ']'}
        for c in rotated:
            if c in map:
                stack.append(c)
            else:
                if not stack or map[stack.pop()] != c:
                    break
        else: 
            if not stack:
                attempts += 1
    return attempts