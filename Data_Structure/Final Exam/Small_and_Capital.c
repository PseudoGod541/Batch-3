#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    scanf("%s",ch);

    int capital=0,small=0;

    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='A'  && ch[i]<='Z'){
            capital++;
        }
        else if(ch[i]>='a'  && ch[i]<='z'){
            small++;
        }


    }
    printf("%d %d",capital,small);
    return 0;
}
     