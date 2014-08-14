#ifndef TEXT_H
#define TEXT_H

#include <iostream>
#include "Type.h"

class Text: public Type {
public:
	static const int MAX_TEXT_LENGTH = 30;
	static const int MIN_TEXT_LENGTH = 3;
	Text();
	~Text();
	static bool isValid(char *value);
	void setValue(char *value);
	const char *getValue();
	unsigned int getSize();
	void setSize(unsigned int size);
private:
	unsigned int size;
	char *text;
};
#endif