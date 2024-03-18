#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int l,n;
    cin>>l>>n;
    char ch[101];
    int j=0;
    while(l--){
        cin>>ch[j];
        j++;
    }
    cout<<endl;
    int r = l/2;
    for(int i=0;i<l;i++){
        if(i!=r && i!= r-1)
        cout<<ch[i];
    }
    cout<<endl;

    return 0;
}