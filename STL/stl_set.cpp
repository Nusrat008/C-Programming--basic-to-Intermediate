#include<bits/stdc++.h>

#include<set>

#include<iterator>


using namespace std;

int main(){
    set <string> s;
    set <string> ::iterator it;

    s.insert("dipta");
    s.insert("nabil");
    s.insert("arnob");
    s.insert("reza");

    /*
    for(it = s.begin();it!=s.end();++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
    */

   //s.insert() is  return  :::pair
   //first == iterator ,,second === bool
    pair <set <string> ::iterator,bool> p;
   // p = s.insert("arnob"); //false === already insert
    p = s.insert("sabit");  //true
    if(p.second ==false){
        cout<<"Can't insert"<<endl;
    }
    else{
        cout<<"Inserted"<<endl;
    }


   /*
    set <int> s;
    set <int>::iterator it;

    s.insert(10);
    s.insert(3);
    s.insert(5);

    it = s.find(5);
    s.erase(it);
    //or, s.erase(s.find(5));

    for(it = s.begin();it != s.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    */

    return 0;
}    