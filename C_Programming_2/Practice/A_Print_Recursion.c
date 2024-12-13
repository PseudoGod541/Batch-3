#include <stdio.h>

void print(int n) 
{
    if (n > 0) 
    {
        printf("I love Recursion\n");
        print(n-1);
    }
}
int main() 
{
    int N;
    scanf("%d", &N);
    print(N);
    return 0;
}