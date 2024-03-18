#include<iostream>
#include<vector>

using namespace std;

void display_menu();
char get_selection();

void handle_display(const vector<int>&v);
void handle_add(vector<int>&v);
void handle_mean(const vector<int>&v);
void handle_smallest(const vector<int>&v);
void handle_largest(const vector<int>&v);
void handle_quit();
void handle_unknown();

void display_list(const vector<int>&v);
double calculate_mean(const vector<int>&v);
int get_smallest(const vector<int>&v);
int get_largest(const vector<int>&v);


char toupper(char c){
	c=c-'a'+'A';
}
void display_list(const vector<int>&v){
	cout<<"[ ";
	for(auto z:v)
		cout<<z<<" ";
		cout<<" ]"<<endl;
}
double calculate_mean(const vector<int>&v){
	int total;
	for(auto num:v)
		total+=num;
		return static_cast<double>(total)/v.size();
}
int get_smallest(const vector<int>&v){
	int smallest=v.at(0);
	for(auto num:v)
		if(num<smallest)
			smallest=num;
		return smallest;
	
}
int get_largest(const vector<int>&v){
	int largest=v.at(0);
	for(auto num:v)
		if(num>largest)
			largest=num;
		return largest;
}


int main(){
	
	vector<int>num{};
	char selection{};
	
	do{
		display_menu();
		selection=get_selection();	
		
		switch(selection){
		    case'P':
		        handle_display(num);
		        break;
		    case'A':
		        handle_add(num);
		        break;
		     case'M':
		        handle_mean(num);
		        break;
		      case'S':
		        handle_smallest(num);
		        break;
		       case'L':
		        handle_largest(num);
		        break;
		        case'Q':
		          handle_quit();
		          break;
		        default:
		        	handle_unknown();
		}
		
	} while(selection!='Q');
	cout<<endl;
	return 0;
}

	void display_menu(){
	cout<<"\nP - Pirnt number";
	cout<<"\nA - Add a number";
	cout<<"\nM - Display mean of the number";
	cout<<"\nS - Display the  smallest  number";
	cout<<"\nL - Display the largest number";
	cout<<"\nQ - Quit";
	cout<<"\nEnter your choice: ";
}
char get_selection(){
	char selection{};
	cin>>selection;
	return toupper(selection);
}
void handle_display(const vector<int>&v){
	if(v.size()==0)
		cout<<" []-the list is empty"<<endl;
	else
		display_list(v);
}
void handle_add(vector<int>&v){
	int num_to_add{};
	cout<<"Enter an integer to add to the list: ";
	cin>>num_to_add;
	v.push_back(num_to_add);
	cout<<num_to_add<<" added"<<endl;
}
void handle_mean(const vector<int>&v){
	if(v.size()==0)
	cout<<"Unable to calculate  mean - list is empty"<<endl;
	else
		cout<<"The mean is: "<<calculate_mean(v)<<endl;
}
void handle_smallest(const vector<int>&v){
	cout<<"The smallest number: "<<get_smallest(v);
	cout<<endl;
}
void handle_largest(const vector<int>&v){
	cout<<"The largest number: "<<get_largest(v);
	cout<<endl;
}
void handle_quit(){
	cout<<"Goodbye"<<endl;
}
void handle_unknown(){
	cout<<"Unknown selection - try again"<<endl;
}
	

