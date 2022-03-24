#include "io.h"
#include <iostream>

using namespace std;

int readNumber()
{
	cout << "insert number";
	int num;
	cin >> num;
	return num;
}

void writeNumber(int num)
{
	cout <<"the result is "<< num;
}
