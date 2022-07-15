#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100]; int p;
    char sen[100]; int q;

    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", &s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    scanf("\n");

    printf("%c\n", ch);
    printf(s);
    printf("\n");
    printf(sen);

    return 0;
}
