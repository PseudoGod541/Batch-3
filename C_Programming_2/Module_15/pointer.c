#include<stdio.h>
int main()
{
    int value = 100;
    int *ptr = &value;
    value=200;
    printf("%d",value);
    printf("%d",*ptr);
    return 0;
}
// x = *ptr = value
// &x = ptr = address
     