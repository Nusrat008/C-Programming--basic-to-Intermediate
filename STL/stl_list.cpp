#include<bits/stdc++.h>

#include<iterator>
#include<list>

using namespace std;

int main(){
    // list <float> mylist;
    // list <float>::iterator it;

    // mylist.push_back(789);
    // mylist.push_front(59);
    // mylist.push_back(89);
    // mylist.push_back(29);
    // mylist.push_front(9);
    // mylist.push_front(-5);
    /*
    //reverse
    mylist.reverse();
    //list clear
    mylist.clear();
    //size of list
    cout<<mylist.size()<<endl;
    */
    list <int> mylist (6,9);
    list <int>::iterator it;
    for(it = mylist.begin();it !=mylist.end();it++ ){
        cout<<*it<<"\t";
    }
    cout<<endl;


    return 0;
}

