s = input().strip()
s = s.replace('688', '')
s = s.replace('68', '')
s = s.replace('6', '')
if len(s) != 0:
    print("NO")
else:
    print("YES")