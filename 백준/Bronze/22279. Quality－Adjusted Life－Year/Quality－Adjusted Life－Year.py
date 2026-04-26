import sys
input = sys.stdin.readline

n= int(input())

result = 0

for i in range(n):
    a, b = map(float, input().split())
    result += a * b
    
print(result)

