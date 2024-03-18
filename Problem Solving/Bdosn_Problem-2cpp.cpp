#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        int count =0;
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                count =count+1;
            }
        }
        cout<<count<<endl;

    }


    return 0;
}