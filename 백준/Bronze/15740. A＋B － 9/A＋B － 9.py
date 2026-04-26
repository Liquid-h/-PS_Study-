import sys

sys.set_int_max_str_digits(20000)

input_data = sys.stdin.read().split()

if input_data:
    a = int(input_data[0])
    b = int(input_data[1])
        
    print(a + b)