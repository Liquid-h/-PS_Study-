n = int(input())

li = [] 


def mode(li):
    count = {}
    for i in li:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    max_count = max(count.values())
    mode_values = [k for k, v in count.items() if v == max_count]
    if len(mode_values) > 1:
        return sorted(mode_values)[1]
    else:
        return mode_values[0]
    
def mean(li):
    return round(sum(li) / len(li)) 
    

for i in range(n):
    li.append(int(input()))
li.sort()

print(mean(li))
print(li[n//2])
print(mode(li))
print(li[-1] - li[0])