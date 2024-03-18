#include <iostream>

#include<vector>

using namespace std;

int main()
{
    vector<int>even_num{};
    vector<int>odd_num{};
    int num1;
    int num2;
    cout<<"Enter your 1st number: ";
    cin>>num1;
    cout<<"Enter your last number: ";
    cin>>num2;
    for(int i=num1;i<=num2;i++){
        if(i%2==0){
           even_num.push_back(i);
        }
        else{
            odd_num.push_back(i);
        }
    }
    cout<<"The even numbers are: ";
    for(auto even:even_num)
        cout<<even<<" ";
        cout<<endl;
     cout<<"The odd numbers are: ";
    for(auto odd:odd_num)
        cout<<odd<<" ";
        cout<<endl;   
        
    return 0;
}

