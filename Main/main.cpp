#include <iostream>
#include "pol.h"
#include"nord.h"
#include"ord.h"
#include"hash.h"
using namespace std;
int main() {	
	setlocale(LC_ALL, "Russian");

	bool f = true;
	int x;

	int kol, i = 1, s, res = 0;
	double a;
	monom tmp;	
	string name;
	pol A, B, C;

	nord tab1;
	ord tab2;
	hasht tab3;
	pol temp_pol;
	row temp_row;
	while (f) {
		cout << "Выберите операцию" << endl;
		cout << "1)Добавить полином" << endl;
		cout << "2)Найти полином" << endl;
		cout << "3)Удалить полином" << endl;
		cout << "4)Операции с полиномами" << endl;
		cout << "5)Выход из программы" << endl;
		cin >> x;
		switch (x)
		{
		case(1):

			cout << "Правила ввода полинома" << endl;
			cout << "Степень должна быть  не отрицательна и меньше 10 " << endl;
			cout << "Коэффициент монома не должен быть равен 0" << endl;
			cout << "Имя полиномов должно содержать только цифры и  латинские буквы" << endl;
			cout << "Введите имя полинома" << endl;
			cin >> name;
			cout << "Введите количество мономов полинома" << endl;
			cin >> kol;
			while (i <= kol) {
				cout << "Введите коэффициент монома " << i << endl;
				cin >> a;
				cout << "Введите степень x монома " << i << endl;
				cin >> s;
				res += s * 100;
				cout << "Введите степень у монома " << i << endl;
				cin >> s;
				res += s * 10;
				cout << "Введите степень z монома " << i << endl;
				cin >> s;
				res += s;
				tmp.zapoln(a, res);
				temp_pol.insert(tmp);
				i++;
				res = 0;
			}
			i = 0;
			temp_row.key = name;
			temp_row.polinom = temp_pol;
			temp_pol.clear();
			tab1.insert(temp_row);
			tab2.insert(temp_row);
			tab3.insert(temp_row);
			break;
		case(2):
			cout << "Введите имя полинома" << endl;
			cin >> name;

			(tab1.find(name)).show();
			(tab2.find(name)).show();
			(tab3.find(name)).show();
			break;
		case(3):
			cout << "Введите имя полинома" << endl;
			cin >> name;
			tab1.del(name);
			tab2.del(name);
			tab3.del(name);
			break;
		case(4):
			cout << "Введите имя первого полинома" << endl;
			cin >> name;
			A = tab1.find(name);
			cout << "Введите имя второго полинома" << endl;
			cin >> name;
			B = tab1.find(name);
			cout << "Выберите операцию " << endl;

			cout << " 1: A + B " << endl;
			cout << " 2: A - B " << endl;
			cout << " 3: B - A " << endl;
			cout << " 4: A * B " << endl;
			cin >>x;
			if (x == 1) {
				C = (A + B);
				C.show();
			}
			else if (x == 2) {
				C = (A - B);
				C.show();
			}
			else if (x == 3) {
				C = (B - A);
				C.show();
			}
			else {
				C =(A * B);
				C.show();
			}
			cout << "Сохранить результат ? 1 - да 2 - нет" << endl;
			cin >> x;
			if (x == 1) {
				cout << "Введите имя полинома" << endl;
				cin >> name;
				temp_row.key = name;
				temp_row.polinom = C;				
				tab1.insert(temp_row);
				tab2.insert(temp_row);
				tab3.insert(temp_row);
			}
			break;
		case(5):
			f = false;
			break;
		default:
			break;
		}
	}
}