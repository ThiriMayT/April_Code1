#include<stdio.h>
int main() {

  int marks[10], i, n, sum = 0;
  int average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number : ");
    scanf("%d", &marks[i]);
     sum=sum+marks[i];


    // adding integers entered by the user to the sum variable

   // sum += marks[i];
  }

  // explicitly convert sum to double
  // then calculate average
  average = (int) sum / n;

  printf("Average = %d ", average);

  return 0;
}
