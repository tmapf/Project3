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
	x = { 142,12,12,10,4 };
	y = { 0,  12,3, 10,0 };
	r = { 123,4, 12,5, 12 };
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
	cout << "Max num of intersections: " << k-1 << " in a circle number ";
	for (int i = 0; i < n; i++) {
		if (k == a[i]) {
			cout << i+1 << ", which area = " << (r[i] * r[i]) * 3.141592653589793238 << endl;
		}
	}
	return 0;
}

