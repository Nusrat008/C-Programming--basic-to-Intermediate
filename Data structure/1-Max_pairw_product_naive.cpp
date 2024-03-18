#include<iostream>
#include<vector>

using namespace std;

long long max_prod(const vector<long long>a){
    int len = 0;
    long long max_prod;
    len = a.size();
    max_prod =0;
    for(int i=0;i<len;i++){
        for(int j = i+1;j<len;j++){
            max_prod = max(max_prod,a[i]*a[j]);
        }
    }
    return max_prod;
}

int main(){
    int t;
    cin>>t;
    vector<long long>num(t);
    for(int i = 0;i<t;i++){
        cin>>num[i];
    }
    cout<<max_prod(num)<<endl;

    return 0;
}