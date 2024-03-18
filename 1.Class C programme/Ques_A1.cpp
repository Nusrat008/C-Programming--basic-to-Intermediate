#include<iostream>
using namespace std;

int main() {
	int n,sum,aveg,count,j=0;
	while (cin >> n) {
		sum = 0; count = 0;
		if (n == 0) return 0;
		j++;
		if (n >= 1 && n <= 50) {
			int* hi = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> hi[i];
				if (hi[i] < 1 || hi[i]>= 100) return 0;
				sum = sum + hi[i];
			}
			aveg = sum / n;
			for (int i = 0; i < n; i++) {
				int b = hi[i] - aveg;
				if (b > 0) {
					count = count + b;
				}
			}
			cout << "Set #" << j << endl;
			cout << "The minimum number of moves is " << count <<"."<< endl<<endl;
		}
	}
}
			
			