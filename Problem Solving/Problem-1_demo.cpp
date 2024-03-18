//81
#include<iostream>
using namespace std;
#include<bits/stdc++.h>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int a;
     cin>>a;
    
         int arr[50];
         int i= 0;
         int sum =0;
         for(;i<a;i++){
         cin>>arr[i];
         sum+=arr[i];
         }
         double avg;
        avg =sum/a;
         int j=0,k=0;
        for(;j<a;j++){
            if(arr[j]>avg){
                k++;
            }
        }
        double result;
        result = (k*100)/a;
        cout<<fixed<<setprecision(3)<<result<<"%\n"<<endl;
    }


    return 0;
}

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main (){


int T;
cin>>T;
while (T--){
    vector <int> v;
    int a;

    cin>>a;
    int total=a;
    int sum=0;
    while (a--){
        int b;
        cin>>b;
        sum+=b;
        v.push_back(b);
    }

    double avg = (double) sum/(double)total;

    int c=0;
    for (int i=0;i<v.size();i++){
        if (v[i] > avg ){
            c+=1;
        }

    }

    cout<<fixed<<setprecision(3)<<(((double)c/(double)total)*100)<<"%"<<endl;
}
}
*/




/*int a;
        cin>>a;
        int ar[a];
        double sum=0,sum2=0;
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        int average=sum/a;
        for(int i=0;i<a;i++)
        {
            if(ar[i]>average)
            {
                sum2++;
            }
        }
        double result=((sum2*100)/a);
        cout<<fixed<<setprecision(3)<<result<<"%"<<endl;
        */