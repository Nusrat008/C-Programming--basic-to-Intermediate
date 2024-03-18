#include <iostream> 
#include <windows.h> // WinApi header 

using namespace std;

int main() 
{ 
    Beep(700,3000); // 523 hertz (C5) for 500 milliseconds     
    cin.get(); // wait 
    return 0; 
}