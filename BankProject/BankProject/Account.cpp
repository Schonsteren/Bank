#include "Account.h"

Account::Account() {
	money = 150;
}


Account::~Account() {
}

int Account::login() {//ACCOUNT LOGIN
	cout << "______________________\n" << endl
		<< "   Register to Bank" << endl
		<< "______________________" << endl;
	cout << "Hello User! What's your name?" << endl; //Asks for name
	string checkinput; //Declare input variable
	cin >> checkinput; //Userinput
	if (checkinput == name) { //Checks if the name is the same as the registred
		system("CLS"); 
	}
	else { //If the user doesn't type in the right name, the program will stop running
		system("CLS");
		cout << "You're wrong!" << endl;
		return 0;
	}
}

void Account::registerAcc() { //ACCOUNT REGISTER
	cout << "______________________\n" << endl
		<< "   Register to Bank" << endl
		<< "______________________" << endl;
	cout << "What name do you want to be registered as? " << endl;
	cout << "Name: ";
	cin >> name; //Stores name
	system("CLS");
}

int Account::actions() { //ACTIONS FROM USERINPUT
	system("CLS");
	cout << "______________________\n" << endl
		<< "   Actions in Bank" << endl
		<< "______________________" << endl;
	cout << "Type '1' to deposit, '2' to widthdraw and '3' to exit bank" << endl;
	cout << "Input: ";
	int interaction; //Variable for interaction to be stored in 
	cin >> interaction; //Stores inside interaction

	//Controle the different actions the user can do.
	int checkinput = 0;
	switch (interaction) {
	case 1: deposit(); //Goes to deposit function
		break;
	case 2: widthdraw();
		break;
	case 3: 
		return 0;
		break;
	}
}


void Account::deposit() { //DEPOSIT
	while (true) {
		system("CLS");
		cout << "______________________\n" << endl
			<< "	 Deposit" << endl
			<< "______________________" << endl;
		cout << "Currenty money in bank: " << money << "€" << endl;
		cout << "To deposit type '1', '2' to go back to actions" << endl;

		//userinput
		cout << "Input: ";
		int checkinput;
		cin >> checkinput;

		if (checkinput == 1) { //If User decides to deposit
			system("CLS");
			cout << "______________________\n" << endl
				<< "	 Deposit" << endl
				<< "______________________" << endl;
			cout << "Currenty money in bank: " << money << "€" << endl;
			cout << "Enter how much money you want to deposit" << endl;
			cout << "Deposit: ";
			int checkinput;
			cin >> checkinput;
			money = money + checkinput;
			continue;
		}
		else if (checkinput == 2) { //If user decides to go back to actions
			break;
		}
		else { //If userinput is something different, the user will be able to input again
			continue;
		}
		break;
	}
}

void Account::widthdraw() { //WIDTHDRAW
	while (true) {
		system("CLS");
		cout << "______________________\n" << endl
			<< "	 Widthdraw" << endl
			<< "______________________" << endl;
		cout << "Currenty money in bank: " << money << "€" << endl;
		cout << "To widthdraw type '1', '2' to go back to actions" << endl;

		//userinput
		cout << "Input: ";
		int checkinput;
		cin >> checkinput;

		if (checkinput == 1) { //If User decides to deposit
			system("CLS");
			cout << "______________________\n" << endl
				<< "	 Widthdraw" << endl
				<< "______________________" << endl;
			cout << "Currenty money in bank: " << money << "€" << endl;
			cout << "Enter how much money you want to widthdraw" << endl;
			cout << "Widthdraw: ";
			int checkinput;
			cin >> checkinput;
			money = money - checkinput;
			continue;
		}
		else if (checkinput == 2) { //If user decides to go back to actions
			break;
		}
		else { //If userinput is something different, the user will be able to input again
			continue;
		}
		break;
	}
}