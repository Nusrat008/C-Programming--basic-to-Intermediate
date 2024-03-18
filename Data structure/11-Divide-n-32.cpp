#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;




int main(){
    int arr[20]{5,8,9,2,6};
    int min;
    for(int i=0;i<5;i++){
       min= i;
        for(int j=i+1;j<5;j++){
        if(arr[j]<arr[i])
        min = j;
        swap(arr[i],arr[min]);
    }
    }
    for(int k=0;k<5;k++){
    cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;
} 
