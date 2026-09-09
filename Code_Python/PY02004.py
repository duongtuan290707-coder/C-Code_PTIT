n = int(input())
s = input().split()
dem = 0
for i in range(n - 1):
    if s[i] != s[i+1]:
        dem += 1
print(dem)