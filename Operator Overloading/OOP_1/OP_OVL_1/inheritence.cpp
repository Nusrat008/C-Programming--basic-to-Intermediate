#include<iostream>
#include<cstring>
#include<string>

using namespace std;

enum yn{no, yes};
enum color{red, yellow, green, orange};

void out(enum yn x);
//char *c[100] = { "red", "yellow", "green", "orange" };

class fruit{
public:
	enum yn annual;
	enum yn perennial;
	enum yn tree;
	enum yn tropical;
	enum color clr;
	//char name[40];
};

class apple : public fruit {
	enum yn cooking;
	enum yn crunchy;
	enum yn eating;
public:
	void seta(enum color c, enum yn ck, enum yn crchy, enum yn e);
	void show();
};

class orange :public fruit {
	enum yn juice;
	enum yn sour;
	enum yn eating;
public:
	void seto(enum color c, enum yn j, enum yn sr, enum yn e);
	void show();
};

void apple::seta( enum color c, enum yn ck, enum yn crchy, enum yn e) {
	//strcpy(name,n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = no;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}
void apple::show() {
	cout<<"apple is:" << endl;
	cout << "Annual: " << annual << endl;;
	cout << "Perennial: " << perennial << endl;
	cout << "Tree: " << tree << endl;
	cout<< "Tropical: " <<tropical<<endl;
	cout<< "Color:" <<clr<<endl;
	cout<<"Good for Cooking:"<<cooking<<endl;
	cout<< "Crunchy: " <<crunchy<<endl;
	cout<< "Good for eating: "<<eating;
}
void out(enum yn x) {
	if (x == no) cout << "no" << endl;
	else cout << "Yes" << endl;
}

int main() {
	apple a1;
	a1.seta(red, no, yes, yes);

	a1.show();

	return 0;
}
