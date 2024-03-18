#ifndef _MEAL_MANAGEMENT_H_
#define _MEAL_MANAGEMENT_H_

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
            cout<<"You type wrong Name"<<endl;
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

#endif