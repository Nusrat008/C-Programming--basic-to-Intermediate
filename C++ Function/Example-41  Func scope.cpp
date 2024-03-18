#include<iostream>

using namespace std;

int num{400};

void global_example();
void local_example();
void static_local_example();

   void global_example(){
	cout<<"\n Global num is: "<<num<<" in Global example-strat"<<endl;
	num*=3;
	cout<<"Global num is: "<<num<<" in Global_example -end"<<endl;
}

void local_example(int x){
	int num{1000};
	cout<<"\nLocal num is: "<<num<<" in local_example-strat"<<endl;
	num=x;
	cout<<"Local num is: "<<num<<" in local_example -end"<<endl;
}

void static_local_example(){
	static int num{2909};
	cout<<"\nLocal static num is: "<<num<<" in static_local_example-start"<<endl;
	num+=1000;
	cout<<"Local static num is: "<<num<<" in static_local_example-end"<<endl;
}

int main(){
	
	int num{100};
	int num1{500};
	
	cout<<"Local num is: "<<num<<" in main"<<endl;
	
	{
		int num{900};
//	
		cout<<"\nLocal num is: "<<num<<" in inner block in main "<<endl;
		cout<<"\ nInner block in main can see out-num1 is: "<<num1<<endl;
		
		
		
	}
	
	cout<<"Local num is: "<<num<<" in main"<<endl;
	
	local_example(10);
	local_example(60);
	
	global_example();  
	global_example(); 
	static_local_example();
	static_local_example();
	
	return 0;
}
