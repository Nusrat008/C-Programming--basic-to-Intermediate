#include <iostream>
using namespace std;
 
class Time {
   private:
      int hours;             // 0 to 23
      int minutes;           // 0 to 59
      
   public:
      // required constructors
      Time() {
         hours = 0;
         minutes = 0;
      }
      Time(int h, int m) {
         hours = h;
         minutes = m;
      }
      
      // method to display time
      void displayTime() {
         cout << "H: " << hours << " M:" << minutes <<endl;
      }
      
      // overloaded prefix ++ operator
      Time operator++ () {
         ++minutes;          // increment this object
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         return Time(hours, minutes);
      }
      
      // overloaded postfix ++ operator
      Time operator++( int ) {
      
         // save the orignal value
         Time T(hours, minutes);
         
         // increment this object
         ++minutes;                    
         
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         
         // return old original value
         return T; 
      }
};

int main() {
   Time T1(11, 59), T2(10,40);
 
   ++T1;                    // increment T1
   T1.displayTime();        // display T1
   ++T1;                    // increment T1 again
   T1.displayTime();        // display T1
 
   T2++;                    // increment T2
   T2.displayTime();        // display T2
   T2++;                    // increment T2 again
   T2.displayTime();        // display T2
   return 0;
}

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
 
   -D1;                     // apply negation
   D1.displayDistance();    // display D1

   -D2;                     // apply negation
   D2.displayDistance();    // display D2

   return 0;
}
*/

/*
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
        cout<<"F: "<<feet<<"I: "<<inches<<endl;
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
*/