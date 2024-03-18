#include<bits/stdc++.h>

#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main(){
   int arr[8] = {4,9,7,2,5,6};

   list <int> mylist(arr,arr+5);
   list <int> ::iterator it;

   it = find(mylist.begin(), mylist.end() , 9);
   mylist.insert(it,85);

   for(it = mylist.begin();it != mylist.end();it++){
       cout<<*it<<"\t";
   }
   cout<<endl;

   return 0;

}

