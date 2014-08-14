#include <iostream>
#include "Text.h"
using namespace std;
Text::Text(){
	
	this->setSize(0);
	this->text = nullptr;
}

Text::~Text() {
	if(this->text != nullptr) {
		cout<<"Delete text from destructor!"<<endl;
		delete [] this->text;
	}
}

bool Text::isValid(char *value) {
	bool result = (strlen(value) < MAX_TEXT_LENGTH && strlen(value) > MIN_TEXT_LENGTH) ? true : false;
	return result;
}

void Text::setValue(char *value) {
	unsigned int size = strlen(value);
	//cout<<size<<endl;
	if(this->text != nullptr) {
		cout<<"Error!"<<endl;
		delete [] this->text;
	}
	this->setSize(size);
	this->text = new char[size+1];
	strcpy_s(this->text, size+1, value);
}

const char* Text::getValue() {
	return this->text;
}

unsigned int Text::getSize() {
	return this->size;
}
void Text::setSize(unsigned int size){
	this->size = size;
}