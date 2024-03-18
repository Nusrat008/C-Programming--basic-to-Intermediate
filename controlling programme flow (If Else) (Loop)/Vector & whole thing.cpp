#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>list_val={7,20,30,198,80,5988097,85,970,75};
    
    for(int z:list_val)
    cout<<z<<"  ";
    cout<<endl;
    
    /*
    int min;
    min = *min_element(list_val.begin(), list_val.end());
    cout<<"the mini: "<<min<<endl;
    */
    
    //double sum_val;
     //double mean_value; 
     
   /* int num;
    cout<<"Enter an integer:"<<endl;
    cin>>num;
    list_val.push_back(num); 
   for(auto val:list_val){
       cout<<val<<endl;
   }
   for(int i=0;i<list_val.size();i++){
       cout<<"second type: "<<list_val[i] <<endl;
   }
   */
   
    /*
    for(int i=0;i<list_val.size();i++){
        sum_val+=list_val[i];
    }
    
    
    mean_value=sum_val/list_val.size();
    cout<<"Mean of vector: "<<mean_value;
    */
    
    int min=list_val[0];
  for(int i=1;i<list_val.size();i++){
      if(list_val[i]<min){
          min=list_val[i];
      }
  }
  cout<<"smallest is: "<<min<<endl;
  
  return 0;
}

