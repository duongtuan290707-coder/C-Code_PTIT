t = int(input())
for _ in range(t):
    mangchucai = []
    tongso = 0
    s = input()
    for char in s:
        if char.isalpha():
            mangchucai.append(char)
        elif char.isdigit():
            tongso += int(char)
    mangchucai.sort()
    chuoi = "".join(mangchucai)
    print(f"{chuoi}{tongso}")