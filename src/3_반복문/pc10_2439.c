#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*º° Âï±â - 2
    *
   **
  ***
 ****
*****
*/
int main(void)
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}