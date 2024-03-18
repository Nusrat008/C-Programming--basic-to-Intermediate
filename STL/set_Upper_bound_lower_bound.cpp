#include<bits/stdc++.h>

#include<vector>
#include<iterator>


using namespace std;

int main(){
    vector <int> v = {1,2,3,3,3,5,8,9,12};
    //1st occurance index
    auto it1 = lower_bound(v.begin(),v.end(),3);
    cout<<distance(v.begin(),it1)<<endl;

    //2nd occurance index
    auto it2 = upper_bound(v.begin(),v.end(),3);
    cout<<distance(v.begin() + 1 ,it2)<<endl;


    /*
    vector <int>  v = {1,3,5,8,9,12};
    set <int> s(v.begin(),v.end());

    //lower bound
    auto it = s.lower_bound(8);

    cout<<((it != s.end()) ? to_string(*it) : "Not found")<<endl;
    
    //upper bound
    auto it1 = s.upper_bound(8);

    cout<<((it1 != s.end()) ? to_string(*it1) : "Not found")<<endl;
    */

    return 0;
}    