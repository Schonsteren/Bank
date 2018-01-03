#pragma once

#include <iostream>
#include <string>

using namespace std;


class Account {
public:
	Account();
	~Account();

	int login();
	void registerAcc();
	int actions();

private:
	string name; //Name of the user
	int money; //The amount of money. The amount of money to begin with is inside the constructor

	void widthdraw();
	void deposit();
};

