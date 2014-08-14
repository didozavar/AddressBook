#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>
#include "Type.h"

class Email: public Type {
public:
	Email();
	~Email();
	bool isValid(){};
	void setType(char *email);
	char *getType();
private:
	char *email;
};

#endif