#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    int c =1;
    while(c=1){

        cin>>a>>b;
        if(a==0 || b==0){
            break;
        }
        int result,i=0,d,e;
        if(a>b)
            b =a;
        
        while(result!=0){
            result = e%b;
            e = b;
            b = result;
            i++;
        }
        if(i%2==0){
           cout<<"Stan wins"<<endl;
        }
        else
        {
            cout<<"Ollie wins"<<endl;
        }
        


    }
    return 0;
}