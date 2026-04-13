import sys
input = sys.stdin.readline

def functions(command):
    global queue
    cmd = command[0]
    if cmd == 'add':
        x = int(command[1])
        if x not in queue:
            queue.add(x)
    elif cmd == 'remove':
        x = int(command[1])
        if x in queue:
            queue.discard(x)
    elif cmd == 'check':
        x = int(command[1])
        if x in queue:
            print(1)
        else:
            print(0)
    elif cmd == 'toggle':
        x = int(command[1])
        if x in queue:
            queue.discard(x)
        else:
            queue.add(x)
    elif cmd == 'all':
                queue = set(i for i in range(1, 21))
    elif cmd == 'empty':
                queue = set()

t =int(input())

queue = set()

for _ in range(t):
    command = input().split()
    functions(command)

