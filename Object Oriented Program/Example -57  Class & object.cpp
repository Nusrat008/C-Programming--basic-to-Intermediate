#include<iostream>
#include<string>
#include<vector>

using namespace std;

class student{
	public:
		int id;
		double gpa;
	void display(){
		cout<<id<<" "<<gpa<<endl;
	}	
//	void setvalue(int x,double y){
//		id = x;
//		gpa = y;
//	}
	student(int x,double  y){
		id = x;
		gpa = y;
	}

	student(){
		cout<<" Default consturcting "<<endl;
	}
};
int main(){
	
	student object;
	student nusrat(34,56.67);
//	nusrat.setvalue(34,309.90);
	nusrat.display();
	student raihan(342,456.6);
//	raihan.setvalue(5,489.98);
	raihan.display();
	
	return 0;
}
