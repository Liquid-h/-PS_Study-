import sys
input = sys.stdin.readline

n = int(input())

room_count = 0
times = []
rooms = []

for _ in range(n):
    num, start, end = map(int, input().split())
    times.append((start, end))

times.sort(key=lambda x: x[0])

rooms.append(times[0][1])

for i in range(1, n):
    if rooms[0] <= times[i][0]:
        rooms.pop(0)
        
    rooms.append(times[i][1])
    rooms.sort()

print(len(rooms)) 

