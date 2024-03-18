#include <iostream>
#include<conio.h>

using namespace std;

class MyClass
 {
        int a, b;
        public:
        void setAB(int i, int j) { a = i, b = j; }
        void display()
        {
            cout << "\n a is " <<a << "\n";
            cout << "\n b is " << b <<"\n";
        }
 };
int main()
 {
      MyClass ob1, ob2;
      ob1.setAB(10, 20);
      ob2.setAB(0, 0);
      cout << "obj 1 before assignment";
      ob1.display();
      cout << "obj 1 before assignment";
      ob2.display();
      ob2 = ob1;
      cout << "ob 1 after assignment";
      ob1.display();
      cout << "ob 2after assignment";
      ob2.display();
      ob1.setAB(-1, -1);
      cout << "ob 1 after changing ob1 :";
      ob1.display();
      cout << "ob 2 after changing ob1 :";
      ob2.display();
      return 0;
 }
