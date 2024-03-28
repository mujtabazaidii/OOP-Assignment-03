#include <iostream>
#include<math.h>
#include<string>
using namespace std;
class Roman {
	char x[7];
	int a[20];
	int n[7];
	int r[10];
	int b = 0;
public:
	Roman() {
		x[0] = 'I';
		x[1] = 'V';
		x[2] = 'X';
		x[3] = 'L';
		x[4] = 'C';
		x[5] = 'D';
		x[6] = 'M';
		n[0] = 1;
		n[1] = 5;
		n[2] = 10;
		n[3] = 50;
		n[4] = 100;
		n[5] = 500;
		n[6] = 1000;
	}
	void conver(int s) {
		int j = s;
		string s8;
		int h[20], z[20];
		int i = 0;
		int u = 0;
		while (j != 0) {
			a[i] = j % 10;
			i = i + 1;
			j = j / 10;
		}
		for (int k = i - 1; k >= 0; k--) {
			h[u] = 0;
			for (int v = 0; i < i - (u + 1); i++) {
				a[k] = a[k] * 10;
			}
			h[u] = a[k];
			u = u + 1;
		}
		for (int v = 0; v < i; v++) {
			for (int d = 0; d < 7; d++) {
				if (h[v] == n[d]) {
					z[v] = d;
				}
			}
		}
		h[i] = 0;
		for (int v = 0; v < i; v++) {
			if (h[v] > h[v + 1]) {
			}
		}

	}
	void length(string s) {
		int t = s.length();
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < 7; j++) {
				if (s[i] == x[j]) {
					r[i] = n[j];
				}
			}
		}
		for (int i = 0; i < t; i++) {
			if (i == 0)
				b = r[i];
			else {
				if (r[i - 1] >= r[i]) {
					b = b + r[i];
				}
				else {
					b = b - r[i - 1];
					b = b + (r[i] - r[i - 1]);
				}
			}
		}
		cout << b;
	}
	void operator+(Roman h) {
		cout << b + h.b;
	}
	void operator-(Roman h) {
		cout << b - h.b;
	}
	void operator*(Roman h) {
		cout << b * h.b;
	}
	void operator/(Roman h) {
		int k;
		k = b / h.b;
		cout << k;
	}
	void operator++() {
		cout << ++b;
	}
	void operator--() {
		cout << --b;
	}
};
int main() {
	string s1("MCLIV");
	string s2("MDLV");
	Roman j, p;
	cout << endl;
	cout << "First Number = ";
	j.length(s1);
	cout << endl;
	cout << "Second Number = ";
	p.length(s2);
	cout << endl << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl;
	cout << "Addition = ";
	j + p;
	cout << endl;
	cout << "Subtraction = ";
	j - p;
	cout << endl;
	cout << "Multiplication = ";
	j* p;
	cout << endl;
	cout << "Division = ";
	j / p;
	cout << endl << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl;
	cout << "First Number Incremented :- ";
	++j;
	cout << endl;
	cout << "First Number Decremented :- ";
	--j;
	cout << endl;
	cout << "Second Number Incremented :- ";
	++p;
	cout << endl;
	cout << "Second Number Decremented :- ";
	--p;
	cout << endl << endl << "---------------------------------------------------------------------------" << endl << endl;
	return 0;
}