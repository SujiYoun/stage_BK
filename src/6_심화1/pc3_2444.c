#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*º° Âï±â - 7
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
int main(void)
{
    int n, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j <= i; j++)
            printf(" ");
        for (j = (n - i - 2) * 2; j >= 0; j--)
            printf("*");
        printf("\n");
    }    
    
    return 0;
}