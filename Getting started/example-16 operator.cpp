#include<iostream>

using namespace std;

int main(){
	int num{};
	const int lower{10};
	const int upper{20};
	cout<<boolalpha;
	
	cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<endl;
	cin>>num;
	bool within_bounds{false};
	within_bounds=(num>lower && num < upper);
	cout<<num<< " is between "<<lower<< " and "<< upper<<" : "<<within_bounds <<endl;
	 
	cout<<"\n Enter an integer - the bounds are  "<<lower<<"and"<<upper<<endl;
	cin>>num;
	
	bool outside_bounds{false};
	outside_bounds=(num<lower||num>upper);
	cout<<num<<" is outside "<<lower<<" and "<<upper<<" : "<<outside_bounds<<endl;
	
	
}
