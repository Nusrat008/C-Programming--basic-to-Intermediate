 #include<iostream>

#include<vector>

using namespace std;

class Move
{
private: 
    int* data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}

    //Constructor
    Move(int d);
    //Copy Constructor
    Move(const Move &source);
    //Move Constructor
    Move(Move &&source);
    //Destructor
    ~Move();

}; 
Move::Move(int d){
    data = new int ;
    *data = d;
    cout<<"Coustructor for: "<<d<<endl;
}
Move::Move(const Move &source)
    :Move{*source.data}{
        cout<<"Copy constructor - deep copy for: "<<*data<<endl;
    }
Move::Move(Move&& source)
    :data{source.data}{
        cout<<"Move constructor - moving resource."<<*source.data<<endl;
        source.data = nullptr;
}
Move::~Move(){
    if(data != nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }
    else{
        cout<<"Destructor freeing data for nullptr."<<endl;
    }
    delete data; 
}


int main(){
    vector<Move> vec;

    vec.push_back(Move{ 678 });
    vec.push_back(Move{ 456 });

    // vec.push_back(Move{ 345 });
    // vec.push_back(Move{ 70 });
    // vec.push_back(Move{ 90 });

    return 0;
}



/*
#include <iostream> 
#include <vector> 
using namespace std; 
  
// Move Class 
class Move { 
private: 
    // Declare the raw pointer as 
    // the data member of class 
    int* data; 
  
public: 
    // Consturctor 
    Move(int d) 
    { 
        // Declare object in the heap 
        data = new int; 
        *data = d; 
        cout << "Constructor is called for "
             << d << endl; 
    }; 
  
    // Copy Constructor 
    Move(const Move& source) 
        : Move{ *source.data } 
    { 
  
        // Copying the data by making 
        // deep copy 
        cout << "Copy Constructor is called -"
             << "Deep copy for "
             << *source.data 
             << endl; 
    } 
  
    // Move Constructor 
    Move(Move&& source) 
        : data{ source.data } 
    { 
  
        cout << "Move Constructor for "
             << *source.data << endl; 
        source.data = nullptr; 
    } 
  
    // Destructor 
    ~Move() 
    { 
        if (data != nullptr) 
  
            // If pointer is not pointing 
            // to nullptr 
            cout << "Destructor is called for "
                 << *data << endl; 
        else
  
            // If pointer is pointing 
            // to nullptr 
            cout << "Desturctor is called"
                 << " for nullptr "
                 << endl; 
  
        // Free up the memory assigned to 
        // The data member of the object 
        delete data; 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    // Vector of Move Class 
    vector<Move> vec; 
  
    // Inserting Object of Move Class 
    vec.push_back(Move{ 10 }); 
    vec.push_back(Move{ 20 }); 
    return 0; 
} 
*/