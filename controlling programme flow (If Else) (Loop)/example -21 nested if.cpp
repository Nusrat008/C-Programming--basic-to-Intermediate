#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int length{},width{},height{};
	double base_cost{2.50};
	
	const int tier1_threshold{100};
	const int tier2_thershold{500};
	 
	int max_dimension_length{10};
	
	double tier1_surcharge{0.10};
	double tier2_surcharge{0.25};
	int package_volume{};
	
	cout<<"Welcolme to the package cost calculator"<<endl;
	cout<<"Enter length,width,and height of the package seperated by spaces:";
	cin>>length>>width>>height;
	if(length>max_dimension_length||width>max_dimension_length||height>max_dimension_length)
	{
		cout<<"Sorry,package rejected -dimension exceeded"<<endl;
	}
	else{
		double package_cost{};
		package_volume=length*width*height;
		package_cost=base_cost;
		
		if(package_volume>tier2_thershold){
			package_cost+=package_cost*tier2_surcharge;
			cout<<"addint tier 2 surcharge"<<endl;
		}else if(package_volume>tier1_threshold){
			package_cost+=package_cost*tier1_surcharge;
			cout<<"addint tier 1 surcharge"<<endl;
		}
		cout<<fixed<<setprecision(2);	
		cout<<"The volume of your package is:"<<package_volume<<endl;
		cout<<"Your package will cost $ "<<package_cost<<" to ship"<<endl;
	}
	cout<<"this is a challanging example"<<endl;
	
	
	return 0;	
}
