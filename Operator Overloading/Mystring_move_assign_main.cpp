#include<iostream>

#include<vector>
#include<cstring>

#include"Mystring_move_assign.cpp"
  
using namespace std;

int main(){
    Mystring a{"Hello"};
    a = Mystring{"Universe"};
    a = "Bonjour";
    
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooge{larry};
    Mystring stooges;
     
    empty = stooge;

    empty = "Funny";
    
    empty.display();
    larry.display();
    stooge.display();

     vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    cout<<"=== Loop 1 ================"<<endl;
    for(const Mystring &s:stooges_vec)
        s.display();

    cout<<"=== Loop 2=============="<<endl;
    for(Mystring &s:stooges_vec)
        s = "Changed";

    cout<<"=== Loop 3 ==============="<<endl;
    for(const Mystring &s:stooges_vec)
        s.display();
    

    return 0;
}    