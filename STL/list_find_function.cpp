#include<bits/stdc++.h>

#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    int arr[8] = {4,90,7,2,5,6};

   list <int> mylist(arr,arr+6);
   list <int> ::iterator it;

   it = find(mylist.begin(), mylist.end() , 90);

//    if(it == mylist.end()){
//        cout<<"Not found"<<endl;
//    }
//    else{
//        cout<<*it<<"  Found"<<endl;
//    }
    //erase()
    mylist.erase(it);

    for(it = mylist.begin();it != mylist.end();it++){
       cout<<*it<<"\t";
    }
    cout<<endl;

    return 0;

}

