#include<iostream>

#include<vector>
#include<algorithm>

using namespace std;
long long max_product_fast(const vector<long long>vec){
    int n = vec.size();
    int index1 =0;
    for(int i=1;i<n;i++){
        if(vec[i]>vec[index1])
        index1 = i;
    }
    int index2=0;
    for(int j=1;j<n;j++){
        if(vec[j]!=vec[index1] && vec[j]>vec[index2])
        index2 = j;
    }
    return vec[index1] * vec[index2];
}

int main(){

    int n;
    cin>>n;
    vector <long long> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    cout<<max_product_fast(vec)<<"\n"<<endl;


    return 0;
}