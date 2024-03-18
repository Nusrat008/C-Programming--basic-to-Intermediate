#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int length{};
	int width{};
	int height{};
	int package_volume{};
	double package_cost{};
	const int max_length{10};
	const double main_cost{2.5};
	const int tier1_volume{100};
	const int tier2_volume{500};
	const double tier1_surcharge{.1};
	const double tier2_surcharge{.25};
	cout<<"=====The shipping calculator======"<<endl;
	cout<<"Enter length width and height all dimension use with space: "<<endl;
	cin>>length>>width>>height;
	if(length>max_length||width>max_length||height>max_length){
		cout<<"Sorry, the package regected ,it can not shipping."<<endl;
	}
	else{
		
		package_volume=length*height*width;
		if(package_volume>=tier2_volume){
			package_cost=main_cost;
			package_cost+=main_cost*tier2_surcharge;
			cout<<"Adding tier2 surcharge"<<endl;
		}
		else if(package_volume>=tier1_volume){
			package_cost=main_cost;
			package_cost+=main_cost*tier1_surcharge;
			cout<<"Adding tier1 surcharge"<<endl;
		}
		cout<<"The package volume is : "<<package_volume<<"cubic inches"<<endl;
		cout<<"The package cost is: $"<<package_cost<<"  to ship. "<<endl;
	}
	
	return 0;	
}
	
	
	
	
	

