#include "Account.h"

using namespace std;

Account account;

int main() {


	account.registerAcc(); //Goes to register
	if (account.login() == 0) { //If login = 0, it failed, else it will go on
		return 0;
	}
	
	while (true) {
		if (account.actions() == 0) { //Runs the actions for the user
			break;
		}
	}

	return 0;
}