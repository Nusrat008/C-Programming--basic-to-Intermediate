#include <iostream>
using namespace std;
int main(){
	const int dollar_value{100};
	const int quater_value{25};
	const int dime_value{10};
	const int nickle_value{5};
	
	int change_amount{};
	
	cout<<"Enter an amount in cents: ";
	cin>>change_amount;
	
	int balance{},dollars{},quaters{},dimes{},nickles{},pennies{};
	
	/*
	dollars=change_amount/dollar_value;
	balance=change_amount-(dollars*dollar_value);
	
	quaters=balance/quater_value;
	balance-=quaters*quater_value;
	
	dimes=balance/dime_value;
	balance-=dimes*dime_value;
	
	nickles=balance/nickle_value;
	balance-=nickles*nickle_value;
	
	pennies=balance;
	*/
	dollars=change_amount/dollar_value;
	balance =change_amount%dollar_value;
	 
	quaters=balance/quater_value;
	balance %= quater_value;
	
	dimes=balance/dime_value;
	balance %= dime_value;
	
	nickles=balance/nickle_value;
	balance %= nickle_value;
	
	pennies=balance;
	
	cout<<"Dollars: "<<dollars<<endl;
	cout<<"Quaters: "<<quaters<<endl;
	cout<<"Dime: "<<dimes<<endl;
	cout<<"Nickle: "<<nickles<<endl;
	cout<<"Pennies: "<<pennies<<endl;
	
	cout<<endl;
	return 0;
}
