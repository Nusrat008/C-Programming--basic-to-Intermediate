#include<iostream>

using namespace std;

class myclass {
    int i;
    int j;
public:
    myclass(int a,int b)
    {
        i = a;
        j = b;
    }
    int div()
    {
        return !(i%j);
    }
};


int main(){

    myclass ob(200,6);

    if(div())
        cout<<"200 is divisable by 6"<<endl;
    else
        cout<<"not divisable by 6"<<endl;

    return 0;
}
