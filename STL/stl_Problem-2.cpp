#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(110);
    vec.push_back(55);
    vec.push_back(78);
    vec.push_back(90);
    vec.push_back(780);

    // for(int i =22;i<=25;i++){
    //     vec.push_back(i);
    // }
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<"\t";
    // }
    // puts("");

    for(it = vec.begin();it != vec.end();it++){
        cout<<*it<<"\t";
    }
    puts("");


    return 0;
}