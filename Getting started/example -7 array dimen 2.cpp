#include<iostream>
using namespace std;
int main(){
	int array_dim[2][3]{{1,2,4},{6,7,8}};
	cin>>array_dim[1][1];
	cout<<" The array at index 0 0: "<<array_dim[0][0]<<endl;
	cout<<" The array at index 0 1: "<<array_dim[0][1]<<endl;
	cout<<" The array at index 0 2: "<<array_dim[0][2]<<endl;
	cout<<" The array at index 1 0: "<<array_dim[1][0]<<endl;
	cout<<" The array at index 1 1: "<<array_dim[1][1]<<endl;
	cout<<" The array at index 1 2: "<<array_dim[1][2]<<endl;
	return 0;
} 
