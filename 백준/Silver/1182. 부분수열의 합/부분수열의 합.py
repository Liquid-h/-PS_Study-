import sys
input = sys.stdin.readline

def solve():
    n, s = map(int, input().split())
    nums = list(map(int, input().split()))
    
    count = 0

    def find_subsets(idx, current_sum):
        nonlocal count
        
        if idx == n:
            if current_sum == s:
                count += 1
            return

        find_subsets(idx + 1, current_sum + nums[idx])

        find_subsets(idx + 1, current_sum)

    find_subsets(0, 0)

    if s == 0:
        print(count - 1)
    else:
        print(count)

solve()