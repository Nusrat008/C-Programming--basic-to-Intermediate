#include<bits/stdc++.h>

#include<iterator>
#include<list>

using namespace std;

int main(){

    int arr[10] ={6,9,3,5,7,2};
    list <int> mylist(arr,arr+5);
    list <int>::iterator it;

    it = mylist.begin();
    it++;
    
    mylist.insert(it,15);

    cout<<*it<<endl;

    for(it = mylist.begin();it != mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;

    return 0;
}