// Problem Statement ~~
/*
Write a C Program to find HCF of 4 given numbers using recursive function
*/





#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int a, int b){
  	if (b==0){
    	return a;
    }
  	int c = a % b;
  	a = b;
  	b = c;
  	return HCF(a, b);
}