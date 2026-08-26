import math
t = int(input())
for _ in range(t):
    n = int(input())
    print("1", end="")
    for i in range(2, int(math.sqrt(n)) + 1):
        if n%i == 0:
            count =0
            while n%i == 0:
                count += 1
                n = n // i
            print(f" * {i}^{count}", end="")
    if n>1:
        print(f" * {n}^1")
    print()
