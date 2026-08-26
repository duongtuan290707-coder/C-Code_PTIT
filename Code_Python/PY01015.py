t = int(input())
for _ in range(t):
    n = int(input())
    digits = [int(x) for x in str(n)]
    kiemtra = True
    for i in range(len(digits) - 1):
        if digits[i] > digits[i+1]:
            kiemtra = False
            break
    if kiemtra == True:
        print("YES")
    else:
        print("NO")