#include<stdio.h>
void fun(int x)
{
    printf("fun er address %p\n",&x);
}
int main()
{
    int x=10;
    printf("main er address %p\n",&x);
    fun(x);
    return 0;
}
     