#include<iostream>

using namespace std;

class calc
{
private:

public:
    void body(){
        cout<<"\t\tWelcome to My Calculator "<<endl;
        cout<<"\t\t^^^^^   ^^ ^^^ ^^^^^^^^^"<<endl;
    }
    int add(int a,int b)
    {
        int ans = a + b;
        return ans;
    } 
    int sub(int a,int b)
    {
        int ans = a - b;
        return ans;
    } 
    int mul(int a,int b)
    {
        int ans = a * b;
        return ans;
    } 
    int div(int a,int b)
    {
        int ans = a / b;
        return ans;
    } 
    
};

int main(){

    int a,b;
    int func;

    calc c;
    c.body();

    cout<<"Choose one of these options."<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Input Your options: "<<endl;
    cin>>func;
    
    switch(func)
    {
        case(1):
            cout<<"Enter any two numbers"<<endl;
            cin>>a>>b;
            cout<<c.add(a,b)<<endl;
            break;
        case(2):
            cout<<"Enter any two numbers"<<endl;
            cin>>a>>b;
            cout<<c.sub(a,b)<<endl;
            break;
            
        case(3):
            cout<<"Enter any two numbers"<<endl;
            cin>>a>>b;
            cout<<c.mul(a,b)<<endl;
            break;

        case(4):
            cout<<"Enter any two numbers"<<endl;
            cin>>a>>b;
            cout<<c.div(a,b)<<endl;
            break;
        default:
            cout<<"Invalid Input......"<<endl;
            break;


    }

    return 0;
}