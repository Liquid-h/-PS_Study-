import sys

input = sys.stdin.readline

n = int(input())

count = [0] * 10001

for i in range(n):#배열을 따로 저장하면 안됨 ㅇㅅㅇ
    num = int(input())
    count[num] += 1#바로바로 증가

for i in range(10001):
    if count[i] != 0:
        
        for j in range(count[i]):
            print(i)