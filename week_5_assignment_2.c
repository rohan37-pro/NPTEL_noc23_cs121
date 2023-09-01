// Problem Statement ~~
/*
Write a C program to count total number of digits of an Integer number (N).
*/


#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count);

*/
    int count=0;
    int n = N;
    while (n!=0){
        n/=10;
        count += 1;
    }
    printf("The number %d contains %d digits.",N,count);

}