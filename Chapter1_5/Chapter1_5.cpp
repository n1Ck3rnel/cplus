#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int i = -1;
	char a = 'H';

	cout << (int*)&a << endl;
	cout << (int*)(&i) << endl;

	return 0;
}