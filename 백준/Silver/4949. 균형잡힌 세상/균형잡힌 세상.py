import sys
input = sys.stdin.readline

def check(text):
    mark = []
    for i in text:
        if i == "(" or i == "[":
            mark.append(i)
        elif i == ")":
            if not mark or mark[-1] == "[":
                return "no"
            mark.pop()
        elif i == "]":
            if not mark or mark[-1] == "(":
                return "no"
            mark.pop()
    return "yes" if not mark else "no"

while True:
    text = list(map(str, input().rstrip()))

    if text == ["."]:
        break
    print(check(text))
