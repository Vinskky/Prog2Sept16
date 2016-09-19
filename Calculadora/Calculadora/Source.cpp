#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

using namespace std;

//To do: calculator with operators +, -, *, /, %, 2^y

//Functions:
double add(double num1, double num2)
{
	return num1 + num2;
}

double sub(double num1, double num2)
{
	return num1 - num2;
}

double mult(double num1, double num2)
{
	return num1 * num2;
}

double division(double num1, double num2)
{
	return num1 / num2;
}

int module(int num1,int num2)
{
	return num1 % num2;
}

double elevation(double num1)
{
	return pow((double) 2, num1);
}

int main()
{
	int var = 0;
	bool work = true;

	while (work)
	{
		double n1 = 0;
		double n2 = 0;
		double result = 0;

		cout << "Welcome What operation do you want to do: " << endl
			 << "press (1): If you want to do + " << endl
			 << "press (2): If you want to  do - " << endl  
			 << "press (3): If you want to do * " << endl
			 << "press (4): If you want to do / " << endl
			 << "press (5): If you want to do % " << endl
			 << "press (6): IF you want to do 2^y " << endl
			 << "press (7): to exit" << endl;

		cin >> var;
		switch (var)
		{
			case 1:

				cout << "Introduce your first number: " << endl;
				cin >> n1;
				cout << "Now introduce the number you want to add: " << endl;
				cin >> n2;

				result = add(n1, n2);
				
				cout << n1 << " + " << n2 << " = " << result << endl;
				Sleep(1000);

				break;

			case 2:

				cout << "Introduce your first number: " << endl;
				cin >> n1;
				cout << "Now introduce the number you want to substract: " << endl;
				cin >> n2;

				result = sub(n1, n2);
				
				cout << n1 << " - " << n2 << " = " << result << endl;
				Sleep(1000);

				break;

			case 3:

				cout << "Introduce your first number: " << endl;
				cin >> n1;
				cout << "Now introduce the number you want to multiplicate: " << endl;
				cin >> n2;

				result = mult(n1, n2);

				cout << n1 << " * " << n2 << " = " << result << endl;
				Sleep(1000);

				break;

			case 4:

				cout << "Introduce your first number: " << endl;
				cin >> n1;
				cout << "Now introduce the number you want to divide: " << endl;
				cin >> n2;

				result = division(n1, n2);

				cout << n1 << " / " << n2 << " = " << result << endl;
				Sleep(1000);

				break;

			case 5:
				
				cout << "Introduce your first number: " << endl;
				cin >> n1;
				cout << "Now introduce the second number: " << endl;
				cin >> n2;

				if (n1 / (int)n1 == 1 && n2 / (int) n2 == 1)
				{
					result = module(n1, n2);
					cout << n1 << " % " << n2 << " = " << result << endl;
					Sleep(1000);
				}
				else
				{
					cout << "Your numbers must be an integer!" << endl;
					Sleep(1000);
				}
				
				break;

			case 6:

				cout << "Introduce your y number: " << endl;
				cin >> n1;

				result = elevation(n1);

				cout << "2^" << n1 <<" = " << result << endl;
				Sleep(1000);

				break; 
			
			case 7:

				work = false;

				break;

			default: 
				cout << "Error! you might want to put another number" << endl;
				Sleep(1000);

				break;
		}
	
		system("cls");

	}

	cout << "Goodbye!" << endl;



	return 0;
}