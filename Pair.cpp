#include "Pair.h"
#include <string>
#include <iostream>
using namespace std;

void Pair::Display() const {
	cout << endl;
	cout << "First = " << first << endl;
	cout << "Second = " << second << endl;
};

void Pair::Read() {
	int first;
	int second;
	cout << endl;
	cout << "First = ? "; cin >> first;
	cout << "Second = ? "; cin >> second;
};