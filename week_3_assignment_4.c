// Problem Statement ~~
/*
Write a C Program to find the Largest Number (integer)  among Three Numbers (integers) using IF and Logical && operator.
*/



#include <stdio.h>
int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); /*Three numbers are accepted from the test case */

/*  Complete the code in the box provided below. Use printf statement as provided below:
printf("%d is the largest number.", n1);
It may be n1, n2 or n3.
*/
	int greatest = n1;
	if (n2 > greatest)
      greatest = n2;
	if (n3 > greatest)
      greatest = n3;
	printf("%d is the largest number.", greatest);

    return 0;
}