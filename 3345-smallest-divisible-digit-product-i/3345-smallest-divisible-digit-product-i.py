class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            result = 1
            for num in str(n):
                result *= int(num)
            if result % t == 0:
                return n
            n += 1