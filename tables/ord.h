#pragma once
#include "tab.h"
class ord : tab {
	int size;
public:
	ord();

	void insert(row);
	pol find(string);
	void del(string);
	void show();
};