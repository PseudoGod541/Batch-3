#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int sum=0,v;
    scanf("%s",a);
    for(int i=0;i<+strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        sum++;
    
    }
    printf("%d",sum);
    return 0;
}
     