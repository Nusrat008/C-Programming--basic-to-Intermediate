/* C program to find maximum and minimum between two numbers using functions*/
#include <stdio.h>
/* Function declarations */
int max(int num1, int num2);
int min(int num1, int num2);
int main() {
    printf("ID : 1902008\n"); 
    int num1, num2, maxima, minima;
    /* Input two numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    maxima = max(num1, num2);  // Call maximum function
    minima= min(num1, num2);  // Call minimum function
    printf("\nMaximum = %d\n", maxima);
    printf("Minimum = %d", minima);
    return 0;
}
/*Function for Finding maximum between two numbers.*/
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
/*Function for Finding minimum between two numbers.*/
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
