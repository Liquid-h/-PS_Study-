import sys

sys.set_int_max_str_digits(1000000)

n, m = map(int, input().split())

print(n // m)
print(n % m)