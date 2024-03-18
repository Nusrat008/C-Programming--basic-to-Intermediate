#include<iostream>

using namespace std;

class Distance{
    private:
    int feet;
    int inches;

    public:
    Distance(){
        feet = 0;
        inches = 0;
    }
    Distance(int f,int i){
        feet = f;
        inches = i;
    }
    void displayDistance(){
        cout<<"F: "<<feet<<"  I: "<<inches<<endl;
    }
    //Overloaded minus(-) operator  
    Distance operator- (){
        feet = -feet;
        inches = -inches;
        return Distance(feet,inches);
    }
    
};


int main(){
    Distance d1(9,19);
    Distance d2(-4,79);

    -d1;
    d1.displayDistance();

    -d2;
    d2.displayDistance();

    return 0;
}
