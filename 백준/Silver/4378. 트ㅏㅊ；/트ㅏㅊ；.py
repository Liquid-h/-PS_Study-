import sys

keyboard =[ # ㅋ ㅜ ㅓ ㅌ ㅣ
    "`1234567890-=",
    "QWERTYUIOP[]\\",
    "ASDFGHJKL;\'",
    "ZXCVBNM,./"
]

mapping = {}
for row in keyboard:
    for i in range(1, len(row)):
        mapping[row[i]] = row[i - 1]

for line in sys.stdin:
    Good_Bye_Boj = []
    for char in line:
        if char in mapping:
            Good_Bye_Boj.append(mapping[char])
        else:
            Good_Bye_Boj.append(char)
    print(''.join(Good_Bye_Boj), end='') # 잘가...BOJ....그리울거야...