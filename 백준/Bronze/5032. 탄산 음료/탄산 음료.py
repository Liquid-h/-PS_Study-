a, b, c = map(int, input().split())


total_bottles = a + b 
result = 0


while total_bottles >= c:
    total_bottles -= c 
    result += 1        
    total_bottles += 1  

print(result)