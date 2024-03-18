#include <iostream>
 
#include <vector>

using namespace std;

int main(){
//	int scores[]{10,20,30};
//	for(auto score:scores)
//	cout<<score<<endl;
/*	vector<double>temperature{67,45.5,34};
	double aver_tem{};
	double total{};
	for(auto temp:temperature)
		total +=temp;
	if(temperature.size()!=0)
		aver_tem=total/temperature.size();
		
		cout<<endl;
		*/
/*	int num{};
	cout<<"Enter an integer num with a countdown:"<<endl;
	cin>>num;	
	while(num>0){
		cout<<num<<endl;
		--num;
	}		
	cout<<"Blastoff"<<endl;	
*/
	int num{};
	cout<<"Enter a postive integer : ";
	cin>>num;
	int i{1};
	while(num>=i){
		cout<<i<<endl;
		i++;
	}
		
	cout<<endl;	
	return 0;
}
