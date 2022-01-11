#pragma once
using namespace std;
//parent class

class food
{
protected:
	string name;
	int price;
	string time;

public:
	void setter(string Name, int Price, string Time) {
		name = Name;
		price = Price;
		time = Time;
	}
	string getName() {
		return name;
	}
	int getPrice() {
		return price;
	}
	string getTime() {
		return time;
	}

};

//child classes

class seaFood :public food {
private:
	string cookType;
public:
	string getCookType() {
		return cookType;
	}

	void whichType() {
		cout << "how your sea food should be cooked?  " << "1.fried  2.boiled  3.grilled\n";
		int choice;
		cin >> choice;

		if (choice == 1)
			cookType = "fried";
		else if (choice == 2)
			cookType = "boiled";
		else if (choice == 3)
			cookType = "grilled";
		else {
			cout << "invalid choice.try again: \n";
			whichType();
		}
	}
};

class dessert :public food {
private:
	string preOrPost;
public:
	void when() {
		cout << "when you want to eat?" << "  1.befor the meal  2.after the meal";
		int choice;
		cin >> choice;
		whatTime(choice);
	}
	string whatTime(int choice) {
		if (choice == 1) {
			preOrPost = "befor the meal";
			return preOrPost;
		}
		else if (choice == 2) {
			preOrPost = "after the meal";
			return preOrPost;
		}
		else {
			cout << "invalid choice.try again: ";
			when();
		}
	}
};