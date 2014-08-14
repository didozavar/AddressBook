#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H
#include "Contact.h"
class UserInterface {
public:
	UserInterface(){};
	~UserInterface();
	void showMenu(); //implemented
	void showAddMenu(); //implemented
	char* inputType();
	char* inputKey();
	char* getKey(); //implemented
	void showEditMenu();
	void showDeleteMenu();
};
#endif