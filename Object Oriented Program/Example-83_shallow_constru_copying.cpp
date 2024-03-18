#include<iostream>
#include<string>

using namespace std;

class shallow
{
private :
    int *data;
public :
    void set_data_value(int d){ *data =d; }
    int  get_data_value(){return *data;}
    shallow(int d);
    shallow(const shallow &source);
    ~shallow();

};
shallow::shallow(int d){
    data =new int;
    *data = d;
}
shallow::shallow(const shallow &source)
    :data(source.data){
    cout<<"Copy constructor -shallow copy"<<endl;
}
shallow::~shallow(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
void display_shallow(shallow s){
    cout<<s.get_data_value()<<endl;
}
int main(){

    shallow obj1{100};
    display_shallow(obj1);

    shallow obj2{obj1};

    obj2.set_data_value(1000);
    display_shallow(obj2);


    return 0;
}
