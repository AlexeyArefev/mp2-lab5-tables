#include "nord.h"
nord::nord() :tab() { size = 0;}
void nord:: insert(row k) {	
	arow[size] = k;	
	size++;
	cout << "Добавление в неупрорядоченную таблицу 1 итерация" << endl;
}
pol nord:: find(string k) {
	int i = 0;
	while (arow[i].key != k) {
		i++;
	} 
	cout << "Поиск в неупрорядоченной таблице " << i +1<< " итераций" << endl;
	return arow[i].polinom;
}
void nord:: del(string k) {
	int i = 0, j;
	while (arow[i].key != k) {
		i++;
	}	
	for (j = i; j < size- 1; j++) {	
		arow[j] = arow[j + 1];
	}
	cout << "Удаление в неупрорядоченной таблице " << j + 1 << " итераций" << endl;
	size--;
}