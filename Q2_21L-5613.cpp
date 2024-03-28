/*#include<iostream>
#include<string>
#include <cstring>
using namespace std;
class TypeCustom{
	char* s1;
	char* s2;
	bool operator <(const TypeCustom&);
	bool operator >(const TypeCustom&);
	friend istream& operator >> (istream& input, TypeCustom& i);
	friend ostream& operator << (ostream& output, TypeCustom& i);
public:
	TypeCustom(char* arr1, char* arr2) {
		int t= 0;
		t = strlen(arr1);
		s1 = new char[t + 1];
		int i;
		for (i = 0; i < t; i++){
			s1[i] = arr1[i];
		}
		s1[i] = '\0';
		int temp = 0;
		temp = strlen(arr2);
		s2 = new char[temp + 1];
		int ii;
		for (ii = 0; ii < temp; ii++){
			s2[ii] = arr2[ii];
		}
		s2[ii] = '\0';
	}
	int Length_s1() {
		int s = 0;
		for (int i = 0; s1[i] != '\0'; i++) {
			s++;
		}
		return s;
	}
	int Length_s2() {
		int s = 0;
		for (int i = 0; s2[i] != '\0'; i++) {
			s++;
		}
		return s;
	}
	char* LowerCase_s1() {
		for (int i = 0; i < Length_s1(); i++) {
			if (s1[i] >= 'A' && s1[i] <= 'Z') {
				s1[i] += 32;
			}
		}
		return s1;
	}
	char* LowerCase_s2() {
		for (int i = 0; i < Length_s2(); i++) {
			if (s2[i] >= 'A' && s2[i] <= 'Z') {
				s2[i] += 32;
			}
		}
		return s2;
	}
	char* UpperCase_s1() {
		for (int i = 0; i < Length_s1(); i++) {
			if (s1[i] >= 'a' && s1[i] <= 'z') {
				s1[i] -= 32;
			}
		}
		return s1;
	}
	char* UpperCase_s2() {
		for (int i = 0; i < Length_s2(); i++) {
			if (s2[i] >= 'a' && s2[i] <= 'z') {
				s2[i] = s2[i] - 32;
			}
		}
		return s2;
	}
	void FindIndex(int a, int b) {
		cout << "Character at Given Index is :-  ";
		cout << s1[a];
		cout << endl;
		cout << "Character at Given Index is :-  ";
		cout << s2[b];
		cout << endl;
	}
	void Display() {
		cout << endl << endl;
		cout << "----------------------------------------------------------" << endl << endl;
		cout << "Length of First String :- " << Length_s1() << endl;
		cout << "Length of Second String :- " << Length_s2() << endl << endl;
		cout << "First String in Lower Case :- " << LowerCase_s1() << endl;
		cout << "Second String in Lower Case :- " << LowerCase_s2() << endl << endl;
		cout << "First String in Upper Case :- " << UpperCase_s1() << endl;
	    cout << "Second String in Upper Case :- " << UpperCase_s2() << endl << endl;
	}
	void SubString_s1(int a, int b) {
		cout << "Substring :- " << endl;
		for (int i = a; i < b; i++) {
			cout << s1[i];
		}
	}
	void SubString_s2(int a, int b) {
		cout << "Substring :- " << endl;
		for (int i = a; i < b; i++) {
			cout << s2[i];
		}
	}
	void Comparison() {
		if (strcmp(s1, s2) == 0) {
			cout << endl << "First and Second strings are same.";
		}else {
			cout << endl << "First and Second strings are not same.";
		}
	}
	char& operator [] (int index) {
		if (index >= 0 && index < Length_s1()) {
			return s1[index];
		}
	}
	void Concatenation() {
		int i = 0;
		for (i = 0; s1[i] != '\0'; i++);
		for (int j = 0; s2[j] != '\0'; j++, i++){
			s1[i] = s2[j];
		}
		s1[i] = '\0';
		cout << endl << endl;
		cout << "String After Concatention :- " << endl;
		for (int i = 0; i < Length_s1(); i++) {
			cout << s1[i];
		}
		cout << endl;
		cout << endl;
	}
	void Prependation() {
		int i = 0;
		for (i = 0; s2[i] != '\0'; i++);
		for (int j = 0; s1[j] != '\0'; j++, i++) {
			s2[i] = s1[j];
		}
		s2[i] = '\0';
		cout << endl << "Prepend is:- " << endl;
		for (int k = 0; k < Length_s1(); k++) {
			cout << s2[k];
		}
	}
};
istream& operator >> (istream& input, TypeCustom& i) {
	input >> i.s1;
	input >> i.s2;
	return input;
}
ostream& operator << (ostream& output, TypeCustom& i) {
	cout << endl;
	output << i.s1 << endl << i.s2 << endl;
	return output;
}
bool TypeCustom::operator < (const TypeCustom& res){
	bool check = false;
	if (strlen(s1) < strlen(res.s2)){
		check = true;
	}
	return check;
}
bool TypeCustom::operator > (const TypeCustom& res){
	bool check = false;
	if (strlen(s1) > strlen(res.s2))
	{
		check = true;
	}
	return check;
}
int main() {
	char* arr;
	arr = new char[250];
	char* arr1;
	arr1 = new char[250];
	cout << "Enter First String:- " << endl;
	cin.getline(arr, 250);
	cout << endl << endl;
	cout << "Enter Second String:- " << endl;
	cin.getline(arr1, 250); cout << endl;
	TypeCustom t1(arr, arr1);
	t1.Length_s1();
	t1.Length_s2();
	cout << endl << endl;
	t1.LowerCase_s1();
	t1.LowerCase_s2();
	t1.UpperCase_s1();
	t1.UpperCase_s2();
	t1.Display();
	int i;
	cout << endl << "Enter Index of 1st String:- " ;
	cin >> i;
	int j;
	cout << endl << "Enter Index of 2nd String:- ";
	cin >> j;
	t1.FindIndex(i, j); cout << endl;
    cout << endl << endl;
	cout << "Enter Start and End Index for First Substring:- " << endl;
	int st; 
	cout << "Starting: "; 
	cin >> st;
	int e;
	cout << "Ending: ";
	cin >> e;
	cout << endl;
	t1.SubString_s1(st, e);
	cout << endl << endl;
	cout << "Enter Start and End Index for Second Substring:- " << endl;
	int start;
	cout << "Starting:- ";
	cin >> start;
	int end;
	cout << "Ending:- ";
	cin >> end;
	cout << endl;
	t1.SubString_s2(start, end);
	cout << endl;
	cout << endl;
	cout << "Comparison :- ";
	t1.Comparison();
	cout << endl << endl;
	t1.Concatenation();
	t1.Prependation();
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	return 0;
	}*/