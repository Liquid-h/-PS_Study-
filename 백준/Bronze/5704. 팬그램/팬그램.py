alphabet = "abcdefghijklmnopqrstuvwxyz"

while True:
    n = input()

    if n == "*":
        break

    result = True

    for char in alphabet:
        if char not in n:
            result = False
            break

    if result:
        print("Y")
    else:
        print("N")