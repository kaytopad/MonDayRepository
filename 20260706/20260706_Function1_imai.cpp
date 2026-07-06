#include "20260706_Header1_imai.h"
#include "20260706_Config1_imai.h"
#include<iostream>
void Heal(int& hp)
{
	hp += 20;
	std::cout << "20回復しました。\n" ;
	
}

int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		std::cin >> num;
		if (min > num || max < num)
		{
			std::cout << "入力が誤りがあります。再度入力してください。\n";
		}
		else
		{
			break;
		}

	}

	return num;

}

void Run()
{
	//変数宣言
	int playerHp = ConstNumber::PLAYER_HP;
	int select;

	std::cout << "HPを回復させますか？\n1→回復\n2→現状のまま\n";
	//選択
	std::cout << "選択してください\n";
	select = InputCheck(ConstNumber::SELECT_MIN,ConstNumber::SELECT_MAX);
	//回復
	if (select == 1)
	{
		Heal(playerHp);
	}
	else
	{
		std::cout << "回復しませんでした。\n";
	}

	//HP表示
	std::cout << "PlayerのHPは、" << playerHp << "です\n";
}