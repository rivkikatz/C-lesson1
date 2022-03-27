
#include <iostream>
#include<bitset>
#define SIZEOFBYTES  sizeof(short int)*8
using namespace std;
short int circularShift(unsigned short int n,int k) {
	k %= SIZEOFBYTES;//משפר ההזזות יהיה מקסימום מספר הביטים במספר
	cout <<"binary n= "<< bitset<SIZEOFBYTES>(n) << endl;
	return (n<<k) |(n>>SIZEOFBYTES-k) ;
}

int main()
{
	cout<<bitset<SIZEOFBYTES>(circularShift(0xfa45,3))<<endl;

}