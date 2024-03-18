#include<bits/stdc++.h>

// #include<iterator>
// #include<algorithm>

using namespace std;

bool des(int a,int b){
    return(a>b);
}

int main(){
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(110);
    vec.push_back(10);
    vec.push_back(670);
    vec.push_back(90);
    vec.push_back(234);

//    sort(vec.begin(),vec.end());  //asending
//    sort(vec.begin(),vec.end(),des);  //dessending
    sort(vec.begin(),vec.begin() + 3); //first 3 integer sort   

    for(it = vec.begin();it != vec.end();it++){
        cout<<*it<<"\t";
    }
    puts("");


    return 0;
}