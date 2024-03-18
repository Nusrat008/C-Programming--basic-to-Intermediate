#include<iostream>

using namespace std;


int num(int &a){
    a = 900;
}

int main(){

    int i;
    i = 9;
    num(i);

    cout<<"i = "<<i<<endl;

}

/*
#include<iostream>

using namespace std;

class truck;

class car
{
  int sc;
  int passenger;
public:
    car(int sp)
    {
        sc = sp;
    }
    int sp_generator(truck t);
    int speed_square(){
        return sc*sc;
    }
};

class truck
{
    int st;
    public:
    truck(int sp)
    {
        st = sp;
    }
    friend int car::sp_generator(truck t);
};

int car::sp_generator(truck t)
{
    return sc - t.st;

}

car area_speed(car ob){

    return ob.speed_square()*0.5;
}

int main()
{
    car c1(10);

    truck t1(3000);

    int speed;
    speed = c1.sp_generator(t1);

    if(speed>0)
        cout<<"Car is fast"<<endl;
    else if(speed ==0)
        cout<<"Speed is equal"<<endl;
    else
        cout<<"Truck is fast"<<endl;

    cout<<"0.5 * speed^2 = "<<area_speed(c1)<<endl;

    return 0;
}

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
    void push(char ch);
    char pop();
};

stack::stack()
{
    cout<<"constructing stack"<<endl;
    tos = 0;
}

void stack::push(char ch)
{
    if(tos == SIZE){
        cout<<"stack is full"<<endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if(tos==0){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    tos --;
    return stck[tos];
}

int main()
{
    stack s1;

    s1.push('w');
    s1.push('o');
    s1.push('h');

    for(int i=0;i<3;i++){
        cout<<"pop s1: "<<s1.pop()<<endl;
    }

    return 0;
}
*/
