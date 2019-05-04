#include "ord.h"
ord::ord() : tab() { size = 0; }
void ord:: insert(row k) {
	int i = 0, j, len, kk=0;	
	while (i<size) {
		if (k.key.length() > arow[i].key.length()) {
			len = arow[i].key.length();
		}

		else {
			len = k.key.length();
		}

		j = 0;

		while ((arow[i].key[j] == k.key[j]) && (j < len)) {
			j++;
			kk++;
		}
		if (j == len) {
			if(k.key.length() <= arow[i].key.length()) {
				for (int k = size-1; k > i; k--) {
					arow[k + 1] = arow[k];
					kk++;
				}
				arow[i] = k;
				return;
			}
			else { 
				i++;
				kk++;
			}
		}
		else {
			if (arow[i].key[j] >= k.key[j]) {
				for (int k = size- 1; k > i; k--) {
					arow[k + 1] = arow[k];
					kk++;
				}
				arow[i] = k;
				return;
			}
			i++;
			kk++;
		}
	}
	arow[i] = k;
	size++;
	cout << "Добавление в упрорядоченную таблицу " << kk + 1 << " итераций" << endl;
}
pol ord::find(string k) {
	int i = 0;	
	while (arow[i].key != k) {		
		i++;
	}	
	cout << "Поиск в упрорядоченной таблице " << i + 1<< " итераций" << endl;
	return arow[i].polinom;
}
void ord:: del(string k) {
	int i = 0, kk = 0;;
	while (i < size) {
		if (arow[i].key == k) {
			for (int j = i; j < size-1; j++) {
				arow[j] = arow[j + 1];
				kk++;
			}	
			size--;
			break;
		}
		i++;
	}	
	cout << "Удаление в упрорядоченной таблице " << i + kk + 1<< " итераций" << endl;
}
void ord::show() {
	cout << size << endl;
	for (int i = 0; i < size; i++) {		
		cout << arow[i].key << endl;
	}
}