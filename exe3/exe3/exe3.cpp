#include <iostream>
#include <bitset>

using namespace std;

int swapBit(short int num) {
	short int oddMask = 0x5555;
	short int evenMask = 0xAAAA;
	return ((num & oddMask) << 1) | ((num & evenMask) >> 1);
}

int main() {
	short int n;
	cout << "insert integer number";
	cin >> n;
	cout << bitset<16>(n) << endl;
	cout << bitset<16>(swapBit(n))<<endl;
	return 1;
}