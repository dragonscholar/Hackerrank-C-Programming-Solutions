#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int g = a;
    if (b > g)
        g = b;
    if (c > g)
        g = c;
    if (d > g)
        g = d;
    return g;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}