// Problem statement ~~
/*
Write a C program to print Largest and Smallest Word from a given sentence. If there are two or more words of same length, then the first one is considered. A single letter in the sentence is also consider as a word.

*/



#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
void copy_str(char arr[100], char arr2[100]){
int i = 0;
  while (arr2[i]){
  	arr[i] = arr2[i];
    i++;
  }
  arr[i]='\0';
}




int i=0, row=0, col=0;
  while (str[i])
  {
    if (str[i]==' ')
    {
      	substr[row][col] = '\0';
    	row ++;
      	col = 0;
    }
    else{
        if (str[i]!='.'){
            substr[row][col]=str[i];
            col++;
        }
    }
	i++;
  }
  substr[row][col]='\0';
  int l = strlen(substr[0]), s= strlen(substr[0]), len;
  char small[100], large[100];
  copy_str(large, substr[0]);
  copy_str(small, substr[0]);
  for (i=1; i<=row; i++){
    len = strlen(substr[i]);
    if (len>l){
    	l = len;
      	copy_str(large, substr[i]);
    }
    if (len<s){
    	s = len;
      	copy_str(small, substr[i]);
    }
  
  }
 printf("Largest Word is: %s\nSmallest word is: %s\n", large,small);
}