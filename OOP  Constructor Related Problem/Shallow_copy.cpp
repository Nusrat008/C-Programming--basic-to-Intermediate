#include<iostream>

#include<string>

using namespace std;

class shallow{
private:
    int *data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}

    //constructor
    shallow(int d);

    //copy Constructor
    shallow(const shallow &source);

    //Destructor
    ~shallow();
};

shallow::shallow(int d){
    data = new int;
    *data = d;
}
shallow::shallow(const shallow &oj)
        :data(oj.data){
            cout<<"Copy constructor - shallow copy."<<endl;
}
shallow::~shallow(){
    delete data;
    cout<<"Desturctor freeing data."<<endl;
}
void display_shallow(shallow s){
    cout<<s.get_data_value()<<endl;
}




int main(){

    shallow obj1{100};
    display_shallow(obj1);

    shallow obj2{obj1};
//    display_shallow(obj2);
   obj2.set_data_value(900);
    // display_shallow(obj2);

    return 0;
}