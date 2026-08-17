t = int(input())
for _ in range(t):
    n = int(input())
    lucky = True
    if n == 0:
        lucky = False
    else:
        while n>0:
            chusocuoi = n % 10
            if chusocuoi != 4 and chusocuoi != 7:
                lucky = False
                break
            n = n // 10
    if lucky == True:
        print("YES")
    else:
        print("NO")