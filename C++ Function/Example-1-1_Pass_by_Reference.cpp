#include<iostream>
#include<string>
#include<vector>
using namespace std;

void pass_by_ref1(int &num);// By using & ,i can change the value of num
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string>&v);
void print_vector(const vector<string>&v);
int main(){
    int num{10};
    int another_num{20};

    cout<<"Before call pass by ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"After call pass by ref1: "<<num<<endl;
    cout<<another_num<<endl;//20
    pass_by_ref1(another_num);
    cout<<another_num<<endl;//450
    
    string name{"bangla"};
    cout<<"Before calling pass_by_ref2 :"<<name<<endl;
    pass_by_ref2(name);
    cout<<"After Calling pass_by_ref2 :"<<name<<endl;

    vector<string> vec{"3-d array is matrix, "," 2-d array is a vector"};
    
    cout<<"Before calling pass_by_ref3 : ";
    print_vector(vec);
    pass_by_ref3(vec);
    cout<<"After Calling pass_by_ref3 : "<<endl;
    print_vector(vec);


    return 0;
}
void pass_by_ref1(int &num){
    num = 450;
    
}
void pass_by_ref2(string &s){
    s="Changed";
}
void pass_by_ref3(vector<string>&v){
    v.clear();
}
void print_vector(const vector<string>&v){
    for(auto vec:v){
        cout<<vec<<" ";
    }
    cout<<endl;
}



/*
//pass by reference
void print(const vector<int> &v);

int main(){
    vector <int> data{1,2,3,4,5};

    print(data);
    

    return 0;
}
void print(const vector<int> &v){
    // v.at(0)=900;(can not change)
    for(auto n:v){
        cout<<n;
        cout<<endl;
    }
}
*/
/*
//pass by value(copy value)
void print(vector<int> v);

int main(){
    vector <int> data{1,2,3,4,5};

    print(data);
    

    return 0;
}
void print(vector<int> v){
    for(auto n:v){
        cout<<n;
        cout<<endl;
    }
}
*/