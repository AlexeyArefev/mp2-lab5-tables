#pragma once
#include "tab.h"
class nord : tab {
	int size;
public:
	nord();

	void insert(row);
	pol find(string);
	void del(string);
};