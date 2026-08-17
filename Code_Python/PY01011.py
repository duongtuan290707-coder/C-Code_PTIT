t = int(input())
for _ in range(t) :
    s = input()
    while n < s:
    kiemtra = True
    if len(s) % 2 != 0:
        kiemtra = False
        break
    if s != s[::-1]:
        kiemtra = False
        break
    if s[::-1] not in '02468':
        kiemtra = False
        break
    