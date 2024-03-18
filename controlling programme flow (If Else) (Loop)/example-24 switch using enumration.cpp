#include<iostream>

using namespace std;

int main(){
	enum Direction{
		left,right,up,down
	};
	
	Direction heading(left);
	
	switch(heading){
		case left:
			cout<<"Going left  to your direction"<<endl;
			break;
		case right:
			cout<<"Going right and its direction "<<endl;
			break;
		default:
			cout<<"OK"<<endl;
	}
	return 0;
}

