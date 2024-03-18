#include<iostream>

using namespace std;

class Box{
private:
    double len;
    double br;
    double he;
public:
    double getvolume(void){
        return len * br * he;
    }
    void setlen(double l){
        len =l;
    }
    void setbr(double b){
        br = b;
    }
    void sethe(double h){
        he = h;
    }
    Box operator+(const Box& b){
        Box box;
        box.len = this->len + b.len;
        box.br = this->br +b.br;
        box.he = this->he + b.he;
        return box;
    }
};

int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;

    box1.setlen(3.5);
    box1.setbr(2);
    box1.sethe(1);
    
    box2.setlen(5);
    box2.setbr(3);
    box2.sethe(2.5);

    volume = box1.getvolume();
    cout<<"Volume of Box1 : "<<volume<<endl;
    
    volume = box2.getvolume();
    cout<<"Volume of Box2 : "<<volume<<endl;

    box3 = box1 + box2;
    volume = box3.getvolume();
    cout<<"Volume of Box3 : "<<volume<<endl;


    return 0;
}