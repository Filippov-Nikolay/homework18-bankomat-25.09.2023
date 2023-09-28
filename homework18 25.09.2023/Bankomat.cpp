#include "Bankomat.h"

unsigned int Bankomat::id = 0U;

Bankomat::Bankomat() {
	id++;
	amountOfMoney = 50000;
	maxPerDay = 1000;
	minPerDay = 50;
}
Bankomat::Bankomat(int aom, int maxpd, int minpd, int deno) {
	id++;
	amountOfMoney = aom;
	maxPerDay = maxpd;
	minPerDay = minpd;
}

void Bankomat::LoadingBanknotes() {
	int temp;

	do {
		cout << "������� ����� ��������� � ��������: ";
		cin >> temp;

		if (temp < 10000 || temp > 50000)
			cout << "�� ����� �������� ��������!" << endl;
	} while (temp < 10000 || temp > 50000);
	
	amountOfMoney = temp;
}
void Bankomat::CashWithdrawal() {
	int temp;
	int tempSum = 0, sum = 0, i = 0, j = 0;
	int denominationSum[20]{0};

	do {
		cout << "������� ����� ������� ������ �������: ";
		cin >> temp;

		if (temp > maxPerDay || temp < minPerDay)
			cout << "�� ����� ������������  �����!" << endl << endl;
	} while (temp > maxPerDay || temp < minPerDay);

	if (temp > amountOfMoney) {
		cout << "� ��������� ��� ����� �����!" << endl << endl;
	}
	else {
		while (tempSum != temp) { // 0 != 500
			tempSum += denominationSum[j++] = denomination[i++];

			if (tempSum > temp) {
				tempSum -= denomination[i - 1];
				j--;
			}

			if (i == 4) { i = 0; }
		}

		for (int i = 0; i < j; i++)
			cout << "��������: " << denominationSum[i] << endl;
		cout << "����: " << tempSum << endl;
		amountOfMoney -= tempSum;
	}
}
void Bankomat::ShowID() {
	cout << "ID: " << id << endl;
}

string Bankomat::ToString() {
	string sumString = to_string(amountOfMoney);
	return sumString;
}
