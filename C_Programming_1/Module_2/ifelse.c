#include<stdio.h>
int main()
{
    int taka;
    printf("tor kase koto taka ase ");
    scanf("%d",&taka);
    if(taka>=100)
    {
        printf("Burger khamu");
    }
    else if(taka<100 && taka>=50)
    {
        printf("Fuchka khamu");
    }
    else
    {
        printf("Kostai khamu na");
    }

    




    return 0;
}