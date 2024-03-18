#include<iostream>

using namespace std;
class deep
{
private :
    int *data;
public :
    void set_data_value(int d){ *data =  d; }
    int get_data_value(){ return *data;}
    //constru
    deep(int d);
    deep(const deep &source);
    //destruc
    ~deep();
};
deep::deep(int d){
    data = new int;
    *data = d;  
}
deep::deep(const deep &source)
    :deep{*source.data}{
    cout<<"Copy constructor -deep copy"<<endl;
}
deep::~deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
void display_deep(deep s){
    cout<<s.get_data_value()<<endl;
}

int main(){
    deep obj1{700};
    display_deep(obj1);

    deep obj2{obj1};

    obj2.set_data_value(3000);
    display_deep(obj2); 
    return 0;
}
 