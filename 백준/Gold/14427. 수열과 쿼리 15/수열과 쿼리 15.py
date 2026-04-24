import sys
input = sys.stdin.readline

# 꿍실냐옹

def init(node, start, end):
    if start == end:
        tree[node] = (A[start], start)
        return tree[node]
    mid = (start + end) // 2
    tree[node] = min(init(node*2, start, mid), init(node*2+1, mid+1, end))
    return tree[node]

def update(node, start, end, idx, val):
    if idx < start or idx > end:
        return tree[node]
    if start == end:
        tree[node] = (val, idx)
        return tree[node]
    mid = (start + end) // 2
    tree[node] = min(update(node*2, start, mid, idx, val), update(node*2+1, mid+1, end, idx, val))
    return tree[node]

n = int(input())
A = [0] + list(map(int, input().split()))
tree = [0] * (4 * n)

init(1, 1, n)

m = int(input())
for _ in range(m):
    cmd = list(map(int, input().split()))
    if cmd[0] == 1:
        _, i, v = cmd
        update(1, 1, n, i, v)
    elif cmd[0] == 2:
        print(tree[1][1])