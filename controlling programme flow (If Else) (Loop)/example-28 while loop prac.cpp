#include<iostream>
using namespace std;
int main(){
/*	int num{};
	cout<<"Enter an integer less than 100: ";
	cin>>num;
	while(num>=100){
		cout<<"Enter an integer less than 100: ";
		cin>>num;
	}
	
	cout<<"Thanks"<<endl;
*/
	bool done{false};
	int num{0};
	while(!done){
		cout<<"Enter an integer between 1 and 5: ";
		cin>>num;
		if(num<=1 || num>=5){
			cout<<"Out of range, try again"<<endl;
		}
		else{
			cout<<"Thanks"<<endl;
			done=true;
		}
	}
	return 0;
}
