#include <iostream >

using namespace std;

int abs_ov(int n);
long abs_ov(long n);
double abs_ov(double n);

int main()
{
	cout << " Absolute value of -10: " << abs_ov(-10) << endl;
	cout << " Absolute value of -10L: " << abs_ov(-10L) << endl;
	cout << " Absolute value of -10.01: " << abs_ov(-10.01) << endl;

	return 0;
}

int abs_ov(int n)
{
	cout << "In integer abs ()" << endl;
	return n < 0 ? -n : n;
}

long abs_ov(long n)
{
	cout << "In long abs ()" << endl;
	return n < 0 ? -n : n;
}

double abs_ov(double n)
{
	cout << "In double abs ()" << endl;
	return n < 0 ? -n : n;
}
