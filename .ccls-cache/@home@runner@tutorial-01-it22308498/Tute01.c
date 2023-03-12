/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {
  int m1, m2;
  float avg;

  // get the marks
  printf("Input the 2 marks : ");
  scanf("%d%d", &m1, &m2);

  // calculate and print the average
  avg = (m1 + m2) / 2;
  printf("The average is : %.f ", avg);

  return 0;
}