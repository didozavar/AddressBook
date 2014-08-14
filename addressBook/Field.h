#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include "Type.h"
class Field {
public:
	Field(){};
	~Field(){};
	void setField(char * key, void *value);
	void setKey(char * key);
	void setType(Type *t);
	static bool isValid(const char *value);
private:
	char *key;
	int keySize;
	Type *type;
};

#endif