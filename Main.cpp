#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {
	system("chcp 1251>nul");
	srand(time(NULL));

	int size; cin >> size;

	int size1 = 0; int size2 = 0;

	long* RandArr = new long[size];
	long* непар = new long[size];
	long* пар = new long[size];

	for (int i = 0; i < size; i++)
		RandArr[i] = rand() % 100;

	for (int i = 0; i < size; i++) {
		if (i % 2) {
			непар[size1] = *(RandArr + i);
			size1++;
		}
		else {
			пар[size2] = *(RandArr + i);
			size2++;
		}
	}
	cout << "Псевдовипадковi значення: " << "\n";
	for (int i = 0; i < size; i++)
		cout << RandArr[i] << " ";

	cout << "\nНепарнi значення: " << "\n";
	for (int i = 0; i < size1; i++)
		cout << *(непар + i) << " ";

	cout << "\nПарнi значення: " << "\n";
	for (int i = 0; i < size2; i++)
		cout << *(пар + i) << " ";

}

/*
Створіть масив символів. Заповніть його псевдовипадковими значеннями.
На основі заданого масива створіть два нових: перший міститиме елементи з непарними
індексами, другий з парними. Завдання виконайте за допомогою вказівників.
*/
