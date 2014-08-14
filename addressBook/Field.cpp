#include <iostream>
#include "Field.h"

bool Field::isValid(const char *value) {
	if(strlen(value) > 3 && strlen(value) < 20)
	{
		return true;
	}
	return false;
}

void Field::setKey(char *key) {
	int size = strlen(key);
	this->key = new char[size+1];
	strcpy_s(this->key, size+1, key);
}