#include<iostream>

using namespace std;

int main(){
    int a,b;
    
    while(a !=0){
        int i = 2;
        int j=0;
        cin>>a;
        for(; i<a;i++){
            if(a%i==0){
                j++;
            }
        }
        cout<<j<<endl;
    }


    return 0;
}