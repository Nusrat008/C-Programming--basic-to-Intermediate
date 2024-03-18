#include <thread>

//#include<bits/stdc++.h>

 #include<iostream>
#include<string>
#include<vector>

using namespace std;

class move
{
private: 
    int* data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}

    //Constructor
    move(int d);
    //Copy Constructor
    move(const move &source);
    //Move Constructor
    move(move &&source);
    //Destructor
    ~move();

}; 
move::move(int d){
    data = new int ;
    *data = d;
    cout<<"Coustructor for: "<<d<<endl;
}
move::move(const move &source)
    :move{*source.data}{
        cout<<"Copy constructor - deep copy for: "<<*data<<endl;
    }
move::move(move&& source)
    :data{source.data}{
        cout<<"Move constructor - moving resource."<<*source.data<<endl;
        source.data = nullptr;
}
move::~move(){
    if(data != nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }
    else{
        cout<<"Destructor freeing data for nullptr."<<endl;
    }
    delete data; 
}


int main(){
    vector<move> vec;

    vec.push_back(move{10});
    vec.push_back(move{20});
    vec.push_back(move{30});
    vec.push_back(move{70});
    vec.push_back(move{90});

    return 0;
}