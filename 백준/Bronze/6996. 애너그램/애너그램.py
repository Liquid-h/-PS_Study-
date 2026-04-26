import sys
input = sys.stdin.readline

t = int(input().strip())

for _ in range(t):
    
    a, b = input().strip().split()

    sorted_a = sorted(a, reverse=True)
    sorted_b = sorted(b, reverse=True)

    if sorted_a == sorted_b:
        print(f"{a} & {b} are anagrams.")
    else:
        print(f"{a} & {b} are NOT anagrams.")