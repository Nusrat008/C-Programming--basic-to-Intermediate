#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int a;
        vector<int>vec;
        vector<int>v1;
        cin>>a;
        while(a--){
            int m1,m2,m3,total;
            cin>>m1>>m2>>m3;
            total= m1+m2+m3;
            vec.push_back(total);
            v1.push_back(total);
        }
        sort(v1.begin(),v1.end());
         

        
        



    }



    return 0;
}