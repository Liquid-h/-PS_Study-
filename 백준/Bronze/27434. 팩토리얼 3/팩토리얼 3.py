import sys

sys.set_int_max_str_digits(0)

n = int(input())
p = 1
q = 1

for i in range(0, n):
  p *= q
  q +=1

print(int(p))