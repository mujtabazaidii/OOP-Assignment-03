/*#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
class Vectortype {
	double* x;
	double* y;
	double* z;
public:
	Vectortype() {
		x = new double[1]{ 0 };
		y = new double[1]{ 0 };
		z = new double[1]{ 0 };
	}
	Vectortype(double a, double b, double c){
		x = new double[1]{ a };
		y = new double[1]{ b };
		z = new double[1]{ c };
	}
	void setx(double a) {
		*x = a;
	}
	void sety(double b) {
		*x = b;
	}
	void setz(double c) {
		*x = c;
	}
	double getx() {
		return *x;
	}
	double gety() {
		return *y;
	}
	double getz() {
		return *z;
	}
	Vectortype(const Vectortype& v) {
		x = new double[1]{ *v.x };
		y = new double[1]{ *v.y };
		z = new double[1]{ *v.z };
	}
	~Vectortype() {
	}
	Vectortype operator =(Vectortype d) {
		Vectortype obj;
		obj.x = d.x;
		obj.y = d.y;
		obj.z = d.z;
		return obj;
	}

	double operator *(Vectortype& c){
		cout<<"Dot Product = "<< (*x) * (*c.x) + (*y) * (*c.y) + (*z) * (*c.z);
		return (*x) * (*c.x) + (*y) * (*c.y) + (*z) * (*c.z); 
	}
	Vectortype operator +(Vectortype const& c) {
		Vectortype obj;
		obj.x = new double[1]{ *x + *c.x };
		obj.y = new double[1]{ *y + *c.y };
		obj.z = new double[1]{ *z + *c.z };
		return obj;
	}
	Vectortype operator -(Vectortype const& c) {
		Vectortype obj;
		obj.x = new double[1]{ *x - *c.x };
		obj.y = new double[1]{ *y - *c.y };
		obj.z = new double[1]{ *z - *c.z };
		return obj;
	}
	double Length(){
		return sqrt((*x) * (*x) + (*y) * (*y) + (*z) * (*z));
	}
	void Angle(Vectortype c) {
		float dot = operator*(c);
		float distance = Length() * c.Length();
		float angle = (dot / distance);
		float L = acos(angle);
		Display();
		cout << "Angle of Vectors = " << L << " Radians" << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
	}
	void Display() {
		cout << endl;
		cout << "Length of Vector = " << Length() << endl;
	}
};
int main() {
	Vectortype v1(23.56, 3.00, 23);
	Vectortype v2(5, 7, -100);
	Vectortype v3 = v1 + v2;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	v1.Angle(v2);
	cout << endl << endl << endl << endl << endl << endl;
	return 0;
}*/