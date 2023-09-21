// Problem Statement ~~
/*
Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI
*/




#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
	int size = strlen(str1);	
	reverse(str1, size, size/2);
	printf("The string after reversing is: %s\n", str1);
	return 0;
}

void reverse(char s[], int size, int loop){
	char temp ;
  	for (int i=0; i<loop; i++){
  		temp = s[i];
      	s[i] = s[size-1-i];
        s[size-1-i] = temp;      	
  	}
}