#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int main()
{
	char Player1[10];
	char Player2[10];
	int liveP1 = 100;
	int liveP2 = 100;
	int damage = 0;
	int turn = 0;

	cout << "Welcome player one, please introduce your name(MAX.10): \n";
	cin >> Player1;
	cout << "\nWelcome player two, please introduce your name(MAX.10): \n";
	cin >> Player2;
	while (liveP1 > 0 && liveP1 > 0)
	{
		cout << "----------- TURN " << turn << " ------------ \n \n";
		turn++;
		cout << "now " << Player1 << " atack to " << Player2 << "\n";
		damage = rand() % 25;
		liveP2 -= damage;
		srand(time(NULL));
		cout << Player1 << " deals " << damage << " dmg to " << Player2 << "\n" << Player2 << " has " << liveP2 << "hp left. \n \n";
		damage = rand() % 25;
		srand(time(NULL));
		liveP1 -= damage;
		Sleep(1000);
		if (liveP2 > 0 && liveP1 >0)
		{
			cout << "----------- TURN " << turn << " ------------ \n \n";
			turn++;
			cout << "now " << Player2 << " atack to " << Player1 << "\n" << Player2 << " deals " << damage << " dmg to " << Player1 << "\n";
			cout << Player1 << " has " << liveP1 << "hp left. \n \n";
			Sleep(1000);
		}
			
	}

	if (liveP1 <= 0)
	{
		cout << "congrats!!! " << Player2 << " you win!! \n";
	}
	else
	{
		cout << "congrats!!! " << Player1 << " you win!! \n";
	}

	system("pause");
	return 0;
}
