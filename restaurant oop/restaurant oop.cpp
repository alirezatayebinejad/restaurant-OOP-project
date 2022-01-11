#include <iostream>
#include "food.h"
#include "chief.h"
#include "customer.h"
#include "factor.h"
#include "menu.h"
using namespace std;

int main()
{
	cout << "***********************************************\n";
	cout << "*                                             *\n";
	cout << "*       welcome to vibracode restaurant       *\n";
	cout << "*                                             *\n";
	cout << "***********************************************\n\n";



	while (1) {

		cout << "do you want to order food? (yes/no)\n";
		string foodOrNot;
		cin >> foodOrNot;

		if (foodOrNot == "yes") {

			cout << "please sign up\n";
			customer user;
			user.signUp();

			//-------creating todays food, menues and chief--------

			chief chiefAli;
			chiefAli.setter("ali", 12);

			food kebab;
			kebab.setter("kebab", 65000, "12 min");
			food chicken;
			chicken.setter("chicken", 55000, "10 min");
			seaFood fish;
			fish.setter("fish", 75000, "14 min");

			dessert cake;
			dessert jelo;
			dessert tea;
			cake.setter("cake", 15000, "5 min");
			jelo.setter("jelo", 10000, "3 min");
			tea.setter("tea", 5000, "4 min");

			menu foodMenu;
			menu dessertMenu;
			food foodList[3] = { kebab,chicken,fish };
			foodMenu.setFoodList(foodList);
			food dessertList[3] = { cake,jelo,tea };
			dessertMenu.setFoodList(dessertList);

			//------------showing menu and order process------------------

			while (1) {
				cout << user.getName() << " which one do you want? " << "1.main food 2.dessert\n";
				int dessertMain;
				cin >> dessertMain;
				if (dessertMain == 1) {
					cout << "main foods \n";
					foodMenu.getFoodList();
					foodMenu.whatFood();
					cout << "you picked " << foodMenu.pickedFood().getName() << endl;

					if (foodMenu.pickedFood().getName() == "fish") {
						fish.whichType();
						cout << "you chose " << fish.getCookType() << endl;
					}

					factor userOrder;
					userOrder.setName(foodMenu.pickedFood().getName());
					userOrder.setWhoOrdered(user.getName());
					userOrder.setHowMany();
					userOrder.setPrice(foodMenu.pickedFood().getPrice());
					userOrder.printFactor();

					cout << "please pay the price\n";
					while (1) {

						cout << "enter the price you want to pay: ";
						int payingPrice;
						cin >> payingPrice;
						if (userOrder.isPaid(payingPrice)) {
							user.payment();
							break;
						}
						else
							cout << "price entered is not equal to the factor price, try again\n";
					}
					cout << chiefAli.getName() << " " << chiefAli.cooking();
					break;
				}
				else if (dessertMain == 2) {
					cout << "desserts \n";
					dessertMenu.getFoodList();
					dessertMenu.whatFood();
					cout << "you picked " << dessertMenu.pickedFood().getName() << endl;

					factor userOrder;
					userOrder.setName(dessertMenu.pickedFood().getName());
					userOrder.setWhoOrdered(user.getName());
					userOrder.setHowMany();
					userOrder.setPrice(dessertMenu.pickedFood().getPrice());
					userOrder.printFactor();

					cout << "please pay the price\n";
					while (1) {

						cout << "enter the price you want to pay: ";
						int payingPrice;
						cin >> payingPrice;
						if (userOrder.isPaid(payingPrice)) {
							user.payment();
							break;
						}
						else
							cout << "price entered is not equal to the factor price, try again\n";
					}
					cout << chiefAli.getName() << " " << chiefAli.cooking();
					break;
				}
				else {
					cout << "wrong number.try again\n";
				}
			}


			//------------------------------------------------------

		}
		else if (foodOrNot == "no") {
			cout << "have a nice day. bye";
			break;
		}
		else {
			cout << "wrong answare. try again\n";
		}

	}
}
