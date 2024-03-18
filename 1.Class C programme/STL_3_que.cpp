//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

void showqu(queue<int> q){
    queue<int> g = q;
    while (!g.empty()) {
        cout<<'\t';
        g.front();
        g.pop();
    }
    cout <<'\n'<<endl;
}
 
 int mian(){


     queue<int> qui;
     qui.push(30);
     qui.push(40);
     qui.push(50);


    cout << "The queue gquiz is : "; 

    showqu(qui); 
  
    cout << "\ngquiz.size() : " << qui.size(); 
    cout << "\ngquiz.front() : " << qui.front(); 
    cout << "\ngquiz.back() : " << qui.back(); 
  
    cout << "\ngquiz.pop() : "; 
    qui.pop(); 
    showqu(qui); 

    //  //cout << "The queue is: ";
    //  showqu(qui);
    // //  cout<<endl;
    // //  cout << "\n size: ";
    //  qui.size();
    //  cout <<"\n qui.front() "<<qui.front();
    //  cout <<"\n qui.back() "<<qui.back();

    //  cout <<"\n qui.pop() ";
    //  qui.pop();

    //  showqu(qui);
     return 0;
 }



// #include <iostream> 
// #include <queue> 
  
// using namespace std; 
  
// // Print the queue 
// void showq(queue<int> gq) 
// { 
//     queue<int> g = gq; 
//     while (!g.empty()) { 
//         cout << '\t' << g.front(); 
//         g.pop(); 
//     } 
//     cout << '\n'; 
// } 
  
// // Driver Code 
// int main() 
// { 
//     queue<int> gquiz; 
//     gquiz.push(10); 
//     gquiz.push(20); 
//     gquiz.push(30); 
  
//     cout << "The queue gquiz is : "; 
//     showq(gquiz); 
  
//     cout << "\ngquiz.size() : " << gquiz.size(); 
//     cout << "\ngquiz.front() : " << gquiz.front(); 
//     cout << "\ngquiz.back() : " << gquiz.back(); 
  
//     cout << "\ngquiz.pop() : "; 
//     gquiz.pop(); 
//     showq(gquiz); 
  
//     return 0; 
// }