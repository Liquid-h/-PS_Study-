import sys
from collections import Counter

lines = sys.stdin.read().splitlines()
i = 0
while i + 1 < len(lines):
    a = lines[i].rstrip()
    b = lines[i+1].rstrip()
    count_a = Counter(a)
    count_b = Counter(b)
    result = []

    for ch in sorted(set(a + b)):
        count = min(count_a[ch], count_b[ch])
        result.extend([ch]*count)

    print(''.join(result))
    i += 2