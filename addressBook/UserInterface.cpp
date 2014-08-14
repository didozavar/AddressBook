#include <iostream>
#include "UserInterface.h"
#include "Contact.h"
#include "Type.h"
#include "AllTypes.h"
using namespace std;

char* UserInterface::inputKey() {
	cout<<"Enter field key: ";
	char buffer[100];
	cin >> buffer;
	char *data = new char[strlen(buffer)+1];
	strcpy_s(data, strlen(buffer)+1, buffer);
	return data;
}

char* UserInterface::inputType() {
	cout<<"Enter field value: ";
	char buffer[100];
	cin >> buffer;
	char *data = new char[strlen(buffer)+1];
	strcpy_s(data, strlen(buffer)+1, buffer);
	return data;
}

//char* UserInterface::getKey() {}

void UserInterface::showAddMenu() {
	system("cls");
	cout<<"Pick type of field"<<endl;
	cout<<"Press 1: Text"<<endl;
	cout<<"Press 2: Email"<<endl;
	cout<<"Press 3: Phone"<<endl;
	cout<<"Press 4: Date"<<endl;
	cout<<"Press 5: Go back to contact"<<endl;
}

void UserInterface::showMenu() {
	system("cls");
	cout<<"Menu"<<endl;
	cout<<"Press 1: Add Contact"<<endl;
	cout<<"Press 2: Edit Contact"<<endl;
	cout<<"Press 3: Delete Contact"<<endl;
	cout<<"Press 4: How many contacts do i have ?"<<endl;
	cout<<"Press 5: Exit"<<endl;
}
