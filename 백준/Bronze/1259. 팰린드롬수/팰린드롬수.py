while True:
    n = str(input())
    if n == '0':
         break 
    k = n[::-1] # 슬라이싱 goat python C++은 이런거 없제 ㅋ
    if n == k:
        print("yes")
    else:
        print("no")
