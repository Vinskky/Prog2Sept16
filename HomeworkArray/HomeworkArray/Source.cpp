#include <iostream>

using namespace std;

void mixString(char* str1, char* str2, int str1L, int str2L)
{
	char strResult[60];
	int i, j,k = 0;

	for (i = 0; i < str1L; i++)
	{
		if (i <= str1L / 2)
		{
			strResult[i] = str1[k++];
		}
		else
		{
			for (j = 0; j < str2L; j++)
			{
				strResult[i++] = str2[j];
			}
			strResult[i] = str1[k++];
		}
		
	}
	strResult[i] = '\0';
	cout << str1 << " + " << str2 << " = " << strResult << endl;
	
}

int stringLength(char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
		counter++;
	return counter;
}

/*int main()
{
	char str1[30];
	char str2[30];
	int str1Length = 0;
	int str2Length = 0;
	cout << "Welcome please introduce two words, then we will mix together" << endl;
	cout << "Introduce your first word: " << endl;
	cin >> str1;
	cout << "Now put the second word: " << endl;
	cin >> str2;

	str1Length = stringLength(str1);
	str2Length = stringLength(str2);

	mixString(str1, str2, str1Length, str2Length);

	system("pause");

	return 0;
}*/