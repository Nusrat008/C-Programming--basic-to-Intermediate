#include<bits/stdc++.h>

#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main(){
   int arr[8] = {4,9,7,2,5,3};

   list <int> mylist(arr,arr+6);
   list <int>::iterator it;

     // list <int> mylist;

    // if(mylist.empty()){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Filled"<<endl;
    // }
    //1st , last element print
    // cout<<mylist.front()<<endl;
    // cout<<mylist.back()<<endl;

    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_front();
    mylist.pop_back();
    

    for(it = mylist.begin();it != mylist.end();it++){
       cout<<*it<<"\t";
   }
   cout<<endl;










    return 0;
}