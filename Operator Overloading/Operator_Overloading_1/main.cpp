#include<iostream>

using namespace std;

class myclass
{
	int who;
public:
	myclass(int a) {
		who = a;
		cout << "Constructing" << endl;
	}
	~myclass() {
		cout << "Destroying..." << endl;
	}
	int id() {
		return who;
	}
};
void func(myclass &obj)
{
	cout << "Received Id: " << obj.id() << endl;
}
int main() {
	myclass ob(1902008);
	func(ob);

	return 0;
}

//random number generator
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));  // Initialize random number generator.

	cout<<"Random numbers generated between 1 and 10:"<<endl;
	for(int i=0;i<10;i++)
		cout << (rand() % 10) + 1<<" ";
	return 0;
}
*/

/*incomplete
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype
{
	char* p;
public:
	strtype(char* s);
	~strtype() {
		delete[] p;
	}
	char* get() {
		return p;
	}
};
strtype::strtype(char* s) {
	int l;
	l = strlen(s) + 1;

	p = new char[l];
	if (!p) {
		cout << "Allocation error" << endl;
		exit(1);
	}
	strcpy(p, s);
}
void show(strtype x) {
	char* s;
	s = x.get();
	cout << s << endl;
}
int main() {
	strtype a(desh), b(desh);
	show(a), show(b);

	return 0;
}
*/

/*
#include<iostream>

using namespace std;
class samp
{
	int i, j;
public:
	//samp(int a, int b) { i = a; j = b; }

	void set(int a, int b) {i = a;j = b;}

	int product() {
		return i * j;
	}
	~samp() { cout << "Destroying..." << endl; }
};

int main() {
	samp* p;
	int i;

	p = new samp [5];//dynamically allocate object and initailize

	//p = new samp;//dynamically allocate object

	if (!p) {
		cout << "allocation error" << endl;
		return 1;
	}
	//take input i,j and show product of i and j for 5 times
	i = 0;
	while (i < 5) {
		int m, n;
		cout << "Enter m * n:" << endl;
		cin >> m >> n;

		p[i].set(m,n);
		cout << "Product is: " << p[i].product() << endl;
		i++;
	}
	// destructor called for 5 times
	delete [] p;

	return 0;
}
*/

/*
#include<iostream>

using namespace std;
class samp 
{
	int i,j;
public:
	samp(int a,int b){ i = a; j = b; }
	
	//void set(int a, int b) {i = a;j = b;}
	
	int product() {
		return i * j;
	}
	~samp() { cout << "destroying" << endl; }
};

int main() {
	samp *p;
	p = new samp(850,10);//dynamically allocate object and initailize
	
	//p = new samp;//dynamically allocate object

	if (!p) {
		cout << "allocation error" << endl;
		return 1;
	}

	cout << "Product is: " << p->product() << endl;

	delete  p;

	return 0;
}
*/

/*
#include<iostream>

using namespace std;

class myclass
{
	int a, b;
public:
	myclass(int n, int m) {
		this->a = n;
		this->b = m;
	}
	int add() {
		return a + b;
	}
	void show();
};
void myclass::show() {
	int t;
	t = this->add();
	cout << t << endl;
}
int main() {
	myclass ob(100,10);
	ob.show();
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
	samp(int a, int b) {
		num1 = a;
		num2 = b;
	}
	int get_a() { return num1; }
	int get_b() { return num2; }
};

int main() {
	samp ob[4]= { samp(9,8),samp(7,6),
		samp(5,4),samp(3,2) };
	samp *p;
	p = ob;
	for (int i = 0; i <4; i++) {
		cout << "[" << i << "]=" << p->get_a() << endl;
		cout << "[" << i << "]=" << p->get_b() << endl;
		p++;
	}
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
	samp(int a, int b) {
		num1 = a;
		num2 = b;
	}
	int get_a() { return num1; }
	int get_b() { return num2; }
};

int main() {
	samp ob[2][2] = { samp(9,8),samp(7,6),
		samp(5,4),samp(3,2)};
	for (int i = 0; i < 2; i++) {
		cout <<"["<<i<<"]=" << ob[i][0].get_a() << endl;
		cout << "["<<i<<"]=" << ob[i][0].get_b() << endl;
		cout << "[" << i << "]=" << ob[i][1].get_a() << endl;
		cout << "[" << i << "]=" << ob[i][1].get_b() << endl;
	}
	return 0;
}
*/
/*
#include<iostream>

using namespace std;

class truck;
class car {
	int passenger;
	int speed;
public:
	car(int p, int s) {
		passenger = p;
		speed = s;
	}
	int sp_greater(car c, truck t);
	int sp_greater(truck t);
};

class truck {
	int weight;
	int speed;
public:
	truck(int w, int s) {
		weight = w;
		speed = s;
	}
	friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t) {
	return speed - t.speed;
}


int main() {
	car c1(13, 45);
	truck t1(23, 90);

	int i;
	i = c1.sp_greater(t1);

	if (i > 0)
		cout << "Car is fast" << endl;
	else
		cout << "Truck is fast" << endl;

	return 0;
}
*/

/*
#include<iostream>
#include<cstring>

using namespace std;

class truck;
class car {
	int passenger;
	int speed;
public:
	car(int p, int s) {
		passenger = p;
		speed = s;
	}
	friend int sp_greater(car c, truck t);
};

class truck {
	int weight;
	int speed;
public:
	truck(int w, int s) {
		weight = w;
		speed = s;
	}
	friend int sp_greater(car c, truck t);
};

int sp_greater(car c, truck t) {
	return c.speed - t.speed;
}

int main() {

	car c1(150,35);
	truck t1(400,90);
	
	int i;
	i = sp_greater(c1, t1);
	if(i>0){cout<<"Car is fast"<<endl; }
	else { cout << "Truck is fast" << endl; }

	return 0;
}
*/

/*
#include<iostream>
#include<cstring>

using namespace std;
class myclass
{
	char s[90];
public:
	void set(char *str) { strcpy_s(s, str); }
	void show() {
		cout <<"string is: "<< s << endl;
	}
};

//function to return object of myclass
myclass input() {
	myclass str;//object of myclass
	char c[90];
	cout << "enter a string " << endl;
	cin >> c;
	str.set(c);
	return str;
}

int main() {
	myclass ob;
	ob = input();
	
	ob.show();
	return 0;
}
*/

//passing object to function and change object value
/*
#include<iostream>

using namespace std;

class myclass
{
	int i;
public:
	myclass(int n);
	void set_i(int n);
	int get_i();
};
myclass::myclass(int n) {
	i = n;
}
void myclass::set_i(int n) {
	i = n;
}
int myclass::get_i() {
	return i;
}

void sqr_i(myclass *obj) {
	obj->set_i(obj->get_i() * obj->get_i());
	cout << "Class object vlaue is chagned: " << obj->get_i() << endl;
}
int main() {
	myclass ob1(15);
	sqr_i(&ob1);
	cout << "Changed object value is: " << ob1.get_i() << endl;
	return 0;
}*/

//passing object to function
/*
#include<iostream>

using namespace std;

class myclass
{
	int i;
public:
	myclass(int n);
	int get_i();
};

myclass::myclass(int n) {
	i = n;
}
int myclass :: get_i() {
	return i;
}

int sqr_i(myclass obj) {
	int val = obj.get_i();
	return pow(val, 3);
}
int main() {
	myclass ob1(32);
	cout << "The cubic of 32 is: " << sqr_i(ob1) << endl;
	cout << "The actual object value is: " << ob1.get_i() << endl;
	return 0;
}
*/

//In-line function
/*
#include<iostream>

using namespace std;

class samp {

	int i;
	int j;
public:
	//inline constructor
	samp(int a, int b) { i = a; j = b; }
	int divis() { return  !(i % j); }//automatic in-lining
};
int main() {
	samp ob(8, 2);
	if(ob.divis()){
		cout<<"8 is divisable by 2"<<endl;
	}
	else{
		cout << "Not divisable" << endl;
	}

	return 0;
}
*/
