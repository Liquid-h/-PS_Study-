a = int(input()) # 컴 수
b = int(input()) # 연결 수

graph = [[] for _ in range(a)]
visited = [False] * a

for _ in range(b):
    x, y = map(int, input().split())
    x-= 1
    y-= 1
    graph[x].append(y)
    graph[y].append(x)

def dfs(com):
    visited[com] = True
    for i in graph[com]:
        if not visited[i]:
            dfs(i)

dfs(0)
print(visited.count(True) - 1)