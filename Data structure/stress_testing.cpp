#include<iostream>
#include<vector>
//#include <experimental/random>
using namespace std;
long long stress_testing(int n,int m);
long long max_prod_fast(const vector<long long>a);
long long max_prod_naive(const vector<long long>a);
int main(){
    // int t;
    // cin>>t;
    int n,m;
    n = 1000;
    m =153653;
    //cout<<max_prod(num)<<endl;
    stress_testing(n,m);
    return 0;
}
long long max_prod_fast(const vector<long long>a){
    int len = 0;
    long long index1=-1;
    long long index2=-1;
    len = a.size();
    for(int i=0;i<len;i++){
        if(index1==-1 || a[i]>a[index1])
            index1 = i;
    }
    for(int j=0;j<len;j++){
        if( j!=index1 && (index2==-1 || a[j]>a[index2]))
            index2 = j;  
    }
    cout<<index1+1<<" "<<index2+1<<endl;
    return a[index1]*a[index2];
}
long long max_prod_naive(const vector<long long>a){
    int len = 0;
    long long max_prod;
    len = a.size();
    max_prod =0;
    int i ,j;
    for(i=0;i<len;i++){
        for(j = i+1;j<len;j++){
            max_prod = max(max_prod,a[i]*a[j]);
            //cout<<i<<" "<<j<<endl;
        }
    }
    return max_prod;
}
long long stress_testing(int n,int m){
    //long long num =randint(2, n);
   // random  = offset + (rand() % rang)
    long long value;
    vector<long long>num(n);
    int res1 = 0,res2 = 0;
    bool equal = true;
    //1 to 1000
    while (equal){
        for(int i=0;i<n;i++){
        value = 1 + (rand() % m);
        cout<<value<<" ";
        num[i] = value;
        }  
        cout<<endl;
        res1 = max_prod_fast(num);
        res2 = max_prod_naive(num);
        if(res1==res2){
            cout<<"ok"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
            for(int i =0;i<num.size();i++){
                cout<<num[i]<<" ";
            }
            cout<<endl;
            cout<<res1<<" "<<res2<<endl;
            break;
        }
    }
}

/*
#include<iostream>
#include<vector>
//#include <experimental/random>
using namespace std;

long long max_prod_fast(const vector<long long>a){
    int len = 0;
    long long index1=0;
    long long index2=0;
    len = a.size();
    for(int i=1;i<len;i++){
        if(a[i]>a[index1])
            index1 = i;
    }
    for(int j=1;j<len;j++){
        if(a[j]!=a[index1] && a[j]>a[index2])
            index2 = j;
    }
    return a[index1]*a[index2];
}

long long max_prod_naive(const vector<long long>a){
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
long long stress_testing(int n,int m){
    //long long num =randint(2, n);
   // random  = offset + (rand() % rang)
    long long value;
    vector<long long>num(n);
    int res1 = 0,res2 = 0;
    bool equal = true;
    //1 to 1000
    while (equal){
        for(int i=1;i<=n;i++){
        value = 1 + (rand() % m);
        num[i] = value;
        }  
        res1 = max_prod_fast(num);
        res2 = max_prod_naive(num);
        if(res1==res2){
            cout<<"ok"<<endl;
        }
        else{
            cout<<res1<<" "<<res2<<endl;
            break;
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    int n,m;
    n = 15;
    m = 1000;
    //cout<<max_prod(num)<<endl;
    stress_testing(n,m);
    return 0;
}
*/