def solution(my_string):
    mapping = { 'a', 'e', 'i', 'o', 'u' }
    answer = ''
    for char in my_string:
        if char not in mapping:
            answer += char
    return answer