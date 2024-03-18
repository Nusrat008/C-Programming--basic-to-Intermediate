#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class strtype
{
    int len;
    char *str;
public:

    strtype(char *ptr);
    ~strtype(){cout<<"freeing p"<<endl;
        delete [] str;
    }
    void show(){
    cout<<str<<" -length : "<<len<<endl;
    }
};

strtype::strtype(char *ptr){
    len = strlen(ptr);
    str = new char [len+1];
    if(!str){
        cout<<"allocation error"<<endl;
        exit(1);
    }
    strcpy(str,ptr);
    }

int main(){
    strtype ob("this is c++");
    ob.show();

    return 0;
}

/*
#include<iostream>

using namespace std;

class stdt
{
    int id;
public:
    stdt(int i)
    {
        id = i;
    }
    int get_id()
    {
        return id;
    }
    ~stdt(){cout<<"Destroying"<<endl;}
};
int show_id(stdt &o1)
{
    cout<<"ID is : "<<o1.get_id()<<endl;
}

int main(){
    stdt ob(1902008);

    show_id(ob);

    return 0;
}
*/
/*
#include<iostream>

using namespace std;

class samp
{
	int num1;
	int num2;
public:
	void set_ij(int a, int b) {
		this->num1 = a;
		this->num2 = b;
	}
	~samp(){cout<<"Destroying "<<endl;}
	int product_ij(){ return this->num1*num2; }
};

int main() {

    //samp *p;
    //p = new samp(30,60);

    samp *p;
    p = new samp[3];

    if(!p){
        cout<<"allocation error"<<endl;
        return 1;
    }
    cout<<"enter value for a and b"<<endl;
    for(int i=0;i<3;i++){
        int c,d;
        cin>>c>>d;
        p[i].set_ij(c,d);
    }
    for(int j=0;j<3;j++)
    cout<<p[j].product_ij()<<endl;

    delete [] p;
    /*
	samp ob[6]={samp(1,2),samp(3,4)
	               ,samp(5,6),samp(7,8)
                   ,samp(40,50),samp(20,80)};
    samp *p;
    p = ob;
	for(int i=0;i<6;i++){
        cout<<p->get_a()<<" "<<p->get_b()<<endl;
        p++;
	}
	*/
//	return 0;
//}
