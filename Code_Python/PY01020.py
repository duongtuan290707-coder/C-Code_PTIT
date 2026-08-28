t = int(input())
for _ in range(t):
    n = int(input())
    phatloc = n%100
    if phatloc != 86:
        print("NO")
    else:
        print("YES")