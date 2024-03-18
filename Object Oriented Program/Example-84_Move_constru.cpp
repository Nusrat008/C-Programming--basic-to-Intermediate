#include<iostream>
#include<string>
#include<vector>

using namespace std;

class move{
    private :
    int *data;
    public :
    void set_data_value(int d){*data =d;}
    int get_data_value(){return *data; }
    //constructor 
    move(int d);
    //copy constructor
    move(const move &source);
    //move constructor
    //move(move &&source)noexcept;
    //Destructor
    ~move();
};
move :: move(int d){
    data =new int;
    *data = d;
    cout<<"constructor for: "<<d<<endl;
}
//copy constru
move ::move(const move &source)
    :move{*source.data}{
        cout<<"Copy constructor - deep copy for: "<<*data<<endl;
    }
//move constru
//move::move(move &&source)no except
// :data{source.data}{
//    source.data =nullptr;
//    cout<<"Move constructor -moveing resource: "<<*data<<endl;
// }

move ::~move(){
    if(data != nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main(){
    vector <move>vec;

    vec.push_back(move(10));

    /*
    vec.push_back(move{20});
    vec.push_back(move{30});
    vec.push_back(move{40});
    vec.push_back(move{50});
    vec.push_back(move{60});
    vec.push_back(move{70});
    vec.push_back(move{80});
    */

    return 0;
}