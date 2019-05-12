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
	int i, len, kk = 0;
	int l = 0, r = size, mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (arow[mid].key == k) {
			cout << "Поиск в упрорядоченной таблице " << kk + 1 << " итераций" << endl;
			return arow[mid].polinom;
		}

		i = 0;

		if (k.length() > arow[mid].key.length()) {
			len = arow[mid].key.length();
			kk++;
		}
		else {
			len = k.length();
			kk++;
		}

		while ((arow[mid].key[i] == k[i]) && (i < len)) {
			i++;
			kk++;
		}

		if (i == len) {
			kk++;
			if (k.length() < arow[mid].key.length())
				r = mid - 1;
			else
				l = mid + 1;

		}
		else {
			kk++;
			if (arow[mid].key[i] > k[i])
				r = mid - 1;
			else
				l = mid + 1;
		}
	}
	cout << "Полинома с таким именем не существует" << endl;
	throw("Полинома с таким именем не существует");
	
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