#include<iostream>
using namespace std;
#include<string>
#include<sstream>
int main(){
    string str;
    str = "hello world and hello bangladesh";
    //stirng size:str.size()
    cout<<"size of string = "<<str.size()<<endl;
    //concatanation :strcat
    string s1 = "Hello ";
    string s2 = "World";
    string s3 = s1+s2;
    cout<<s3<<endl;
    //size_t find1 = s1.find("");
    size_t find1 = s1.find("lo");
    if(find1 !=string::npos)
    cout<<"find lo in s1:"<<find1<<endl;
    else
    cout<<"Not found"<<endl;
    //replace:stringname(start,end,stringGiven)
    s1.replace(2,4,s2);
    cout<<s1<<endl;
    //substring:substr()
    string email= "unibangladesh@bd.com";
    size_t position = email.find("de");
    if(position !=string::npos){
    string domain = email.substr(position);
    cout<<domain<<endl;
    }
    else
    cout<<"Not found"<<endl;
    //Reverse string

    //erase string:str1.erase(start,len)

    //#include<sstream>
    string str_s;
    getline(cin,str_s);
    istringstream iss(str_s);
    string word;
    while(iss>>word){
        cout<<word<<endl;

    }
    return 0;
}