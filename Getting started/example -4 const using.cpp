#include<iostream>
using namespace std;
int main(){
	cout<<"Hello,welcome to Frank's Carpat Cleaning Service"<<endl;
	cout<<"\n How many rooms would you like Clean?"<<endl;
	int num_of_rooms{0};
	cin>>num_of_rooms;
	const double price_per_room{30};
	const double sales_tax{.06};
	const int estimate_expiry{30};
	cout<<"\n Estimate for carpat cleaning service"<<endl;
	cout<<"Number of rooms: "<<num_of_rooms<<endl;
	cout<<"Price per rooms:$ "<<price_per_room<<endl;
	cout<<"Cost:$ "<<price_per_room*num_of_rooms<<endl;
	cout<<"Tax:$ "<<num_of_rooms*price_per_room*.06<<endl;
	cout<<"============"<<endl;
	cout<<"Total estimate: "<<(num_of_rooms*price_per_room)+(num_of_rooms*price_per_room*.06)<<endl;
	cout<<"The estimate is valid for "<<30<<" days"<<endl;
	
}
