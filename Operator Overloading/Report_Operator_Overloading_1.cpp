#include <iostream >

using namespace std;

int abso(int n);
long abso(long n);
double abso(double n);

int main()
{
	cout << " Absolute value of -10: " << abso (-10) << endl;
	cout << " Absolute value of -10L: " << abso (-10L) << endl;
	cout << " Absolute value of -10.01: " << abso (-10.01) << endl;

	return 0;
}

int abso(int n)
{
	cout << "In integer abs ()" << endl;
	return n < 0 ? -n : n;
}

long abso(long n)
{
	cout << "In long abs ()" << endl;
	return n < 0 ? -n : n;
}

double abso(double n)
{
	cout << "In double abs ()" << endl;
	return n < 0 ? -n : n;
}
