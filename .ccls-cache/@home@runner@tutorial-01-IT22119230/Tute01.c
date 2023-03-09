/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1;
  int no2;
  float avg = 0;

  printf("No 1:");
  scanf("%i", &no1);
  printf("No 2:");
  scanf("%i", &no2);

  avg = (no1 + no2)/2;

  printf("average : %f", avg);
  
  return 0;
}

