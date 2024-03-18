#include<bits/stdc++.h>

#include<map>

using namespace std;

int main(){
    multimap <string,int> m;
    multimap <string,int>:: iterator it;
    //same key can be repeated
    m.insert(make_pair("dipta",67));
    m.insert(make_pair("dipta",90));
    m.insert(make_pair("dipta",4580));
    m.insert(make_pair("arnob",200));
    

    for(it = m.begin();it!= m.end();it++){
        cout<< it -> first <<" "<< it -> second <<endl;
    }

    

    return 0;
}    