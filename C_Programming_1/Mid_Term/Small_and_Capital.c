#include<stdio.h>
#include<string.h>
int main() {
    char s[1000];
    int small = 0, capital = 0;
    
    scanf("%s", s);
    
    for(int i=0; i<strlen(s); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            small++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            capital++;
        }
    }
    
    printf("%d %d", small, capital);
    
    return 0;
}
     