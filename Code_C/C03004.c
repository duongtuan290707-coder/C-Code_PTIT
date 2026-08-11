#include <stdio.h>
long long timUCLN(long long a, long long b) {
    while (b != 0) {
        long long r = a % b; // Tìm phần dư
        a = b;               // Đẩy số chia cũ lên làm số bị chia mới
        b = r;               // Đẩy phần dư lên làm số chia mới
    }
    // Khi b bằng 0 thì a đang chứa ƯCLN
    return a;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long ucln = timUCLN(a, b);
    long long bcnn = (a / ucln) * b;
    printf("%lld\n", ucln);
    printf("%lld\n", bcnn);

    return 0;
}