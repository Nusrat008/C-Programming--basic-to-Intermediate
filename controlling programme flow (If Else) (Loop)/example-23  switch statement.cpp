#include <iostream>

using namespace std;

int main(){
	
	char letter_grade;
	cout<<"Enter the letter grade you expect on the exam : "<<endl;
	cin>>letter_grade;
	switch(letter_grade){
		case 'a':
		case 'A':
			cout<<"You need 90 or above , Study hard!"<<endl;
			break;
		case 'b':
		case 'B':
			cout<<"You need 80-89 for B , go study!"<<endl;
			break;
		case 'c':
		case 'C':
			cout<<"YOu need 70-79 for an average grade "<<endl;
			break;
		case 'd':
		case 'D':
			cout<<"Hmm, you should strive for a better grade.All you need is 60-69."<<endl;
			break;
		case 'f':
		case 'F':
			{
			char confirm;
			cout<<"Are you sure (Y/N)?";
			cin>>confirm;
			if(confirm=='y'||confirm=='Y')
			  cout<<"Ok,  I guess you didn't study!"<<endl;
			else if(confirm=='n'||confirm=='N')
				cout<<"Good - go study!"<<endl;
			else 
			cout<<"Illegal chioce"<<endl;
			break;
		   }
		default:
			cout<<"Sorry, not a valid grade."<<endl;	
	}
	return 0;
}
