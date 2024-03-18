#include<iostream>
#include<cstring>
using namespace std;
class myclass
{
	char s[90];
public:
	void set(char *str) { strcpy(s, str); }
	void show() {
		cout << s << endl;
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
