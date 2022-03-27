
#include <iostream>

using namespace std;

int findSquare(int num)
{
    num = abs(num);
    int result = num;
    for (int i = 1; i < num; i++) {
        result += num;
    }
    return result;
}

void main()
{
    cout << "square: " << findSquare(-3.5) << endl;
}
