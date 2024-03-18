#include<iostream>
#include<vector>
#include <algorithm>
#include<fstream>

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
int main(){
    long long t;
    //cin>>t;
    ifstream fin("data5.txt");
    vector<long long>num;
    while (fin >>t)
    {
        num.push_back(t);
    }
    // for(long long i = 0;i<t;i++){
    //     cin>>num[i];
    // }
    cout<<max_prod_fast(num)<<endl;

    return 0;
}



// #include <iostream>
// #include <fstream>
// #include <vector>

// int main()
// {
//     std::ifstream fin("t.txt");
    
//     std::vector<int> data;
    
//     int element;
//     while (fin >> element)
//     {
//         data.push_back(element);
//     }
// }
