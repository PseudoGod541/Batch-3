#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int  i=1;i<=t;i++){
        
        char a[10000];
        scanf("%s",a);
    }
    for(int  i=0;i<9999;i++){
        
        if(i%2==0){
            printf("%c",a[i]);
        }
        else{
            printf("%c",a[i+1]);
        }
    }
    
     
    return 0;
}