#pragma once
#include <iostream>
#include <string>

using namespace std;

class Bankomat {
	static unsigned int id;
	int amountOfMoney;
	int maxPerDay = 1000;
	int minPerDay = 50;
	int denomination[5] = {50, 100, 200, 500, 1000};
public:
	Bankomat(); // Инициализация банкомата 
	Bankomat(int aom, int maxpd, int minpd, int deno); // Инициализация банкомата 
	void LoadingBanknotes(); // Загрузка купюр
	void CashWithdrawal(); // Снятие денег 
	void ShowID();
	
	string ToString();
};

