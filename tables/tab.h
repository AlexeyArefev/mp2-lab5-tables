#pragma once
#include<string>
#include"pol.h"
struct row {
	std::string key;
	pol polinom;	
};
class tab {
protected:
	row arow[64];	
public:
	tab() {
		for (int i = 0; i < 64; i++) {			
			arow[i].key = " ";
		}
	}
};