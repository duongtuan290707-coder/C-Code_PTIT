t = int(input())
for _ in range(t):
    n = int(input())
    last = n % 100
    while n >= 100:
        n = n // 10
    first = n
    if last == first:
        print("YES")
    else:
        print("NO")