#pragma once
#include "tab.h"
class hasht : tab {	
	bool bt[64];
public:
	hasht();
	
	int hf(string);
	void insert(row);
	pol find(string);
	void del(string);
};