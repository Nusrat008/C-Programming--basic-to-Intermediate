//virtual function 
//abstract class
#include<iostream>

using namespace std;

class Instrument
{
public:

	/*
	virtual void Makesound()
	{
		cout << "Instrument playing..." << endl;
	}
	*/
	//pure virtual function ==Abstract class
	virtual void Makesound() = 0;

};

class Accordion :public Instrument
{
	void Makesound() {
		cout << "Accordion playing..." << endl;
	}
};
class Piano :public Instrument
{
	void Makesound() {
		cout << "Piano playing..." << endl;
	}
};

int main() {
	
	Instrument* i1 = new Accordion();
	//i1->Makesound();
	Instrument* i2 = new Piano();
	//i2->Makesound();
	

	//polymorphism
	Instrument* instrument[2] = { i1,i2 };
	
	for (int i = 0; i < 2; i++) {
		instrument[i]->Makesound();
	}
	



	return 0;
}