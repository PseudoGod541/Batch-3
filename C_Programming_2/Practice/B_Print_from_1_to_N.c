#include <stdio.h>

void print(int n) 
{
    if (n > 0) 
    {
        print(n-1);
        printf("%d\n", n);
    }
}
int main() 
{
    int N;
    scanf("%d", &N);
    print(N);
    return 0;
}