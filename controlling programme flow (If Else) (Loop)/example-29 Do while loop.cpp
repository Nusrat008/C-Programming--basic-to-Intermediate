 #include<iostream>

using namespace std;
int main(){
	char selection{};
	do{
		cout<<"\n--------------"<<endl;
		cout<<"1.Do this "<<endl;
		cout<<"2.Do that "<<endl;
		cout<<"3.Do something else. "<<endl;
		cout<<"Q. quit "<<endl;
		cout<<" \nEnter your selection: "<<endl;
		cin>>selection;
		if(selection=='1'){
			cout<<" Do this"<<endl;
		}
		else if(selection=='2'){
			cout<<" Do that"<<endl;
		}
		else if(selection=='3'){
			cout<<" Do something else"<<endl;
		}
		else if(selection=='q'||selection=='Q'){
			cout<<" Goodbye....."<<endl;
		}
		else{
			cout<<" Unknown option---Try again..."<<endl;
		}
		
		
	}while(selection!='q'&&selection!='Q');
	
	return 0;
}
