#include<iostream>
using namespace std;
int main(){
	cout<<"Hello,welcome to Frank's Carpat Cleaning Service"
		<<endl;
	cout<<"\n How many small room would you like clean?"
		<<endl;
	int num_of_smallroom;
	int num_of_large_room;
	cin>>num_of_smallroom;
	cout<<"\n How many large room would you like clean?"
		<<endl;
	cin>>num_of_large_room;
	
	const double price_per_small_room{25};
	const double price_per_large_room{35};
	const double Tax_rate{.06};
	cout<<"\n Estimate for carpat cleaning service"
		<<endl;
	cout<<"Number of small rooms: "
		<<num_of_smallroom
		<<endl;
	cout<<"Number of large rooms: "
		<<num_of_large_room
		<<endl;
	cout<<"price per small room: $"
		<<price_per_small_room
		<<endl;
	cout<<"price per large room: $"
		<<price_per_large_room
		<<endl;
	cout<<"Cost: $ "
		<<(num_of_smallroom*price_per_small_room)+(num_of_large_room*price_per_large_room)
		<<endl;
	cout<<"Tax: $ "
		<<(num_of_smallroom*price_per_small_room*Tax_rate)+(num_of_large_room*price_per_large_room*Tax_rate)
		<<endl;
	cout<<"======================"
		<<endl;
	double cost((num_of_smallroom*price_per_small_room)+(num_of_large_room*price_per_large_room));
	double tax((num_of_smallroom*price_per_small_room*Tax_rate)+(num_of_large_room*price_per_large_room*Tax_rate));
	cout<<"Total estimate: $"
		<<cost+tax
		<<endl;
	cout<<"Total estimate is valid for 30 days."
		<<endl;
	return 0;
}
