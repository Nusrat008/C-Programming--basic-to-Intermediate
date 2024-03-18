#include<iostream>
#include<cmath>
 
using namespace std;

int main(){
	double num{};
	cout<<"Enter a number (double):";
	cin>>num;
	
	cout<<" \nThe sprt of "<<num<<" is: "<<sqrt(num)<<endl;
	cout<<" The cubed root of "<<num<<" is: "<<cbrt(num)<<endl;
	
	cout<<"\n The sine of "<<num<<" is: "<<sin(num)<<endl;
	cout<<" The cosine of "<<num<<" is: "<<cos(num)<<endl;
	cout<<"\n The ceil of "<<num<<" is: "<<ceil(num)<<endl;
	cout<<" The floor of "<<num<<" is: "<<floor(num)<<endl;
	cout<<" \nThe round of "<<num<<" is: "<<round(num)<<endl;
	
	double power{};
	cout<<"\n Enter a power to raise "<<num<<" to: ";
	cin>>power;
	cout<<num<<"  raised to the "<<power<<" power is: "<<pow(num,power)<<endl;
	cout<<endl;
	
	
	
	
	
	
	return 0;
}
