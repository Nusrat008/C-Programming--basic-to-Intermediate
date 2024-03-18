#include<iostream>
using namespace std;
int age{14};
int main(){
	char middle_initial{'j'};
	cout<<"My middle initial is "<<middle_initial<<endl;
	unsigned short int exam_score{34};
	cout <<"My exam score is  "<<exam_score<<endl;
	int countries_represented{87};
	cout<<"There was "<<countries_represented<<endl;
	long people_in_florida{208594};
	cout<<"There are about " <<people_in_florida<<" people in Florida  "<<endl;
	long long people_on_earth{723442444523455};
	cout<<"There are about "<<  people_on_earth<<endl;
	long long distance_to_alpha_centauri{9048000344555};
	cout<<"The distance to alpha centauri is  "<<distance_to_alpha_centauri <<" Kilometers"<<endl;
	float car_payment{657.23};
	cout<<"My car payment is  "<<car_payment<<endl;
	double pi{3.1416};
	cout<<"Pi is "<<pi<<endl;
	long double large_amount{2.7e129};
	cout<<large_amount<<" is a very big number"<<endl;
	bool game_over{false};
	cout<<"The value of gameover is "<<game_over<<endl;
	short value1{3000};//over flow of variable//
	short value2{1000};
	short product{value1*value2};
	cout<<"The product of "<<value1<< " and "<<value2<<" is "<< product<<endl;
	return 0;
}
