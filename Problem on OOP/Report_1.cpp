
#include<iostream>

using namespace std;

class myclass
{
    int a;
public:
    myclass(int x);
    int get();
};

myclass::myclass(int x)
{
    a = x; 
}
int myclass::get()
{
    return a;
}

int main()
{
    myclass ob(190);
    myclass *p;
    p = &ob;
    //cout<<"value using object: "<<ob.get()<<endl;
    cout<<"value using pointer: "<<p->get()<<endl;
    return 0;
}



/*
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

#define SIZE 25

class strtype
{
    char *p;
    int len;
public:
    strtype();
    ~strtype();
    void set(char *ptr);
    void show();
};

strtype::strtype()
{
    p = (char *) malloc(SIZE);
    if(!p)
    {
        cout<<"Allocatoin error\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}
strtype::~strtype()
{
    cout<<"Freeing p\n";
    free(p);
}
void strtype::set(char *ptr)
{
    if(strlen(p)>=SIZE)
    {
        cout<<"String too big\n";
        return;
    }
    strcpy(p,ptr);
    len = strlen(p);
}
void strtype::show()
{
    cout<<p<<"- length: "<<len;
    cout<<"\n";
}

int main()
{
    strtype s1,s2;
    s1.set("This is a test");
    s2.set("i like c++");

    s1.show();
    s2.show();

    return 0;
}
*/

/*
#include<iostream>

using namespace std;

#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;
public:
    stack();
    ~stack();
    void push(char ch);
    char pop();
};

stack::stack()
{
    cout<<"Constructing a stuck"<<endl;
    tos = 0;
}

stack::~stack()
{
    cout<<"destructing the obj"<<endl;
}

void stack::push(char ch)
{
    if(tos==SIZE)
    {
        cout<<"stack is full"<<endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if(tos==0)
    {
        cout<<"stack is empty\n"<<endl;
        return 0;
    }
    tos --;
    return stck[tos];
}

int main()
{
    stack ob1,ob2;
    int i;

    ob1.push('a');
    ob1.push('b');
    ob1.push('c');
    ob2.push('x');
    ob2.push('y');
    ob2.push('z');
    for(int i=0;i<3;i++)
    {
        cout<<"the ob1: "<<ob1.pop()<<endl;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"the ob2: "<<ob2.pop()<<endl;
    }

    return 0;
}
*/


/*
#include<iostream>

using namespace std;

class myclass
{
private:
    int a;
public:
    myclass();
    ~myclass();
    void show();
};

myclass::myclass()
{
    cout<<"In constructor\n";
    a = 10;
}

void myclass::show()
{
    cout<<"the value of a is: "<<a<<endl;
}
myclass::~myclass()
{
    cout<<"Destroy destructor\n";
}
int main(){

    myclass obj;
    obj.show();
    return 0;



    return 0;
}
*/
