#include<iostream>

#include<vector>
#include<algorithm>

using namespace std;
long long max_product(const vector<long long>vec){
    int i =0,j=0;
    int n = vec.size();
    long long max_product =0;
    for(;i<n;i++){
        for(j=i+1;j<n;j++){
            max_product = max(max_product,vec[i]*vec[j]);
        }
    }
    return max_product;
}

int main(){
    int n;
    cin>>n;
    vector <long long> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<max_product(vec)<<"\n"<<endl;

    return 0;
}