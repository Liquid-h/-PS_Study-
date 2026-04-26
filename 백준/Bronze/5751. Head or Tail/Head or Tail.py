while True:

    t =int(input())

    if (t == 0):
        break
    li = list(map(int, input().split()))
    
    mary =li.count(0)
    john =li.count(1)

    print("Mary won {} times and John won {} times".format(mary, john))
        