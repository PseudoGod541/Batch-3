#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  for(int i=1;i<=n;i++){
    int a=i&(i+1);
    int b=i|(i+1);
    int c=i^(i+1);

      if(a<k && b<k && c<k){
          printf("%d %d %d",a , b , c);
      }
  }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}