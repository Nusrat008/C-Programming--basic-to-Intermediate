

#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
   
  vector<int>num{};
  char secl;
	
	do{
		cout<<"P - Pirnt number";
		cout<<"\nA - Add a number";
		cout<<"\nM - Display mean of the number";
		cout<<"\nS - Display the  smallest  number";
		cout<<"\nL - Display the largest number";
		cout<<"\nQ - Quit";
		
		cout<<"\nEnter your choice: "<<endl;
		cin>>secl;
		
		if(secl=='p'||secl=='P'){
			if(num.size()==0){
				cout<<"The list is empty []";
				cout<<endl;
			}
			else if{
		     cout<<"the list of value: ";
		     cout<<"[";
		    for(auto z:num){
		       cout<<z<<" ";
		        }
		        cout<<"]";
		        cout<<endl;
		    }
		  }
		  else if(secl=='a'||secl=='A'){
		      cout<<"Enter a value:";
		      int val;
		      cin>>val;
		      cout<<val<<"added ";
		      num.push_back(val);
		  }
		  else if(secl=='M'||secl=='m'){
		  if(num.size()==0){
		  		cout<<"Unable to calculate the mean ,list is empty."<<endl;
			  }	
			  else{
		      int sum;
		      double mean;
		      for(int i=0;i<num.size();i++){
		          sum+=num[i];
		      }
		      mean=sum/num.size();
		      cout<<"The mean of numbers: "<<mean<<endl;
		  	}
		  }
		  else if(secl=='s'||secl=='S'){
		      int min;
		      min=num[0];
		      for(int i=1;i<num.size();i++){
		          if(num[i]<min){
		              min=num[i];
		          }
		      }
		      cout<<"The smallest numbers: "<<min<<endl;
		  }
		  else if(secl=='l'||secl=='L'){
		      int max;
		      max=num[0];
		      for(int i=1;i<num.size();i++){
		          if(num[i]>max){
		              max=num[i];
		          }
		      }
		      cout<<"The largest numbers: "<<max<<endl;
		  }
		  else{
		  	cout<<"Unknown seclection ,Please try again!"<<endl;
		  }
		  
	}while(secl!='q'||secl!='q');
	cout<<"Goodbye......."<<endl;
	
    return 0;
}

