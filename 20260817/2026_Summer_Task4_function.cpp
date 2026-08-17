#include <iostream>
#include <cstdlib>
#include <ctime>
#include "2026_Summer_Task4_header.h"

using namespace std;

//乱数初期
//srand((unsigned int)time(NULL));

void InitializeBoard(bool board[])
{
	int i;
	for (i = 0; i < NUM_BOARDS; i++)
	{
		board[i] = true;
	}

}

void RollDice(int dice[])
{
	srand((unsigned int)time(NULL));

	dice[0] = rand() % 6 + 1;
	dice[1] = rand() % 6 + 1; 
	dice[2] = dice[0] + dice[1];
}

void DisplayDiceResults(int dice[])
{
	cout << "さいころの結果: " << dice[0] << " と " << dice[1] << " (合計: " << dice[2] << ")" << endl;

}

bool CanSelectAnyBoard(bool board[], int dice[])
{
	bool canSelect = false;
	for (int i = 0; i < NUM_DICE_TOTAL; i++)
	{
		if (dice[i] < 1 || dice[i] > NUM_BOARDS)
		{
			continue;
		}
		if (board[dice[i] -1])
		{
			canSelect = true;
		}
	}

	return canSelect;
}

int SelectBoard(bool board[], int dice[])
{
	int choice;
	while (true)
	{
		cin >> choice;

		for (int i = 0; i < 3; i++)
		{
			if (choice == dice[i] &&choice >= 1 && choice <= NUM_BOARDS &&board[choice - 1])
			{
				break;
			}
		}

		cout << "入力に誤りがあります。再度入力してください。" << endl;
	}
	
	return choice;
}

int SelectPlayerBoard(bool board[], int dice[])
{
	
}