s = input().strip()
demthuong = 0
demhoa = 0
for char in s:
    if char.isupper():
        demhoa += 1
    else:
        demthuong +=1
if demhoa > demthuong:
    s = s.upper()
else:
    s = s.lower()
print(s)