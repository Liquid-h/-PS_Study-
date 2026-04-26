import sys
input = sys.stdin.readline
from collections import deque

n,m,v= map (int, input().split()) #  n = 정점, m = 간선, v = 시작 정점

visited_dfs= [False] * (n + 1) # 방문했는지 여부
visited_bfs = [False] * (n + 1)

def dfs(v):

    visited_dfs[v] = True # 방문한 곳 표시
    print(v, end=' ')

    for i in graph[v]:
        if not visited_dfs[i]:
            dfs(i)


def bfs(v):
    queue = deque([v])
    visited_bfs[v] = True

    while queue:
        v = queue.popleft()
        print(v, end=' ')

        for i in graph[v]:
            if not visited_bfs[i]:
                queue.append(i)
                visited_bfs[i] = True# queue에 넣자마자 표시해야됨, 안하면 터짐
                # > EX: 4처럼 여러 정점과 연결된 정점이 또 들어감

graph = [[]for _ in range(n+1)]

for _ in range(m): # 어느 점끼리 연결됐는지 보여줌
    a,b = map(int, input().split()) # a = 가는곳, b = 도착하는곳
    graph[a].append(b)
    graph[b].append(a)

for i in range(1, n+1):
    graph[i].sort()


dfs(v)
print()  # 줄바꿈
bfs(v)