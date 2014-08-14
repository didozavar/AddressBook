#ifndef ADDRESS_BOOK_CLASS
#define ADDRESS_BOOK_CLASS
#include <iostream>
#include <fstream>
#include "UserInterface.h"
using namespace std;


class AddressBook {
public:
	AddressBook();
	~AddressBook();
	int size;
	Contact *contact;
	UserInterface *ui;
	void loadConfig(char *configFile);
	void loadDatabase(char *database);
	char *db;
	void run();
};

#endif