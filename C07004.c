#include <stdio.h>
struct phanso {
    long long tuso;
    long long mauso;
};
long long timucln(long long a, long long b) {
    while( b != 0) {
        long long r= a%b;
        a = b;
        b = r; 
    }
    return a;
}
int main() {
    struct phanso p;
    scanf("%lld %lld", &p.tuso, &p.mauso);
    long long ucln = timucln(p.tuso, p.mauso);
    p.tuso = p.tuso / ucln;
    p.mauso = p.mauso / ucln;
    printf("%lld/%lld", p.tuso, p.mauso);
    return 0;
}