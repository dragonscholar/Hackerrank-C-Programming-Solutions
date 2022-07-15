#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x, y;
    float m, n;

    scanf("%d %d", &x, &y);
    scanf("%f %f", &m, &n);

    printf("%d %d\n", x+y, x-y);
    printf("%.1f %.1f", m+n, m-n);

    return 0;
}
