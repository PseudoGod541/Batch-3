#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a ; 
    double b; 
    char c[100];
    char x[1000];
    scanf("%d %lf",&a,&b);
    
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf",&a,&b);
    scanf("%[^\n]c",c);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+a);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+b);
    
    // Concatenate and print the String variables on a new line
    sprintf(x, "%s%s", s, c);
    printf("%s",x);
    // The 's' variable above should be printed first.

    return 0;
}
