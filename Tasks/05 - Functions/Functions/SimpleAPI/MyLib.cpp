#include "MyLib.h"

void add(int a, int b) {
	int result;
	result = a + b;
	cout << result << endl;
}

void sub(int a, int b) {
	int result;
	result = a - b;
	cout << result << endl;
}

void mul(int a, int b) {
	int result;
	result = a * b;
	cout << result << endl;
}

void divi(int a, int b) {
	int result;
	if (b == 0) {
		cout << "Zero Division Error!\n";
	}
	else {
		result = a / b;
		cout << result << endl;
	}
}