#include<iostream>
#include<string>
#include<vector>

using namespace std;

class move 
{
private :
    int *data;

public :
    void set_data(int d){ *data = d;}
    int get_data(){return *data;}
    move(int d);
    move(const move &source);
    ~move();
    
};
move:: move(int d){
    data =new int;
    *data = d;
    cout<<"Constructor for: "<<d<<endl;
}
move::move(const move &source)
    :move{*source.data}{
        cout<<"Copy constructor -deep copy for: "<<*data<<endl;
    }
    /*
move::move(move &&source)
    :data{source.data}{
        source.data = nullptr;
        cout<<"Move constructor - moving resource: "<<*data<<endl;
}
*/ 
move::~move(){
    if(data!=nullptr){
    cout<<"Destructor  freeing data for: "<<*data<<endl;
    }else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main(){
   vector <move> vec;

   vec.push_back(move{48});

    return 0;
}