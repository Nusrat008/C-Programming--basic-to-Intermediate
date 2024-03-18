#include<bits/stdc++.h>

#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main(){
     int arr[10] ={6,9,3,5,7,2};
    list <int> mylist(arr,arr+5);
    list <int>::iterator it;

    it = find(mylist.begin(),mylist.end(),9);
    
    //it point 9
    //insert 15 between 6=====9
    mylist.insert(it,15);

    for(it = mylist.begin();it != mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    
    return 0;

}

