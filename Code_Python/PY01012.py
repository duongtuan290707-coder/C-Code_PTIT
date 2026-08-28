s1 = input()
s2 = input()
p = int(input())
index = p-1
ketqua = s1[:index] + s2 + s1[index:]
print(ketqua)