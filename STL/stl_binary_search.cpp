#include<bits/stdc++.h>

#include<vector>


using namespace std;

int main(){

    vector <int>  v = {1,3,5,8,9,12};
    /*
    //list must be assending or dessending ordered
    bool ans = binary_search(v.begin(), v.end(), 8);
    
    if(ans) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    */
   /*
    lower bound
    vector <int>:: iterator it = lower_bound(v.begin(),v.end(),7);
    or,
    auto it = lower_bound(v.begin(),v.end(),7);

    cout<<*it<<endl; //print lower bound of 7
    
    lower bound er index
    cout<<distance(v.begin(),it)<<endl;//1

    cout<<(it - v.begin())<<endl;//2  1 and 2 are same
    */

    //upper bound
    auto it = upper_bound(v.begin(),v.end(),9);

    cout<<( (it == v.end()) ? "Not found" : to_string(*it) )<<endl;
    

    return 0;
}     