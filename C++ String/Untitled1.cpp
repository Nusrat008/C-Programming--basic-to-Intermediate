#include <iostream>
#include<iomanip>
#include<string>
 
using namespace std;

int main()
{
    string alp{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    string key{"QWERTYUIOPASDFGHJKLZXCVBNMlkjhgfdsaqwertyuiopmnbvcxz"};
    string sec_mes{};
    string enc_mes{};
    
    cout<<"Enter your secret messege:"<<endl;
    getline(cin,sec_mes);
    for(char c:sec_mes)
        size_t position=alp.find(c);
        if(position!=string::npos){
            char c_new;
            
        }
        
    
    return 0;
}
    
    
