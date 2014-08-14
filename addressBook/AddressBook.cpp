#include <iostream>
#include "AddressBook.h"
#include "Text.h"

AddressBook::AddressBook() {
	this->ui = new UserInterface();
}

void AddressBook::loadConfig(char *configFile) {

}

void AddressBook::loadDatabase(char *database) {
	strcpy_s(this->db, strlen(database), database);
}


void AddressBook::run() {
	this->ui->showMenu();
	int command =0;
	while(command != 5) {
		cout<<"Enter option: ";
		cin >> command;
		if(command == 1) {
			this->ui->showAddMenu();
			int command2 = 0;
			while(command2 != 5) {
				cout<<"Enter option: ";
				cin >> command2;
				char key[30];
				char value[30];
				Field *f = new Field();
				bool isValidKey = false;
				while(isValidKey == false) {

					char *getKey = this->ui->inputKey();
					strcpy_s(key, strlen(getKey)+1, getKey);
					if(Field::isValid(key)) {
						isValidKey = true;
						f->setKey(key);
					}
					delete [] getKey;
				}
				bool isValidKey2 = false;
				while(isValidKey2 == false) {

					char *getValue = this->ui->inputType();
					strcpy_s(value, strlen(getValue)+1, getValue);
					if(Text::isValid(value)) {
						isValidKey2 = true;
						Type *t = new Text();
						f->setType(t);
					}
					delete [] getValue;
				}
				Contact * contact = new Contact();
				contact->arr = f;
			}

		}
	}
}
