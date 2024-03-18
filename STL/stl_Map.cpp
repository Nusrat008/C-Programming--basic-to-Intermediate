#include<bits/stdc++.h>

#include<map>

using namespace std;

int main(){

    map <string,int> m;
     map <string,int>::iterator it;
     
    m["dipto"] = 43;
    m["arnob"] = 42;
    m.insert(make_pair("nabil",41));
    m.insert(make_pair("ali",30));


    /*
    m["arnob"] = 90;
    print 90 for arnob
    cout<<m["arnob"]<<endl;
    */
   //print table :: accoridng to :: string alphabatic order
   for(it = m.begin();it!=m.end();++it){
       cout<< it->first<<" "<< it ->second<<endl;
   }



    return 0;
}