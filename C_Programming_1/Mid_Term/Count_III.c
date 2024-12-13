#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int cont[26] = {0};
    
    scanf("%s", s);
    
    int n = strlen(s);
    
    for(int i=0; i<n; i++) {
        cont[s[i]-'a']++;
    }
    
    for(int i=0; i<26; i++) {
        printf("%c - %d\n", 'a'+i, cont[i]);
    }
    return 0;
}
     