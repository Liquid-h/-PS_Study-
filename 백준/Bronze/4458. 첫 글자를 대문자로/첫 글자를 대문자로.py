import sys
input = sys.stdin.readline

Good_Bye_Boj = int(input())
for _ in range(Good_Bye_Boj):
    word = input().rstrip()
    print(word[0].upper() + word[1:])