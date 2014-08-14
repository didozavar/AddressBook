#ifndef DATE_H
#define DATE_H

#include <iostream>
#include "Type.h"

class Date: public Type {
public:
	Date();
	~Date();
	bool isValid();
	void setValue(char *value);
	const char *getValue();
private:
	char *date;
};
#endif