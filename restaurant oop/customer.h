#pragma once
using namespace std;

class customer
{
private:
	string name;
	string cartNumber;
	int cartPass;
	string order;

public:
	string getName() {
		return name;
	}
	string getCartNumber() {
		return cartNumber;
	}
	int getCartPass() {
		return cartPass;
	}
	string getOrder() {
		return order;
	}

	void signUp() {
		cout << "fill in the form: \n ";
		cout << "name: ";
		cin >> name;
		cout << "cart number: ";
		cin >> cartNumber;
		cout << "cart pass: ";
		cin >> cartPass;
		cout << "you have been succesfully signed up.\n\n";
	}
	void userOrder(string foodName) {
		cout << "which food you choose? ";
		cin >> order;
	}
	void payment() {
		cout << "\n\npassword: ";
		int a;
		cin >> a;
		if (a == cartPass) {
			cout << "you have successfuly purchased your order.\n\n";
		}
		else {
			cout << "your password is incorrect. try again\n";
			payment();
		}
	}
};
