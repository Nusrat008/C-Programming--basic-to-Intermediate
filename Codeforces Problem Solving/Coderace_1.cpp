#include<iostream>
using namespace std;

int main(){
     int a;
    while(cin>>a)
    {
       
        int i=a;
        int sum=0;
        for(;i>0;i--){
            int m;
            cin>>m;
            sum=m +sum;
        }
        cout<<sum<<endl;
        
   }
    return 0;

}