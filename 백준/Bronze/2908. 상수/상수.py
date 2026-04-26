a, b = map(int, input().split())

num_a = str(a)[::-1]
num_b = str(b)[::-1]

if int(num_a) > int(num_b):
    big_num = num_a
else:
    big_num = num_b

print(big_num)