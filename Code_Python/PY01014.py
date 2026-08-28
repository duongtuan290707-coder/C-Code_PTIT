a, K, N = map(int, input().split())
tim_thay = False
b_dau_tien = K - (a % K)
gioi_han = N - a
for b in range(b_dau_tien, gioi_han + 1, K):
    print(b, end=" ")
    tim_thay = True
if tim_thay == False:
    print("-1")
