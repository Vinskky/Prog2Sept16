#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	int randNum = 0;
	int i, j = 0;

	int map[9][9];

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			map[i][j] = 0;
		}

	}

	for (i = 0; i < 10; i++)
	{
		srand(time(NULL));
		randNum = rand() % 9;
		j = rand() % 9;
		map[randNum][j] = 1;
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}