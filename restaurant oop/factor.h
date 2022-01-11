#pragma once
using namespace std;

class factor
{
private:
	string name;
	string whoOrdered;
	int howMany = 1;
	int price;

public:

	void setName(string Name) {
		name = Name;
	}
	void setWhoOrdered(string WhoOrdered) {
		whoOrdered = WhoOrdered;
	}
	void setHowMany() {
		cout << "how many of this you want? ";
		cin >> howMany;
	}
	int getHowMany() {
		return howMany;
	}
	void setPrice(int Price) {

		price = howMany * Price;
	}
	void printFactor() {
		cout << "\n\nyour factor is: \n";
		cout << "food name: " << name << endl;
		cout << "ordered by: " << whoOrdered << endl;
		cout << "count: " << howMany << endl;
		cout << "price: " << price << endl;
	}
	bool isPaid(int paidPrice) {
		if (paidPrice == price)
			return true;
		else {
			cout << "the paid price is not the same as factor price. enter again:\n";
			return false;
		}
	}
};