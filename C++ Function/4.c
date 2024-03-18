#include<stdio.h>
#include<conio.h>
//function prototype
int fibonacci(int i);
int main(){ 
    printf("ID : 1902008\n");  
	int n,i;
    //Take input number of element in series 
	printf("Enter the number of element in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
    //Call function and print fibonacci series
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
	return 0;
}
//Function definition
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
    //Add the previous 2 numbers
    // in the series and store it
	else return (fibonacci(i-1)+fibonacci(i-2));
} 
