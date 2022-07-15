#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    int sum;

    sum += n / 10000;
    n %= 10000;

    sum += n / 1000;
    n %= 1000;

    sum += n / 100;
    n %= 100;

    sum += n / 10;
    n %= 10;

    sum += n;

    printf("%d", sum);

    return 0;
}