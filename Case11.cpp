// Case11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Локатор ориентирован на одну из сторон света («С» — север, «З» —
запад, «Ю» — юг, «В» — восток) и может принимать три цифровые ко-
манды поворота: 1 — поворот налево, –1 — поворот направо, 2 — поворот
на 180°. Дан символ C — исходная ориентация локатора и целые числа N1
и N2 — две посланные команды. Вывести ориентацию локатора после выполнения этих команд.

*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char C;
	int N1, N2;
	
	cout << "Введите исходную ориентацию локатора (С-север, Ю-юг, З-запад, В-восток): ";
	cin >> C;
	cout << "Введите две команды (1 - поворот налево, -1 - поворот направо, 2 - поворот на 180 градусов):"<<endl;
	cin >> N1 >> N2;
	switch (C) {
	case 'С':
		switch (N1) {
		case 1:
			switch (N2) {
			case 1:cout << "Юг";
				break;
			case -1:cout << "Север";
				break;
			case 2:cout << "Восток";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case -1:
			switch (N2) {
			case 1:cout << "Север";
				break;
			case -1:cout << "Юг";
				break;
			case 2:cout << "Запад";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case 2:
			switch (N2) {
			case 1:cout << "Восток";
				break;
			case -1:cout << "Запад";
				break;
			case 2:cout << "Север";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		}
		break;
	case 'Ю':
		switch (N1) {
		case 1:
			switch (N2) {
			case 1:cout << "Север";
				break;
			case -1:cout << "Юг";
				break;
			case 2:cout << "Запад";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case -1:
			switch (N2) {
			case 1:cout << "Юг";
				break;
			case -1:cout << "Север";
				break;
			case 2:cout << "Восток";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case 2:
			switch (N2) {
			case 1:cout << "Запад";
				break;
			case -1:cout << "Восток";
				break;
			case 2:cout << "Юг";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		}
		break;
	case'З':
		switch (N1) {
		case 1:
			switch (N2) {
			case 1:cout << "Восток";
				break;
			case -1:cout << "Запад";
				break;
			case 2:cout << "Север";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case -1:
			switch (N2) {
			case 1:cout << "Запад";
				break;
			case -1:cout << "Восток";
				break;
			case 2:cout << "Юг";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case 2:
			switch (N2) {
			case 1:cout << "Север";
				break;
			case -1:cout << "Юг";
				break;
			case 2:cout << "Запад";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		}
		break;
	case 'В':
		switch (N1) {
		case 1:
			switch (N2) {
			case 1:cout << "Запад";
				break;
			case -1:cout << "Восток";
				break;
			case 2:cout << "Юг";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case -1:
			switch (N2) {
			case 1:cout << "Восток";
				break;
			case -1:cout << "Запад";
				break;
			case 2:cout << "Север";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		case 2:
			switch (N2) {
			case 1:cout << "Юг";
				break;
			case -1:cout << "Север";
				break;
			case 2:cout << "Восток";
				break;
			default:cout << "Введите одну из заданых команд.";
			}
			break;
		}
		break;
	default:cout << "Введите одну из заданых исходных ориентаций ";
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
