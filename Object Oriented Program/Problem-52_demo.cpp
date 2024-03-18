#include<iostream>
#include<string>

using namespace std;


int main(){
    int t;
    cin>>t;

    cin.ignore();
    while(t--){
       string a1;
        string a2;
        cin>>a1>>a2;
        int len1 = a1.size();
        int len2 = a2.size();

        int add1 = 1;
        int add2 = 1;
        for(int i{0};i<len1;i++){
            add1 = add1*int(a1[i]);
        }
        int rem1;
        int rem2;
        rem1 = add1%97;
        
        
        for(int i{0};i<len2;i++){
            add2 = add2*int(a2[i]);
        }
        rem2 = add2%97;
        if(rem1==rem2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        cout<<endl;
    }

    return 0;
}
