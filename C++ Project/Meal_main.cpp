#include<iostream>

#include<fstream>
#include<conio.h>
#include<string>

//#include "Meal_management.h"

using namespace std;

//Rayhan meal_record
class Rayhan
{
public:
    int input()
    {
        char name[20];
        x:
        cout<<"Enter Name: "<<endl;
        cin>>name;
        if(strcmp(name,"Rayhan")==0){
            cout<<"His/Her Name : "<<name<<endl;
            cout<<"His is a student"<<endl;
        }
        else{
            cout<<"You type wr ong Name"<<endl;
            goto x;
        }

    }
};



class meal{
public:
    int meal_of,cost,total_meal,total_cost;
    int meal1,cost1,permeal;
    
    meal(){
        int count =0;
        cout<<"Enter todays meal: ";
        cin>>meal_of;
        cout<<"Enter todays cost: ";
        cin>>cost;
        ofstream fout("Meal.txt", ios:: app);
        fout<<meal_of<<" "<<cost<<endl;

        fout.close();
        count++;
        cout<<"Your entered Meal and Cost "<<count<<" times "<<endl;
    }
    int display()
    {
        total_meal = 0;
        total_cost = 0;
        ifstream fin("one.txt",ios::app);
        while(!fin.eof())
        {
            fin>>meal1;
            fin>>cost1;
            total_meal = total_meal + meal1;
            total_cost = total_cost + cost1;
            meal1 = 0 ;
            cost1 = 0;
        }
        cout<<"Total meal: "<<total_meal<<endl;
        cout<<"Total cost: "<<total_cost<<endl;
        cout<<"Cost per meal: "<<(double)total_cost/total_meal<<endl;
    }
};

//Emran meal_record
class Emran
{
public:
    int display(){
    char name1[20];
    y:
    cout<<"Enter name: "<<endl;
    cin>>name1;
    if(strcmp(name1,"Emran")==0){
        cout<<"Her name : "<<name1<<endl;
        cout<<"He is a student."<<endl;
    }
    else
        {
        cout<<"You type wrong name."<<endl;
        goto y;
        }
    }
};

class meal1
{
public:
    int meal,cost,total_meal,total_cost;
    int meal_1,cost1,permeal;
    meal1()
    {
        int count = 0;
        cout<<"Enter todays meal: ";
        cin>>meal;
        cout<<"Enter todays cost: "<<endl;
        cin>>cost;
        ofstream fout("one.txt",ios::app);
        fout<<meal<<" "<<cost<<endl;
        fout.close();
        count++;
        cout<<"You Entered meal and cost "<<count<<" times."<<endl;
    }
    int display()
    {
        total_meal = 0;
        total_cost = 0;
        ifstream fin("one.txt",ios::app);
        while(!fin.eof()){
            fin>>meal_1;
            fin>>cost1;
            total_meal = total_meal + meal_1;
            total_cost = total_cost +cost1;
            meal_1 = 0;
            cost1 = 0;
        }
        cout<<"Total meal: "<<total_meal<<endl;
        cout<<"Total cost: "<<total_cost<<endl;
        cout<<"Cost per meal: "<<(double)total_cost/total_meal<<endl;
    }

};

int main(){
    int x;
    cout<<"\n\n\t\t\t MES Management system"<<endl;
    cout<<"\t\t\t ^^^ ^^^^^^^^ ^^^^^^"<<endl;
    do
    {
        cout<<"\nEnter your Choice - "<<endl;
        cout<<"1.Rayhan"<<endl;
        cout<<"2.Emran"<<endl;
        cout<<"3.Enter 3 to get out the app."<<endl;
        cout<<"\nEnter your choice : - "<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            {
                Rayhan rayhan;
                rayhan.input();

                meal obj;
                obj.display();
                break;
            }

        case 2:
            {
                Emran emran;
                emran.display();

                meal1 obj;
                obj.display();

                break;
            }
            case 3:
            {   
                
                cout<<"Your terminal is closed."<<endl;

                break;
            }
            default:
            {
                cout<<"You press the wrong key\n"<<endl;
                break;
            }
        
        }
    }while(x!=3);


    return 0;
}