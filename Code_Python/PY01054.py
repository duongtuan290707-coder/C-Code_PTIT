t = int(input())
for _ in range(t):
    s = input().strip()
    tich = 1
    for char in s:
        if char != '0':
            tich *= int(char)
    print(tich)