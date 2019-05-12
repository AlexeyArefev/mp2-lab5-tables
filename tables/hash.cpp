#include "hash.h"
hasht:: hasht(): tab() {
	for (int i = 0; i < 64; i++) {
		bt[i] = false;
	}
}
int hasht::hf(string k) {
	int res = 0;	
	for (int i = 0; i < k.length(); i++)
		res += k[i];
	return res % 64;
}
void hasht::insert(row k) {
	int t = hf(k.key),s = t , i=1, kk = 0;
	while (bt[s] != false) {
		s = (t + i * 3) % 64;
		kk++;
	}
	arow[s] = k;
	bt[s] = true;
	cout << "Добавление в хеш таблицу " << kk + 1<< " итераций" << endl;
}
pol hasht::find(string k) {
	int t = hf(k), kk = 0;
	int	s = t, i = 1;	
	while (arow[s].key != k) {
		s = (t + i * 3) % 64;
		kk++;
		if (s == t) {
			cout << "Полинома с таким именем не существует" << endl;
			throw("Полинома с таким именем не существует");			
		}
	}		
	return arow[s].polinom;
	cout << "Поиск в хеш таблице " << kk + 1 << " итераций" << endl;
}
void hasht::del(string k) {
	int t = hf(k), s = t, i = 1, kk = 0;
	while (arow[s].key != k) {
		s = (t + i * 3) % 64;
		kk++;
	}
	bt[s] = false;	
	cout << "Удаление в хеш таблице " << kk + 1<< " итераций" << endl;
}