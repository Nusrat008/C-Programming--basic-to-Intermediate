//Section 11
//Arrays and Functions
cout<<xx<<endl;
#include<iostream>
using namespace std;

void print_array(const int arr[],size_t size);//const
void set_array(int arr[],size_t size,int value);

void print_array(const int arr[],size_t size){
    for(size_t i{0};i<size;i++){
        cout<<arr[i]<<" ";
        //arr[0]=25;
    }
    
    cout<<endl;
}
void set_array(int arr[],size_t size,int value){
    for(int i{0};i<size;i++){
        arr[i]=value;
        
    }
}

int main()
{
    int i[]{90,95,98,102,300};
    print_array(i,5);
    set_array(i,5,100);
    print_array(i,5);
    
    print_array(i,5);
    return 0;
}