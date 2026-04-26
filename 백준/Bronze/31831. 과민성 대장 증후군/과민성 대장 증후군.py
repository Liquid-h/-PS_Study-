import sys
input = sys.stdin.readline

n,m = map(int, input().split())
stress = list(map(int, input().split()))

def stomach(stress_value):
    global total_stress
    global result

    total_stress += stress_value
    if total_stress < 0:
        total_stress = 0
    if total_stress >= m:
        result += 1
        return
    elif total_stress < m:
        return
    
result = 0
total_stress = 0

for i in range(n):
    stomach(stress[i])

print(result)