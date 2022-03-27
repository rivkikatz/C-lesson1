
#include <iostream>
#include <bitset>

#define SIZE 16
using namespace std;


int findXor(int x, int y) {
    return (x | y) - (x & y);
}

int main()
{
    int x1, x2;

    cout << "insert number (type int)";
    cin >> x1;
    cout << "insert number (type int)";
    cin >> x2;
    cout << "binari representation: " <<endl<<"num1= "<< (bitset<16>)x1 << endl << "num2= " << (bitset<SIZE>)x2<<endl;
    cout <<"xor result: "<< (bitset<SIZE>)findXor(x1, x2);
}
