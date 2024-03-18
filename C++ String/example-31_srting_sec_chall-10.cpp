#include <iostream>
#include<string>
//#include<iomanip>

using namespace std;

int main()
{
    string alp{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRTUVWXYZ"};
    
    string key{"QWERTYUIOPASDFGHJKLZXCVBNMlkjhgfdsaqwertyuiomnbvcxz"};
    string sec_mes{};
    string enc_mes{};
    string dec_mes{}; 
    cout<<"Enter Your sectect messege: ";
    getline(cin,sec_mes);
    for(char c:sec_mes){
        size_t position=alp.find(c);
        if(position!=string::npos){
            char c_new{key.at(position)};
            enc_mes += c_new;
        }  
        else{
            enc_mes +=c;
        }
    }
    cout<<"Encrypting...."<<endl;
    cout<<"Encrypted messege: "<<enc_mes<<endl;
    
    cout<<"Decryping...."<<endl;
    for(char c:enc_mes){
        size_t position=key.find(c);
        if(position!=string::npos){
            char d_new{alp.at(position)};
            dec_mes+=d_new;
    }
    else
        dec_mes += c;
    }
    cout<<"Decrypted messege:  "<<dec_mes<<endl;
    

    return 0;
}

