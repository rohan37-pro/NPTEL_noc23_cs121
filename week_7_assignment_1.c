// Problem Statement ~~
/*
Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.
*/



#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

/* Complete the remaining part of the code to store number of uppercase letters
in the variable upper and lowercase letters in variable lower.
The print part of already written. You can declare any variable if necessary */
int i=0;
while (ch[i])
{
  if ((int)ch[i] > 64 && (int)ch[i] < 91)
    upper ++;
  if ((int)ch[i] > 96 && (int)ch[i] < 123)
    lower ++;
  i++;
}
printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}