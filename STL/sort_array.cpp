#include<bits/stdc++.h>

// #include<iterator>
// #include<algorithm>

using namespace std;

int main(){
    int arr[10] = {89,7,4,23,12,5};
    sort(arr+1,arr+5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;


    return 0;
}