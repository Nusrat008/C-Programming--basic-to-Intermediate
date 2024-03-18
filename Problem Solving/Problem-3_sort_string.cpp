#include<iostream>

#include<string>
#include<vector>
using namespace std;

int main(){
    vector<char> v;
    vector<char> v1;
    while(1){
        char s;
        cin>>s;
        v.push_back(s);
        char c;
        v[0] =  c;
        v1.push_back(c);
        if(s =='#')
            break;
        
    }
    for(auto c:v1){
        cout<<c<<endl;
    }


    return 0;
}