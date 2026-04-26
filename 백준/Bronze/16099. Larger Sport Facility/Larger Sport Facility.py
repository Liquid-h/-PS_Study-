import sys
input = sys.stdin.readline

def place(x1,y1,x2,y2):
    place1 = x1 * y1
    place2 = x2 * y2
    if place1 > place2:
        return "TelecomParisTech"
    elif place1 < place2:
        return "Eurecom"
    else:
        return "Tie"

t = int(input())

for _ in range(t):
    x1,y1,x2,y2= map(int,input().split())

    print(place(x1,y1,x2,y2))