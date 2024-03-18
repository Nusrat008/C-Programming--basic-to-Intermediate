#include<iostream>
#include<conio.h>

using namespace std;
class a
{
    private : 
        int id =90;
        string name = "Mr.james";
    public :
        friend class b;
};
class b
{
    public :
        void display(a ob)
        {
            cout<<ob.id<<endl;
            cout<<ob.name<<endl;
        }

};

int main(){

    a ob1;
    b ob2;
    ob2.display(ob1);

    getch();
}
