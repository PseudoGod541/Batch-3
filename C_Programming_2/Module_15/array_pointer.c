#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    printf("0th ndex er address - %p\n",&ar[0]);
    printf("0th ndex er address - %p\n",ar);
    printf("0th ndex er value - %d\n",ar[0]);
    printf("0th ndex er value - %d\n",ar);
    printf("Value of first index - %d\n",*(ar+1));
    return 0;
}
// int *ar = ar [0]
// int ar[1] = *(ar+1)
// int ar[n] = *(ar+n)
// 1[ar] = *(1+ar)
