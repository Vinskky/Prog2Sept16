#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	unsigned short value = 0;
	unsigned short compare = 0;
	cout << "Introduce a number between 0 and 65535"<< endl;
	cin >> value;

	cout << value << " = " << bitset<16>(value) << endl;
	system("pause");
	return 0;
}