#include <stdio.h>
int main()
{
    int n, i, *p, arry[100];
    printf("Enter the range of arry.\n");
    scanf("%d", &n);
    printf("Enter the elements of arry.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    printf(" Your Entered arry & their address is:-\n[");
    for (i = 0; i < n; i++)
    {
        printf("%d is elements and address is %d\n", arry[i], &arry[i]);
    }
    p = arry;
    printf("Your arry elements information through pointer.\n");
    for (i = 0; i < n; i++)
    {
        printf("%u is ements and %u is address through the pointer.\n", *p, p);
        p++;
    }
    p = arry + (n - 1);
    printf("Inverse of arry through pointer.\n");
    for (i = 0; i < n; i++)
    {
        printf("arry[%d]= %d: %u: %x\n", i, *p, p, p);
        p--;
    }
    return 0;
}