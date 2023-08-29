// Problem Statement ~~
/*
Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
For example 8 can be expressed as 2^3.
*/


#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
    int n=N, flag=1;
    while (n>1){
        if (n%2!=0){
            flag=0;
            break;
        }
        else{
            n/=2;
        }
    }
    
    if (flag==1)
        printf("%d is a number that can be expressed as power of 2.",N);
    else
        printf("%d cannot be expressed as power of 2.",N);
    
    return 0;
}