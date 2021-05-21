// Rumeysa Ulusoy 
// This project calculate the super digit the numbers.

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int superDigit(int n); // This is the function which calculate super digit of the number.
int repeat(int n, int k, char num1, char num2); // This is the function which concatenate the number.

int main() {
int n, k;	
printf("Please enter a number (n=): "); // This is the number whose sum of digit is calculated.
scanf("%d",&n); 
printf("Please enter repetition factor (k=): "); // This is the number which indicates how many times number n will concatenate.
scanf("%d",&k);

char num1[10000]; // num1 is the new string which is concatened.
char num2[10000]; // Temp value which is concatened to main number.
sprintf(num1, "%d", n); // Converts number n to string num1.
sprintf(num2, "%d", n); // Converts number n to string num2.
 

n = repeatNumber (n, k, num1, num2); // Calls the repeatNumber function and change n number. 

int a = superDigit(n);  // Calls the superDigit to calculate super digit of the number n.
printf("Super digit of number %d is %d\n", n, a); // Prints number and its sum of digits.
}

// This is the function which calculate the sum of digits of number.
int superDigit (int n) {
int temp, sum = 0; // temp is the temperature number for sum.
  if(n == 0) { // If the number is 0, then its sum returns 0.
   return 0;
 }
 
  else { // If the number is not 0, this runs.
   temp = n % 10; // Finds the value of last digit of the number.
   sum = temp + superDigit(n / 10); // Divides the number n calling the function again and adds it to temp value.
 }
  
  if(sum>9) { // If sum is greater than 9, then calls again superDigit function.
  n = sum; // Sum of the digits of the number n is equals to n.
  sum = superDigit(n); // To find new sum, calls superDigit function.
 }
 return sum; // Returns sum of the digits.
}	

// This function which concatenate the number n. 
int repeatNumber (int n, int k, char num1 [], char num2[]) {

  // This recursive calls this function until string concatenate k times.
 if(k > 1) {
 	
 strcat(num1,num2); // Concatenate two string.
 repeatNumber(n ,k-1, num1, num2);	
 }
return atoi(num1); // Converts string to int.

}


	

