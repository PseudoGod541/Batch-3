#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  if(gender=='b')
  {
    int summation=0;
      for(int i=0;i<number_of_students;i=i+2)
      {
          
           summation=summation+(marks[i]);
           
      }
      return summation;
  }
  else if(gender=='g')
  {
  int summation1=0;
      for(int i=1;i<number_of_students-1;i=i+2)
      {
          
           summation1=summation1+(marks[i]);
           
      }
      return summation1;
  }
  return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}