#include <iostream>
#include <vector>

using namespace::std;

int main() {
	int n,k;
	n = 5;
	vector <int> x(n);
	vector <int> y(n);
	vector <int> r(n);
	vector <int> a(n);
	x = { 3,9,9,3,13 };
	y = { 0,0,9,0,13 };
	r = { 3,2,8,2,4 };
	k = 0;
	for (int i = 0; i < n; i++) {
		k = 0;
		for (int j = 0; j < n; j++) {
			if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) <= (r[i] + r[j]) * (r[i] + r[j])) {
				k++;
			}
		}
		a[i] = k;
	}
	k = 0;
	for (int i = 0; i < n; i++)
		if (k < a[i])
			k = a[i];
		
	cout << "Max num of intersections: " << k << " in a circle number ";
	for (int i = 0; i < n; i++) {
		if (k == a[i]) {
			cout << i << ", which area = " << (r[i] * r[i]) * 3.141592653589793238 << endl;
		}
	}
	
	return 0;
}

