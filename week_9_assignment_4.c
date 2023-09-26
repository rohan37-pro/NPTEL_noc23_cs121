// Problem Statement ~~
/*
Write a C program to reverse an array by swapping the elements and without using any new array.
*/



#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
for (int i=0; i<n/2; i++){
	array[i] += array[n-1-i];
  	array[n-1-i] = array[i] - array[n-1-i];
  	array[i] -= array[n-1-i];
}

printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}