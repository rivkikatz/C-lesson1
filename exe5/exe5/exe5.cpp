#include <iostream>
using namespace std;

int findMin(int x, int y) {
    return y + ((x - y) & ((x - y) >> 31));
}

int findMax(int x, int y) {
    return x - ((x - y) & ((x - y) >> 31));
}

int main()
{
    int x = 5, y = 3;

    cout << "min(" << x << ", " << y << ") is " << findMin(x, y) << endl;
    cout << "max(" << x << ", " << y << ") is " << findMax(x, y) << endl;

    return 0;
}
