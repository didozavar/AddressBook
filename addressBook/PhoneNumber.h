#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H


#include <iostream>
#include "Type.h"

class PhoneNumber: public Type {
public:
	PhoneNumber();
	~PhoneNumber();
	bool isValid();
	void setValue(char* value);
	const char *getValue();
private:
	char *phoneNumber;
};
#endif