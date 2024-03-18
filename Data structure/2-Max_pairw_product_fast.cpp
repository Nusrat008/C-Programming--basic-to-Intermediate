#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


long long max_prod_fast(const vector<long long>a){
    long len = 0;
    long long index1=-1;
    long long index2=-1;
    len = a.size();
    for(long long i=0;i<len;i++){
        if(index1==-1 || a[i]>a[index1])
            index1 = i;
    }
    for(long long j=0;j<len;j++){
        if( j!=index1 && (index2==-1 || a[j]>a[index2]))
            index2 = j;  
    }
    cout<<index1+1<<" "<<index2+1<<endl;
    return a[index1]*a[index2];
}

// long long max_prod(const vector<long long>a){
//     int len = 0;
//     long long index1=0;
//     long long index2=0;
//     len = a.size();
//     for(int i=1;i<len;i++){
//         if(a[i]>a[index1])
//             index1 = i;
//         }
//     for(int j=1;j<len;j++){
//         if(a[j]!=a[index1] && a[j]>a[index2])
//             index2 = j;
//     }
//     return a[index1]*a[index2];
// }
//using Index
// long long max_prod(const vector<long long>a){
//     int len = 0;
//     long long max_num1= 0;
//     long long max_num2= 0;
//     len = a.size();
//     for(int i=0;i<len;i++){
//             max_num1 = max(max_num1,a[i]);
//         }
//     for(int j=0;j<len;j++){
//         if(a[j]!=max_num1 && a[j]<max_num1){
//             max_num2 = max(max_num2,a[j]);
//         }
//     }
//     return max_num1*max_num2;
// }

int main(){
    long long t;
    cin>>t;
    vector<long long>num(t);
    for(long long i = 0;i<t;i++){
        cin>>num[i];
    }
    cout<<max_prod_fast(num)<<endl;

    return 0;
}