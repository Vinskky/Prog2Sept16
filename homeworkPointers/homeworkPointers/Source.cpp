#include <iostream>

using namespace std;
void add(int val1, int val2, int* result)
{
	int i = val1 + val2;
	result = &i;
	cout << val1 << " + " << val2 << " = " << *result << endl;
}

int main()
{
	//Exercice 1:
	/*int val[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int* pointer = val;
	for (int i = 0; i < 10; ++i)
	{
		cout << (pointer + i) << " ";
	}
	cout << endl;*/

	//Exercice 2:
	/*int val1 = 0;
	int val2 = 0;
	int* result = nullptr;

	cout << "please introduce a number: " << endl;
	cin >> val1;
	cout << "please introduce a number: " << endl;
	cin >> val2;
	add(val1, val2, result);*/

	//Exercice 3:

	system("pause");
	return 0;
}