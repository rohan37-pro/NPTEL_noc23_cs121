// Problem Statement ~~
/*
Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm. The index location starts from 1.
*/



#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
	int l=0, r=n-1, m=n/2, flag=0 ;
    if (search==array[l]){
        flag=1;
        printf("%d found at location %d.", search, l+1);
    }
    if (search==array[r]){
        flag=1;
        printf("%d found at location %d.", search, r+1);
    }
	while (1){
      	if ((l-r)*(l-r)<=1 || flag==1)
        	break;
      	if (search==array[m]){
        	printf("%d found at location %d.", search, m+1);
          	flag=1;
          	break;
        }
      	if (search<array[m]){
      		r=m;
          	m= (l+r)/2;
        }
      	if (search>array[m]){
        	l=m;
          	m= (l+r)/2;
        }
    }
	if (flag==0){
    	printf("Not found! %d isn't present in the list.", search);
    }
}